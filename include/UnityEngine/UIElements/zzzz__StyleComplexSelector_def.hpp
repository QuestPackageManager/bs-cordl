#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleComplexSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Hashes_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleComplexSelector)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::UIElements {
struct PseudoStates;
}
namespace UnityEngine::UIElements {
struct StyleComplexSelector_PseudoStateData;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector___c;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector___c;
}
namespace UnityEngine::UIElements {
struct StyleComplexSelector_PseudoStateData;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleComplexSelector*);
MARK_REF_T(::UnityEngine::UIElements::StyleComplexSelector___c*);
MARK_VAL_T(::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleComplexSelector*, "UnityEngine.UIElements", "StyleComplexSelector");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleComplexSelector___c*, "UnityEngine.UIElements", "StyleComplexSelector/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData, "UnityEngine.UIElements", "StyleComplexSelector/PseudoStateData");
// Dependencies UnityEngine.UIElements.PseudoStates
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct CORDL_TYPE StyleComplexSelector_PseudoStateData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x7113d7c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::PseudoStates state, bool negate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleComplexSelector_PseudoStateData();

  // Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None, comment: None }, CppParam { name: "negate", ty: "bool", modifiers: "",
  // def_value: None, comment: None }]
  constexpr StyleComplexSelector_PseudoStateData(::UnityEngine::UIElements::PseudoStates state, bool negate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5136 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field state, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates state;

  /// @brief Field negate, offset: 0x4, size: 0x1, def value: None
  bool negate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData, negate) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData) == 0x8, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleComplexSelector/<>c
