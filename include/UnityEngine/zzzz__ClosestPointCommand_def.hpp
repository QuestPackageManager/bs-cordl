#pragma once
// IWYU pragma private; include "UnityEngine/ClosestPointCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClosestPointCommand)
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
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ClosestPointCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ClosestPointCommand);
// Type: UnityEngine::ClosestPointCommand
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ClosestPointCommand
struct CORDL_TYPE ClosestPointCommand {
public:
  // Declarations
  __declspec(property(get = get_colliderInstanceID, put = set_colliderInstanceID)) int32_t colliderInstanceID;

  __declspec(property(get = get_point, put = set_point)) ::UnityEngine::Vector3 point;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_scale, put = set_scale)) ::UnityEngine::Vector3 scale;

  /// @brief Method ScheduleBatch, addr 0x4897090, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::ClosestPointCommand> commands,
                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> results, int32_t minCommandsPerJob, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleClosestPointCommandBatch, addr 0x48971e0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleClosestPointCommandBatch(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters,
                                                                          ::cordl_internals::Ptr<void> commands, int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen,
                                                                          int32_t minCommandsPerJob);

  /// @brief Method ScheduleClosestPointCommandBatch_Injected, addr 0x489726c, size 0x84, virtual false, abstract: false, final false
  static inline void ScheduleClosestPointCommandBatch_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> commands,
                                                               int32_t commandLen, ::cordl_internals::Ptr<void> result, int32_t resultLen, int32_t minCommandsPerJob,
                                                               ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method .ctor, addr 0x4896f94, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale);

  /// @brief Method .ctor, addr 0x4896f64, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 point, int32_t colliderInstanceID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale);

  /// @brief Method get_colliderInstanceID, addr 0x4897038, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_colliderInstanceID();

  /// @brief Method get_point, addr 0x4897020, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method get_position, addr 0x4897048, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x4897060, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_scale, addr 0x4897078, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_scale();

  /// @brief Method set_colliderInstanceID, addr 0x4897040, size 0x8, virtual false, abstract: false, final false
  inline void set_colliderInstanceID(int32_t value);

  /// @brief Method set_point, addr 0x489702c, size 0xc, virtual false, abstract: false, final false
  inline void set_point(::UnityEngine::Vector3 value);

  /// @brief Method set_position, addr 0x4897054, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x489706c, size 0xc, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_scale, addr 0x4897084, size 0xc, virtual false, abstract: false, final false
  inline void set_scale(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClosestPointCommand();

  // Ctor Parameters [CppParam { name: "_point_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_colliderInstanceID_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_rotation_k__BackingField", ty:
  // "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_scale_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr ClosestPointCommand(::UnityEngine::Vector3 _point_k__BackingField, int32_t _colliderInstanceID_k__BackingField, ::UnityEngine::Vector3 _position_k__BackingField,
                                ::UnityEngine::Quaternion _rotation_k__BackingField, ::UnityEngine::Vector3 _scale_k__BackingField) noexcept;

  /// @brief Field <point>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _point_k__BackingField;

  /// @brief Field <colliderInstanceID>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _colliderInstanceID_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion _rotation_k__BackingField;

  /// @brief Field <scale>k__BackingField, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 _scale_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15733 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ClosestPointCommand, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ClosestPointCommand, _point_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ClosestPointCommand, _colliderInstanceID_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ClosestPointCommand, _position_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ClosestPointCommand, _rotation_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ClosestPointCommand, _scale_k__BackingField) == 0x2c, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClosestPointCommand, "UnityEngine", "ClosestPointCommand");
