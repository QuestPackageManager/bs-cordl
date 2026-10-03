#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrCreateSpatialContextCompletionEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrCreateSpatialContextCompletionEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrCreateSpatialContextCompletionEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrCreateSpatialContextCompletionEXT");
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrResult, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrCreateSpatialContextCompletionEXT
struct CORDL_TYPE XrCreateSpatialContextCompletionEXT {
public:
  // Declarations
  __declspec(property(get = get_futureResult, put = set_futureResult)) ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult;

  __declspec(property(get = get_next, put = set_next)) void* next;

  __declspec(property(get = get_spatialContext, put = set_spatialContext)) uint64_t spatialContext;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e4299c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult, uint64_t spatialContext);

  /// @brief Method .ctor, addr 0x6e429f0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult, uint64_t spatialContext);

  /// @brief Method get_defaultValue, addr 0x6e3f7ac, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT get_defaultValue();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_futureResult, addr 0x6e429d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult get_futureResult();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e429c0, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_spatialContext, addr 0x6e429e0, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_spatialContext();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e429b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  /// [CompilerGenerated]
  /// @brief Method set_futureResult, addr 0x6e429d8, size 0x8, virtual false, abstract: false, final false
  inline void set_futureResult(::UnityEngine::XR::OpenXR::NativeTypes::XrResult value);

  /// [CompilerGenerated]
  /// @brief Method set_next, addr 0x6e429c8, size 0x8, virtual false, abstract: false, final false
  inline void set_next(void* value);

  /// [CompilerGenerated]
  /// @brief Method set_spatialContext, addr 0x6e429e8, size 0x8, virtual false, abstract: false, final false
  inline void set_spatialContext(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrCreateSpatialContextCompletionEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_futureResult_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrResult",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_spatialContext_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrCreateSpatialContextCompletionEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _futureResult_k__BackingField, uint64_t _spatialContext_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17550 };

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
  /// @brief Field <spatialContext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t _spatialContext_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT, _futureResult_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT, _spatialContext_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
