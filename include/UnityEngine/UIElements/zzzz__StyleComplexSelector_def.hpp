#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleComplexSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Hashes_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleComplexSelector);
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleComplexSelector___c);
MARK_VAL_T(::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData);
// Dependencies UnityEngine.UIElements.PseudoStates
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct CORDL_TYPE StyleComplexSelector_PseudoStateData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4a9055c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::PseudoStates state, bool negate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleComplexSelector_PseudoStateData();

  // Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }, CppParam { name: "negate", ty: "bool", modifiers: "", def_value: None
  // }]
  constexpr StyleComplexSelector_PseudoStateData(::UnityEngine::UIElements::PseudoStates state, bool negate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6169 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleComplexSelector/<>c
class CORDL_TYPE StyleComplexSelector___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::StyleComplexSelector___c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0)) ::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* __9__24_0;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>* __9__27_0;

  static inline ::UnityEngine::UIElements::StyleComplexSelector___c* New_ctor();

  /// @brief Method <CalculateHashes>b__27_0, addr 0x4a90d18, size 0x24, virtual false, abstract: false, final false
  inline bool _CalculateHashes_b__27_0(::UnityEngine::UIElements::StyleSelectorPart p);

  /// @brief Method <ToString>b__24_0, addr 0x4a90cf4, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__24_0(::UnityEngine::UIElements::StyleSelector* x);

  /// @brief Method .ctor, addr 0x4a90cec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::StyleComplexSelector___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* getStaticF___9__24_0();

  static inline ::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>* getStaticF___9__27_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::StyleComplexSelector___c* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* value);

  static inline void setStaticF___9__27_0(::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleComplexSelector___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleComplexSelector___c(StyleComplexSelector___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleComplexSelector___c(StyleComplexSelector___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6170 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleComplexSelector___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.ISerializationCallbackReceiver, UnityEngine.UIElements.Hashes
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

  /// @brief Field m_HashList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_HashList, put = setStaticF_m_HashList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* m_HashList;

  /// @brief Field m_Selectors, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Selectors,
                      put = __cordl_internal_set_m_Selectors)) ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*>
      m_Selectors;

  /// @brief Field m_Specificity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Specificity, put = __cordl_internal_set_m_Specificity)) int32_t m_Specificity;

  /// @brief Field m_isSimple, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isSimple, put = __cordl_internal_set_m_isSimple)) bool m_isSimple;

  /// @brief Field nextInTable, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_nextInTable, put = __cordl_internal_set_nextInTable)) ::UnityEngine::UIElements::StyleComplexSelector* nextInTable;

  /// @brief Field orderInStyleSheet, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_orderInStyleSheet, put = __cordl_internal_set_orderInStyleSheet)) int32_t orderInStyleSheet;

  __declspec(property(get = get_rule, put = set_rule)) ::UnityEngine::UIElements::StyleRule* rule;

  /// @brief Field ruleIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_ruleIndex, put = __cordl_internal_set_ruleIndex)) int32_t ruleIndex;

  /// @brief Field s_PseudoStates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PseudoStates,
                      put = setStaticF_s_PseudoStates)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>* s_PseudoStates;

  __declspec(property(get = get_selectors, put = set_selectors)) ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> selectors;

  __declspec(property(get = get_specificity)) int32_t specificity;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method CachePseudoStateMasks, addr 0x4a900a4, size 0x4b8, virtual false, abstract: false, final false
  inline void CachePseudoStateMasks();

  /// @brief Method CalculateHashes, addr 0x4a90740, size 0x4bc, virtual false, abstract: false, final false
  inline void CalculateHashes();

  static inline ::UnityEngine::UIElements::StyleComplexSelector* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x4a9007c, size 0x28, virtual true, abstract: false, final false
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x4a90078, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method StyleSelectorPartCompare, addr 0x4a906f4, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t StyleSelectorPartCompare(::UnityEngine::UIElements::StyleSelectorPart x, ::UnityEngine::UIElements::StyleSelectorPart y);

  /// @brief Method ToString, addr 0x4a90584, size 0x170, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::UIElements::StyleRule* const& __cordl_internal_get__rule_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::StyleRule*& __cordl_internal_get__rule_k__BackingField();

  constexpr ::UnityEngine::UIElements::Hashes const& __cordl_internal_get_ancestorHashes() const;

  constexpr ::UnityEngine::UIElements::Hashes& __cordl_internal_get_ancestorHashes();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> const& __cordl_internal_get_m_Selectors() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*>& __cordl_internal_get_m_Selectors();

  constexpr int32_t const& __cordl_internal_get_m_Specificity() const;

  constexpr int32_t& __cordl_internal_get_m_Specificity();

  constexpr bool const& __cordl_internal_get_m_isSimple() const;

  constexpr bool& __cordl_internal_get_m_isSimple();

  constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& __cordl_internal_get_nextInTable() const;

  constexpr ::UnityEngine::UIElements::StyleComplexSelector*& __cordl_internal_get_nextInTable();

  constexpr int32_t const& __cordl_internal_get_orderInStyleSheet() const;

  constexpr int32_t& __cordl_internal_get_orderInStyleSheet();

  constexpr int32_t const& __cordl_internal_get_ruleIndex() const;

  constexpr int32_t& __cordl_internal_get_ruleIndex();

  constexpr void __cordl_internal_set__rule_k__BackingField(::UnityEngine::UIElements::StyleRule* value);

  constexpr void __cordl_internal_set_ancestorHashes(::UnityEngine::UIElements::Hashes value);

  constexpr void __cordl_internal_set_m_Selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> value);

  constexpr void __cordl_internal_set_m_Specificity(int32_t value);

  constexpr void __cordl_internal_set_m_isSimple(bool value);

  constexpr void __cordl_internal_set_nextInTable(::UnityEngine::UIElements::StyleComplexSelector* value);

  constexpr void __cordl_internal_set_orderInStyleSheet(int32_t value);

  constexpr void __cordl_internal_set_ruleIndex(int32_t value);

  /// @brief Method .ctor, addr 0x4a90bfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* getStaticF_m_HashList();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>* getStaticF_s_PseudoStates();

  /// @brief Method get_isSimple, addr 0x4a90040, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSimple();

  /// @brief Method get_rule, addr 0x4a90030, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRule* get_rule();

  /// @brief Method get_selectors, addr 0x4a90048, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> get_selectors();

  /// @brief Method get_specificity, addr 0x4a90028, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_specificity();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  static inline void setStaticF_m_HashList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* value);

  static inline void setStaticF_s_PseudoStates(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>* value);

  /// @brief Method set_rule, addr 0x4a90038, size 0x8, virtual false, abstract: false, final false
  inline void set_rule(::UnityEngine::UIElements::StyleRule* value);

  /// @brief Method set_selectors, addr 0x4a90050, size 0x28, virtual false, abstract: false, final false
  inline void set_selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleComplexSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleComplexSelector(StyleComplexSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleComplexSelector(StyleComplexSelector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6171 };

  /// @brief Field ancestorHashes, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::UIElements::Hashes ___ancestorHashes;

  /// @brief Field m_Specificity, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_Specificity;

  /// @brief Field <rule>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleRule* ____rule_k__BackingField;

  /// @brief Field m_isSimple, offset: 0x30, size: 0x1, def value: None
  bool ___m_isSimple;

  /// @brief Field m_Selectors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> ___m_Selectors;

  /// @brief Field ruleIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___ruleIndex;

  /// @brief Field nextInTable, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleComplexSelector* ___nextInTable;

  /// @brief Field orderInStyleSheet, offset: 0x50, size: 0x4, def value: None
  int32_t ___orderInStyleSheet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___ancestorHashes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___m_Specificity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ____rule_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___m_isSimple) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___m_Selectors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___ruleIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___nextInTable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___orderInStyleSheet) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleComplexSelector, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleComplexSelector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleComplexSelector*, "UnityEngine.UIElements", "StyleComplexSelector");
NEED_NO_BOX(::UnityEngine::UIElements::StyleComplexSelector___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleComplexSelector___c*, "UnityEngine.UIElements", "StyleComplexSelector/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData, "UnityEngine.UIElements", "StyleComplexSelector/PseudoStateData");
