//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2024 $organization$
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
///   Date: 10/21/2024
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_SERVER_MAIN_HPP

#include "xos/app/console/protocol/udentify/server/main_opt.hpp"
#include "xos/udentify/server/interface.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace udentify {
namespace server {

/// class maint
template 
<class TExtends = xos::app::console::protocol::udentify::server::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
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
    typedef typename extends::literal_string_t literal_string_t;

    typedef typename extends::to_json_node_t to_json_node_t;
    typedef typename extends::json_node_t json_node_t;

    typedef xos::udentify::server::interface udentify_interface_t;

    /// constructor / destructor
    maint(): run_(0) {
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
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_unknown_request_run
    virtual int after_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        udentify_interface_t* udentify_interface = 0;
        
        LOGGER_IS_LOGGED_INFO("(udentify_interface = udentify_interface_t::the_interface())...");
        if ((udentify_interface = udentify_interface_t::the_interface())) {
            const string_t& udentity_path = this->udentity_path();
            const string_t& default_user = this->default_udentify_user();
            const string_t& default_resource = this->default_udentify_resource();
            const string_t& default_password = this->default_udentify_password();
            const string_t& user = this->udentify_user();
            const string_t& resource = this->udentify_resource();
            const string_t& password = this->udentify_password();
            string_t saved_password, result;

            LOGGER_IS_LOGGED_INFO("...(udentify_interface = udentify_interface_t::the_interface())");
            LOGGER_IS_LOGGED_INFO("(0 < (" << default_user.length() << "))...");
            if ((0 < (default_user.length()))) {
                LOGGER_IS_LOGGED_INFO("udentify_interface->set_default_user(\"" << default_user << "\")...");
                udentify_interface->set_default_user(default_user);
            }
            LOGGER_IS_LOGGED_INFO("(0 < (" << default_resource.length() << "))...");
            if ((0 < (default_resource.length()))) {
                LOGGER_IS_LOGGED_INFO("udentify_interface->set_default_resource(\"" << default_resource << "\")...");
                udentify_interface->set_default_resource(default_resource);
            }
            LOGGER_IS_LOGGED_INFO("(0 < (" << default_password.length() << "))...");
            if ((0 < (default_password.length()))) {
                LOGGER_IS_LOGGED_INFO("udentify_interface->set_default_password(\"" << default_password << "\")...");
                udentify_interface->set_default_password(default_password);
            }
            LOGGER_IS_LOGGED_INFO("(0 < (" << udentity_path.length() << "))...");
            if ((0 < (udentity_path.length()))) {
                LOGGER_IS_LOGGED_INFO("udentify_interface->set_udentity_path(\"" << udentity_path << "\")...");
                udentify_interface->set_udentity_path(udentity_path);
            }
            LOGGER_IS_LOGGED_INFO("udentify_interface->password(result, user, resource, password)...");
            udentify_interface->password(result, user, resource, password);
            LOGGER_IS_LOGGED_INFO("...udentify_interface->password(result, user, resource, password)");
            LOGGER_IS_LOGGED_INFO("saved_password.assign(\"" << this->udentify_password() << "\")...");
            saved_password.assign(password);
            if (0 < (result.length())) {
                LOGGER_IS_LOGGED_INFO("this->set_udentify_password(\"" << result << "\")...");
                this->set_udentify_password(result);
            } else {
                LOGGER_IS_LOGGED_INFO("this->set_udentify_password(\"" << default_password << "\")...");
                this->set_udentify_password(default_password);
            }
            LOGGER_IS_LOGGED_INFO("this->set_udentify_response_message()...");
            this->set_udentify_response_message();
            LOGGER_IS_LOGGED_INFO("...this->set_udentify_response_message()");
            LOGGER_IS_LOGGED_INFO("this->set_udentify_password(\"" << saved_password << "\")...");
            this->set_udentify_password(saved_password);
            return err;
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (udentify_interface = udentify_interface_t::the_interface())");
        }
        LOGGER_IS_LOGGED_INFO("this->set_udentify_response_message()...");
        this->set_udentify_response_message();
        LOGGER_IS_LOGGED_INFO("...this->set_udentify_response_message()");
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class maint 
typedef maint<> main;

} /// namespace server 
} /// namespace udentify 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_SERVER_MAIN_HPP

