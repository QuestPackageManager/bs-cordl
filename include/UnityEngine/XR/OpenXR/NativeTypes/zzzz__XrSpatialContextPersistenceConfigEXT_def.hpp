#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialContextPersistenceConfigEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialContextPersistenceConfigEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialContextPersistenceConfigEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextPersistenceConfigEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextPersistenceConfigEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialContextPersistenceConfigEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialContextPersistenceConfigEXT
struct CORDL_TYPE XrSpatialContextPersistenceConfigEXT {
public:
  // Declarations
  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_persistenceContextCount)) uint32_t persistenceContextCount;

  __declspec(property(get = get_persistenceContexts)) uint64_t* persistenceContexts;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e448dc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t persistenceContextCount, uint64_t* persistenceContexts);

  /// @brief Method .ctor, addr 0x6e44914, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<uint64_t> persistenceContexts);

  /// @brief Method .ctor, addr 0x6e449f0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<uint64_t> persistenceContexts);

  /// @brief Method .ctor, addr 0x6e448f8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t persistenceContextCount, uint64_t* persistenceContexts);

  /// @brief Method .ctor, addr 0x6e44988, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<uint64_t> persistenceContexts);

  /// @brief Method .ctor, addr 0x6e44a78, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<uint64_t> persistenceContexts);

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e448c4, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_persistenceContextCount, addr 0x6e448cc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_persistenceContextCount();

  /// [CompilerGenerated]
  /// @brief Method get_persistenceContexts, addr 0x6e448d4, size 0x8, virtual false, abstract: false, final false
  inline uint64_t* get_persistenceContexts();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e448bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialContextPersistenceConfigEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_persistenceContextCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_persistenceContexts_k__BackingField", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialContextPersistenceConfigEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                 uint32_t _persistenceContextCount_k__BackingField, uint64_t* _persistenceContexts_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <persistenceContextCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _persistenceContextCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <persistenceContexts>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t* _persistenceContexts_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextPersistenceConfigEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextPersistenceConfigEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextPersistenceConfigEXT, _persistenceContextCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextPersistenceConfigEXT, _persistenceContexts_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextPersistenceConfigEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
