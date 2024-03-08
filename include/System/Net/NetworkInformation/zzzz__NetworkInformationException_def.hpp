#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkInformationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInformationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::NetworkInformationException);
// Type: System.Net.NetworkInformation::NetworkInformationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::NetworkInformationException*
class CORDL_TYPE NetworkInformationException : public ::System::ComponentModel::Win32Exception {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode)) int32_t ErrorCode;

  static inline ::System::Net::NetworkInformation::NetworkInformationException* New_ctor();

  static inline ::System::Net::NetworkInformation::NetworkInformationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                         ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x2b37ac4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2b37b28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_ErrorCode, addr 0x2b37b30, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ErrorCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInformationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkInformationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkInformationException(NetworkInformationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkInformationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkInformationException(NetworkInformationException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInformationException, 0x90>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInformationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInformationException*, "System.Net.NetworkInformation", "NetworkInformationException");
