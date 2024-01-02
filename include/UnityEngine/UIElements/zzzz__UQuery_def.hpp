#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UQuery)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine::UIElements {
class __UQuery__SingleQueryMatcher;
}
namespace UnityEngine::UIElements {
class __UQuery__FirstQueryMatcher;
}
namespace UnityEngine::UIElements {
template <typename T> class __UQuery__IsOfType_1;
}
namespace UnityEngine::UIElements {
class __UQuery__IVisualPredicateWrapper;
}
namespace UnityEngine::UIElements {
class __UQuery__UQueryMatcher;
}
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __UQuery__UQueryMatcher____c;
}
// Forward declare root types
namespace GlobalNamespace {
class __UQuery__UQueryMatcher____c;
}
namespace UnityEngine::UIElements {
class UQuery;
}
namespace UnityEngine::UIElements {
class __UQuery__FirstQueryMatcher;
}
namespace UnityEngine::UIElements {
class __UQuery__IVisualPredicateWrapper;
}
namespace UnityEngine::UIElements {
template <typename T> class __UQuery__IsOfType_1;
}
namespace UnityEngine::UIElements {
class __UQuery__SingleQueryMatcher;
}
namespace UnityEngine::UIElements {
class __UQuery__UQueryMatcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__UQuery__UQueryMatcher____c);
MARK_REF_PTR_T(::UnityEngine::UIElements::UQuery);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UQuery__FirstQueryMatcher);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UQuery__IVisualPredicateWrapper);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__UQuery__IsOfType_1);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UQuery__SingleQueryMatcher);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UQuery__UQueryMatcher);
// Type: ::IVisualPredicateWrapper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6920))
// CS Name: ::UQuery::IVisualPredicateWrapper*
class CORDL_TYPE __UQuery__IVisualPredicateWrapper {
public:
  // Declarations
  /// @brief Method Predicate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Predicate(::System::Object* e);

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__IVisualPredicateWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UQuery__IVisualPredicateWrapper(__UQuery__IVisualPredicateWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__IVisualPredicateWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UQuery__IVisualPredicateWrapper(__UQuery__IVisualPredicateWrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::IsOfType`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6921))
// CS Name: ::UQuery::IsOfType`1<T>*
class CORDL_TYPE __UQuery__IsOfType_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::UIElements::__UQuery__IsOfType_1<T>* s_Instance;

  /// @brief Convert operator to "::UnityEngine::UIElements::__UQuery__IVisualPredicateWrapper"
  constexpr operator ::UnityEngine::UIElements::__UQuery__IVisualPredicateWrapper*() noexcept;

  static inline void setStaticF_s_Instance(::UnityEngine::UIElements::__UQuery__IsOfType_1<T>* value);

  static inline ::UnityEngine::UIElements::__UQuery__IsOfType_1<T>* getStaticF_s_Instance();

  /// @brief Method Predicate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Predicate(::System::Object* e);

  static inline ::UnityEngine::UIElements::__UQuery__IsOfType_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__IsOfType_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UQuery__IsOfType_1(__UQuery__IsOfType_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__IsOfType_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UQuery__IsOfType_1(__UQuery__IsOfType_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UQuery__IsOfType_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6922))
// CS Name: ::UQuery::UQueryMatcher::<>c*
class CORDL_TYPE __UQuery__UQueryMatcher____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__UQuery__UQueryMatcher____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0,
                             put = setStaticF___9__5_0))::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* __9__5_0;

  static inline void setStaticF___9(::GlobalNamespace::__UQuery__UQueryMatcher____c* value);

  static inline ::GlobalNamespace::__UQuery__UQueryMatcher____c* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* value);

  static inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* getStaticF___9__5_0();

  static inline ::GlobalNamespace::__UQuery__UQueryMatcher____c* New_ctor();

  /// @brief Method .ctor, addr 0x2e04930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <TraverseRecursive>b__5_0, addr 0x2e04938, size 0x4, virtual false, abstract: false, final false
  inline void _TraverseRecursive_b__5_0(::UnityEngine::UIElements::VisualElement* e, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo i);

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__UQueryMatcher____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UQuery__UQueryMatcher____c(__UQuery__UQueryMatcher____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__UQueryMatcher____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UQuery__UQueryMatcher____c(__UQuery__UQueryMatcher____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UQuery__UQueryMatcher____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UQuery__UQueryMatcher____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::UQueryMatcher
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7459))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6923))
// CS Name: ::UQuery::UQueryMatcher*
class CORDL_TYPE __UQuery__UQueryMatcher : public ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal {
public:
  // Declarations
  using __c = ::GlobalNamespace::__UQuery__UQueryMatcher____c;

  /// @brief Field m_Matchers, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Matchers, put = __set_m_Matchers))::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*& __get_m_Matchers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*> const& __get_m_Matchers() const;

