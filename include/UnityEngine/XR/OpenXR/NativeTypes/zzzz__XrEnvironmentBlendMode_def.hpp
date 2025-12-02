#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrEnvironmentBlendMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrEnvironmentBlendMode)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrEnvironmentBlendMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrEnvironmentBlendMode
struct CORDL_TYPE XrEnvironmentBlendMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrEnvironmentBlendMode_Unwrapped
  enum struct __XrEnvironmentBlendMode_Unwrapped : int32_t {
    __E_Opaque = static_cast<int32_t>(0x1),
    __E_Additive = static_cast<int32_t>(0x2),
    __E_AlphaBlend = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrEnvironmentBlendMode_Unwrapped() const noexcept {
    return static_cast<__XrEnvironmentBlendMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrEnvironmentBlendMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XrEnvironmentBlendMode(int32_t value__) noexcept;

  /// @brief Field Additive value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode const Additive;

  /// @brief Field AlphaBlend value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode const AlphaBlend;

  /// @brief Field Opaque value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode const Opaque;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18475 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, "UnityEngine.XR.OpenXR.NativeTypes", "XrEnvironmentBlendMode");
