#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UQuery_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UQueryState_1)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
template <typename T, typename TElement> class __UQueryState_1__ListQueryMatcher_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
template <typename T> class __UQueryState_1__ActionQueryMatcher;
}
namespace UnityEngine::UIElements {
template <typename T> struct __UQueryState_1__Enumerator;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::UIElements {
class __UQuery__SingleQueryMatcher;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class __UQueryState_1__ActionQueryMatcher;
}
namespace UnityEngine::UIElements {
template <typename T, typename TElement> class __UQueryState_1__ListQueryMatcher_1;
}
namespace UnityEngine::UIElements {
template <typename T> struct UQueryState_1;
}
namespace UnityEngine::UIElements {
template <typename T> struct __UQueryState_1__Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::UQueryState_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::__UQueryState_1__Enumerator);
// Type: ::ListQueryMatcher`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T, typename TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6923))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6927))
// CS Name: ::UQueryState`1::ListQueryMatcher`1<T,TElement>*
class CORDL_TYPE __UQueryState_1__ListQueryMatcher_1 : public ::UnityEngine::UIElements::__UQuery__UQueryMatcher {
public:
  // Declarations
  /// @brief Field <matches>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__matches_k__BackingField, put = __set__matches_k__BackingField))::System::Collections::Generic::List_1<TElement>* _matches_k__BackingField;

  __declspec(property(get = get_matches, put = set_matches))::System::Collections::Generic::List_1<TElement>* matches;

  constexpr ::System::Collections::Generic::List_1<TElement>*& __get__matches_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TElement>*> const& __get__matches_k__BackingField() const;

  constexpr void __set__matches_k__BackingField(::System::Collections::Generic::List_1<TElement>* value);

  /// @brief Method get_matches, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TElement>* get_matches();

  /// @brief Method set_matches, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_matches(::System::Collections::Generic::List_1<TElement>* value);

  /// @brief Method OnRuleMatchedElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  static inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UQueryState_1__ListQueryMatcher_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UQueryState_1__ListQueryMatcher_1(__UQueryState_1__ListQueryMatcher_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UQueryState_1__ListQueryMatcher_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UQueryState_1__ListQueryMatcher_1(__UQueryState_1__ListQueryMatcher_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UQueryState_1__ListQueryMatcher_1();

public:
  /// @brief Field <matches>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TElement>* ____matches_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::ActionQueryMatcher
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6923))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6928))
// CS Name: ::UQueryState`1::ActionQueryMatcher<T>*
class CORDL_TYPE __UQueryState_1__ActionQueryMatcher : public ::UnityEngine::UIElements::__UQuery__UQueryMatcher {
public:
  // Declarations
  /// @brief Field <callBack>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__callBack_k__BackingField, put = __set__callBack_k__BackingField))::System::Action_1<T>* _callBack_k__BackingField;

  __declspec(property(get = get_callBack))::System::Action_1<T>* callBack;

  constexpr ::System::Action_1<T>*& __get__callBack_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get__callBack_k__BackingField() const;

  constexpr void __set__callBack_k__BackingField(::System::Action_1<T>* value);

  /// @brief Method get_callBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<T>* get_callBack();

  /// @brief Method OnRuleMatchedElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element);

  static inline ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UQueryState_1__ActionQueryMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UQueryState_1__ActionQueryMatcher(__UQueryState_1__ActionQueryMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UQueryState_1__ActionQueryMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UQueryState_1__ActionQueryMatcher(__UQueryState_1__ActionQueryMatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UQueryState_1__ActionQueryMatcher();

public:
  /// @brief Field <callBack>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ____callBack_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::Enumerator
// SizeInfo { instance_size: 16, native_size: 28, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6929))
// CS Name: ::UQueryState`1::Enumerator<T>
struct CORDL_TYPE __UQueryState_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UQueryState_1<T> queryState);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "iterationList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name:
  // "currentIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UQueryState_1__Enumerator(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* iterationList, int32_t currentIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UQueryState_1__Enumerator();

  /// @brief Field iterationList, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* iterationList;

  /// @brief Field currentIndex, offset: 0x8, size: 0x4, def value: None
  int32_t currentIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UQueryState`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6930))
// CS Name: ::UnityEngine.UIElements::UQueryState`1<T>
struct CORDL_TYPE UQueryState_1 {
public:
  // Declarations
  using Enumerator = ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>;

  using ActionQueryMatcher = ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>;

  template <typename TElement> using ListQueryMatcher_1 = ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>;

  /// @brief Field s_Action, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Action, put = setStaticF_s_Action))::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* s_Action;

  /// @brief Field s_List, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_List, put = setStaticF_s_List))::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, T>* s_List;

  /// @brief Field s_EnumerationList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EnumerationList,
                             put = setStaticF_s_EnumerationList))::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* s_EnumerationList;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*();

  static inline void setStaticF_s_Action(::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* value);

  static inline ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* getStaticF_s_Action();

  static inline void setStaticF_s_List(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, T>* value);

  static inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, T>* getStaticF_s_List();

  static inline void setStaticF_s_EnumerationList(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* value);

  static inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* getStaticF_s_EnumerationList();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers);

  /// @brief Method RebuildOn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UQueryState_1<T> RebuildOn(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Single, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Single(::UnityEngine::UIElements::__UQuery__SingleQueryMatcher* matcher);

  /// @brief Method First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T First();

  /// @brief Method ToList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ToList(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::UQueryState_1<T> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_Matchers", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: None }]
  constexpr UQueryState_1(::UnityEngine::UIElements::VisualElement* m_Element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UQueryState_1();

  /// @brief Field m_Element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_Element;

  /// @brief Field m_Matchers, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher, "UnityEngine.UIElements", "UQueryState`1/ActionQueryMatcher");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1, "UnityEngine.UIElements", "UQueryState`1/ListQueryMatcher`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UQueryState_1, "UnityEngine.UIElements", "UQueryState`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__UQueryState_1__Enumerator, "UnityEngine.UIElements", "UQueryState`1/Enumerator");
