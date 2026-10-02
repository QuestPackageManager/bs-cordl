#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrFutureCompletionEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XrFutureCompletionEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrFutureCompletionEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrFutureCompletionEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrResult, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrFutureCompletionEXT
struct CORDL_TYPE XrFutureCompletionEXT {
public:
  // Declarations
  __declspec(property(get = get_futureResult)) ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e415e0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult);

  /// @brief Method .ctor, addr 0x6e415c8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult);

  /// [CompilerGenerated]
  /// @brief Method get_futureResult, addr 0x6e415c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult get_futureResult();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e415b8, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e415b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrFutureCompletionEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_futureResult_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrResult",
  // modifiers: "", def_value: None, comment: None }]
  constexpr XrFutureCompletionEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _futureResult_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17532 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT, _futureResult_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
