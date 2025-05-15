#pragma once
// IWYU pragma private; include "UnityEngine/RaycastCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastCommand)
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
struct RaycastCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RaycastCommand);
// Dependencies UnityEngine.PhysicsScene, UnityEngine.QueryParameters, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RaycastCommand
struct CORDL_TYPE RaycastCommand {
public:
  // Declarations
  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::Vector3 direction;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  __declspec(property(get = get_from, put = set_from)) ::UnityEngine::Vector3 from;

  __declspec(property(get = get_layerMask, put = set_layerMask)) int32_t layerMask;

  __declspec(property(get = get_maxHits, put = set_maxHits)) int32_t maxHits;

  __declspec(property(get = get_physicsScene, put = set_physicsScene)) ::UnityEngine::PhysicsScene physicsScene;

  /// @brief Method ScheduleBatch, addr 0x49114fc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleBatch, addr 0x491127c, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                       ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleRaycastBatch, addr 0x4911460, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleRaycastBatch(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                              int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits);

  /// @brief Method ScheduleRaycastBatch_Injected, addr 0x4911520, size 0x8c, virtual false, abstract: false, final false
  static inline void ScheduleRaycastBatch_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands, int32_t commandLen,
                                                   ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits, ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x49115ac, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask, int32_t maxHits);

  /// @brief Method .ctor, addr 0x4911158, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction, ::UnityEngine::QueryParameters queryParameters, float_t distance);

  /// @brief Method .ctor, addr 0x4911674, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask, int32_t maxHits);

  /// @brief Method .ctor, addr 0x4911210, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction, ::UnityEngine::QueryParameters queryParameters, float_t distance);

  /// @brief Method get_direction, addr 0x4911244, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method get_distance, addr 0x491126c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_from, addr 0x491122c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_from();

  /// @brief Method get_layerMask, addr 0x49116a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layerMask();

  /// @brief Method get_maxHits, addr 0x491169c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxHits();

  /// @brief Method get_physicsScene, addr 0x491125c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// @brief Method set_direction, addr 0x4911250, size 0xc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method set_distance, addr 0x4911274, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  /// @brief Method set_from, addr 0x4911238, size 0xc, virtual false, abstract: false, final false
  inline void set_from(::UnityEngine::Vector3 value);

  /// @brief Method set_layerMask, addr 0x491166c, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(int32_t value);

  /// @brief Method set_maxHits, addr 0x49116a4, size 0x4, virtual false, abstract: false, final false
  inline void set_maxHits(int32_t value);

  /// @brief Method set_physicsScene, addr 0x4911264, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastCommand();

  // Ctor Parameters [CppParam { name: "_from_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_direction_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }, CppParam { name:
  // "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters", modifiers: "", def_value: None }]
  constexpr RaycastCommand(::UnityEngine::Vector3 _from_k__BackingField, ::UnityEngine::Vector3 _direction_k__BackingField, ::UnityEngine::PhysicsScene _physicsScene_k__BackingField,
                           float_t _distance_k__BackingField, ::UnityEngine::QueryParameters queryParameters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15781 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <from>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _from_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 _direction_k__BackingField;

  /// @brief Field <physicsScene>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t _distance_k__BackingField;

  /// @brief Field queryParameters, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::QueryParameters queryParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RaycastCommand, _from_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _direction_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _physicsScene_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _distance_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, queryParameters) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RaycastCommand, 0x30>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastCommand, "UnityEngine", "RaycastCommand");
