#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoxcastCommand)
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
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct BoxcastCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoxcastCommand);
// Type: UnityEngine::BoxcastCommand
// SizeInfo { instance_size: 68, native_size: 68, calculated_instance_size: 68, calculated_native_size: 84, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::BoxcastCommand
struct CORDL_TYPE BoxcastCommand {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center))::UnityEngine::Vector3 center;

  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::Vector3 direction;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  __declspec(property(get = get_halfExtents, put = set_halfExtents))::UnityEngine::Vector3 halfExtents;

  __declspec(property(get = get_layerMask, put = set_layerMask)) int32_t layerMask;

  __declspec(property(get = get_maxHits, put = set_maxHits)) int32_t maxHits;

  __declspec(property(get = get_orientation, put = set_orientation))::UnityEngine::Quaternion orientation;

  __declspec(property(get = get_physicsScene, put = set_physicsScene))::UnityEngine::PhysicsScene physicsScene;

  /// @brief Method ScheduleBatch, addr 0x325bcf0, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::BoxcastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleBoxcastBatch, addr 0x325be40, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBoxcastBatch(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                              int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob);

  /// @brief Method ScheduleBoxcastBatch_Injected, addr 0x325becc, size 0x84, virtual false, abstract: false, final false
  static inline void ScheduleBoxcastBatch_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands, int32_t commandLen,
                                                   ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x325bb9c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method .ctor, addr 0x325bc18, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                    ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method get_center, addr 0x325bc50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_direction, addr 0x325bc98, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method get_distance, addr 0x325bcb0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_halfExtents, addr 0x325bc68, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_halfExtents();

  /// @brief Method get_layerMask, addr 0x325bcc0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layerMask();

  /// @brief Method get_maxHits, addr 0x325bcd0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxHits();

  /// @brief Method get_orientation, addr 0x325bc80, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_orientation();

  /// @brief Method get_physicsScene, addr 0x325bce0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// @brief Method set_center, addr 0x325bc5c, size 0xc, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_direction, addr 0x325bca4, size 0xc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method set_distance, addr 0x325bcb8, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  /// @brief Method set_halfExtents, addr 0x325bc74, size 0xc, virtual false, abstract: false, final false
  inline void set_halfExtents(::UnityEngine::Vector3 value);

  /// @brief Method set_layerMask, addr 0x325bcc8, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(int32_t value);

  /// @brief Method set_maxHits, addr 0x325bcd8, size 0x8, virtual false, abstract: false, final false
  inline void set_maxHits(int32_t value);

  /// @brief Method set_orientation, addr 0x325bc8c, size 0xc, virtual false, abstract: false, final false
  inline void set_orientation(::UnityEngine::Quaternion value);

  /// @brief Method set_physicsScene, addr 0x325bce8, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BoxcastCommand();

  // Ctor Parameters [CppParam { name: "_center_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_halfExtents_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_orientation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name:
  // "_direction_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "_layerMask_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_maxHits_k__BackingField", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }]
  constexpr BoxcastCommand(::UnityEngine::Vector3 _center_k__BackingField, ::UnityEngine::Vector3 _halfExtents_k__BackingField, ::UnityEngine::Quaternion _orientation_k__BackingField,
                           ::UnityEngine::Vector3 _direction_k__BackingField, float_t _distance_k__BackingField, int32_t _layerMask_k__BackingField, int32_t _maxHits_k__BackingField,
                           ::UnityEngine::PhysicsScene _physicsScene_k__BackingField) noexcept;

  /// @brief Field <center>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _center_k__BackingField;

  /// @brief Field <halfExtents>k__BackingField, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 _halfExtents_k__BackingField;

  /// @brief Field <orientation>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Quaternion _orientation_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 _direction_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t _distance_k__BackingField;

  /// @brief Field <layerMask>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t _layerMask_k__BackingField;

  /// @brief Field <maxHits>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t _maxHits_k__BackingField;

  /// @brief Field <physicsScene>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x44 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoxcastCommand, 0x44>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _center_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _halfExtents_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _orientation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _direction_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _distance_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _layerMask_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _maxHits_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _physicsScene_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoxcastCommand, "UnityEngine", "BoxcastCommand");
