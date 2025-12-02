#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/StencilUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StencilUsage)
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
struct StencilUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::StencilUsage);
// Dependencies
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.StencilUsage
struct CORDL_TYPE StencilUsage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StencilUsage_Unwrapped
  enum struct __StencilUsage_Unwrapped : int32_t {
    __E_UserMask = static_cast<int32_t>(0xf),
    __E_StencilLight = static_cast<int32_t>(0x10),
    __E_MaterialMask = static_cast<int32_t>(0x60),
    __E_MaterialUnlit = static_cast<int32_t>(0x0),
    __E_MaterialLit = static_cast<int32_t>(0x20),
    __E_MaterialSimpleLit = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StencilUsage_Unwrapped() const noexcept {
    return static_cast<__StencilUsage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilUsage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StencilUsage(int32_t value__) noexcept;

  /// @brief Field MaterialLit value: I32(32)
  static ::UnityEngine::Rendering::Universal::Internal::StencilUsage const MaterialLit;

  /// @brief Field MaterialMask value: I32(96)
  static ::UnityEngine::Rendering::Universal::Internal::StencilUsage const MaterialMask;

  /// @brief Field MaterialSimpleLit value: I32(64)
  static ::UnityEngine::Rendering::Universal::Internal::StencilUsage const MaterialSimpleLit;

  /// @brief Field MaterialUnlit value: I32(0)
  static ::UnityEngine::Rendering::Universal::Internal::StencilUsage const MaterialUnlit;

  /// @brief Field StencilLight value: I32(16)
  static ::UnityEngine::Rendering::Universal::Internal::StencilUsage const StencilLight;

  /// @brief Field UserMask value: I32(15)
  static ::UnityEngine::Rendering::Universal::Internal::StencilUsage const UserMask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13080 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::StencilUsage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::StencilUsage, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::StencilUsage, "UnityEngine.Rendering.Universal.Internal", "StencilUsage");
