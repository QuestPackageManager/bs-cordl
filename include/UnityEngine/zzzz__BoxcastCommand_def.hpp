#pragma once
// IWYU pragma private; include "UnityEngine/BoxcastCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoxcastCommand)
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
struct Quaternion;
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
struct BoxcastCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoxcastCommand);
DEFINE_IL2CPP_CLASS(::UnityEngine::BoxcastCommand, "UnityEngine", "BoxcastCommand");
// [NativeHeader("Runtime/Jobs/ScriptBindings/JobsBindingsTypes.h")]
// [NativeHeader("Modules/Physics/BatchCommands/BoxcastCommand.h")]
// Dependencies UnityEngine.PhysicsScene, UnityEngine.Quaternion, UnityEngine.QueryParameters, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.BoxcastCommand
struct CORDL_TYPE BoxcastCommand {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::Vector3 direction;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  __declspec(property(get = get_halfExtents, put = set_halfExtents)) ::UnityEngine::Vector3 halfExtents;

  /// @brief [Obsolete("Layer Mask is now a part of QueryParameters struct", false)]
  __declspec(property(get = get_layerMask, put = set_layerMask)) int32_t layerMask;

  __declspec(property(get = get_orientation, put = set_orientation)) ::UnityEngine::Quaternion orientation;

  __declspec(property(get = get_physicsScene, put = set_physicsScene)) ::UnityEngine::PhysicsScene physicsScene;

  /// @brief Method ScheduleBatch, addr 0x7002e00, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::BoxcastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleBatch, addr 0x7002bb8, size 0x1ac, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::BoxcastCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                       ::Unity::Jobs::JobHandle dependsOn);

  /// [FreeFunction("ScheduleBoxcastCommandBatch", ThrowsException = true)]
  /// @brief Method ScheduleBoxcastBatch, addr 0x7002d64, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBoxcastBatch(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* commands, int32_t commandLen, void* result,
                                                              int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits);

  /// @brief Method ScheduleBoxcastBatch_Injected, addr 0x7002e24, size 0x8c, virtual false, abstract: false, final false
  static inline void ScheduleBoxcastBatch_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* commands, int32_t commandLen, void* result,
                                                   int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits, ::by_ref<::Unity::Jobs::JobHandle> ret);

  /// [Obsolete("This struct signature is no longer supported. Use struct with a QueryParameters instead", false)]
  /// @brief Method .ctor, addr 0x7002eb0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method .ctor, addr 0x7002a08, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 direction,
                    ::UnityEngine::QueryParameters queryParameters, float_t distance);

  /// [Obsolete("This struct signature is no longer supported. Use struct with a QueryParameters instead", false)]
  /// @brief Method .ctor, addr 0x7002fb8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                    ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method .ctor, addr 0x7002b00, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                    ::UnityEngine::Vector3 direction, ::UnityEngine::QueryParameters queryParameters, float_t distance);

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_center, addr 0x7002b38, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_direction, addr 0x7002b80, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method get_distance, addr 0x7002b98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_halfExtents, addr 0x7002b50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_halfExtents();

  /// @brief Method get_layerMask, addr 0x7002ffc, size 0x474, virtual false, abstract: false, final false
  inline int32_t get_layerMask();

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method get_orientation, addr 0x7002b68, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_orientation();

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method get_physicsScene, addr 0x7002ba8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsScene get_physicsScene();

  /// [CompilerGenerated]
  /// @brief Method set_center, addr 0x7002b44, size 0xc, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// [CompilerGenerated]
  /// @brief Method set_direction, addr 0x7002b8c, size 0xc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// [CompilerGenerated]
  /// @brief Method set_distance, addr 0x7002ba0, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_halfExtents, addr 0x7002b5c, size 0xc, virtual false, abstract: false, final false
  inline void set_halfExtents(::UnityEngine::Vector3 value);

  /// @brief Method set_layerMask, addr 0x7002fb0, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_orientation, addr 0x7002b74, size 0xc, virtual false, abstract: false, final false
  inline void set_orientation(::UnityEngine::Quaternion value);

  /// [CompilerGenerated]
  /// @brief Method set_physicsScene, addr 0x7002bb0, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsScene(::UnityEngine::PhysicsScene value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BoxcastCommand();

  // Ctor Parameters [CppParam { name: "_center_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_halfExtents_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_orientation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_direction_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_distance_k__BackingField", ty:
  // "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters", modifiers: "", def_value: None, comment: None }]
  constexpr BoxcastCommand(::UnityEngine::Vector3 _center_k__BackingField, ::UnityEngine::Vector3 _halfExtents_k__BackingField, ::UnityEngine::Quaternion _orientation_k__BackingField,
                           ::UnityEngine::Vector3 _direction_k__BackingField, float_t _distance_k__BackingField, ::UnityEngine::PhysicsScene _physicsScene_k__BackingField,
                           ::UnityEngine::QueryParameters queryParameters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19096 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <center>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _center_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <halfExtents>k__BackingField, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 _halfExtents_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <orientation>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Quaternion _orientation_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <direction>k__BackingField, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 _direction_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <distance>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t _distance_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <physicsScene>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::PhysicsScene _physicsScene_k__BackingField;

  /// @brief Field queryParameters, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::QueryParameters queryParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BoxcastCommand, _center_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _halfExtents_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _orientation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _direction_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _distance_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, _physicsScene_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoxcastCommand, queryParameters) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::BoxcastCommand) == 0x50, "Size mismatch!");

} // namespace UnityEngine
