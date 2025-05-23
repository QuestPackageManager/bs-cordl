#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/StencilOp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StencilOp)
// Forward declare root types
namespace UnityEngine::Rendering {
struct StencilOp;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::StencilOp);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.StencilOp
struct CORDL_TYPE StencilOp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StencilOp_Unwrapped
  enum struct __StencilOp_Unwrapped : int32_t {
    __E_Keep = static_cast<int32_t>(0x0),
    __E_Zero = static_cast<int32_t>(0x1),
    __E_Replace = static_cast<int32_t>(0x2),
    __E_IncrementSaturate = static_cast<int32_t>(0x3),
    __E_DecrementSaturate = static_cast<int32_t>(0x4),
    __E_Invert = static_cast<int32_t>(0x5),
    __E_IncrementWrap = static_cast<int32_t>(0x6),
    __E_DecrementWrap = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StencilOp_Unwrapped() const noexcept {
    return static_cast<__StencilOp_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilOp();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StencilOp(int32_t value__) noexcept;

  /// @brief Field DecrementSaturate value: I32(4)
  static ::UnityEngine::Rendering::StencilOp const DecrementSaturate;

  /// @brief Field DecrementWrap value: I32(7)
  static ::UnityEngine::Rendering::StencilOp const DecrementWrap;

  /// @brief Field IncrementSaturate value: I32(3)
  static ::UnityEngine::Rendering::StencilOp const IncrementSaturate;

  /// @brief Field IncrementWrap value: I32(6)
  static ::UnityEngine::Rendering::StencilOp const IncrementWrap;

  /// @brief Field Invert value: I32(5)
  static ::UnityEngine::Rendering::StencilOp const Invert;

  /// @brief Field Keep value: I32(0)
  static ::UnityEngine::Rendering::StencilOp const Keep;

  /// @brief Field Replace value: I32(2)
  static ::UnityEngine::Rendering::StencilOp const Replace;

  /// @brief Field Zero value: I32(1)
  static ::UnityEngine::Rendering::StencilOp const Zero;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11189 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::StencilOp, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::StencilOp, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::StencilOp, "UnityEngine.Rendering", "StencilOp");
