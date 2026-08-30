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
///   Date: 5/10/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_HTTP_CGI_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_HTTP_CGI_SERVER_MAIN_HPP

#include "xos/app/console/protocol/udentify/http/cgi/server/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace udentify {
namespace http {
namespace cgi {
namespace server {

/// class maint
template 
<class TJsonNodeEvents = xos::io::format::json::node_events,
 class TExtends = xos::app::console::protocol::udentify::http::cgi::server::main_optt<>,  class TImplements = typename TExtends::implements>

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

    typedef typename extends::char_string_reader_t char_string_reader_t;
    typedef typename extends::to_json_node_t to_json_node_t;
    typedef typename extends::json_node_t json_node_t;

    /// constructor / destructor
    maint()
    : run_(0), 
      json_node_events_(*this), 
      response_was_output_(false) {
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
    /// ...udentify_console_gateway_out_run
    int (derives::*udentify_console_gateway_out_run_)(int argc, char_t** argv, char_t** env);
    virtual int udentify_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (udentify_console_gateway_out_run_) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*udentify_console_gateway_out_run_)(argc, argv, env)))...");
            if (!(err = (this->*udentify_console_gateway_out_run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*udentify_console_gateway_out_run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*udentify_console_gateway_out_run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = default_udentify_console_gateway_out_run(argc, argv, env)))...");
            if (!(err = default_udentify_console_gateway_out_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = default_udentify_console_gateway_out_run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on(!(" << err << " = default_udentify_console_gateway_out_run(argc, argv, env)))");
            }
        }
        return err;
    }
    virtual int default_udentify_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& password_form_field_name = this->password_form_field_name();
        string_t& form_field_name = this->form_field_name();

