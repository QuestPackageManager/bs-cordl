#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrUnpersistSpatialEntityCompletionEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceContextResultEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XrUnpersistSpatialEntityCompletionEXT)
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
struct XrUnpersistSpatialEntityCompletionEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrUnpersistSpatialEntityCompletionEXT");
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrResult, UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceContextResultEXT, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrUnpersistSpatialEntityCompletionEXT
struct CORDL_TYPE XrUnpersistSpatialEntityCompletionEXT {
public:
  // Declarations
  __declspec(property(get = get_futureResult, put = set_futureResult)) ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult;

  __declspec(property(get = get_next, put = set_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  __declspec(property(get = get_unpersistResult, put = set_unpersistResult)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT unpersistResult;

  /// @brief Method .ctor, addr 0x6e44fe4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT unpersistResult);

  /// @brief Method .ctor, addr 0x6e45034, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT unpersistResult);

  /// @brief Method get_defaultValue, addr 0x6e414a0, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT get_defaultValue();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_futureResult, addr 0x6e45014, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult get_futureResult();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e45004, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e44ffc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_unpersistResult, addr 0x6e45024, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT get_unpersistResult();

  /// [CompilerGenerated]
  /// @brief Method set_futureResult, addr 0x6e4501c, size 0x8, virtual false, abstract: false, final false
  inline void set_futureResult(::UnityEngine::XR::OpenXR::NativeTypes::XrResult value);

  /// [CompilerGenerated]
  /// @brief Method set_next, addr 0x6e4500c, size 0x8, virtual false, abstract: false, final false
  inline void set_next(void* value);

  /// [CompilerGenerated]
  /// @brief Method set_unpersistResult, addr 0x6e4502c, size 0x8, virtual false, abstract: false, final false
  inline void set_unpersistResult(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrUnpersistSpatialEntityCompletionEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_futureResult_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrResult",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_unpersistResult_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT",
  // modifiers: "", def_value: None, comment: None }]
  constexpr XrUnpersistSpatialEntityCompletionEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _futureResult_k__BackingField,
                                                  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT _unpersistResult_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17588 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

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
  /// @brief Field <unpersistResult>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT _unpersistResult_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT, _futureResult_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT, _unpersistResult_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
