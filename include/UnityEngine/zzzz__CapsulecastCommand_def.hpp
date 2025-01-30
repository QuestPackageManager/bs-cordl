#pragma once
// IWYU pragma private; include "UnityEngine/CapsulecastCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CapsulecastCommand)
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
struct CapsulecastCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CapsulecastCommand);
// Dependencies UnityEngine.PhysicsScene, UnityEngine.QueryParameters, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CapsulecastCommand
struct CORDL_TYPE CapsulecastCommand {
public:
  // Declarations
  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::Vector3 direction;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  __declspec(property(get = get_layerMask, put = set_layerMask)) int32_t layerMask;

  __declspec(property(get = get_physicsScene, put = set_physicsScene)) ::UnityEngine::PhysicsScene physicsScene;

  __declspec(property(get = get_point1, put = set_point1)) ::UnityEngine::Vector3 point1;

  __declspec(property(get = get_point2, put = set_point2)) ::UnityEngine::Vector3 point2;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  /// @brief Method ScheduleBatch, addr 0x4912758, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::CapsulecastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleBatch, addr 0x49124d8, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::CapsulecastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                       ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleCapsulecastBatch, addr 0x49126bc, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleCapsulecastBatch(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                                  int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits);

  /// @brief Method ScheduleCapsulecastBatch_Injected, addr 0x491277c, size 0x8c, virtual false, abstract: false, final false
  static inline void ScheduleCapsulecastBatch_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                       int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits,
                                                       ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x4912808, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, float_t radius, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method .ctor, addr 0x491234c, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, float_t radius, ::UnityEngine::Vector3 direction, ::UnityEngine::QueryParameters queryParameters, float_t distance);

  /// @brief Method .ctor, addr 0x4912904, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, float_t radius, ::UnityEngine::Vector3 direction, float_t distance,
                    int32_t layerMask);

  /// @brief Method .ctor, addr 0x4912430, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, float_t radius, ::UnityEngine::Vector3 direction,
                    ::UnityEngine::QueryParameters queryParameters, float_t distance);

  /// @brief Method get_direction, addr 0x49124a0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method get_distance, addr 0x49124b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_layerMask, addr 0x491293c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layerMask();

  /// @brief Method get_physicsScene, addr 0x49124c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// @brief Method get_point1, addr 0x4912460, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point1();

  /// @brief Method get_point2, addr 0x4912478, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point2();

  /// @brief Method get_radius, addr 0x4912490, size 0x8, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_direction, addr 0x49124ac, size 0xc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method set_distance, addr 0x49124c0, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  /// @brief Method set_layerMask, addr 0x49128fc, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(int32_t value);

  /// @brief Method set_physicsScene, addr 0x49124d0, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  /// @brief Method set_point1, addr 0x491246c, size 0xc, virtual false, abstract: false, final false
  inline void set_point1(::UnityEngine::Vector3 value);

  /// @brief Method set_point2, addr 0x4912484, size 0xc, virtual false, abstract: false, final false
  inline void set_point2(::UnityEngine::Vector3 value);

  /// @brief Method set_radius, addr 0x4912498, size 0x8, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CapsulecastCommand();

  // Ctor Parameters [CppParam { name: "_point1_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_point2_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "_direction_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }, CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters",
  // modifiers: "", def_value: None }]
  constexpr CapsulecastCommand(::UnityEngine::Vector3 _point1_k__BackingField, ::UnityEngine::Vector3 _point2_k__BackingField, float_t _radius_k__BackingField,
                               ::UnityEngine::Vector3 _direction_k__BackingField, float_t _distance_k__BackingField, ::UnityEngine::PhysicsScene _physicsScene_k__BackingField,
                               ::UnityEngine::QueryParameters queryParameters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15777 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <point1>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _point1_k__BackingField;

  /// @brief Field <point2>k__BackingField, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 _point2_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t _radius_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 _direction_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t _distance_k__BackingField;

  /// @brief Field <physicsScene>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief Field queryParameters, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::QueryParameters queryParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CapsulecastCommand, _point1_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _point2_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _radius_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _direction_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _distance_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _physicsScene_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, queryParameters) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CapsulecastCommand, 0x40>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CapsulecastCommand, "UnityEngine", "CapsulecastCommand");
