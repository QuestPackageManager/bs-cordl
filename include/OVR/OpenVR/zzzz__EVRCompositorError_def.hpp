#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRCompositorError.hpp"
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
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRCompositorError
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

  /// @brief Field AlreadySubmitted value: I32(108)
  static ::OVR::OpenVR::EVRCompositorError const AlreadySubmitted;

  /// @brief Field DoNotHaveFocus value: I32(101)
  static ::OVR::OpenVR::EVRCompositorError const DoNotHaveFocus;

  /// @brief Field IncompatibleVersion value: I32(100)
  static ::OVR::OpenVR::EVRCompositorError const IncompatibleVersion;

  /// @brief Field IndexOutOfRange value: I32(107)
  static ::OVR::OpenVR::EVRCompositorError const IndexOutOfRange;

  /// @brief Field InvalidBounds value: I32(109)
  static ::OVR::OpenVR::EVRCompositorError const InvalidBounds;

  /// @brief Field InvalidTexture value: I32(102)
  static ::OVR::OpenVR::EVRCompositorError const InvalidTexture;

  /// @brief Field IsNotSceneApplication value: I32(103)
  static ::OVR::OpenVR::EVRCompositorError const IsNotSceneApplication;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::EVRCompositorError const None;

  /// @brief Field RequestFailed value: I32(1)
  static ::OVR::OpenVR::EVRCompositorError const RequestFailed;

  /// @brief Field SharedTexturesNotSupported value: I32(106)
  static ::OVR::OpenVR::EVRCompositorError const SharedTexturesNotSupported;

  /// @brief Field TextureIsOnWrongDevice value: I32(104)
  static ::OVR::OpenVR::EVRCompositorError const TextureIsOnWrongDevice;

  /// @brief Field TextureUsesUnsupportedFormat value: I32(105)
  static ::OVR::OpenVR::EVRCompositorError const TextureUsesUnsupportedFormat;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8940 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRCompositorError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRCompositorError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRCompositorError, "OVR.OpenVR", "EVRCompositorError");
