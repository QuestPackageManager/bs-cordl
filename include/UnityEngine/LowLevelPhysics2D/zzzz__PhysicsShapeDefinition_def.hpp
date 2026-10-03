#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsShapeDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsShapeDefinition)
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShapeDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, "UnityEngine.LowLevelPhysics2D", "PhysicsShapeDefinition");
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsShape::ContactFilter, UnityEngine.LowLevelPhysics2D.PhysicsShape::MoverData, UnityEngine.LowLevelPhysics2D.PhysicsShape::SurfaceMaterial
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsShapeDefinition
struct CORDL_TYPE PhysicsShapeDefinition {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6fda074, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fd1870, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(bool useSettings);

  /// @brief Method get_defaultDefinition, addr 0x6fda0a4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition get_defaultDefinition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsShapeDefinition();

  // Ctor Parameters [CppParam { name: "contactFilter", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "surfaceMaterial", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Density", ty: "float_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "m_IsTrigger", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TriggerEvents", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_ContactEvents", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_HitEvents", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_ContactFilterCallbacks", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PreSolveCallbacks", ty: "bool",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartStaticContacts", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartMassUpdate", ty:
  // "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "moverData", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData", modifiers: "", def_value: None, comment:
  // None }]
  constexpr PhysicsShapeDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter contactFilter, ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial surfaceMaterial,
                                   float_t m_Density, bool m_IsTrigger, bool m_TriggerEvents, bool m_ContactEvents, bool m_HitEvents, bool m_ContactFilterCallbacks, bool m_PreSolveCallbacks,
                                   bool m_StartStaticContacts, bool m_StartMassUpdate, ::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData moverData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field contactFilter, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter contactFilter;

  /// @brief Field surfaceMaterial, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial surfaceMaterial;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_Density, offset: 0x38, size: 0x4, def value: None
  float_t m_Density;

  /// [SerializeField]
  /// @brief Field m_IsTrigger, offset: 0x3c, size: 0x1, def value: None
  bool m_IsTrigger;

  /// [SerializeField]
  /// @brief Field m_TriggerEvents, offset: 0x3d, size: 0x1, def value: None
  bool m_TriggerEvents;

  /// [SerializeField]
  /// @brief Field m_ContactEvents, offset: 0x3e, size: 0x1, def value: None
  bool m_ContactEvents;

  /// [SerializeField]
  /// @brief Field m_HitEvents, offset: 0x3f, size: 0x1, def value: None
  bool m_HitEvents;

  /// [SerializeField]
  /// @brief Field m_ContactFilterCallbacks, offset: 0x40, size: 0x1, def value: None
  bool m_ContactFilterCallbacks;

  /// [SerializeField]
  /// @brief Field m_PreSolveCallbacks, offset: 0x41, size: 0x1, def value: None
  bool m_PreSolveCallbacks;

  /// [SerializeField]
  /// @brief Field m_StartStaticContacts, offset: 0x42, size: 0x1, def value: None
  bool m_StartStaticContacts;

  /// [SerializeField]
  /// @brief Field m_StartMassUpdate, offset: 0x43, size: 0x1, def value: None
  bool m_StartMassUpdate;

  /// @brief Field moverData, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData moverData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, contactFilter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, surfaceMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_Density) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_IsTrigger) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_TriggerEvents) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_ContactEvents) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_HitEvents) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_ContactFilterCallbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_PreSolveCallbacks) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_StartStaticContacts) == 0x42, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, m_StartMassUpdate) == 0x43, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition, moverData) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition) == 0x50, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
