#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRCompositorError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRCompositorError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRCompositorError);
// Type: OVR.OpenVR::EVRCompositorError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EVRCompositorError
struct CORDL_TYPE EVRCompositorError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRCompositorError_Unwrapped
  enum struct __EVRCompositorError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_RequestFailed = static_cast<int32_t>(0x1),
    __E_IncompatibleVersion = static_cast<int32_t>(0x64),
    __E_DoNotHaveFocus = static_cast<int32_t>(0x65),
    __E_InvalidTexture = static_cast<int32_t>(0x66),
    __E_IsNotSceneApplication = static_cast<int32_t>(0x67),
    __E_TextureIsOnWrongDevice = static_cast<int32_t>(0x68),
    __E_TextureUsesUnsupportedFormat = static_cast<int32_t>(0x69),
    __E_SharedTexturesNotSupported = static_cast<int32_t>(0x6a),
    __E_IndexOutOfRange = static_cast<int32_t>(0x6b),
    __E_AlreadySubmitted = static_cast<int32_t>(0x6c),
    __E_InvalidBounds = static_cast<int32_t>(0x6d),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRCompositorError_Unwrapped() const noexcept {
    return static_cast<__EVRCompositorError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRCompositorError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRCompositorError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AlreadySubmitted value: static_cast<int32_t>(0x6c)
  static ::OVR::OpenVR::EVRCompositorError const AlreadySubmitted;

  /// @brief Field DoNotHaveFocus value: static_cast<int32_t>(0x65)
  static ::OVR::OpenVR::EVRCompositorError const DoNotHaveFocus;

  /// @brief Field IncompatibleVersion value: static_cast<int32_t>(0x64)
  static ::OVR::OpenVR::EVRCompositorError const IncompatibleVersion;

  /// @brief Field IndexOutOfRange value: static_cast<int32_t>(0x6b)
  static ::OVR::OpenVR::EVRCompositorError const IndexOutOfRange;

  /// @brief Field InvalidBounds value: static_cast<int32_t>(0x6d)
  static ::OVR::OpenVR::EVRCompositorError const InvalidBounds;

  /// @brief Field InvalidTexture value: static_cast<int32_t>(0x66)
  static ::OVR::OpenVR::EVRCompositorError const InvalidTexture;

  /// @brief Field IsNotSceneApplication value: static_cast<int32_t>(0x67)
  static ::OVR::OpenVR::EVRCompositorError const IsNotSceneApplication;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRCompositorError const None;

  /// @brief Field RequestFailed value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRCompositorError const RequestFailed;

  /// @brief Field SharedTexturesNotSupported value: static_cast<int32_t>(0x6a)
  static ::OVR::OpenVR::EVRCompositorError const SharedTexturesNotSupported;

  /// @brief Field TextureIsOnWrongDevice value: static_cast<int32_t>(0x68)
  static ::OVR::OpenVR::EVRCompositorError const TextureIsOnWrongDevice;

  /// @brief Field TextureUsesUnsupportedFormat value: static_cast<int32_t>(0x69)
  static ::OVR::OpenVR::EVRCompositorError const TextureUsesUnsupportedFormat;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRCompositorError, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRCompositorError, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRCompositorError, "OVR.OpenVR", "EVRCompositorError");
