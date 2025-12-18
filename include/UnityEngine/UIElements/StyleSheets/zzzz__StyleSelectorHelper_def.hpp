#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSelectorHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSelectorHelper)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine::UIElements::StyleSheets {
struct SelectorMatchRecord;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleSelectorHelper_SelectorWorkItem;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleMatchingContext;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
struct StyleSheet_OrderedSelectorType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSelectorHelper;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleSelectorHelper_SelectorWorkItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem);
// Dependencies UnityEngine.UIElements.StyleSheet::OrderedSelectorType
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSelectorHelper/SelectorWorkItem
struct CORDL_TYPE StyleSelectorHelper_SelectorWorkItem {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6b4c254, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheet_OrderedSelectorType type, ::StringW input);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSelectorHelper_SelectorWorkItem();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::StyleSheet_OrderedSelectorType", modifiers: "", def_value: None }, CppParam { name: "input", ty: "::StringW", modifiers:
  // "", def_value: None }]
  constexpr StyleSelectorHelper_SelectorWorkItem(::UnityEngine::UIElements::StyleSheet_OrderedSelectorType type, ::StringW input) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5461 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType type;

  /// @brief Field input, offset: 0x8, size: 0x8, def value: None
  ::StringW input;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem, input) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSelectorHelper
class CORDL_TYPE StyleSelectorHelper : public ::System::Object {
public:
  // Declarations
  using SelectorWorkItem = ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem;

  /// @brief Method FastLookup, addr 0x6b4bad4, size 0xf4, virtual false, abstract: false, final false
  static inline void FastLookup(::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* table,
                                ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors,
                                ::UnityEngine::UIElements::StyleMatchingContext* context, ::StringW input, ::ByRef<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> record);

  /// @brief Method FindMatches, addr 0x6b4bbc8, size 0x68c, virtual false, abstract: false, final false
  static inline void FindMatches(::UnityEngine::UIElements::StyleMatchingContext* context,
                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors, int32_t parentSheetIndex);

  /// @brief Method MatchRightToLeft, addr 0x6b4b82c, size 0x168, virtual false, abstract: false, final false
  static inline bool MatchRightToLeft(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector,
                                      ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult);

  /// @brief Method MatchesSelector, addr 0x6b4b5d0, size 0x25c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::MatchResultInfo MatchesSelector(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSelector* selector);

  /// @brief Method TestSelectorLinkedList, addr 0x6b4b994, size 0x140, virtual false, abstract: false, final false
  static inline void TestSelectorLinkedList(::UnityEngine::UIElements::StyleComplexSelector* currentComplexSelector,
                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors,
                                            ::UnityEngine::UIElements::StyleMatchingContext* context, ::ByRef<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> record);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSelectorHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSelectorHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSelectorHelper(StyleSelectorHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSelectorHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSelectorHelper(StyleSelectorHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5462 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*, "UnityEngine.UIElements.StyleSheets", "StyleSelectorHelper");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem, "UnityEngine.UIElements.StyleSheets", "StyleSelectorHelper/SelectorWorkItem");
