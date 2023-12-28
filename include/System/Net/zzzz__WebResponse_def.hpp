#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
CORDL_MODULE_EXPORT(WebResponse)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class IDisposable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Uri;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::Serialization {
class ISerializable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9097))
// CS Name: ::System.Net::WebResponse*
class CORDL_TYPE WebResponse : public ::System::MarshalByRefObject {
public:
  // Declarations
  /// @brief Field m_IsFromCache, offset 0x18, size 0x1
  __declspec(property(get = __get_m_IsFromCache, put = __set_m_IsFromCache)) bool m_IsFromCache;

  __declspec(property(get = get_IsFromCache)) bool IsFromCache;

  __declspec(property(get = get_ResponseUri))::System::Uri* ResponseUri;

  __declspec(property(get = get_Headers))::System::Net::WebHeaderCollection* Headers;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get_m_IsFromCache();

  constexpr bool const& __get_m_IsFromCache() const;

  constexpr void __set_m_IsFromCache(bool value);

  static inline ::System::Net::WebResponse* New_ctor();

  /// @brief Method .ctor addr 0x29a4e24 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Net::WebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor addr 0x29a4e2c size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x29a4e34 size 0xc virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetObjectData addr 0x29a4e40 size 0x4 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method Close addr 0x29a4e44 size 0x4 virtual true final false
  inline void Close();

  /// @brief Method Dispose addr 0x29a4e48 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x29a4eb4 size 0x8c virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method get_IsFromCache addr 0x29a4f40 size 0x8 virtual true final false
  inline bool get_IsFromCache();

  /// @brief Method GetResponseStream addr 0x29a4f48 size 0x24 virtual true final false
  inline ::System::IO::Stream* GetResponseStream();

  /// @brief Method get_ResponseUri addr 0x29a4f6c size 0x24 virtual true final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Method get_Headers addr 0x29a4f90 size 0x24 virtual true final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  // Ctor Parameters [CppParam { name: "", ty: "WebResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebResponse(WebResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebResponse(WebResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponse();

public:
  /// @brief Field m_IsFromCache, offset: 0x18, size: 0x1, def value: None
  bool ___m_IsFromCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebResponse, 0x20>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponse*, "System.Net", "WebResponse");
