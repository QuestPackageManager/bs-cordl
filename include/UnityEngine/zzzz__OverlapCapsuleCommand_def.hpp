#pragma once
// IWYU pragma private; include "UnityEngine/OverlapCapsuleCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OverlapCapsuleCommand)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobsUtility_JobScheduleParameters;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct ColliderHit;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct QueryParameters;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct OverlapCapsuleCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::OverlapCapsuleCommand);
// Dependencies UnityEngine.PhysicsScene, UnityEngine.QueryParameters, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.OverlapCapsuleCommand
struct CORDL_TYPE OverlapCapsuleCommand {
public:
  // Declarations
  __declspec(property(get = get_physicsScene, put = set_physicsScene)) ::UnityEngine::PhysicsScene physicsScene;

  __declspec(property(get = get_point0, put = set_point0)) ::UnityEngine::Vector3 point0;

  __declspec(property(get = get_point1, put = set_point1)) ::UnityEngine::Vector3 point1;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  /// @brief Method ScheduleBatch, addr 0x4913164, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapCapsuleCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                       ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleOverlapCapsuleBatch, addr 0x4913348, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleOverlapCapsuleBatch(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                                     int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits);

  /// @brief Method ScheduleOverlapCapsuleBatch_Injected, addr 0x49133e4, size 0x8c, virtual false, abstract: false, final false
  static inline void ScheduleOverlapCapsuleBatch_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                          int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits,
                                                          ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x49130f8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::UnityEngine::QueryParameters queryParameters);

  /// @brief Method .ctor, addr 0x4913040, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::UnityEngine::QueryParameters queryParameters);

  /// @brief Method get_physicsScene, addr 0x4913154, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// @brief Method get_point0, addr 0x4913114, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point0();

  /// @brief Method get_point1, addr 0x491312c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point1();

  /// @brief Method get_radius, addr 0x4913144, size 0x8, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_physicsScene, addr 0x491315c, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  /// @brief Method set_point0, addr 0x4913120, size 0xc, virtual false, abstract: false, final false
  inline void set_point0(::UnityEngine::Vector3 value);

  /// @brief Method set_point1, addr 0x4913138, size 0xc, virtual false, abstract: false, final false
  inline void set_point1(::UnityEngine::Vector3 value);

  /// @brief Method set_radius, addr 0x491314c, size 0x8, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OverlapCapsuleCommand();

  // Ctor Parameters [CppParam { name: "_point0_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_point1_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }, CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters", modifiers: "",
  // def_value: None }]
  constexpr OverlapCapsuleCommand(::UnityEngine::Vector3 _point0_k__BackingField, ::UnityEngine::Vector3 _point1_k__BackingField, float_t _radius_k__BackingField,
                                  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField, ::UnityEngine::QueryParameters queryParameters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <point0>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _point0_k__BackingField;

  /// @brief Field <point1>k__BackingField, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 _point1_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t _radius_k__BackingField;

  /// @brief Field <physicsScene>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief Field queryParameters, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::QueryParameters queryParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::OverlapCapsuleCommand, _point0_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapCapsuleCommand, _point1_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapCapsuleCommand, _radius_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapCapsuleCommand, _physicsScene_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapCapsuleCommand, queryParameters) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::OverlapCapsuleCommand, 0x30>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::OverlapCapsuleCommand, "UnityEngine", "OverlapCapsuleCommand");
