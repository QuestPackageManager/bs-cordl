#pragma once
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
// Type: UnityEngine.UIElements::StyleMatchingContext
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6817))
// CS Name: ::UnityEngine.UIElements::StyleMatchingContext*
class CORDL_TYPE StyleMatchingContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_StyleSheetStack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleSheetStack,
                      put = __cordl_internal_set_m_StyleSheetStack))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* m_StyleSheetStack;

  /// @brief Field variableContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_variableContext, put = __cordl_internal_set_variableContext))::UnityEngine::UIElements::StyleVariableContext* variableContext;

  /// @brief Field currentElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentElement, put = __cordl_internal_set_currentElement))::UnityEngine::UIElements::VisualElement* currentElement;

  /// @brief Field processResult, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_processResult,
                      put = __cordl_internal_set_processResult))::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult;

  __declspec(property(get = get_styleSheetCount)) int32_t styleSheetCount;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_m_StyleSheetStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*> const& __cordl_internal_get_m_StyleSheetStack() const;

  constexpr void __cordl_internal_set_m_StyleSheetStack(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr ::UnityEngine::UIElements::StyleVariableContext*& __cordl_internal_get_variableContext();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableContext*> const& __cordl_internal_get_variableContext() const;

  constexpr void __cordl_internal_set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_currentElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_currentElement() const;

  constexpr void __cordl_internal_set_currentElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*& __cordl_internal_get_processResult();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*> const&
  __cordl_internal_get_processResult() const;

  constexpr void __cordl_internal_set_processResult(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* value);

  /// @brief Method get_styleSheetCount, addr 0x2dc1bb4, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_styleSheetCount();

  static inline ::UnityEngine::UIElements::StyleMatchingContext*
  New_ctor(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult);

  /// @brief Method .ctor, addr 0x2dc1bfc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult);

  /// @brief Method AddStyleSheet, addr 0x2dc1cc0, size 0xec, virtual false, abstract: false, final false
  inline void AddStyleSheet(::UnityEngine::UIElements::StyleSheet* sheet);

  /// @brief Method RemoveStyleSheetRange, addr 0x2dc1dac, size 0x68, virtual false, abstract: false, final false
  inline void RemoveStyleSheetRange(int32_t index, int32_t count);

  /// @brief Method GetStyleSheetAt, addr 0x2dc1e14, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::StyleSheet> GetStyleSheetAt(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "StyleMatchingContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleMatchingContext(StyleMatchingContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleMatchingContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleMatchingContext(StyleMatchingContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleMatchingContext();

public:
  /// @brief Field m_StyleSheetStack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___m_StyleSheetStack;

  /// @brief Field variableContext, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableContext* ___variableContext;

  /// @brief Field currentElement, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___currentElement;

  /// @brief Field processResult, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* ___processResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleMatchingContext, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___m_StyleSheetStack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___variableContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___currentElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMatchingContext, ___processResult) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleMatchingContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleMatchingContext*, "UnityEngine.UIElements", "StyleMatchingContext");
