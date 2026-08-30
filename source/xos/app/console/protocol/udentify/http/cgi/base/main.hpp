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
#ifndef XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_HTTP_CGI_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_HTTP_CGI_BASE_MAIN_HPP

#include "xos/app/console/protocol/udentify/http/cgi/base/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace udentify {
namespace http {
namespace cgi {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::protocol::udentify::http::cgi::base::main_optt<>,  class TImplements = typename TExtends::implements>

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

    /// constructor / destructor
    maint()
    : run_(0), 

      info_form_field_name_("udentity"), 
      info_form_field_value_("info"), 
      users_form_field_name_("users"),
      user_form_field_name_("user"),
      user_form_field_value_(user_form_field_name_),
      resources_form_field_name_("resources"), 
      resource_form_field_name_("resource"), 
      resource_form_field_value_(resource_form_field_name_), 
      passwords_form_field_name_("passwords"), 
      password_form_field_name_("password"), 
      password_form_field_value_(password_form_field_name_), 
      form_field_name_(password_form_field_name_), 

      default_user_form_field_name_("default_user"),
      default_resource_form_field_name_("default_resource"),
      default_password_form_field_name_("default_password"),
      default_password_("unknown") {
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
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...form_field_name...
    virtual string_t& info_form_field_name() const {
        return (string_t&) info_form_field_name_;
    }
    virtual string_t& info_form_field_value() const {
        return (string_t&) info_form_field_value_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& users_form_field_name() const {
        return (string_t&) users_form_field_name_;
    }
    virtual string_t& user_form_field_name() const {
        return (string_t&) user_form_field_name_;
    }
    virtual string_t& user_form_field_value() const {
        return (string_t&) user_form_field_value_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& resources_form_field_name() const {
        return (string_t&) resources_form_field_name_;
    }
    virtual string_t& resource_form_field_name() const {
        return (string_t&) resource_form_field_name_;
    }
    virtual string_t& resource_form_field_value() const {
        return (string_t&) resource_form_field_value_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& passwords_form_field_name() const {
        return (string_t&) passwords_form_field_name_;
    }
    virtual string_t& password_form_field_name() const {
        return (string_t&) password_form_field_name_;
    }
    virtual string_t& password_form_field_value() const {
        return (string_t&) password_form_field_value_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& form_field_name() const {
        return (string_t&) form_field_name_;
    }
    virtual string_t& default_user_form_field_name() const {
        return (string_t&) default_user_form_field_name_;
    }
    virtual string_t& default_resource_form_field_name() const {
        return (string_t&) default_resource_form_field_name_;
    }
    virtual string_t& default_password_form_field_name() const {
        return (string_t&) default_password_form_field_name_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual const char_t* default_password_chars() const {
        string_t& default_password = this->default_password();
        const char_t* default_password_chars = default_password.has_chars();
        return default_password_chars;
    }
    virtual string_t& default_password() const {
        return (string_t&) default_password_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual const char_t* password_chars() const {
        string_t& password = this->password();
        const char_t* password_chars = password.has_chars();
        return password_chars;
    }
    virtual string_t& password() const {
        return (string_t&) password_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    string_t info_form_field_name_, info_form_field_value_, 
             users_form_field_name_, user_form_field_name_, user_form_field_value_, 
             resources_form_field_name_, resource_form_field_name_, resource_form_field_value_, 
             passwords_form_field_name_, password_form_field_name_, password_form_field_value_, 
             form_field_name_, default_user_form_field_name_, default_resource_form_field_name_, 
             default_password_form_field_name_, default_password_, password_;
}; /// class maint 
typedef maint<> main;

} /// namespace base 
} /// namespace cgi 
} /// namespace http 
} /// namespace udentify 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_HTTP_CGI_BASE_MAIN_HPP