        set_response_was_output();
        form_field_name.assign(password_form_field_name);
        LOGGER_IS_LOGGED_INFO("!(err = this->all_process_request_run(argc, argv, env))...");
        if (!(err = this->all_process_request_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = this->all_process_request_run(argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = this->all_process_request_run(argc, argv, env))");
        }
        return err;
    }
    virtual int unset_udentify_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        udentify_console_gateway_out_run_ = 0;
        return err;
    }
    virtual int udentify_console_gateway_out_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...info_udentify_console_gateway_out_run
    virtual int info_udentify_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& user_form_field_name = this->user_form_field_name();
        const string_t& resource_form_field_name = this->resource_form_field_name();
        const string_t& password_form_field_name = this->password_form_field_name();
        string_t& form_field_name = this->form_field_name();

        set_response_was_output();
        form_field_name.assign(user_form_field_name);
        this->set_udentify_password(user_form_field_name);
        LOGGER_IS_LOGGED_INFO("!(err = this->all_process_request_run(argc, argv, env))...");
        if (!(err = this->all_process_request_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = this->all_process_request_run(argc, argv, env))");

            form_field_name.assign(resource_form_field_name);
            this->set_udentify_password(resource_form_field_name);
            LOGGER_IS_LOGGED_INFO("!(err = this->all_process_request_run(argc, argv, env))...");
            if (!(err = this->all_process_request_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...!(" << err << " = this->all_process_request_run(argc, argv, env))");

                form_field_name.assign(password_form_field_name);
                this->set_udentify_password(password_form_field_name);
                LOGGER_IS_LOGGED_INFO("!(err = this->all_process_request_run(argc, argv, env))...");
                if (!(err = this->all_process_request_run(argc, argv, env))) {
                    LOGGER_IS_LOGGED_INFO("...!(" << err << " = this->all_process_request_run(argc, argv, env))");
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = this->all_process_request_run(argc, argv, env))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = this->all_process_request_run(argc, argv, env))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = this->all_process_request_run(argc, argv, env))");
        }
        return err;
    }
    virtual int set_info_udentify_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        udentify_console_gateway_out_run_ = &derives::info_udentify_console_gateway_out_run;
        return err;
    }
    virtual int info_udentify_console_gateway_out_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_info_udentify_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        udentify_console_gateway_out_run_ = 0;
        return err;
    }
    virtual int info_udentify_console_gateway_out_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...on_console_gateway_info_form_field_run
    virtual int on_console_gateway_info_form_field_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = set_info_udentify_console_gateway_out_run(argc, argv, env))...");
        if (!(err = set_info_udentify_console_gateway_out_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = set_info_udentify_console_gateway_out_run(argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = set_info_udentify_console_gateway_out_run(argc, argv, env))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& info_form_field_value = this->info_form_field_value();
        const string_t& users_form_field_name = this->users_form_field_name();
        const string_t& user_form_field_name = this->user_form_field_name();
        const string_t& resources_form_field_name = this->resources_form_field_name();
        const string_t& resource_form_field_name = this->resource_form_field_name();
        const string_t& passwords_form_field_name = this->passwords_form_field_name();
        const string_t& password_form_field_name = this->password_form_field_name();
        const string_t& default_password_form_field_name = this->default_password_form_field_name();
        const string_t& default_password = this->default_password();
        const string_t udentify_password = this->udentify_password();
        const char_t *user_chars = 0, *resource_chars = 0, *password_chars = 0, *default_password_chars = 0;
        
        LOGGER_IS_LOGGED_INFO("(default_password_chars = this->default_password_chars())...");
        if ((default_password_chars = this->default_password_chars())) {
            LOGGER_IS_LOGGED_INFO("this->set_default_udentify_password(default_password_chars)...");
            this->set_default_udentify_password(default_password_chars);
            this->set_udentify_password(udentify_password);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (default_password_chars = this->default_password_chars())");
        }
        LOGGER_IS_LOGGED_INFO("(default_password_chars = this->first_query_or_form_field_named_chars(default_password_form_field_name))...");
        if ((default_password_chars = this->first_query_or_form_field_named_chars(default_password_form_field_name))) {
            LOGGER_IS_LOGGED_INFO("this->set_default_udentify_password(default_password_chars)...");
            this->set_default_udentify_password(default_password_chars);
            this->set_udentify_password(udentify_password);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (default_password_chars = this->first_query_or_form_field_named_chars(default_password_form_field_name))");
        }
        LOGGER_IS_LOGGED_INFO("(user_chars = this->first_query_or_form_field_named_chars(user_form_field_name))...");
        if ((user_chars = this->first_query_or_form_field_named_chars(user_form_field_name))) {
            string_t& user_form_field_value = this->user_form_field_value();
            user_form_field_value.assign(user_chars);
            LOGGER_IS_LOGGED_INFO("this->set_udentify_user(user_chars)...");
            this->set_udentify_user(user_chars);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (user_chars = this->first_query_or_form_field_named_chars(user_form_field_name))");
            LOGGER_IS_LOGGED_INFO("(user_chars = this->first_query_or_form_field_named_chars(users_form_field_name))...");
            if ((user_chars = this->first_query_or_form_field_named_chars(users_form_field_name))) {
                string_t& user_form_field_value = this->user_form_field_value();
                user_form_field_value.assign(user_chars);
                LOGGER_IS_LOGGED_INFO("this->set_udentify_user(user_chars)...");
                this->set_udentify_user(user_chars);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (user_chars = this->first_query_or_form_field_named_chars(users_form_field_name))");
            }
        }
        LOGGER_IS_LOGGED_INFO("(resource_chars = this->first_query_or_form_field_named_chars(resource_form_field_name))...");
        if ((resource_chars = this->first_query_or_form_field_named_chars(resource_form_field_name))) {
            string_t& resource_form_field_value = this->resource_form_field_value();
            resource_form_field_value.assign(resource_chars);
            LOGGER_IS_LOGGED_INFO("this->set_udentify_resource(resource_chars)...");
            this->set_udentify_resource(resource_chars);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (resource_chars = this->first_query_or_form_field_named_chars(resource_form_field_name))");
            LOGGER_IS_LOGGED_INFO("(resource_chars = this->first_query_or_form_field_named_chars(resources_form_field_name))...");
            if ((resource_chars = this->first_query_or_form_field_named_chars(resources_form_field_name))) {
                string_t& resource_form_field_value = this->resource_form_field_value();
                resource_form_field_value.assign(resource_chars);
                LOGGER_IS_LOGGED_INFO("this->set_udentify_resource(resource_chars)...");
                this->set_udentify_resource(resource_chars);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (resource_chars = this->first_query_or_form_field_named_chars(resources_form_field_name))");
            }
        }
        LOGGER_IS_LOGGED_INFO("(password_chars = this->first_query_or_form_field_named_chars(password_form_field_name))...");
        if ((password_chars = this->first_query_or_form_field_named_chars(password_form_field_name))) {
            LOGGER_IS_LOGGED_INFO("this->set_udentify_password(\"" << password_chars << "\")...");
            this->set_udentify_password(password_chars);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (password_chars = this->first_query_or_form_field_named_chars(password_form_field_name))");
            LOGGER_IS_LOGGED_INFO("(password_chars = this->first_query_or_form_field_named_chars(passwords_form_field_name))...");
            if ((password_chars = this->first_query_or_form_field_named_chars(passwords_form_field_name))) {
                LOGGER_IS_LOGGED_INFO("this->set_udentify_password(\"" << password_chars << "\")...");
                this->set_udentify_password(password_chars);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (password_chars = this->first_query_or_form_field_named_chars(passwords_form_field_name))");
            }
        }
        if ((password_chars)) {
            LOGGER_IS_LOGGED_INFO("(!(info_form_field_value.compare(\"" << password_chars << "\")))...");
            if (!(info_form_field_value.compare(password_chars))) {
                LOGGER_IS_LOGGED_INFO("...(!(info_form_field_value.compare(\"" << password_chars << "\")))");
                LOGGER_IS_LOGGED_INFO("!(err = on_console_gateway_info_form_field_run(argc, argv, env))...");
                if (!(err = on_console_gateway_info_form_field_run(argc, argv, env))) {
                    LOGGER_IS_LOGGED_INFO("...!(" << err << " = on_console_gateway_info_form_field_run(argc, argv, env))");
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = on_console_gateway_info_form_field_run(argc, argv, env))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(info_form_field_value.compare(\"" << password_chars << "\")))");
            }
        } else {}
        LOGGER_IS_LOGGED_INFO("!(err = this->all_console_gateway_out_run(argc, argv, env))...");
        if (!(err = this->udentify_console_gateway_out_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = this->all_console_gateway_out_run(argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = this->all_console_gateway_out_run(argc, argv, env))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_output_run
    virtual int prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        to_json_node_t to_json_node;
        json_node_t json_node;
        
        LOGGER_IS_LOGGED_INFO("to_json_node.to(json_node, \"" << response << "\")...");
        to_json_node.to(json_node, response);
        LOGGER_IS_LOGGED_INFO("...to_json_node.to(json_node, \"" << response << "\")");
        LOGGER_IS_LOGGED_INFO("!(err = this->all_process_json_node_run(json_node, argc, argv, env))...");
        if (!(err = this->all_process_json_node_run(json_node, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = this->all_process_json_node_run(json_node, argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = this->all_process_json_node_run(json_node, argc, argv, env))");
        }
        return err;
    }
    virtual int before_prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& default_password = this->default_password();
        LOGGER_IS_LOGGED_INFO("this->set_response_to_output(\"" << default_password << "\")...");
        this->set_response_to_output(default_password);
        return err;
    }
    virtual int after_prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& response_to_output = this->response_to_output();
        LOGGER_IS_LOGGED_INFO("this->set_response(\"" << response_to_output << "\")...");
        this->set_response(response_to_output);
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...output_message_run
    virtual int before_output_message_run(string_t& msg, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& form_field_name = this->form_field_name();
        const string_t& info_form_field_name = this->info_form_field_name();
        const string_t& user_form_field_value = this->user_form_field_value();
        const string_t& resource_form_field_value = this->resource_form_field_value();
        string_t& message_to_output = this->message_to_output();

        message_to_output.assign(msg);
        msg.assign(info_form_field_name);
        msg.append(" ");
        msg.append(user_form_field_value);
        msg.append(" ");
        msg.append(resource_form_field_value);
        msg.append(" ");
        msg.append(form_field_name);
        msg.append(" ");
        msg.append(message_to_output);
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...process_json_node_run
    virtual int process_json_node_run(const json_node_t& json_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        xos::io::format::json::node_events& json_node_events = this_json_node_events();

        LOGGER_IS_LOGGED_INFO("json_node.to(json_node_events)...");
        json_node.to(json_node_events);
        LOGGER_IS_LOGGED_INFO("...json_node.to(json_node_events)");
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...on...node
    /// ...
    /// ...named...
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
    /// ...
    /// ...on...node
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...json_node_events...
    /// ...
    virtual xos::io::format::json::node_events* json_node_events_forwarded_to() {
        return (xos::io::format::json::node_events*)(this->forwarded_to(this));
    }
    virtual xos::io::format::json::node_events& json_node_events_this() const {
        return (xos::io::format::json::node_events&)(*this);
    }
    virtual xos::io::format::json::node_events& this_json_node_events() const {
        return (xos::io::format::json::node_events&)json_node_events_;
    }
    /// ...
    /// ...json_node_events...
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...response_was_output
    virtual bool& set_response_was_output(const bool& to = true) {
        bool& response_was_output = this->response_was_output();
        response_was_output = to;
        return response_was_output;
    }
    virtual bool& response_was_output() const {
        return (bool&) response_was_output_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& message_to_output() const {
        return (string_t&)message_to_output_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    xos::io::format::json::node_events& json_node_events_;
    bool response_was_output_;
    string_t message_to_output_;
}; /// class maint 
typedef maint<> main;

} /// namespace server 
} /// namespace cgi 
} /// namespace http 
} /// namespace udentify 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_HTTP_CGI_SERVER_MAIN_HPP
