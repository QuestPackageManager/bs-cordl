#pragma once
// IWYU pragma private; include "UnityEngine/SpherecastCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpherecastCommand)
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
struct PhysicsScene;
}
namespace UnityEngine {
struct QueryParameters;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct SpherecastCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpherecastCommand);
// Dependencies UnityEngine.PhysicsScene, UnityEngine.QueryParameters, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SpherecastCommand
struct CORDL_TYPE SpherecastCommand {
public:
  // Declarations
  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::Vector3 direction;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  __declspec(property(get = get_layerMask, put = set_layerMask)) int32_t layerMask;

  __declspec(property(get = get_origin, put = set_origin)) ::UnityEngine::Vector3 origin;

  __declspec(property(get = get_physicsScene, put = set_physicsScene)) ::UnityEngine::PhysicsScene physicsScene;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  /// @brief Method ScheduleBatch, addr 0x4911690, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleBatch, addr 0x4911410, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                       ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleSpherecastBatch, addr 0x49115f4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleSpherecastBatch(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                                 int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits);

  /// @brief Method ScheduleSpherecastBatch_Injected, addr 0x49116b4, size 0x8c, virtual false, abstract: false, final false
  static inline void ScheduleSpherecastBatch_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands, int32_t commandLen,
                                                      ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits, ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x4911740, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method .ctor, addr 0x49112d0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::UnityEngine::QueryParameters queryParameters, float_t distance);

  /// @brief Method .ctor, addr 0x4911808, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method .ctor, addr 0x4911390, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::UnityEngine::QueryParameters queryParameters,
                    float_t distance);

  /// @brief Method get_direction, addr 0x49113d8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method get_distance, addr 0x49113f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_layerMask, addr 0x491182c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layerMask();

  /// @brief Method get_origin, addr 0x49113b0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_origin();

  /// @brief Method get_physicsScene, addr 0x4911400, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// @brief Method get_radius, addr 0x49113c8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_direction, addr 0x49113e4, size 0xc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method set_distance, addr 0x49113f8, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  /// @brief Method set_layerMask, addr 0x4911800, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(int32_t value);

  /// @brief Method set_origin, addr 0x49113bc, size 0xc, virtual false, abstract: false, final false
  inline void set_origin(::UnityEngine::Vector3 value);

  /// @brief Method set_physicsScene, addr 0x4911408, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  /// @brief Method set_radius, addr 0x49113d0, size 0x8, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpherecastCommand();

  // Ctor Parameters [CppParam { name: "_origin_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "_direction_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }, CppParam { name: "queryParameters", ty:
  // "::UnityEngine::QueryParameters", modifiers: "", def_value: None }]
  constexpr SpherecastCommand(::UnityEngine::Vector3 _origin_k__BackingField, float_t _radius_k__BackingField, ::UnityEngine::Vector3 _direction_k__BackingField, float_t _distance_k__BackingField,
                              ::UnityEngine::PhysicsScene _physicsScene_k__BackingField, ::UnityEngine::QueryParameters queryParameters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15782 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  /// @brief Field <origin>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _origin_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0xc, size: 0x4, def value: None
  float_t _radius_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 _direction_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t _distance_k__BackingField;

  /// @brief Field <physicsScene>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief Field queryParameters, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::QueryParameters queryParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpherecastCommand, _origin_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, _radius_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, _direction_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, _distance_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, _physicsScene_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, queryParameters) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SpherecastCommand, 0x34>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpherecastCommand, "UnityEngine", "SpherecastCommand");
