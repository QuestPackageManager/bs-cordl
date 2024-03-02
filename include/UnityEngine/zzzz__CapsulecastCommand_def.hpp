#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CapsulecastCommand)
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
struct CapsulecastCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CapsulecastCommand);
// Type: UnityEngine::CapsulecastCommand
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::CapsulecastCommand
struct CORDL_TYPE CapsulecastCommand {
public:
  // Declarations
  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::Vector3 direction;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  __declspec(property(get = get_layerMask, put = set_layerMask)) int32_t layerMask;

  __declspec(property(get = get_maxHits, put = set_maxHits)) int32_t maxHits;

  __declspec(property(get = get_physicsScene, put = set_physicsScene))::UnityEngine::PhysicsScene physicsScene;

  __declspec(property(get = get_point1, put = set_point1))::UnityEngine::Vector3 point1;

  __declspec(property(get = get_point2, put = set_point2))::UnityEngine::Vector3 point2;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  /// @brief Method ScheduleBatch, addr 0x2e1a2a4, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::CapsulecastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleCapsulecastBatch, addr 0x2e1a3f4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleCapsulecastBatch(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                                  int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob);

  /// @brief Method ScheduleCapsulecastBatch_Injected, addr 0x2e1a480, size 0x84, virtual false, abstract: false, final false
  static inline void ScheduleCapsulecastBatch_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                       int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob, ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x2e1a160, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, float_t radius, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method .ctor, addr 0x2e1a1d8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, float_t radius, ::UnityEngine::Vector3 direction, float_t distance,
                    int32_t layerMask);

  /// @brief Method get_direction, addr 0x2e1a24c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method get_distance, addr 0x2e1a264, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_layerMask, addr 0x2e1a274, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layerMask();

  /// @brief Method get_maxHits, addr 0x2e1a284, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxHits();

  /// @brief Method get_physicsScene, addr 0x2e1a294, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// @brief Method get_point1, addr 0x2e1a20c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point1();

  /// @brief Method get_point2, addr 0x2e1a224, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point2();

  /// @brief Method get_radius, addr 0x2e1a23c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_direction, addr 0x2e1a258, size 0xc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method set_distance, addr 0x2e1a26c, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  /// @brief Method set_layerMask, addr 0x2e1a27c, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(int32_t value);

  /// @brief Method set_maxHits, addr 0x2e1a28c, size 0x8, virtual false, abstract: false, final false
  inline void set_maxHits(int32_t value);

  /// @brief Method set_physicsScene, addr 0x2e1a29c, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  /// @brief Method set_point1, addr 0x2e1a218, size 0xc, virtual false, abstract: false, final false
  inline void set_point1(::UnityEngine::Vector3 value);

  /// @brief Method set_point2, addr 0x2e1a230, size 0xc, virtual false, abstract: false, final false
  inline void set_point2(::UnityEngine::Vector3 value);

  /// @brief Method set_radius, addr 0x2e1a244, size 0x8, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CapsulecastCommand();

  // Ctor Parameters [CppParam { name: "_point1_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_point2_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "_direction_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "_layerMask_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_maxHits_k__BackingField", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }]
  constexpr CapsulecastCommand(::UnityEngine::Vector3 _point1_k__BackingField, ::UnityEngine::Vector3 _point2_k__BackingField, float_t _radius_k__BackingField,
                               ::UnityEngine::Vector3 _direction_k__BackingField, float_t _distance_k__BackingField, int32_t _layerMask_k__BackingField, int32_t _maxHits_k__BackingField,
                               ::UnityEngine::PhysicsScene _physicsScene_k__BackingField) noexcept;

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

  /// @brief Field <layerMask>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t _layerMask_k__BackingField;

  /// @brief Field <maxHits>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t _maxHits_k__BackingField;

  /// @brief Field <physicsScene>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CapsulecastCommand, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _point1_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _point2_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _radius_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _direction_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _distance_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _layerMask_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _maxHits_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CapsulecastCommand, _physicsScene_k__BackingField) == 0x34, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CapsulecastCommand, "UnityEngine", "CapsulecastCommand");
