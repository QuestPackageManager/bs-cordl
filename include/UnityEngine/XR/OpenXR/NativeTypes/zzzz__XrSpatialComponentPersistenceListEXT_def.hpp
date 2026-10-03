#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentPersistenceListEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentPersistenceListEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceDataEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentPersistenceListEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentPersistenceListEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentPersistenceListEXT
struct CORDL_TYPE XrSpatialComponentPersistenceListEXT {
public:
  // Declarations
  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_persistData)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* persistData;

  __declspec(property(get = get_persistDataCount)) uint32_t persistDataCount;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e446dc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT> persistData);

  /// @brief Method .ctor, addr 0x6e447b8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT> persistData);

  /// @brief Method .ctor, addr 0x6e446a4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t persistDataCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* persistData);

  /// @brief Method .ctor, addr 0x6e44750, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT> persistData);

  /// @brief Method .ctor, addr 0x6e44840, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT> persistData);

  /// @brief Method .ctor, addr 0x6e446c0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t persistDataCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* persistData);

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e4468c, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_persistData, addr 0x6e4469c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* get_persistData();

  /// [CompilerGenerated]
  /// @brief Method get_persistDataCount, addr 0x6e44694, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_persistDataCount();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e44684, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentPersistenceListEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_persistDataCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_persistData_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialComponentPersistenceListEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _persistDataCount_k__BackingField,
                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* _persistData_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <persistDataCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _persistDataCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <persistData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* _persistData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT, _persistDataCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT, _persistData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
