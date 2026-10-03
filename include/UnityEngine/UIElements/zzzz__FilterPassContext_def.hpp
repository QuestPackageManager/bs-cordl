#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterPassContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FilterFunction_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilterPassContext)
namespace UnityEngine::UIElements {
struct FilterFunction;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct FilterPassContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::FilterPassContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FilterPassContext, "UnityEngine.UIElements", "FilterPassContext");
// Dependencies UnityEngine.UIElements.FilterFunction
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FilterPassContext
struct CORDL_TYPE FilterPassContext {
public:
  // Declarations
  __declspec(property(get = get_filterFunction, put = set_filterFunction)) ::UnityEngine::UIElements::FilterFunction filterFunction;

  __declspec(property(put = set_filterPassIndex)) int32_t filterPassIndex;

  __declspec(property(get = get_readsGamma, put = set_readsGamma)) bool readsGamma;

  __declspec(property(get = get_scaledPixelsPerPoint, put = set_scaledPixelsPerPoint)) float_t scaledPixelsPerPoint;

  __declspec(property(put = set_writesGamma)) bool writesGamma;

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method get_filterFunction, addr 0x723622c, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FilterFunction get_filterFunction();

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method get_readsGamma, addr 0x723624c, size 0x8, virtual false, abstract: false, final false
  inline bool get_readsGamma();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_scaledPixelsPerPoint, addr 0x7236264, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scaledPixelsPerPoint();

  /// [CompilerGenerated]
  /// @brief Method set_filterFunction, addr 0x723623c, size 0x8, virtual false, abstract: false, final false
  inline void set_filterFunction(::UnityEngine::UIElements::FilterFunction value);

  /// [CompilerGenerated]
  /// @brief Method set_filterPassIndex, addr 0x7236244, size 0x8, virtual false, abstract: false, final false
  inline void set_filterPassIndex(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_readsGamma, addr 0x7236254, size 0x8, virtual false, abstract: false, final false
  inline void set_readsGamma(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_scaledPixelsPerPoint, addr 0x723626c, size 0x8, virtual false, abstract: false, final false
  inline void set_scaledPixelsPerPoint(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_writesGamma, addr 0x723625c, size 0x8, virtual false, abstract: false, final false
  inline void set_writesGamma(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterPassContext();

  // Ctor Parameters [CppParam { name: "_filterFunction_k__BackingField", ty: "::UnityEngine::UIElements::FilterFunction", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_filterPassIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_readsGamma_k__BackingField", ty: "bool", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_writesGamma_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scaledPixelsPerPoint_k__BackingField", ty:
  // "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr FilterPassContext(::UnityEngine::UIElements::FilterFunction _filterFunction_k__BackingField, int32_t _filterPassIndex_k__BackingField, bool _readsGamma_k__BackingField,
                              bool _writesGamma_k__BackingField, float_t _scaledPixelsPerPoint_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4587 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <filterFunction>k__BackingField, offset: 0x0, size: 0x70, def value: None
  ::UnityEngine::UIElements::FilterFunction _filterFunction_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <filterPassIndex>k__BackingField, offset: 0x70, size: 0x4, def value: None
  int32_t _filterPassIndex_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <readsGamma>k__BackingField, offset: 0x74, size: 0x1, def value: None
  bool _readsGamma_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <writesGamma>k__BackingField, offset: 0x75, size: 0x1, def value: None
  bool _writesGamma_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <scaledPixelsPerPoint>k__BackingField, offset: 0x78, size: 0x4, def value: None
  float_t _scaledPixelsPerPoint_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FilterPassContext, _filterFunction_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterPassContext, _filterPassIndex_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterPassContext, _readsGamma_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterPassContext, _writesGamma_k__BackingField) == 0x75, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterPassContext, _scaledPixelsPerPoint_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::FilterPassContext) == 0x80, "Size mismatch!");

} // namespace UnityEngine::UIElements
