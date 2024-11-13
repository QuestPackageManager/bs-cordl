#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVROverlayError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVROverlayError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVROverlayError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVROverlayError);
// Type: OVR.OpenVR::EVROverlayError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EVROverlayError
struct CORDL_TYPE EVROverlayError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVROverlayError_Unwrapped
  enum struct __EVROverlayError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UnknownOverlay = static_cast<int32_t>(0xa),
    __E_InvalidHandle = static_cast<int32_t>(0xb),
    __E_PermissionDenied = static_cast<int32_t>(0xc),
    __E_OverlayLimitExceeded = static_cast<int32_t>(0xd),
    __E_WrongVisibilityType = static_cast<int32_t>(0xe),
    __E_KeyTooLong = static_cast<int32_t>(0xf),
    __E_NameTooLong = static_cast<int32_t>(0x10),
    __E_KeyInUse = static_cast<int32_t>(0x11),
    __E_WrongTransformType = static_cast<int32_t>(0x12),
    __E_InvalidTrackedDevice = static_cast<int32_t>(0x13),
    __E_InvalidParameter = static_cast<int32_t>(0x14),
    __E_ThumbnailCantBeDestroyed = static_cast<int32_t>(0x15),
    __E_ArrayTooSmall = static_cast<int32_t>(0x16),
    __E_RequestFailed = static_cast<int32_t>(0x17),
    __E_InvalidTexture = static_cast<int32_t>(0x18),
    __E_UnableToLoadFile = static_cast<int32_t>(0x19),
    __E_KeyboardAlreadyInUse = static_cast<int32_t>(0x1a),
    __E_NoNeighbor = static_cast<int32_t>(0x1b),
    __E_TooManyMaskPrimitives = static_cast<int32_t>(0x1d),
    __E_BadMaskPrimitive = static_cast<int32_t>(0x1e),
    __E_TextureAlreadyLocked = static_cast<int32_t>(0x1f),
    __E_TextureLockCapacityReached = static_cast<int32_t>(0x20),
    __E_TextureNotLocked = static_cast<int32_t>(0x21),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVROverlayError_Unwrapped() const noexcept {
    return static_cast<__EVROverlayError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVROverlayError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVROverlayError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ArrayTooSmall value: static_cast<int32_t>(0x16)
  static ::OVR::OpenVR::EVROverlayError const ArrayTooSmall;

  /// @brief Field BadMaskPrimitive value: static_cast<int32_t>(0x1e)
  static ::OVR::OpenVR::EVROverlayError const BadMaskPrimitive;

  /// @brief Field InvalidHandle value: static_cast<int32_t>(0xb)
  static ::OVR::OpenVR::EVROverlayError const InvalidHandle;

  /// @brief Field InvalidParameter value: static_cast<int32_t>(0x14)
  static ::OVR::OpenVR::EVROverlayError const InvalidParameter;

  /// @brief Field InvalidTexture value: static_cast<int32_t>(0x18)
  static ::OVR::OpenVR::EVROverlayError const InvalidTexture;

  /// @brief Field InvalidTrackedDevice value: static_cast<int32_t>(0x13)
  static ::OVR::OpenVR::EVROverlayError const InvalidTrackedDevice;

  /// @brief Field KeyInUse value: static_cast<int32_t>(0x11)
  static ::OVR::OpenVR::EVROverlayError const KeyInUse;

  /// @brief Field KeyTooLong value: static_cast<int32_t>(0xf)
  static ::OVR::OpenVR::EVROverlayError const KeyTooLong;

  /// @brief Field KeyboardAlreadyInUse value: static_cast<int32_t>(0x1a)
  static ::OVR::OpenVR::EVROverlayError const KeyboardAlreadyInUse;

  /// @brief Field NameTooLong value: static_cast<int32_t>(0x10)
  static ::OVR::OpenVR::EVROverlayError const NameTooLong;

  /// @brief Field NoNeighbor value: static_cast<int32_t>(0x1b)
  static ::OVR::OpenVR::EVROverlayError const NoNeighbor;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVROverlayError const None;

  /// @brief Field OverlayLimitExceeded value: static_cast<int32_t>(0xd)
  static ::OVR::OpenVR::EVROverlayError const OverlayLimitExceeded;

  /// @brief Field PermissionDenied value: static_cast<int32_t>(0xc)
  static ::OVR::OpenVR::EVROverlayError const PermissionDenied;

  /// @brief Field RequestFailed value: static_cast<int32_t>(0x17)
  static ::OVR::OpenVR::EVROverlayError const RequestFailed;

  /// @brief Field TextureAlreadyLocked value: static_cast<int32_t>(0x1f)
  static ::OVR::OpenVR::EVROverlayError const TextureAlreadyLocked;

  /// @brief Field TextureLockCapacityReached value: static_cast<int32_t>(0x20)
  static ::OVR::OpenVR::EVROverlayError const TextureLockCapacityReached;

  /// @brief Field TextureNotLocked value: static_cast<int32_t>(0x21)
  static ::OVR::OpenVR::EVROverlayError const TextureNotLocked;

  /// @brief Field ThumbnailCantBeDestroyed value: static_cast<int32_t>(0x15)
  static ::OVR::OpenVR::EVROverlayError const ThumbnailCantBeDestroyed;

  /// @brief Field TooManyMaskPrimitives value: static_cast<int32_t>(0x1d)
  static ::OVR::OpenVR::EVROverlayError const TooManyMaskPrimitives;

  /// @brief Field UnableToLoadFile value: static_cast<int32_t>(0x19)
  static ::OVR::OpenVR::EVROverlayError const UnableToLoadFile;

  /// @brief Field UnknownOverlay value: static_cast<int32_t>(0xa)
  static ::OVR::OpenVR::EVROverlayError const UnknownOverlay;

  /// @brief Field WrongTransformType value: static_cast<int32_t>(0x12)
  static ::OVR::OpenVR::EVROverlayError const WrongTransformType;

  /// @brief Field WrongVisibilityType value: static_cast<int32_t>(0xe)
  static ::OVR::OpenVR::EVROverlayError const WrongVisibilityType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8890 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVROverlayError, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVROverlayError, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVROverlayError, "OVR.OpenVR", "EVROverlayError");
