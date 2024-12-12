#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleMatchingContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleMatchingContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine::UIElements {
class AncestorFilter;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleMatchingContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleMatchingContext);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleMatchingContext
class CORDL_TYPE StyleMatchingContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field ancestorFilter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ancestorFilter, put = __cordl_internal_set_ancestorFilter)) ::UnityEngine::UIElements::AncestorFilter* ancestorFilter;

  /// @brief Field currentElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentElement, put = __cordl_internal_set_currentElement)) ::UnityEngine::UIElements::VisualElement* currentElement;

  /// @brief Field m_StyleSheetStack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleSheetStack,
                      put = __cordl_internal_set_m_StyleSheetStack)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* m_StyleSheetStack;

  /// @brief Field processResult, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_processResult,
                      put = __cordl_internal_set_processResult)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult;

  __declspec(property(get = get_styleSheetCount)) int32_t styleSheetCount;

  /// @brief Field variableContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_variableContext, put = __cordl_internal_set_variableContext)) ::UnityEngine::UIElements::StyleVariableContext* variableContext;

  /// @brief Method AddStyleSheet, addr 0x49a0e8c, size 0xe8, virtual false, abstract: false, final false
  inline void AddStyleSheet(::UnityEngine::UIElements::StyleSheet* sheet);

  /// @brief Method GetStyleSheetAt, addr 0x49a0fdc, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::StyleSheet> GetStyleSheetAt(int32_t index);

  static inline ::UnityEngine::UIElements::StyleMatchingContext*
  New_ctor(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult);

  /// @brief Method RemoveStyleSheetRange, addr 0x49a0f74, size 0x68, virtual false, abstract: false, final false
  inline void RemoveStyleSheetRange(int32_t index, int32_t count);

  constexpr ::UnityEngine::UIElements::AncestorFilter* const& __cordl_internal_get_ancestorFilter() const;

  constexpr ::UnityEngine::UIElements::AncestorFilter*& __cordl_internal_get_ancestorFilter();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_currentElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_currentElement();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const& __cordl_internal_get_m_StyleSheetStack() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_m_StyleSheetStack();

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* const& __cordl_internal_get_processResult() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*& __cordl_internal_get_processResult();

  constexpr ::UnityEngine::UIElements::StyleVariableContext* const& __cordl_internal_get_variableContext() const;

  constexpr ::UnityEngine::UIElements::StyleVariableContext*& __cordl_internal_get_variableContext();

  constexpr void __cordl_internal_set_ancestorFilter(::UnityEngine::UIElements::AncestorFilter* value);

  constexpr void __cordl_internal_set_currentElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_StyleSheetStack(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr void __cordl_internal_set_processResult(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* value);

  constexpr void __cordl_internal_set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value);

  /// @brief Method .ctor, addr 0x49a0d9c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult);

  /// @brief Method get_styleSheetCount, addr 0x49a0d54, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_styleSheetCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleMatchingContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleMatchingContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleMatchingContext(StyleMatchingContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleMatchingContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleMatchingContext(StyleMatchingContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6337 };

  /// @brief Field m_StyleSheetStack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___m_StyleSheetStack;

  /// @brief Field variableContext, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableContext* ___variableContext;

  /// @brief Field currentElement, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___currentElement;

  /// @brief Field processResult, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* ___processResult;

  /// @brief Field ancestorFilter, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::AncestorFilter* ___ancestorFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___m_StyleSheetStack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___variableContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___currentElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___processResult) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___ancestorFilter) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleMatchingContext, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleMatchingContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleMatchingContext*, "UnityEngine.UIElements", "StyleMatchingContext");
