#pragma once
// IWYU pragma private; include "UnityEngine/OverlapSphereCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OverlapSphereCommand)
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
struct OverlapSphereCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::OverlapSphereCommand);
// Dependencies UnityEngine.PhysicsScene, UnityEngine.QueryParameters, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.OverlapSphereCommand
struct CORDL_TYPE OverlapSphereCommand {
public:
  // Declarations
  __declspec(property(get = get_physicsScene, put = set_physicsScene)) ::UnityEngine::PhysicsScene physicsScene;

  __declspec(property(get = get_point, put = set_point)) ::UnityEngine::Vector3 point;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  /// @brief Method ScheduleBatch, addr 0x49128cc, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                       ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleOverlapSphereBatch, addr 0x4912ab0, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleOverlapSphereBatch(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                                    int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits);

  /// @brief Method ScheduleOverlapSphereBatch_Injected, addr 0x4912b4c, size 0x8c, virtual false, abstract: false, final false
  static inline void ScheduleOverlapSphereBatch_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                         int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits,
                                                         ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x491287c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point, float_t radius, ::UnityEngine::QueryParameters queryParameters);

  /// @brief Method .ctor, addr 0x49127e4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 point, float_t radius, ::UnityEngine::QueryParameters queryParameters);

  /// @brief Method get_physicsScene, addr 0x49128bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// @brief Method get_point, addr 0x4912894, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method get_radius, addr 0x49128ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_physicsScene, addr 0x49128c4, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  /// @brief Method set_point, addr 0x49128a0, size 0xc, virtual false, abstract: false, final false
  inline void set_point(::UnityEngine::Vector3 value);

  /// @brief Method set_radius, addr 0x49128b4, size 0x8, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OverlapSphereCommand();

  // Ctor Parameters [CppParam { name: "_point_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }, CppParam { name: "queryParameters", ty:
  // "::UnityEngine::QueryParameters", modifiers: "", def_value: None }]
  constexpr OverlapSphereCommand(::UnityEngine::Vector3 _point_k__BackingField, float_t _radius_k__BackingField, ::UnityEngine::PhysicsScene _physicsScene_k__BackingField,
                                 ::UnityEngine::QueryParameters queryParameters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field <point>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _point_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0xc, size: 0x4, def value: None
  float_t _radius_k__BackingField;

  /// @brief Field <physicsScene>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief Field queryParameters, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::QueryParameters queryParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::OverlapSphereCommand, _point_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapSphereCommand, _radius_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapSphereCommand, _physicsScene_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapSphereCommand, queryParameters) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::OverlapSphereCommand, 0x24>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::OverlapSphereCommand, "UnityEngine", "OverlapSphereCommand");
