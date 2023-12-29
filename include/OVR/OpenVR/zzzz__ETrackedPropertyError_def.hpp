#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ETrackedPropertyError)
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedPropertyError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ETrackedPropertyError);
// Type: OVR.OpenVR::ETrackedPropertyError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9357))
// CS Name: ::OVR.OpenVR::ETrackedPropertyError
struct CORDL_TYPE ETrackedPropertyError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ETrackedPropertyError_Unwrapped
  enum struct __ETrackedPropertyError_Unwrapped : int32_t {
    __E_TrackedProp_Success = static_cast<int32_t>(0x0),
    __E_TrackedProp_WrongDataType = static_cast<int32_t>(0x1),
    __E_TrackedProp_WrongDeviceClass = static_cast<int32_t>(0x2),
    __E_TrackedProp_BufferTooSmall = static_cast<int32_t>(0x3),
    __E_TrackedProp_UnknownProperty = static_cast<int32_t>(0x4),
    __E_TrackedProp_InvalidDevice = static_cast<int32_t>(0x5),
    __E_TrackedProp_CouldNotContactServer = static_cast<int32_t>(0x6),
    __E_TrackedProp_ValueNotProvidedByDevice = static_cast<int32_t>(0x7),
    __E_TrackedProp_StringExceedsMaximumLength = static_cast<int32_t>(0x8),
    __E_TrackedProp_NotYetAvailable = static_cast<int32_t>(0x9),
    __E_TrackedProp_PermissionDenied = static_cast<int32_t>(0xa),
    __E_TrackedProp_InvalidOperation = static_cast<int32_t>(0xb),
    __E_TrackedProp_CannotWriteToWildcards = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ETrackedPropertyError_Unwrapped() const noexcept {
    return static_cast<__ETrackedPropertyError_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ETrackedPropertyError(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ETrackedPropertyError();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field TrackedProp_Success value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_Success;

  /// @brief Field TrackedProp_WrongDataType value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_WrongDataType;

  /// @brief Field TrackedProp_WrongDeviceClass value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_WrongDeviceClass;

  /// @brief Field TrackedProp_BufferTooSmall value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_BufferTooSmall;

  /// @brief Field TrackedProp_UnknownProperty value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_UnknownProperty;

  /// @brief Field TrackedProp_InvalidDevice value: static_cast<int32_t>(0x5)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_InvalidDevice;

  /// @brief Field TrackedProp_CouldNotContactServer value: static_cast<int32_t>(0x6)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_CouldNotContactServer;

  /// @brief Field TrackedProp_ValueNotProvidedByDevice value: static_cast<int32_t>(0x7)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_ValueNotProvidedByDevice;

  /// @brief Field TrackedProp_StringExceedsMaximumLength value: static_cast<int32_t>(0x8)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_StringExceedsMaximumLength;

  /// @brief Field TrackedProp_NotYetAvailable value: static_cast<int32_t>(0x9)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_NotYetAvailable;

  /// @brief Field TrackedProp_PermissionDenied value: static_cast<int32_t>(0xa)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_PermissionDenied;

  /// @brief Field TrackedProp_InvalidOperation value: static_cast<int32_t>(0xb)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_InvalidOperation;

  /// @brief Field TrackedProp_CannotWriteToWildcards value: static_cast<int32_t>(0xc)
  static ::OVR::OpenVR::ETrackedPropertyError const TrackedProp_CannotWriteToWildcards;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ETrackedPropertyError, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::ETrackedPropertyError, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackedPropertyError, "OVR.OpenVR", "ETrackedPropertyError");
