#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpResponseMessage)
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Version;
}
namespace System {
class IDisposable;
}
namespace System::Net::Http::Headers {
class HttpResponseHeaders;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
// Forward declare root types
namespace System::Net::Http {
class HttpResponseMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpResponseMessage);
// Type: System.Net.Http::HttpResponseMessage
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9027))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14655))
// CS Name: ::System.Net.Http::HttpResponseMessage*
class CORDL_TYPE HttpResponseMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field headers, offset 0x10, size 0x8
  __declspec(property(get = __get_headers, put = __set_headers))::System::Net::Http::Headers::HttpResponseHeaders* headers;

  /// @brief Field reasonPhrase, offset 0x18, size 0x8
  __declspec(property(get = __get_reasonPhrase, put = __set_reasonPhrase))::StringW reasonPhrase;

  /// @brief Field statusCode, offset 0x20, size 0x4
  __declspec(property(get = __get_statusCode, put = __set_statusCode))::System::Net::HttpStatusCode statusCode;

  /// @brief Field version, offset 0x28, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::System::Version* version;

  /// @brief Field disposed, offset 0x30, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field <Content>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__Content_k__BackingField, put = __set__Content_k__BackingField))::System::Net::Http::HttpContent* _Content_k__BackingField;

  /// @brief Field <RequestMessage>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__RequestMessage_k__BackingField, put = __set__RequestMessage_k__BackingField))::System::Net::Http::HttpRequestMessage* _RequestMessage_k__BackingField;

  __declspec(property(get = get_Content, put = set_Content))::System::Net::Http::HttpContent* Content;

  __declspec(property(get = get_Headers))::System::Net::Http::Headers::HttpResponseHeaders* Headers;

  __declspec(property(get = get_IsSuccessStatusCode)) bool IsSuccessStatusCode;

  __declspec(property(get = get_ReasonPhrase, put = set_ReasonPhrase))::StringW ReasonPhrase;

  __declspec(property(put = set_RequestMessage))::System::Net::Http::HttpRequestMessage* RequestMessage;

  __declspec(property(get = get_StatusCode, put = set_StatusCode))::System::Net::HttpStatusCode StatusCode;

  __declspec(property(get = get_Version))::System::Version* Version;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Net::Http::Headers::HttpResponseHeaders*& __get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpResponseHeaders*> const& __get_headers() const;

  constexpr void __set_headers(::System::Net::Http::Headers::HttpResponseHeaders* value);

  constexpr ::StringW& __get_reasonPhrase();

  constexpr ::StringW const& __get_reasonPhrase() const;

  constexpr void __set_reasonPhrase(::StringW value);

  constexpr ::System::Net::HttpStatusCode& __get_statusCode();

  constexpr ::System::Net::HttpStatusCode const& __get_statusCode() const;

  constexpr void __set_statusCode(::System::Net::HttpStatusCode value);

  constexpr ::System::Version*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get_version() const;

  constexpr void __set_version(::System::Version* value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::Net::Http::HttpContent*& __get__Content_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> const& __get__Content_k__BackingField() const;

  constexpr void __set__Content_k__BackingField(::System::Net::Http::HttpContent* value);

  constexpr ::System::Net::Http::HttpRequestMessage*& __get__RequestMessage_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpRequestMessage*> const& __get__RequestMessage_k__BackingField() const;

  constexpr void __set__RequestMessage_k__BackingField(::System::Net::Http::HttpRequestMessage* value);

  static inline ::System::Net::Http::HttpResponseMessage* New_ctor(::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor addr 0x282e2b4 size 0x2c virtual false final false
  inline void _ctor(::System::Net::HttpStatusCode statusCode);

  /// @brief Method get_Content addr 0x2834050 size 0x8 virtual false final false
  inline ::System::Net::Http::HttpContent* get_Content();

  /// @brief Method set_Content addr 0x2834058 size 0x8 virtual false final false
  inline void set_Content(::System::Net::Http::HttpContent* value);

  /// @brief Method get_Headers addr 0x282e420 size 0x68 virtual false final false
  inline ::System::Net::Http::Headers::HttpResponseHeaders* get_Headers();

  /// @brief Method get_IsSuccessStatusCode addr 0x28340c0 size 0x14 virtual false final false
  inline bool get_IsSuccessStatusCode();

  /// @brief Method get_ReasonPhrase addr 0x28340d4 size 0x1c virtual false final false
  inline ::StringW get_ReasonPhrase();

  /// @brief Method set_ReasonPhrase addr 0x28340f0 size 0x8 virtual false final false
  inline void set_ReasonPhrase(::StringW value);

  /// @brief Method set_RequestMessage addr 0x28340f8 size 0x8 virtual false final false
  inline void set_RequestMessage(::System::Net::Http::HttpRequestMessage* value);

  /// @brief Method get_StatusCode addr 0x2834100 size 0x8 virtual false final false
  inline ::System::Net::HttpStatusCode get_StatusCode();

  /// @brief Method set_StatusCode addr 0x2834000 size 0x50 virtual false final false
  inline void set_StatusCode(::System::Net::HttpStatusCode value);

  /// @brief Method get_Version addr 0x2834108 size 0x64 virtual false final false
  inline ::System::Version* get_Version();

  /// @brief Method Dispose addr 0x283416c size 0x10 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x283417c size 0x34 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method EnsureSuccessStatusCode addr 0x28324c8 size 0xb0 virtual false final false
  inline ::System::Net::Http::HttpResponseMessage* EnsureSuccessStatusCode();

  /// @brief Method ToString addr 0x28341b0 size 0x23c virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "HttpResponseMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpResponseMessage(HttpResponseMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpResponseMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpResponseMessage(HttpResponseMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpResponseMessage();

public:
  /// @brief Field headers, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpResponseHeaders* ___headers;

  /// @brief Field reasonPhrase, offset: 0x18, size: 0x8, def value: None
  ::StringW ___reasonPhrase;

  /// @brief Field statusCode, offset: 0x20, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ___statusCode;

  /// @brief Field version, offset: 0x28, size: 0x8, def value: None
  ::System::Version* ___version;

  /// @brief Field disposed, offset: 0x30, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field <Content>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* ____Content_k__BackingField;

  /// @brief Field <RequestMessage>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* ____RequestMessage_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpResponseMessage, 0x48>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpResponseMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpResponseMessage*, "System.Net.Http", "HttpResponseMessage");
