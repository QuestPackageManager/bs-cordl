#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpRequestMessage)
namespace System::Net::Http {
class HttpMethod;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System {
class Version;
}
namespace System {
class Uri;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Net::Http {
class HttpRequestMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpRequestMessage);
// Type: System.Net.Http::HttpRequestMessage
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14654))
// CS Name: ::System.Net.Http::HttpRequestMessage*
class CORDL_TYPE HttpRequestMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field headers, offset 0x10, size 0x8
  __declspec(property(get = __get_headers, put = __set_headers))::System::Net::Http::Headers::HttpRequestHeaders* headers;

  /// @brief Field method, offset 0x18, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::System::Net::Http::HttpMethod* method;

  /// @brief Field version, offset 0x20, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::System::Version* version;

  /// @brief Field uri, offset 0x28, size 0x8
  __declspec(property(get = __get_uri, put = __set_uri))::System::Uri* uri;

  /// @brief Field is_used, offset 0x30, size 0x1
  __declspec(property(get = __get_is_used, put = __set_is_used)) bool is_used;

  /// @brief Field disposed, offset 0x31, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field <Content>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__Content_k__BackingField, put = __set__Content_k__BackingField))::System::Net::Http::HttpContent* _Content_k__BackingField;

  __declspec(property(get = get_Content, put = set_Content))::System::Net::Http::HttpContent* Content;

  __declspec(property(get = get_Headers))::System::Net::Http::Headers::HttpRequestHeaders* Headers;

  __declspec(property(get = get_Method, put = set_Method))::System::Net::Http::HttpMethod* Method;

  __declspec(property(get = get_RequestUri, put = set_RequestUri))::System::Uri* RequestUri;

  __declspec(property(get = get_Version))::System::Version* Version;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& __get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpRequestHeaders*> const& __get_headers() const;

  constexpr void __set_headers(::System::Net::Http::Headers::HttpRequestHeaders* value);

  constexpr ::System::Net::Http::HttpMethod*& __get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpMethod*> const& __get_method() const;

  constexpr void __set_method(::System::Net::Http::HttpMethod* value);

  constexpr ::System::Version*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get_version() const;

  constexpr void __set_version(::System::Version* value);

  constexpr ::System::Uri*& __get_uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_uri() const;

  constexpr void __set_uri(::System::Uri* value);

  constexpr bool& __get_is_used();

  constexpr bool const& __get_is_used() const;

  constexpr void __set_is_used(bool value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::Net::Http::HttpContent*& __get__Content_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> const& __get__Content_k__BackingField() const;

  constexpr void __set__Content_k__BackingField(::System::Net::Http::HttpContent* value);

  static inline ::System::Net::Http::HttpRequestMessage* New_ctor();

  /// @brief Method .ctor, addr 0x2833994, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Http::HttpRequestMessage* New_ctor(::System::Net::Http::HttpMethod* method, ::StringW requestUri);

  /// @brief Method .ctor, addr 0x2833a30, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpMethod* method, ::StringW requestUri);

  static inline ::System::Net::Http::HttpRequestMessage* New_ctor(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri);

  /// @brief Method .ctor, addr 0x283103c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri);

  /// @brief Method get_Content, addr 0x2833b74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpContent* get_Content();

  /// @brief Method set_Content, addr 0x2833b7c, size 0x8, virtual false, abstract: false, final false
  inline void set_Content(::System::Net::Http::HttpContent* value);

  /// @brief Method get_Headers, addr 0x282dc68, size 0x68, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::HttpRequestHeaders* get_Headers();

  /// @brief Method get_Method, addr 0x2833be4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpMethod* get_Method();

  /// @brief Method set_Method, addr 0x2833ac4, size 0xb0, virtual false, abstract: false, final false
  inline void set_Method(::System::Net::Http::HttpMethod* value);

  /// @brief Method get_RequestUri, addr 0x2833bec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_RequestUri();

  /// @brief Method set_RequestUri, addr 0x282e538, size 0xe4, virtual false, abstract: false, final false
  inline void set_RequestUri(::System::Uri* value);

  /// @brief Method IsAllowedAbsoluteUri, addr 0x2833bf4, size 0x14c, virtual false, abstract: false, final false
  static inline bool IsAllowedAbsoluteUri(::System::Uri* uri);

  /// @brief Method get_Version, addr 0x282dc04, size 0x64, virtual false, abstract: false, final false
  inline ::System::Version* get_Version();

  /// @brief Method Dispose, addr 0x2833d40, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2833d50, size 0x34, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method SetIsUsed, addr 0x2831400, size 0x20, virtual false, abstract: false, final false
  inline bool SetIsUsed();

  /// @brief Method ToString, addr 0x2833d84, size 0x27c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestMessage(HttpRequestMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestMessage(HttpRequestMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestMessage();

public:
  /// @brief Field headers, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpRequestHeaders* ___headers;

  /// @brief Field method, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpMethod* ___method;

  /// @brief Field version, offset: 0x20, size: 0x8, def value: None
  ::System::Version* ___version;

  /// @brief Field uri, offset: 0x28, size: 0x8, def value: None
  ::System::Uri* ___uri;

  /// @brief Field is_used, offset: 0x30, size: 0x1, def value: None
  bool ___is_used;

  /// @brief Field disposed, offset: 0x31, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field <Content>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* ____Content_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpRequestMessage, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::HttpRequestMessage, ___headers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpRequestMessage, ___method) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpRequestMessage, ___version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpRequestMessage, ___uri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpRequestMessage, ___is_used) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpRequestMessage, ___disposed) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpRequestMessage, ____Content_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpRequestMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpRequestMessage*, "System.Net.Http", "HttpRequestMessage");
