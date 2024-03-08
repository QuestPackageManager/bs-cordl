#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net {
class HttpListenerException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListenerException);
// Type: System.Net::HttpListenerException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::HttpListenerException*
class CORDL_TYPE HttpListenerException : public ::System::ComponentModel::Win32Exception {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode)) int32_t ErrorCode;

  static inline ::System::Net::HttpListenerException* New_ctor();

  static inline ::System::Net::HttpListenerException* New_ctor(int32_t errorCode, ::StringW message);

  static inline ::System::Net::HttpListenerException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                               ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x2ae6afc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2ae6b60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t errorCode, ::StringW message);

  /// @brief Method .ctor, addr 0x2ae6b68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_ErrorCode, addr 0x2ae6b70, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ErrorCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerException(HttpListenerException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerException(HttpListenerException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerException, 0x90>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpListenerException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerException*, "System.Net", "HttpListenerException");
