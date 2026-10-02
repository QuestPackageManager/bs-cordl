#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsWorldDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsWorldDefinition)
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorldDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, "UnityEngine.LowLevelPhysics2D", "PhysicsWorldDefinition");
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsWorld::DrawColors, UnityEngine.LowLevelPhysics2D.PhysicsWorld::DrawContactType, UnityEngine.LowLevelPhysics2D.PhysicsWorld::DrawFillOptions,
// UnityEngine.LowLevelPhysics2D.PhysicsWorld::DrawOptions, UnityEngine.LowLevelPhysics2D.PhysicsWorld::SimulationType, UnityEngine.LowLevelPhysics2D.PhysicsWorld::TransformPlane,
// UnityEngine.LowLevelPhysics2D.PhysicsWorld::TransformWriteMode, UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldDefinition
struct CORDL_TYPE PhysicsWorldDefinition {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6fd818c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fd1768, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(bool useSettings);

  /// @brief Method get_defaultDefinition, addr 0x6fd81c4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition get_defaultDefinition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorldDefinition();

  // Ctor Parameters [CppParam { name: "m_Gravity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SimulationType", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SimulationSubSteps", ty: "int32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_SimulationWorkers", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TransformWriteMode", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TransformPlane", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TransformTweening", ty: "bool", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_SleepingAllowed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ContinuousAllowed", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_ContactFilterCallbacks", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PreSolveCallbacks", ty: "bool",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AutoBodyUpdateCallbacks", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_AutoContactCallbacks", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AutoTriggerCallbacks", ty: "bool", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_AutoJointThresholdCallbacks", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BounceThreshold", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_ContactHitEventThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ContactFrequency", ty: "float_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "m_ContactDamping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ContactSpeed", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ContactRecycleDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_MaximumLinearSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawOptions", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawFillOptions", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_DrawContactType", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_DrawThickness", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawFillAlpha", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "m_DrawPointScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawNormalScale", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_DrawImpulseScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawCapacity", ty: "int32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_DrawColors", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorldDefinition(::UnityEngine::Vector2 m_Gravity, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType m_SimulationType, int32_t m_SimulationSubSteps,
                                   int32_t m_SimulationWorkers, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode m_TransformWriteMode,
                                   ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane m_TransformPlane, bool m_TransformTweening, bool m_SleepingAllowed, bool m_ContinuousAllowed,
                                   bool m_ContactFilterCallbacks, bool m_PreSolveCallbacks, bool m_AutoBodyUpdateCallbacks, bool m_AutoContactCallbacks, bool m_AutoTriggerCallbacks,
                                   bool m_AutoJointThresholdCallbacks, float_t m_BounceThreshold, float_t m_ContactHitEventThreshold, float_t m_ContactFrequency, float_t m_ContactDamping,
                                   float_t m_ContactSpeed, float_t m_ContactRecycleDistance, float_t m_MaximumLinearSpeed, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions m_DrawOptions,
                                   ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions m_DrawFillOptions, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType m_DrawContactType,
                                   float_t m_DrawThickness, float_t m_DrawFillAlpha, float_t m_DrawPointScale, float_t m_DrawNormalScale, float_t m_DrawImpulseScale, int32_t m_DrawCapacity,
                                   ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors m_DrawColors) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21573 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x338 };

  /// [SerializeField]
  /// @brief Field m_Gravity, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Gravity;

  /// [FormerlySerializedAs("m_SimulationMode")]
  /// [SerializeField]
  /// @brief Field m_SimulationType, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType m_SimulationType;

  /// [Min(1)]
  /// [SerializeField]
  /// @brief Field m_SimulationSubSteps, offset: 0xc, size: 0x4, def value: None
  int32_t m_SimulationSubSteps;

  /// [Range(1, 64)]
  /// [SerializeField]
  /// @brief Field m_SimulationWorkers, offset: 0x10, size: 0x4, def value: None
  int32_t m_SimulationWorkers;

  /// [SerializeField]
  /// @brief Field m_TransformWriteMode, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode m_TransformWriteMode;

  /// [SerializeField]
  /// @brief Field m_TransformPlane, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane m_TransformPlane;

  /// [SerializeField]
  /// @brief Field m_TransformTweening, offset: 0x1c, size: 0x1, def value: None
  bool m_TransformTweening;

  /// [SerializeField]
  /// @brief Field m_SleepingAllowed, offset: 0x1d, size: 0x1, def value: None
  bool m_SleepingAllowed;

  /// [SerializeField]
  /// @brief Field m_ContinuousAllowed, offset: 0x1e, size: 0x1, def value: None
  bool m_ContinuousAllowed;

  /// [SerializeField]
  /// @brief Field m_ContactFilterCallbacks, offset: 0x1f, size: 0x1, def value: None
  bool m_ContactFilterCallbacks;

  /// [SerializeField]
  /// @brief Field m_PreSolveCallbacks, offset: 0x20, size: 0x1, def value: None
  bool m_PreSolveCallbacks;

  /// [SerializeField]
  /// @brief Field m_AutoBodyUpdateCallbacks, offset: 0x21, size: 0x1, def value: None
  bool m_AutoBodyUpdateCallbacks;

  /// [SerializeField]
  /// @brief Field m_AutoContactCallbacks, offset: 0x22, size: 0x1, def value: None
  bool m_AutoContactCallbacks;

  /// [SerializeField]
  /// @brief Field m_AutoTriggerCallbacks, offset: 0x23, size: 0x1, def value: None
  bool m_AutoTriggerCallbacks;

  /// [SerializeField]
  /// @brief Field m_AutoJointThresholdCallbacks, offset: 0x24, size: 0x1, def value: None
  bool m_AutoJointThresholdCallbacks;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_BounceThreshold, offset: 0x28, size: 0x4, def value: None
  float_t m_BounceThreshold;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_ContactHitEventThreshold, offset: 0x2c, size: 0x4, def value: None
  float_t m_ContactHitEventThreshold;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_ContactFrequency, offset: 0x30, size: 0x4, def value: None
  float_t m_ContactFrequency;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_ContactDamping, offset: 0x34, size: 0x4, def value: None
  float_t m_ContactDamping;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_ContactSpeed, offset: 0x38, size: 0x4, def value: None
  float_t m_ContactSpeed;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_ContactRecycleDistance, offset: 0x3c, size: 0x4, def value: None
  float_t m_ContactRecycleDistance;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_MaximumLinearSpeed, offset: 0x40, size: 0x4, def value: None
  float_t m_MaximumLinearSpeed;

  /// [SerializeField]
  /// @brief Field m_DrawOptions, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions m_DrawOptions;

  /// [SerializeField]
  /// @brief Field m_DrawFillOptions, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions m_DrawFillOptions;

  /// [SerializeField]
  /// @brief Field m_DrawContactType, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType m_DrawContactType;

  /// [Range(1, 5)]
  /// [SerializeField]
  /// @brief Field m_DrawThickness, offset: 0x50, size: 0x4, def value: None
  float_t m_DrawThickness;

  /// [SerializeField]
  /// [Range(0, 1)]
  /// @brief Field m_DrawFillAlpha, offset: 0x54, size: 0x4, def value: None
  float_t m_DrawFillAlpha;

  /// [SerializeField]
  /// [Range(0.001, 10)]
  /// @brief Field m_DrawPointScale, offset: 0x58, size: 0x4, def value: None
  float_t m_DrawPointScale;

  /// [SerializeField]
  /// [Range(0.001, 10)]
  /// @brief Field m_DrawNormalScale, offset: 0x5c, size: 0x4, def value: None
  float_t m_DrawNormalScale;

  /// [SerializeField]
  /// [Range(0.001, 10)]
  /// @brief Field m_DrawImpulseScale, offset: 0x60, size: 0x4, def value: None
  float_t m_DrawImpulseScale;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_DrawCapacity, offset: 0x64, size: 0x4, def value: None
  int32_t m_DrawCapacity;

  /// [SerializeField]
  /// @brief Field m_DrawColors, offset: 0x68, size: 0x2d0, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors m_DrawColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_Gravity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_SimulationType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_SimulationSubSteps) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_SimulationWorkers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_TransformWriteMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_TransformPlane) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_TransformTweening) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_SleepingAllowed) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_ContinuousAllowed) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_ContactFilterCallbacks) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_PreSolveCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_AutoBodyUpdateCallbacks) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_AutoContactCallbacks) == 0x22, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_AutoTriggerCallbacks) == 0x23, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_AutoJointThresholdCallbacks) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_BounceThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_ContactHitEventThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_ContactFrequency) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_ContactDamping) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_ContactSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_ContactRecycleDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_MaximumLinearSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawOptions) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawFillOptions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawContactType) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawThickness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawFillAlpha) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawPointScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawNormalScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawImpulseScale) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawCapacity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition, m_DrawColors) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition) == 0x338, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
