#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsChainDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsChainDefinition)
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsChainDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition, "UnityEngine.LowLevelPhysics2D", "PhysicsChainDefinition");
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsShape::ContactFilter, UnityEngine.LowLevelPhysics2D.PhysicsShape::SurfaceMaterial
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsChainDefinition
struct CORDL_TYPE PhysicsChainDefinition {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6fd60a4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fd18f0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool useSettings);

  /// @brief Method get_defaultDefinition, addr 0x6fd60d4, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition get_defaultDefinition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsChainDefinition();

  // Ctor Parameters [CppParam { name: "m_SurfaceMaterial", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_ContactFilter", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IsLoop", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_TriggerEvents", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsChainDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial m_SurfaceMaterial, ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter m_ContactFilter,
                                   bool m_IsLoop, bool m_TriggerEvents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21547 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// [SerializeField]
  /// @brief Field m_SurfaceMaterial, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial m_SurfaceMaterial;

  /// [SerializeField]
  /// @brief Field m_ContactFilter, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter m_ContactFilter;

  /// [SerializeField]
  /// @brief Field m_IsLoop, offset: 0x38, size: 0x1, def value: None
  bool m_IsLoop;

  /// [SerializeField]
  /// @brief Field m_TriggerEvents, offset: 0x39, size: 0x1, def value: None
  bool m_TriggerEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition, m_SurfaceMaterial) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition, m_ContactFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition, m_IsLoop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition, m_TriggerEvents) == 0x39, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition) == 0x40, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
