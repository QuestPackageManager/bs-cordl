#pragma once
// IWYU pragma private; include "UnityEngine/QueryParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryParameters)
namespace UnityEngine {
struct QueryTriggerInteraction;
}
// Forward declare root types
namespace UnityEngine {
struct QueryParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::QueryParameters);
// Dependencies UnityEngine.QueryTriggerInteraction
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.QueryParameters
struct CORDL_TYPE QueryParameters {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4911004, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t layerMask, bool hitMultipleFaces, ::UnityEngine::QueryTriggerInteraction hitTriggers, bool hitBackfaces);

  /// @brief Method get_Default, addr 0x4911020, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::QueryParameters get_Default();

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryParameters();

  // Ctor Parameters [CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hitMultipleFaces", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "hitTriggers", ty: "::UnityEngine::QueryTriggerInteraction", modifiers: "", def_value: None }, CppParam { name: "hitBackfaces", ty: "bool", modifiers: "", def_value: None }]
  constexpr QueryParameters(int32_t layerMask, bool hitMultipleFaces, ::UnityEngine::QueryTriggerInteraction hitTriggers, bool hitBackfaces) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15779 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field layerMask, offset: 0x0, size: 0x4, def value: None
  int32_t layerMask;

  /// @brief Field hitMultipleFaces, offset: 0x4, size: 0x1, def value: None
  bool hitMultipleFaces;

  /// @brief Field hitTriggers, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::QueryTriggerInteraction hitTriggers;

  /// @brief Field hitBackfaces, offset: 0xc, size: 0x1, def value: None
  bool hitBackfaces;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::QueryParameters, layerMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::QueryParameters, hitMultipleFaces) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::QueryParameters, hitTriggers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::QueryParameters, hitBackfaces) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::QueryParameters, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::QueryParameters, "UnityEngine", "QueryParameters");
