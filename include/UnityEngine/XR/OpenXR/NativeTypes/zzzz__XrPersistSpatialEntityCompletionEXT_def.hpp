#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrPersistSpatialEntityCompletionEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceContextResultEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUuid_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XrPersistSpatialEntityCompletionEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceContextResultEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrUuid;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPersistSpatialEntityCompletionEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrPersistSpatialEntityCompletionEXT");
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrResult, UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceContextResultEXT, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType,
// UnityEngine.XR.OpenXR.NativeTypes.XrUuid
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrPersistSpatialEntityCompletionEXT
struct CORDL_TYPE XrPersistSpatialEntityCompletionEXT {
public:
  // Declarations
  __declspec(property(get = get_futureResult, put = set_futureResult)) ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult;

  __declspec(property(get = get_next, put = set_next)) void* next;

  __declspec(property(get = get_persistResult, put = set_persistResult)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT persistResult;

  __declspec(property(get = get_persistUuid, put = set_persistUuid)) ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e44edc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT persistResult,
                    ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid);

  /// @brief Method .ctor, addr 0x6e44f44, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT persistResult,
                    ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid);

  /// @brief Method get_defaultValue, addr 0x6e412f0, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT get_defaultValue();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_futureResult, addr 0x6e44f10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult get_futureResult();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e44f00, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_persistResult, addr 0x6e44f20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT get_persistResult();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_persistUuid, addr 0x6e44f30, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid get_persistUuid();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e44ef8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  /// [CompilerGenerated]
  /// @brief Method set_futureResult, addr 0x6e44f18, size 0x8, virtual false, abstract: false, final false
  inline void set_futureResult(::UnityEngine::XR::OpenXR::NativeTypes::XrResult value);

  /// [CompilerGenerated]
  /// @brief Method set_next, addr 0x6e44f08, size 0x8, virtual false, abstract: false, final false
  inline void set_next(void* value);

  /// [CompilerGenerated]
  /// @brief Method set_persistResult, addr 0x6e44f28, size 0x8, virtual false, abstract: false, final false
  inline void set_persistResult(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT value);

  /// [CompilerGenerated]
  /// @brief Method set_persistUuid, addr 0x6e44f3c, size 0x8, virtual false, abstract: false, final false
  inline void set_persistUuid(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrPersistSpatialEntityCompletionEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_futureResult_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrResult",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_persistResult_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "_persistUuid_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrUuid", modifiers: "", def_value: None, comment: None }]
  constexpr XrPersistSpatialEntityCompletionEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _futureResult_k__BackingField,
                                                ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT _persistResult_k__BackingField,
                                                ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid _persistUuid_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

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
  /// @brief Field <persistResult>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT _persistResult_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <persistUuid>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid _persistUuid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT, _futureResult_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT, _persistResult_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT, _persistUuid_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT) == 0x28, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
