#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrCreateSpatialPersistenceContextCompletionEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceContextResultEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrCreateSpatialPersistenceContextCompletionEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceContextResultEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrCreateSpatialPersistenceContextCompletionEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrCreateSpatialPersistenceContextCompletionEXT");
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrResult, UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceContextResultEXT, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrCreateSpatialPersistenceContextCompletionEXT
struct CORDL_TYPE XrCreateSpatialPersistenceContextCompletionEXT {
public:
  // Declarations
  __declspec(property(get = get_createResult, put = set_createResult)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT createResult;

  __declspec(property(get = get_futureResult, put = set_futureResult)) ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult;

  __declspec(property(get = get_next, put = set_next)) void* next;

  __declspec(property(get = get_persistenceContext, put = set_persistenceContext)) uint64_t persistenceContext;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e812a0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT createResult,
                    uint64_t persistenceContext);

  /// @brief Method .ctor, addr 0x6e81304, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT createResult,
                    uint64_t persistenceContext);

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_createResult, addr 0x6e812e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT get_createResult();

  /// @brief Method get_defaultValue, addr 0x6e7dd0c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT get_defaultValue();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_futureResult, addr 0x6e812d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult get_futureResult();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e812c4, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_persistenceContext, addr 0x6e812f4, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_persistenceContext();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e812bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  /// [CompilerGenerated]
  /// @brief Method set_createResult, addr 0x6e812ec, size 0x8, virtual false, abstract: false, final false
  inline void set_createResult(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT value);

  /// [CompilerGenerated]
  /// @brief Method set_futureResult, addr 0x6e812dc, size 0x8, virtual false, abstract: false, final false
  inline void set_futureResult(::UnityEngine::XR::OpenXR::NativeTypes::XrResult value);

  /// [CompilerGenerated]
  /// @brief Method set_next, addr 0x6e812cc, size 0x8, virtual false, abstract: false, final false
  inline void set_next(void* value);

  /// [CompilerGenerated]
  /// @brief Method set_persistenceContext, addr 0x6e812fc, size 0x8, virtual false, abstract: false, final false
  inline void set_persistenceContext(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrCreateSpatialPersistenceContextCompletionEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_futureResult_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrResult",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_createResult_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "_persistenceContext_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrCreateSpatialPersistenceContextCompletionEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _futureResult_k__BackingField,
                                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT _createResult_k__BackingField,
                                                           uint64_t _persistenceContext_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <futureResult>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _futureResult_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <createResult>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT _createResult_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <persistenceContext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t _persistenceContext_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT, _futureResult_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT, _createResult_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT, _persistenceContext_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