class CORDL_TYPE StyleComplexSelector___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::StyleComplexSelector___c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0)) ::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* __9__23_0;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>* __9__26_0;

  static inline ::UnityEngine::UIElements::StyleComplexSelector___c* New_ctor();

  /// @brief Method <CalculateHashes>b__26_0, addr 0x71145d0, size 0x18, virtual false, abstract: false, final false
  inline bool _CalculateHashes_b__26_0(::UnityEngine::UIElements::StyleSelectorPart p);

  /// @brief Method <ToString>b__23_0, addr 0x71145b0, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__23_0(::UnityEngine::UIElements::StyleSelector* x);

  /// @brief Method .ctor, addr 0x71145ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::StyleComplexSelector___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* getStaticF___9__23_0();

  static inline ::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>* getStaticF___9__26_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::StyleComplexSelector___c* value);

  static inline void setStaticF___9__23_0(::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* value);

  static inline void setStaticF___9__26_0(::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleComplexSelector___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleComplexSelector___c(StyleComplexSelector___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleComplexSelector___c(StyleComplexSelector___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5137 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleComplexSelector___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object, UnityEngine.UIElements.Hashes, UnityEngine.UIElements.StyleSelector
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleComplexSelector
class CORDL_TYPE StyleComplexSelector : public ::System::Object {
public:
  // Declarations
  using PseudoStateData = ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData;

  using __c = ::UnityEngine::UIElements::StyleComplexSelector___c;

  /// @brief Field <rule>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rule_k__BackingField, put = __cordl_internal_set__rule_k__BackingField)) ::UnityEngine::UIElements::StyleRule* _rule_k__BackingField;

  /// @brief Field ancestorHashes, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_ancestorHashes, put = __cordl_internal_set_ancestorHashes)) ::UnityEngine::UIElements::Hashes ancestorHashes;

  __declspec(property(get = get_isSimple)) bool isSimple;

  /// @brief Field m_Selectors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Selectors, put = __cordl_internal_set_m_Selectors)) ::ArrayW<::UnityEngine::UIElements::StyleSelector*> m_Selectors;

  /// @brief Field m_Specificity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Specificity, put = __cordl_internal_set_m_Specificity)) int32_t m_Specificity;

  /// @brief Field nextInTable, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_nextInTable, put = __cordl_internal_set_nextInTable)) ::UnityEngine::UIElements::StyleComplexSelector* nextInTable;

  /// @brief Field orderInStyleSheet, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_orderInStyleSheet, put = __cordl_internal_set_orderInStyleSheet)) int32_t orderInStyleSheet;

  __declspec(property(get = get_rule, put = set_rule)) ::UnityEngine::UIElements::StyleRule* rule;

  /// @brief Field ruleIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_ruleIndex, put = __cordl_internal_set_ruleIndex)) int32_t ruleIndex;

  /// @brief Field s_HashList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HashList, put = setStaticF_s_HashList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* s_HashList;

  /// @brief Field s_PseudoStates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PseudoStates,
                      put = setStaticF_s_PseudoStates)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>* s_PseudoStates;

  __declspec(property(get = get_selectors, put = set_selectors)) ::ArrayW<::UnityEngine::UIElements::StyleSelector*> selectors;

  __declspec(property(get = get_specificity, put = set_specificity)) int32_t specificity;

  /// @brief Method CachePseudoStateMasks, addr 0x7113768, size 0x614, virtual false, abstract: false, final false
  inline void CachePseudoStateMasks(::UnityEngine::UIElements::StyleSheet* styleSheet);

  /// @brief Method CalculateHashes, addr 0x7113f8c, size 0x53c, virtual false, abstract: false, final false
  inline void CalculateHashes();

  static inline ::UnityEngine::UIElements::StyleComplexSelector* New_ctor();

  /// @brief Method StyleSelectorPartCompare, addr 0x7113f48, size 0x44, virtual false, abstract: false, final false
  static inline int32_t StyleSelectorPartCompare(::UnityEngine::UIElements::StyleSelectorPart x, ::UnityEngine::UIElements::StyleSelectorPart y);

  /// @brief Method ToString, addr 0x7113d98, size 0x1b0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::UIElements::StyleRule* const& __cordl_internal_get__rule_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::StyleRule*& __cordl_internal_get__rule_k__BackingField();

  constexpr ::UnityEngine::UIElements::Hashes const& __cordl_internal_get_ancestorHashes() const;

  constexpr ::UnityEngine::UIElements::Hashes& __cordl_internal_get_ancestorHashes();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*> const& __cordl_internal_get_m_Selectors() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*>& __cordl_internal_get_m_Selectors();

  constexpr int32_t const& __cordl_internal_get_m_Specificity() const;

  constexpr int32_t& __cordl_internal_get_m_Specificity();

  constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& __cordl_internal_get_nextInTable() const;

  constexpr ::UnityEngine::UIElements::StyleComplexSelector*& __cordl_internal_get_nextInTable();

  constexpr int32_t const& __cordl_internal_get_orderInStyleSheet() const;

  constexpr int32_t& __cordl_internal_get_orderInStyleSheet();

  constexpr int32_t const& __cordl_internal_get_ruleIndex() const;

  constexpr int32_t& __cordl_internal_get_ruleIndex();

  constexpr void __cordl_internal_set__rule_k__BackingField(::UnityEngine::UIElements::StyleRule* value);

  constexpr void __cordl_internal_set_ancestorHashes(::UnityEngine::UIElements::Hashes value);

  constexpr void __cordl_internal_set_m_Selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*> value);

  constexpr void __cordl_internal_set_m_Specificity(int32_t value);

  constexpr void __cordl_internal_set_nextInTable(::UnityEngine::UIElements::StyleComplexSelector* value);

  constexpr void __cordl_internal_set_orderInStyleSheet(int32_t value);

  constexpr void __cordl_internal_set_ruleIndex(int32_t value);

  /// @brief Method .ctor, addr 0x71136c8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* getStaticF_s_HashList();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>* getStaticF_s_PseudoStates();

  /// @brief Method get_isSimple, addr 0x7113698, size 0x20, virtual false, abstract: false, final false
  inline bool get_isSimple();

  /// [CompilerGenerated]
  /// @brief Method get_rule, addr 0x7113688, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRule* get_rule();

  /// @brief Method get_selectors, addr 0x71136b8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleSelector*> get_selectors();

  /// @brief Method get_specificity, addr 0x7113678, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_specificity();

  static inline void setStaticF_s_HashList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* value);

  static inline void setStaticF_s_PseudoStates(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>* value);

  /// [CompilerGenerated]
  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method set_rule, addr 0x7113690, size 0x8, virtual false, abstract: false, final false
  inline void set_rule(::UnityEngine::UIElements::StyleRule* value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method set_selectors, addr 0x71136c0, size 0x8, virtual false, abstract: false, final false
  inline void set_selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*> value);

  /// @brief Method set_specificity, addr 0x7113680, size 0x8, virtual false, abstract: false, final false
  inline void set_specificity(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleComplexSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleComplexSelector(StyleComplexSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleComplexSelector(StyleComplexSelector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5138 };

  /// @brief Field ancestorHashes, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::UIElements::Hashes ___ancestorHashes;

  /// [SerializeField]
  /// @brief Field m_Specificity, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_Specificity;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <rule>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleRule* ____rule_k__BackingField;

  /// [SerializeField]
  /// @brief Field m_Selectors, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSelector*> ___m_Selectors;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// [SerializeField]
  /// @brief Field ruleIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___ruleIndex;

  /// @brief Field nextInTable, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleComplexSelector* ___nextInTable;

  /// @brief Field orderInStyleSheet, offset: 0x48, size: 0x4, def value: None
  int32_t ___orderInStyleSheet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___ancestorHashes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___m_Specificity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ____rule_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___m_Selectors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___ruleIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___nextInTable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___orderInStyleSheet) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleComplexSelector) == 0x50, "Size mismatch!");

} // namespace UnityEngine::UIElements
