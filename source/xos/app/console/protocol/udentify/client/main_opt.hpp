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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 10/21/2024, 3/17/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/protocol/udentify/base/main.hpp"
#include "xos/app/console/protocol/json/client/main.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPT "user"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTUSE "user name"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTVAL_S "U::"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTVAL_C 'U'
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPT "resource"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTUSE "resource name"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTVAL_S "R::"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPT "password"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTUSE "password name"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTVAL_S "W::"
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTVAL_C 'W'
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_JSON_CLIENT_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_JSON_CLIENT_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace udentify {
namespace client {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::udentify::base::maint
 <xos::app::console::protocol::udentify::base::main_optt
 <xos::app::console::protocol::json::client::maint
 <xos::app::console::protocol::json::client::main_optt
 <xos::app::console::protocol::json::base::maint
 <xos::app::console::protocol::json::base::main_optt
 <xos::app::console::protocol::crlf::client::maint
 <xos::app::console::protocol::crlf::client::main_optt
 <xos::app::console::protocol::crlf::base::maint
 <xos::app::console::protocol::crlf::base::main_optt
 <xos::app::console::protocol::client::maint
 <xos::app::console::protocol::client::main_optt
 <xos::app::console::protocol::base::maint
 <xos::app::console::protocol::base::main_optt<> > > > > > > > > > > > > >,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

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

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
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
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on...user_option...
    virtual int on_get_user_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_user_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_user_run(argc, argv, env))) {
            if (!(err = this->output_user_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_user_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_udentify_user(optarg);
        } else {
        }
        return err;
    }
    virtual int on_user_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_udentify_request_message();
            if (!(err = this->set_output_request_run(argc, argv, env))) {
                if (!(err = this->output_request_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_user_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_user_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_user_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_user_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_user_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* user_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...resource_option...
    virtual int on_get_resource_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_resource_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_resource_run(argc, argv, env))) {
            if (!(err = this->output_resource_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_resource_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_udentify_resource(optarg);
        } else {
        }
        return err;
    }
    virtual int on_resource_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_udentify_request_message();
            if (!(err = this->set_output_request_run(argc, argv, env))) {
                if (!(err = this->output_request_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_resource_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_resource_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_resource_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_resource_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_resource_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* resource_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...password_option...
    virtual int on_get_password_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_password_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_password_run(argc, argv, env))) {
            if (!(err = this->output_password_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_password_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_udentify_password(optarg);
        } else {
        }
        return err;
    }
    virtual int on_password_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_udentify_request_message();
            if (!(err = this->set_output_request_run(argc, argv, env))) {
                if (!(err = this->output_request_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_password_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_password_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_password_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_password_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_password_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* password_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTVAL_C:
            err = this->on_user_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTVAL_C:
            err = this->on_resource_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTVAL_C:
            err = this->on_password_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_USER_OPTVAL_C:
            chars = this->user_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_RESOURCE_OPTVAL_C:
            chars = this->resource_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_PASSWORD_OPTVAL_C:
            chars = this->password_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }

    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace client 
} /// namespace udentify 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_UDENTIFY_CLIENT_MAIN_OPT_HPP

