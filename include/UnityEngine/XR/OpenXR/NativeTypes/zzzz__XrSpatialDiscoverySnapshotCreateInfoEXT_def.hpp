#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialDiscoverySnapshotCreateInfoEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialDiscoverySnapshotCreateInfoEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentTypeEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialDiscoverySnapshotCreateInfoEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialDiscoverySnapshotCreateInfoEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialDiscoverySnapshotCreateInfoEXT
struct CORDL_TYPE XrSpatialDiscoverySnapshotCreateInfoEXT {
public:
  // Declarations
  __declspec(property(get = get_componentTypeCount)) uint32_t componentTypeCount;

  __declspec(property(get = get_componentTypes)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes;

  /// @brief Field defaultValue, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_defaultValue, put = setStaticF_defaultValue)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT defaultValue;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e43380, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t componentTypeCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes);

  /// @brief Method .ctor, addr 0x6e43498, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes);

  /// @brief Method .ctor, addr 0x6e435d8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes);

  /// @brief Method .ctor, addr 0x6e43364, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t componentTypeCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes);

  /// @brief Method .ctor, addr 0x6e433fc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes);

  /// @brief Method .ctor, addr 0x6e43528, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes);

  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT getStaticF_defaultValue();

  /// [CompilerGenerated]
  /// @brief Method get_componentTypeCount, addr 0x6e43354, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_componentTypeCount();

  /// [CompilerGenerated]
  /// @brief Method get_componentTypes, addr 0x6e4335c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* get_componentTypes();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e4334c, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e43344, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  static inline void setStaticF_defaultValue(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialDiscoverySnapshotCreateInfoEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_componentTypeCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_componentTypes_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialDiscoverySnapshotCreateInfoEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                    uint32_t _componentTypeCount_k__BackingField,
                                                    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _componentTypes_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17561 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <componentTypeCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _componentTypeCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <componentTypes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _componentTypes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT, _componentTypeCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT, _componentTypes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
