//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 6/26/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_UDENTIFY_STTP_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_UDENTIFY_STTP_CLIENT_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/udentify/sttp/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace udentify {
namespace sttp {
namespace client {

/// class maint
template 
<class TJsonNodeEvents = xos::io::format::json::node_events,
 class TExtends = xos::app::console::network::sockets::protocol::udentify::sttp::client::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TJsonNodeEvents, virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    typedef typename extends::sequence_char_t sequence_char_t;
    typedef typename extends::char_sequence_t char_sequence_t;
    typedef typename extends::char_seeker_t char_seeker_t;
    typedef typename extends::char_reader_t char_reader_t;
    typedef typename extends::char_writer_t char_writer_t;
    typedef typename extends::reader_string_t reader_string_t;
    typedef typename extends::string_reader_t string_reader_t;

    typedef typename extends::to_json_node_t to_json_node_t;
    typedef typename extends::json_node_t json_node_t;
    typedef TJsonNodeEvents json_node_events_t;

    /// constructor / destructor
    maint(): run_(0), json_node_events_(*this) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::string_output_t string_output_t;
    typedef typename extends::output_t output_t;
    typedef typename output_t::output_to_t output_to_t;
    typedef typename output_t::output_to_t::string_t output_to_string_t;

    //////////////////////////////////////////////////////////////////////////
    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*run_)(argc, argv, env)))...");
            if (!(err = (this->*run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
            if (!(err = extends::run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(err" << err << " = extends::run(argc, argv, env)))");
            }
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    virtual int prepare_request_to_send(xos::network::sockets::interface& cn, string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool prepared_request = false;
        size_t length = 0;
        const char_t* chars = 0;

        LOGGER_IS_LOGGED_INFO("((chars = request.has_chars(length)))...");
        if ((chars = request.has_chars(length))) {
            const bool verbose_output = this->verbose_output();
            output_t &output = this->output();
            const string_t& endof_content_string = this->endof_content_string();
            string_t& content_string = this->content_string();
            string_output_t string_output(content_string);
            const bool old_verbose_output = output.verbose_output();
            output_to_t* old_output = output.set_output_to(&string_output);
    
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = request.has_chars(" << length << ")))");
            content_string.clear();
            output.set_verbose_output(verbose_output);
            LOGGER_IS_LOGGED_INFO("(!(err = output.on_set_client_hello_message_option(\"" << chars << "\", " << length << ")))...");
            if (!(err = output.on_set_client_hello_message_option(chars, length))) {

                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = output.on_set_client_hello_message_option(\"" << chars << "\", " << length << ")))");
                LOGGER_IS_LOGGED_INFO("(!(err = output.output_generate_client_hello()))...");
                if (!(err = output.output_generate_client_hello())) {
                    const char_t* chars = 0; size_t length = 0;
                    
                    LOGGER_IS_LOGGED_INFO("((chars = content_string.has_chars(length)))...");
                    if ((chars = content_string.has_chars(length))) {
                        LOGGER_IS_LOGGED_INFO("request.assign(\"" << chars << "\", " << length << ")...");
                        request.assign(chars, length);
                        LOGGER_IS_LOGGED_INFO("request.append(\"" << endof_content_string << "\")...");
                        request.append(endof_content_string);
                        prepared_request = true;
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on ((chars = content_string.has_chars(" << length << ")))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = output.output_generate_client_hello()))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = output.on_set_client_hello_message_option(\"" << chars << "\", " << length << ")))");
            }
            output.set_verbose_output(old_verbose_output);
            output.set_output_to(old_output);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = request.has_chars(" << length << ")))");
        }
        if (!(prepared_request)) {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::prepare_request_to_send(cn, \"" << request << "\", argc, argv, env)))...");
            if (!(err = extends::prepare_request_to_send(cn, request, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::prepare_request_to_send(cn, r\"" << request << "\", argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = extends::prepare_request_to_send(cn, \"" << request << "\", argc, argv, env)))");
            }
        } else {}
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool processed_response = false;
        const char_t* chars = 0; size_t length = 0;
        
        LOGGER_IS_LOGGED_INFO("((chars = response.has_chars(length)))...");
        if ((chars = response.has_chars(length))) {
            const bool verbose_output = this->verbose_output();
            output_t &output = this->output();
            const bool old_verbose_output = output.verbose_output();
    
            output.set_verbose_output(verbose_output);
            output.set_string_on_set_literals();
            LOGGER_IS_LOGGED_INFO("output.on_set_server_hello_messages_option(chars = \"" << chars << "\", length = " << length << ")...");
            if (!(err = output.on_set_server_hello_messages_option(chars, length))) {

                LOGGER_IS_LOGGED_INFO("((output.server_hello_messages_has_elements(length)))...");
                if ((output.server_hello_messages_has_elements(length))) {
                    string_t& content_string = this->content_string();

                    LOGGER_IS_LOGGED_INFO("...output.server_hello_messages_has_elements(length = " << length << ")");
                    LOGGER_IS_LOGGED_INFO("((chars = content_string.has_chars(length)))...");
                    if ((chars = content_string.has_chars(length))) {

                        LOGGER_IS_LOGGED_INFO("output.on_set_client_hello_messages_option(chars = \"" << chars << "\", length = " << length << ")...");
                        if (!(err = output.on_set_client_hello_messages_option(chars, length))) {
                            
                            LOGGER_IS_LOGGED_INFO("((output.client_hello_messages_has_elements(length)))...");
                            if ((output.client_hello_messages_has_elements(length))) {
                                string_output_t string_output(content_string);
                                output_to_t* old_output = output.set_output_to(&string_output);
        
                                LOGGER_IS_LOGGED_INFO("...output.client_hello_messages_has_elements(length = " << length << ")");
                                content_string.clear();
                                LOGGER_IS_LOGGED_INFO("(!(err = output.output_server_hello_messages()))...");
                                if (!(err = output.output_server_hello_messages())) {

                                    LOGGER_IS_LOGGED_INFO("((chars = content_string.has_chars(length)))...");
                                    if ((chars = content_string.has_chars(length))) {
                                        LOGGER_IS_LOGGED_INFO("((\"" << chars << "\" = content_string.has_chars(" << length << ")))...");
                                        LOGGER_IS_LOGGED_INFO("response.assign(\"" << chars << "\", " << length << ")...");
                                        response.assign(chars, length);
                                        LOGGER_IS_LOGGED_INFO("(!(err = this->no_sttp_process_response_run(response, argc, argv, env)))...");
                                        if (!(err = this->no_sttp_process_response_run(response, argc, argv, env))) {
                                            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->no_sttp_process_response_run(\"" << response << "\", argc, argv, env)))");
                                            processed_response = true;
                                        } else {
                                            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->no_sttp_process_response_run(response, argc, argv, env)))");
                                        }
                                    } else {
                                        LOGGER_IS_LOGGED_INFO("...failed on ((chars = content_string.has_chars(" << length << ")))");
                                    }
                                } else {
                                    LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = output.output_server_hello_messages()))");
                                }
                                output.set_output_to(old_output);
                            } else {
                                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = output.on_set_client_hello_messages_option(\"" << chars << "\", length = " << length << "))))");
                            }
                        } else {
                            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = output.on_set_client_hello_messages_option(\"" << chars << "\", length = " << length << ")))");
                        }
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on ((chars = content_string.has_chars(" << length << ")))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on ((output.server_hello_messages_has_elements(" << length << ")))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((chars = response.has_chars(" << length << ")))");
            }
            output.set_verbose_output(old_verbose_output);
            if (!(processed_response)) {
                LOGGER_IS_LOGGED_INFO("(!(err = this->no_sttp_process_response_run(response, argc, argv, env)))...");
                if (!(err = this->no_sttp_process_response_run(response, argc, argv, env))) {
                    LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->no_sttp_process_response_run(\"" << response << "\", argc, argv, env)))");
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->no_sttp_process_response_run(response, argc, argv, env)))");
                }
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...on...named...
    virtual io::format::json::node_events& on_begin_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t& node_string = node.get_string();
        const string_t& nameof_udentify_password = this->nameof_udentify_password();

        LOGGER_IS_LOGGED_INFO("!(unequal = nameof_udentify_password.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = nameof_udentify_password.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = nameof_udentify_password.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("!(err = set_password_on_string_node(node))...");
            if (!(err = set_password_on_string_node(node))) {
                LOGGER_IS_LOGGED_INFO("...!(" << err << " = set_password_on_string_node(node))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = set_password_on_string_node(node))");
            }
        } else {
        }
        return json_node_events_this();
    }
    virtual io::format::json::node_events& on_end_named_node(const io::format::json::node& node) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = unset_on_string_node(node))...");
        if (!(err = unset_on_string_node(node))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = unset_on_string_node(node))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = unset_on_string_node(node))");
        }
        return json_node_events_this();
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...on...string...    
    int (derives::*on_string_node_)(const io::format::json::node& node);
    virtual io::format::json::node_events& on_string_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = json_node_events_forwarded_to())) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_string_node(node)...");
            forwarded_to->on_string_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_string_node(node)");
        } else {
            int err = 0;
            if (on_string_node_) {
                if (!(err = (this->*on_string_node_)(node))) {
                } else {
                }
            } else {
                if (!(err = default_on_string_node(node))) {
                } else {
                }
            }
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return json_node_events_this();
    }
    virtual int default_on_string_node(const io::format::json::node& node) {
        int err = 0;
        const io::format::json::node::string_t& node_string = node.get_string();
        const io::format::json::node::char_t* chars = 0;
        size_t length = 0;
        LOGGER_IS_LOGGED_INFO("(chars = node_string.has_chars(length))...");
        if ((chars = node_string.has_chars(length))) {
            LOGGER_IS_LOGGED_INFO("...(\"" << chars << "\" = node_string.has_chars(" << length << "))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (chars = node_string.has_chars(" << length << "))");
        }
        return err;
    }
    virtual int password_on_string_node(const io::format::json::node& node) {
        int err = 0;
        const io::format::json::node::string_t& node_string = node.get_string();
        const io::format::json::node::char_t* chars = 0;
        size_t length = 0;
        LOGGER_IS_LOGGED_INFO("(chars = node_string.has_chars(length))...");
        if ((chars = node_string.has_chars(length))) {
            LOGGER_IS_LOGGED_INFO("...(\"" << chars << "\" = node_string.has_chars(" << length << "))");
            LOGGER_IS_LOGGED_INFO("set_response_to_output(\"" << chars << "\")...");
            this->set_response_to_output(chars);
            LOGGER_IS_LOGGED_INFO("(!(err = this->set_output_response_to_output_run()))...");
            if (!(err = this->set_output_response_to_output_run())) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->set_output_response_to_output_run()))");
                LOGGER_IS_LOGGED_INFO("(!(err = this->output_response_to_output_run_set()))...");
                if (!(err = this->output_response_to_output_run_set())) {
                    LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->output_response_to_output_run_set()))");
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->output_response_to_output_run_set()))");
                    LOGGER_IS_LOGGED_INFO("this->unset_output_response_to_output_run()...");
                    this->unset_output_response_to_output_run();
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->set_output_response_to_output_run()))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (chars = node_string.has_chars(" << length << "))");
        }
        return err;
    }
    virtual int unset_on_string_node(const io::format::json::node& node) {
        int err = 0;
        on_string_node_ = 0;
        return err;
    }
    virtual int set_password_on_string_node(const io::format::json::node& node) {
        int err = 0;
        on_string_node_ = &derives::password_on_string_node;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...process_json_node_response_run
    virtual int process_json_node_response_run
    (string_t& response, const json_node_t& json_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        xos::io::format::json::node_events& json_node_events = this_json_node_events();

        LOGGER_IS_LOGGED_INFO("json_node.to(json_node_events)...");
        json_node.to(json_node_events);
        LOGGER_IS_LOGGED_INFO("...json_node.to(json_node_events)");
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...json_node_events
    /// ...
    virtual xos::io::format::json::node_events* json_node_events_forwarded_to() {
        return (xos::io::format::json::node_events*)(this->forwarded_to(this));
    }
    virtual xos::io::format::json::node_events& json_node_events_this() const {
        return (xos::io::format::json::node_events&)(*this);
    }
    /// ...json_node_events
    virtual xos::io::format::json::node_events& this_json_node_events() const {
        return (xos::io::format::json::node_events&)json_node_events_;
    }
    /// ...
    /// ...json_node_events
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    xos::io::format::json::node_events& json_node_events_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace sttp 
} /// namespace udentify 
} /// namespace protocol 
} /// namespace sockets 
} /// namespace network 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_UDENTIFY_STTP_CLIENT_MAIN_HPP
