#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UQueryState_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQuery_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UQueryState_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace UnityEngine::UIElements {
template <typename T> class UQueryState_1_ActionQueryMatcher;
}
namespace UnityEngine::UIElements {
template <typename T> struct UQueryState_1_Enumerator;
}
namespace UnityEngine::UIElements {
template <typename T, typename TElement> class UQueryState_1_ListQueryMatcher_1;
}
namespace UnityEngine::UIElements {
class UQuery_SingleQueryMatcher;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class UQueryState_1_ActionQueryMatcher;
}
namespace UnityEngine::UIElements {
template <typename T, typename TElement> class UQueryState_1_ListQueryMatcher_1;
}
namespace UnityEngine::UIElements {
template <typename T> struct UQueryState_1;
}
namespace UnityEngine::UIElements {
template <typename T> struct UQueryState_1_Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::UQueryState_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::UQueryState_1_Enumerator);
// Dependencies UnityEngine.UIElements.UQuery::UQueryMatcher
namespace UnityEngine::UIElements {
// cpp template
template <typename T, typename TElement>
// Is value type: false
// CS Name: UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,TElement>
class CORDL_TYPE UQueryState_1_ListQueryMatcher_1 : public ::UnityEngine::UIElements::UQuery_UQueryMatcher {
public:
  // Declarations
  /// @brief Field <matches>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__matches_k__BackingField,
                      put = __cordl_internal_set__matches_k__BackingField)) ::System::Collections::Generic::List_1<TElement>* _matches_k__BackingField;

  __declspec(property(get = get_matches, put = set_matches)) ::System::Collections::Generic::List_1<TElement>* matches;

  static inline ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>* New_ctor();

  /// @brief Method OnRuleMatchedElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::Generic::List_1<TElement>* const& __cordl_internal_get__matches_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<TElement>*& __cordl_internal_get__matches_k__BackingField();

  constexpr void __cordl_internal_set__matches_k__BackingField(::System::Collections::Generic::List_1<TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_matches, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TElement>* get_matches();

  /// @brief Method set_matches, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_matches(::System::Collections::Generic::List_1<TElement>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQueryState_1_ListQueryMatcher_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQueryState_1_ListQueryMatcher_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQueryState_1_ListQueryMatcher_1(UQueryState_1_ListQueryMatcher_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQueryState_1_ListQueryMatcher_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQueryState_1_ListQueryMatcher_1(UQueryState_1_ListQueryMatcher_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6225 };

  /// @brief Field <matches>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TElement>* ____matches_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UQuery::UQueryMatcher
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T>
class CORDL_TYPE UQueryState_1_ActionQueryMatcher : public ::UnityEngine::UIElements::UQuery_UQueryMatcher {
public:
  // Declarations
  /// @brief Field <callBack>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__callBack_k__BackingField, put = __cordl_internal_set__callBack_k__BackingField)) ::System::Action_1<T>* _callBack_k__BackingField;

  __declspec(property(get = get_callBack)) ::System::Action_1<T>* callBack;

  static inline ::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>* New_ctor();

  /// @brief Method OnRuleMatchedElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element);

  constexpr ::System::Action_1<T>* const& __cordl_internal_get__callBack_k__BackingField() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get__callBack_k__BackingField();

  constexpr void __cordl_internal_set__callBack_k__BackingField(::System::Action_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_callBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<T>* get_callBack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQueryState_1_ActionQueryMatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQueryState_1_ActionQueryMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQueryState_1_ActionQueryMatcher(UQueryState_1_ActionQueryMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQueryState_1_ActionQueryMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQueryState_1_ActionQueryMatcher(UQueryState_1_ActionQueryMatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6226 };

  /// @brief Field <callBack>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ____callBack_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.UQueryState`1/Enumerator<T>
struct CORDL_TYPE UQueryState_1_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UQueryState_1<T> queryState);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UQueryState_1_Enumerator();

  // Ctor Parameters [CppParam { name: "iterationList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name:
  // "currentIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UQueryState_1_Enumerator(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* iterationList, int32_t currentIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6227 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field iterationList, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* iterationList;

  /// @brief Field currentIndex, offset: 0x8, size: 0x4, def value: None
  int32_t currentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.IEquatable`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.UQueryState`1<T>
struct CORDL_TYPE UQueryState_1 {
public:
  // Declarations
  using ActionQueryMatcher = ::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>;

  using Enumerator = ::UnityEngine::UIElements::UQueryState_1_Enumerator<T>;

  template <typename TElement> using ListQueryMatcher_1 = ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>;

  /// @brief Field s_Action, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Action, put = setStaticF_s_Action)) ::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>* s_Action;

  /// @brief Field s_EnumerationList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EnumerationList,
                      put = setStaticF_s_EnumerationList)) ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* s_EnumerationList;

  /// @brief Field s_List, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_List, put = setStaticF_s_List)) ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, T>* s_List;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::UQueryState_1<T> other);

  /// @brief Method First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T First();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UQueryState_1_Enumerator<T> GetEnumerator();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method RebuildOn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UQueryState_1<T> RebuildOn(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Single, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Single(::UnityEngine::UIElements::UQuery_SingleQueryMatcher* matcher);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers);

  static inline ::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>* getStaticF_s_Action();

  static inline ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* getStaticF_s_EnumerationList();

  static inline ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, T>* getStaticF_s_List();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>* i___System__IEquatable_1___UnityEngine__UIElements__UQueryState_1_T__();

  static inline void setStaticF_s_Action(::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>* value);

  static inline void setStaticF_s_EnumerationList(::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* value);

  static inline void setStaticF_s_List(::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, T>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UQueryState_1();

  // Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_Matchers", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: None }]
  constexpr UQueryState_1(::UnityEngine::UIElements::VisualElement* m_Element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6228 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_Element;

  /// @brief Field m_Matchers, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher, "UnityEngine.UIElements", "UQueryState`1/ActionQueryMatcher");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1, "UnityEngine.UIElements", "UQueryState`1/ListQueryMatcher`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UQueryState_1, "UnityEngine.UIElements", "UQueryState`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UQueryState_1_Enumerator, "UnityEngine.UIElements", "UQueryState`1/Enumerator");
