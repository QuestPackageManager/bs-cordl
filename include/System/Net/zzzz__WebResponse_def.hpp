#pragma once
// IWYU pragma private; include "System/Net/WebResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
CORDL_MODULE_EXPORT(WebResponse)
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebResponse);
// Type: System.Net::WebResponse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::WebResponse*
class CORDL_TYPE WebResponse : public ::System::MarshalByRefObject {
public:
  // Declarations
  __declspec(property(get = get_Headers))::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_IsFromCache)) bool IsFromCache;

  __declspec(property(get = get_ResponseUri))::System::Uri* ResponseUri;

  /// @brief Field m_IsFromCache, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsFromCache, put = __cordl_internal_set_m_IsFromCache)) bool m_IsFromCache;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Close, addr 0x2ff7690, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x2ff7694, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2ff7700, size 0x8c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetObjectData, addr 0x2ff768c, size 0x4, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetResponseStream, addr 0x2ff7794, size 0x24, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetResponseStream();

  static inline ::System::Net::WebResponse* New_ctor();

  static inline ::System::Net::WebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2ff7680, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  constexpr bool const& __cordl_internal_get_m_IsFromCache() const;

  constexpr bool& __cordl_internal_get_m_IsFromCache();

  constexpr void __cordl_internal_set_m_IsFromCache(bool value);

  /// @brief Method .ctor, addr 0x2ff7670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2ff7678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Headers, addr 0x2ff77dc, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_IsFromCache, addr 0x2ff778c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFromCache();

  /// @brief Method get_ResponseUri, addr 0x2ff77b8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebResponse(WebResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebResponse(WebResponse const&) = delete;

  /// @brief Field m_IsFromCache, offset: 0x18, size: 0x1, def value: None
  bool ___m_IsFromCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebResponse, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebResponse, ___m_IsFromCache) == 0x18, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponse*, "System.Net", "WebResponse");
