#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialAnchorCreateInfoEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialAnchorCreateInfoEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialAnchorCreateInfoEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialAnchorCreateInfoEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrPosef, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialAnchorCreateInfoEXT
struct CORDL_TYPE XrSpatialAnchorCreateInfoEXT {
public:
  // Declarations
  __declspec(property(get = get_baseSpace)) uint64_t baseSpace;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_pose)) ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef pose;

  __declspec(property(get = get_time)) int64_t time;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e416e0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(uint64_t baseSpace, int64_t time, ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef pose);

  /// @brief Method .ctor, addr 0x6e41750, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(uint64_t baseSpace, int64_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method .ctor, addr 0x6e416b0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint64_t baseSpace, int64_t time, ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef pose);

  /// @brief Method .ctor, addr 0x6e4171c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint64_t baseSpace, int64_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// [CompilerGenerated]
  /// @brief Method get_baseSpace, addr 0x6e4168c, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_baseSpace();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e41684, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_pose, addr 0x6e4169c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef get_pose();

  /// [CompilerGenerated]
  /// @brief Method get_time, addr 0x6e41694, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_time();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e4167c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialAnchorCreateInfoEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_baseSpace_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "_time_k__BackingField", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pose_k__BackingField", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrPosef", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialAnchorCreateInfoEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint64_t _baseSpace_k__BackingField,
                                         int64_t _time_k__BackingField, ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _pose_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17535 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <baseSpace>k__BackingField, offset: 0x10, size: 0x8, def value: None
  uint64_t _baseSpace_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <time>k__BackingField, offset: 0x18, size: 0x8, def value: None
  int64_t _time_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <pose>k__BackingField, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _pose_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT, _baseSpace_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT, _time_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT, _pose_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT) == 0x40, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
