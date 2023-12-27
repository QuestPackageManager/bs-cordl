#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorUpdateMode)
// Forward declare root types
namespace UnityEngine {
struct AnimatorUpdateMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorUpdateMode);
// Type: UnityEngine::AnimatorUpdateMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14877))
// CS Name: ::UnityEngine::AnimatorUpdateMode
struct CORDL_TYPE AnimatorUpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimatorUpdateMode_Unwrapped
  enum struct __AnimatorUpdateMode_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_AnimatePhysics = static_cast<int32_t>(0x1),
    __E_UnscaledTime = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimatorUpdateMode_Unwrapped() const noexcept {
    return static_cast<__AnimatorUpdateMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimatorUpdateMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorUpdateMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AnimatorUpdateMode const Normal;

  /// @brief Field AnimatePhysics value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AnimatorUpdateMode const AnimatePhysics;

  /// @brief Field UnscaledTime value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AnimatorUpdateMode const UnscaledTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorUpdateMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorUpdateMode, "UnityEngine", "AnimatorUpdateMode");
