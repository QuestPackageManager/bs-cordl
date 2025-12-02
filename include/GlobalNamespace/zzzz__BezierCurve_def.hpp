#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BezierCurve)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BezierCurve;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BezierCurve);
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BezierCurve
struct CORDL_TYPE BezierCurve {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3188f5c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierCurve();

  // Ctor Parameters [CppParam { name: "p0", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "p1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "p2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "p3", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr BezierCurve(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21448 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field p0, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 p0;

  /// @brief Field p1, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 p1;

  /// @brief Field p2, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 p2;

  /// @brief Field p3, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 p3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BezierCurve, p0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierCurve, p1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierCurve, p2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierCurve, p3) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierCurve, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierCurve, "", "BezierCurve");