  constexpr void __set_m_Matchers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* value);

  static inline ::UnityEngine::UIElements::__UQuery__UQueryMatcher* New_ctor();

  /// @brief Method .ctor, addr 0x2e046a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Traverse, addr 0x2e046ac, size 0x8, virtual true, abstract: false, final false
  inline void Traverse(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method OnRuleMatchedElement, addr 0x2e046b4, size 0x8, virtual true, abstract: false, final false
  inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method NoProcessResult, addr 0x2e046bc, size 0x4, virtual false, abstract: false, final false
  static inline void NoProcessResult(::UnityEngine::UIElements::VisualElement* e, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo i);

  /// @brief Method TraverseRecursive, addr 0x2e046c0, size 0x1fc, virtual true, abstract: false, final false
  inline void TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth);

  /// @brief Method Run, addr 0x2e048bc, size 0x10, virtual true, abstract: false, final false
  inline void Run(::UnityEngine::UIElements::VisualElement* root, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers);

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__UQueryMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UQuery__UQueryMatcher(__UQuery__UQueryMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__UQueryMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UQuery__UQueryMatcher(__UQuery__UQueryMatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UQuery__UQueryMatcher();

public:
  /// @brief Field m_Matchers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* ___m_Matchers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UQuery__UQueryMatcher, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UQuery__UQueryMatcher, ___m_Matchers) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::SingleQueryMatcher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6923))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6924))
// CS Name: ::UQuery::SingleQueryMatcher*
class CORDL_TYPE __UQuery__SingleQueryMatcher : public ::UnityEngine::UIElements::__UQuery__UQueryMatcher {
public:
  // Declarations
  /// @brief Field <match>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__match_k__BackingField, put = __set__match_k__BackingField))::UnityEngine::UIElements::VisualElement* _match_k__BackingField;

  __declspec(property(get = get_match, put = set_match))::UnityEngine::UIElements::VisualElement* match;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__match_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__match_k__BackingField() const;

  constexpr void __set__match_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_match, addr 0x2e0493c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_match();

  /// @brief Method set_match, addr 0x2e04944, size 0x8, virtual false, abstract: false, final false
  inline void set_match(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method Run, addr 0x2e0494c, size 0x24, virtual true, abstract: false, final false
  inline void Run(::UnityEngine::UIElements::VisualElement* root, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers);

  /// @brief Method IsInUse, addr 0x2e04970, size 0x10, virtual false, abstract: false, final false
  inline bool IsInUse();

  /// @brief Method CreateNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::__UQuery__SingleQueryMatcher* CreateNew();

  static inline ::UnityEngine::UIElements::__UQuery__SingleQueryMatcher* New_ctor();

  /// @brief Method .ctor, addr 0x2e04980, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__SingleQueryMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UQuery__SingleQueryMatcher(__UQuery__SingleQueryMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__SingleQueryMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UQuery__SingleQueryMatcher(__UQuery__SingleQueryMatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UQuery__SingleQueryMatcher();

public:
  /// @brief Field <match>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____match_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UQuery__SingleQueryMatcher, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UQuery__SingleQueryMatcher, ____match_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::FirstQueryMatcher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6925))
// CS Name: ::UQuery::FirstQueryMatcher*
class CORDL_TYPE __UQuery__FirstQueryMatcher : public ::UnityEngine::UIElements::__UQuery__SingleQueryMatcher {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::UnityEngine::UIElements::__UQuery__FirstQueryMatcher* Instance;

  static inline void setStaticF_Instance(::UnityEngine::UIElements::__UQuery__FirstQueryMatcher* value);

  static inline ::UnityEngine::UIElements::__UQuery__FirstQueryMatcher* getStaticF_Instance();

  /// @brief Method OnRuleMatchedElement, addr 0x2e04988, size 0x14, virtual true, abstract: false, final false
  inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method CreateNew, addr 0x2e0499c, size 0x5c, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::__UQuery__SingleQueryMatcher* CreateNew();

  static inline ::UnityEngine::UIElements::__UQuery__FirstQueryMatcher* New_ctor();

  /// @brief Method .ctor, addr 0x2e049f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__FirstQueryMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UQuery__FirstQueryMatcher(__UQuery__FirstQueryMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UQuery__FirstQueryMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UQuery__FirstQueryMatcher(__UQuery__FirstQueryMatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UQuery__FirstQueryMatcher();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UQuery__FirstQueryMatcher, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UQuery
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6926))
// CS Name: ::UnityEngine.UIElements::UQuery*
class CORDL_TYPE UQuery : public ::System::Object {
public:
  // Declarations
  using FirstQueryMatcher = ::UnityEngine::UIElements::__UQuery__FirstQueryMatcher;

  using SingleQueryMatcher = ::UnityEngine::UIElements::__UQuery__SingleQueryMatcher;

  using UQueryMatcher = ::UnityEngine::UIElements::__UQuery__UQueryMatcher;

  template <typename T> using IsOfType_1 = ::UnityEngine::UIElements::__UQuery__IsOfType_1<T>;

  using IVisualPredicateWrapper = ::UnityEngine::UIElements::__UQuery__IVisualPredicateWrapper;

  // Ctor Parameters [CppParam { name: "", ty: "UQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQuery(UQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQuery(UQuery const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQuery();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UQuery, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::GlobalNamespace::__UQuery__UQueryMatcher____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UQuery__UQueryMatcher____c*, "UnityEngine.UIElements", "UQuery/UQueryMatcher/<>c");
NEED_NO_BOX(::UnityEngine::UIElements::UQuery);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQuery*, "UnityEngine.UIElements", "UQuery");
NEED_NO_BOX(::UnityEngine::UIElements::__UQuery__FirstQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UQuery__FirstQueryMatcher*, "UnityEngine.UIElements", "UQuery/FirstQueryMatcher");
NEED_NO_BOX(::UnityEngine::UIElements::__UQuery__IVisualPredicateWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UQuery__IVisualPredicateWrapper*, "UnityEngine.UIElements", "UQuery/IVisualPredicateWrapper");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__UQuery__IsOfType_1, "UnityEngine.UIElements", "UQuery/IsOfType`1");
NEED_NO_BOX(::UnityEngine::UIElements::__UQuery__SingleQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UQuery__SingleQueryMatcher*, "UnityEngine.UIElements", "UQuery/SingleQueryMatcher");
NEED_NO_BOX(::UnityEngine::UIElements::__UQuery__UQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UQuery__UQueryMatcher*, "UnityEngine.UIElements", "UQuery/UQueryMatcher");
