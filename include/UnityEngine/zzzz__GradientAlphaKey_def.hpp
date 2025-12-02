#pragma once
// IWYU pragma private; include "UnityEngine/GradientAlphaKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GradientAlphaKey)
// Forward declare root types
namespace UnityEngine {
struct GradientAlphaKey;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GradientAlphaKey);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GradientAlphaKey
struct CORDL_TYPE GradientAlphaKey {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x68986b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t alpha, float_t time);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientAlphaKey();

  // Ctor Parameters [CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GradientAlphaKey(float_t alpha, float_t time) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10226 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field alpha, offset: 0x0, size: 0x4, def value: None
  float_t alpha;

  /// @brief Field time, offset: 0x4, size: 0x4, def value: None
  float_t time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GradientAlphaKey, alpha) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GradientAlphaKey, time) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GradientAlphaKey, 0x8>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientAlphaKey, "UnityEngine", "GradientAlphaKey");
