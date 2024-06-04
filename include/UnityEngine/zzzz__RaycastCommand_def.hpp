#pragma once
// IWYU pragma private; include "UnityEngine/RaycastCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastCommand)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct __JobsUtility__JobScheduleParameters;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct PhysicsScene;
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
// Type: UnityEngine::RaycastCommand
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::RaycastCommand
struct CORDL_TYPE RaycastCommand {
public:
  // Declarations
  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::Vector3 direction;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  __declspec(property(get = get_from, put = set_from))::UnityEngine::Vector3 from;

  __declspec(property(get = get_layerMask, put = set_layerMask)) int32_t layerMask;

  __declspec(property(get = get_maxHits, put = set_maxHits)) int32_t maxHits;

  __declspec(property(get = get_physicsScene, put = set_physicsScene))::UnityEngine::PhysicsScene physicsScene;

  /// @brief Method ScheduleBatch, addr 0x348c46c, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleRaycastBatch, addr 0x348c5bc, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleRaycastBatch(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                              int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob);

  /// @brief Method ScheduleRaycastBatch_Injected, addr 0x348c648, size 0x84, virtual false, abstract: false, final false
  static inline void ScheduleRaycastBatch_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands, int32_t commandLen,
                                                   ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x348c380, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask, int32_t maxHits);

  /// @brief Method .ctor, addr 0x348c3e0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask, int32_t maxHits);

  /// @brief Method get_direction, addr 0x348c414, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method get_distance, addr 0x348c42c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_from, addr 0x348c3fc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_from();

  /// @brief Method get_layerMask, addr 0x348c43c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layerMask();

  /// @brief Method get_maxHits, addr 0x348c44c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxHits();

  /// @brief Method get_physicsScene, addr 0x348c45c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// @brief Method set_direction, addr 0x348c420, size 0xc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method set_distance, addr 0x348c434, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  /// @brief Method set_from, addr 0x348c408, size 0xc, virtual false, abstract: false, final false
  inline void set_from(::UnityEngine::Vector3 value);

  /// @brief Method set_layerMask, addr 0x348c444, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(int32_t value);

  /// @brief Method set_maxHits, addr 0x348c454, size 0x8, virtual false, abstract: false, final false
  inline void set_maxHits(int32_t value);

  /// @brief Method set_physicsScene, addr 0x348c464, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastCommand();

  // Ctor Parameters [CppParam { name: "_from_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_direction_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "_layerMask_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_maxHits_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }]
  constexpr RaycastCommand(::UnityEngine::Vector3 _from_k__BackingField, ::UnityEngine::Vector3 _direction_k__BackingField, float_t _distance_k__BackingField, int32_t _layerMask_k__BackingField,
                           int32_t _maxHits_k__BackingField, ::UnityEngine::PhysicsScene _physicsScene_k__BackingField) noexcept;

  /// @brief Field <from>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _from_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 _direction_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t _distance_k__BackingField;

  /// @brief Field <layerMask>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t _layerMask_k__BackingField;

  /// @brief Field <maxHits>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t _maxHits_k__BackingField;

  /// @brief Field <physicsScene>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RaycastCommand, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _from_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _direction_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _distance_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _layerMask_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _maxHits_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastCommand, _physicsScene_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastCommand, "UnityEngine", "RaycastCommand");
