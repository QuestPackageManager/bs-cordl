#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentBounded3DListEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentBounded3DListEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrBoxf;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentBounded3DListEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded3DListEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded3DListEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentBounded3DListEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentBounded3DListEXT
struct CORDL_TYPE XrSpatialComponentBounded3DListEXT {
public:
  // Declarations
  __declspec(property(get = get_boundCount)) uint32_t boundCount;

  __declspec(property(get = get_bounds)) ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf* bounds;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e420c8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t boundCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf* bounds);

  /// @brief Method .ctor, addr 0x6e42158, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf> bounds);

  /// @brief Method .ctor, addr 0x6e42248, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf> bounds);

  /// @brief Method .ctor, addr 0x6e420ac, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t boundCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf* bounds);

  /// @brief Method .ctor, addr 0x6e420e4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf> bounds);

  /// @brief Method .ctor, addr 0x6e421c0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf> bounds);

  /// [CompilerGenerated]
  /// @brief Method get_boundCount, addr 0x6e4209c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_boundCount();

  /// [CompilerGenerated]
  /// @brief Method get_bounds, addr 0x6e420a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf* get_bounds();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e42094, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e4208c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentBounded3DListEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_boundCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "_bounds_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialComponentBounded3DListEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _boundCount_k__BackingField,
                                               ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf* _bounds_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17546 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <boundCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _boundCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <bounds>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf* _bounds_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded3DListEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded3DListEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded3DListEXT, _boundCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded3DListEXT, _bounds_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded3DListEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
