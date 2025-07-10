#pragma once
// IWYU pragma private; include "System/Net/HttpListenerContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerContext)
namespace System::Net {
struct AuthenticationSchemes;
}
namespace System::Net {
class HttpConnection;
}
namespace System::Net {
class HttpListenerRequest;
}
namespace System::Net {
class HttpListenerResponse;
}
namespace System::Net {
class HttpListener;
}
namespace System::Security::Principal {
class IPrincipal;
}
// Forward declare root types
namespace System::Net {
class HttpListenerContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListenerContext);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerContext
class CORDL_TYPE HttpListenerContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Connection)) ::System::Net::HttpConnection* Connection;

  __declspec(property(get = get_ErrorMessage, put = set_ErrorMessage)) ::StringW ErrorMessage;

  __declspec(property(get = get_ErrorStatus, put = set_ErrorStatus)) int32_t ErrorStatus;

  __declspec(property(get = get_HaveError)) bool HaveError;

  /// @brief Field Listener, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Listener, put = __cordl_internal_set_Listener)) ::System::Net::HttpListener* Listener;

  __declspec(property(get = get_Request)) ::System::Net::HttpListenerRequest* Request;

  __declspec(property(get = get_Response)) ::System::Net::HttpListenerResponse* Response;

  /// @brief Field cnc, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cnc, put = __cordl_internal_set_cnc)) ::System::Net::HttpConnection* cnc;

  /// @brief Field err_status, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_err_status, put = __cordl_internal_set_err_status)) int32_t err_status;

  /// @brief Field error, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error)) ::StringW error;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::System::Net::HttpListenerRequest* request;

  /// @brief Field response, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response)) ::System::Net::HttpListenerResponse* response;

  /// @brief Field user, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_user, put = __cordl_internal_set_user)) ::System::Security::Principal::IPrincipal* user;

  static inline ::System::Net::HttpListenerContext* New_ctor(::System::Net::HttpConnection* cnc);

  /// @brief Method ParseAuthentication, addr 0x44c8a9c, size 0x120, virtual false, abstract: false, final false
  inline void ParseAuthentication(::System::Net::AuthenticationSchemes expectedSchemes);

  /// @brief Method ParseBasicAuthentication, addr 0x44c8f04, size 0x234, virtual false, abstract: false, final false
  inline ::System::Security::Principal::IPrincipal* ParseBasicAuthentication(::StringW authData);

  constexpr ::System::Net::HttpListener* const& __cordl_internal_get_Listener() const;

  constexpr ::System::Net::HttpListener*& __cordl_internal_get_Listener();

  constexpr ::System::Net::HttpConnection* const& __cordl_internal_get_cnc() const;

  constexpr ::System::Net::HttpConnection*& __cordl_internal_get_cnc();

  constexpr int32_t const& __cordl_internal_get_err_status() const;

  constexpr int32_t& __cordl_internal_get_err_status();

  constexpr ::StringW const& __cordl_internal_get_error() const;

  constexpr ::StringW& __cordl_internal_get_error();

  constexpr ::System::Net::HttpListenerRequest* const& __cordl_internal_get_request() const;

  constexpr ::System::Net::HttpListenerRequest*& __cordl_internal_get_request();

  constexpr ::System::Net::HttpListenerResponse* const& __cordl_internal_get_response() const;

  constexpr ::System::Net::HttpListenerResponse*& __cordl_internal_get_response();

  constexpr ::System::Security::Principal::IPrincipal* const& __cordl_internal_get_user() const;

  constexpr ::System::Security::Principal::IPrincipal*& __cordl_internal_get_user();

  constexpr void __cordl_internal_set_Listener(::System::Net::HttpListener* value);

  constexpr void __cordl_internal_set_cnc(::System::Net::HttpConnection* value);

  constexpr void __cordl_internal_set_err_status(int32_t value);

  constexpr void __cordl_internal_set_error(::StringW value);

  constexpr void __cordl_internal_set_request(::System::Net::HttpListenerRequest* value);

  constexpr void __cordl_internal_set_response(::System::Net::HttpListenerResponse* value);

  constexpr void __cordl_internal_set_user(::System::Security::Principal::IPrincipal* value);

  /// @brief Method .ctor, addr 0x44c4d20, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpConnection* cnc);

  /// @brief Method get_Connection, addr 0x44c8eec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpConnection* get_Connection();

  /// @brief Method get_ErrorMessage, addr 0x44c8edc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ErrorMessage();

  /// @brief Method get_ErrorStatus, addr 0x44c8ecc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ErrorStatus();

  /// @brief Method get_HaveError, addr 0x44c58dc, size 0x10, virtual false, abstract: false, final false
  inline bool get_HaveError();

  /// @brief Method get_Request, addr 0x44c8ef4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerRequest* get_Request();

  /// @brief Method get_Response, addr 0x44c8efc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerResponse* get_Response();

  /// @brief Method set_ErrorMessage, addr 0x44c8ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorMessage(::StringW value);

  /// @brief Method set_ErrorStatus, addr 0x44c8ed4, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorStatus(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerContext(HttpListenerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerContext(HttpListenerContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9694 };

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::System::Net::HttpListenerRequest* ___request;

  /// @brief Field response, offset: 0x18, size: 0x8, def value: None
  ::System::Net::HttpListenerResponse* ___response;

  /// @brief Field user, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Principal::IPrincipal* ___user;

  /// @brief Field cnc, offset: 0x28, size: 0x8, def value: None
  ::System::Net::HttpConnection* ___cnc;

  /// @brief Field error, offset: 0x30, size: 0x8, def value: None
  ::StringW ___error;

  /// @brief Field err_status, offset: 0x38, size: 0x4, def value: None
  int32_t ___err_status;

  /// @brief Field Listener, offset: 0x40, size: 0x8, def value: None
  ::System::Net::HttpListener* ___Listener;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerContext, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerContext, ___response) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerContext, ___user) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerContext, ___cnc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerContext, ___error) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerContext, ___err_status) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerContext, ___Listener) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerContext, 0x48>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpListenerContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerContext*, "System.Net", "HttpListenerContext");
