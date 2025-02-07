#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UQuery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UQuery)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace UnityEngine::UIElements {
class UQueryMatcher_UQuery___c;
}
namespace UnityEngine::UIElements {
class UQuery_FirstQueryMatcher;
}
namespace UnityEngine::UIElements {
class UQuery_IVisualPredicateWrapper;
}
namespace UnityEngine::UIElements {
template <typename T> class UQuery_IsOfType_1;
}
namespace UnityEngine::UIElements {
class UQuery_SingleQueryMatcher;
}
namespace UnityEngine::UIElements {
class UQuery_UQueryMatcher;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UQuery;
}
namespace UnityEngine::UIElements {
class UQueryMatcher_UQuery___c;
}
namespace UnityEngine::UIElements {
class UQuery_FirstQueryMatcher;
}
namespace UnityEngine::UIElements {
class UQuery_IVisualPredicateWrapper;
}
namespace UnityEngine::UIElements {
template <typename T> class UQuery_IsOfType_1;
}
namespace UnityEngine::UIElements {
class UQuery_SingleQueryMatcher;
}
namespace UnityEngine::UIElements {
class UQuery_UQueryMatcher;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UQuery);
MARK_REF_PTR_T(::UnityEngine::UIElements::UQueryMatcher_UQuery___c);
MARK_REF_PTR_T(::UnityEngine::UIElements::UQuery_FirstQueryMatcher);
MARK_REF_PTR_T(::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UQuery_IsOfType_1);
MARK_REF_PTR_T(::UnityEngine::UIElements::UQuery_SingleQueryMatcher);
MARK_REF_PTR_T(::UnityEngine::UIElements::UQuery_UQueryMatcher);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UQuery/IVisualPredicateWrapper
class CORDL_TYPE UQuery_IVisualPredicateWrapper {
public:
  // Declarations
  /// @brief Method Predicate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Predicate(::System::Object* e);

  // Ctor Parameters [CppParam { name: "", ty: "UQuery_IVisualPredicateWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQuery_IVisualPredicateWrapper(UQuery_IVisualPredicateWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6219 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.UQuery::IVisualPredicateWrapper
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UQuery/IsOfType`1<T>
class CORDL_TYPE UQuery_IsOfType_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::UIElements::UQuery_IsOfType_1<T>* s_Instance;

  /// @brief Convert operator to "::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper"
  constexpr operator ::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*() noexcept;

  static inline ::UnityEngine::UIElements::UQuery_IsOfType_1<T>* New_ctor();

  /// @brief Method Predicate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Predicate(::System::Object* e);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UQuery_IsOfType_1<T>* getStaticF_s_Instance();

  /// @brief Convert to "::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper"
  constexpr ::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper* i___UnityEngine__UIElements__UQuery_IVisualPredicateWrapper() noexcept;

  static inline void setStaticF_s_Instance(::UnityEngine::UIElements::UQuery_IsOfType_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQuery_IsOfType_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQuery_IsOfType_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQuery_IsOfType_1(UQuery_IsOfType_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQuery_IsOfType_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQuery_IsOfType_1(UQuery_IsOfType_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UQuery/UQueryMatcher/<>c
class CORDL_TYPE UQueryMatcher_UQuery___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UQueryMatcher_UQuery___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0,
                      put = setStaticF___9__5_0)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* __9__5_0;

  static inline ::UnityEngine::UIElements::UQueryMatcher_UQuery___c* New_ctor();

  /// @brief Method <TraverseRecursive>b__5_0, addr 0x4aa44cc, size 0x4, virtual false, abstract: false, final false
  inline void _TraverseRecursive_b__5_0(::UnityEngine::UIElements::VisualElement* e, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo i);

  /// @brief Method .ctor, addr 0x4aa44c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UQueryMatcher_UQuery___c* getStaticF___9();

  static inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UQueryMatcher_UQuery___c* value);

  static inline void setStaticF___9__5_0(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQueryMatcher_UQuery___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQueryMatcher_UQuery___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQueryMatcher_UQuery___c(UQueryMatcher_UQuery___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQueryMatcher_UQuery___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQueryMatcher_UQuery___c(UQueryMatcher_UQuery___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UQueryMatcher_UQuery___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StyleSheets.HierarchyTraversal
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UQuery/UQueryMatcher
class CORDL_TYPE UQuery_UQueryMatcher : public ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UQueryMatcher_UQuery___c;

  /// @brief Field m_Matchers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Matchers, put = __cordl_internal_set_m_Matchers)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers;

  static inline ::UnityEngine::UIElements::UQuery_UQueryMatcher* New_ctor();

  /// @brief Method NoProcessResult, addr 0x4aa425c, size 0x4, virtual false, abstract: false, final false
  static inline void NoProcessResult(::UnityEngine::UIElements::VisualElement* e, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo i);

  /// @brief Method OnRuleMatchedElement, addr 0x4aa4254, size 0x8, virtual true, abstract: false, final false
  inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Run, addr 0x4aa4458, size 0x10, virtual true, abstract: false, final false
  inline void Run(::UnityEngine::UIElements::VisualElement* root, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers);

  /// @brief Method Traverse, addr 0x4aa424c, size 0x8, virtual true, abstract: false, final false
  inline void Traverse(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method TraverseRecursive, addr 0x4aa4260, size 0x1f8, virtual true, abstract: false, final false
  inline void TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* const& __cordl_internal_get_m_Matchers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*& __cordl_internal_get_m_Matchers();

  constexpr void __cordl_internal_set_m_Matchers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* value);

  /// @brief Method .ctor, addr 0x4aa4244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQuery_UQueryMatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQuery_UQueryMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQuery_UQueryMatcher(UQuery_UQueryMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQuery_UQueryMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQuery_UQueryMatcher(UQuery_UQueryMatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6222 };

  /// @brief Field m_Matchers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* ___m_Matchers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UQuery_UQueryMatcher, ___m_Matchers) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UQuery_UQueryMatcher, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UQuery::UQueryMatcher
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UQuery/SingleQueryMatcher
class CORDL_TYPE UQuery_SingleQueryMatcher : public ::UnityEngine::UIElements::UQuery_UQueryMatcher {
public:
  // Declarations
  /// @brief Field <match>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__match_k__BackingField, put = __cordl_internal_set__match_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _match_k__BackingField;

  __declspec(property(get = get_match, put = set_match)) ::UnityEngine::UIElements::VisualElement* match;

  /// @brief Method CreateNew, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* CreateNew();

  /// @brief Method IsInUse, addr 0x4aa4504, size 0x10, virtual false, abstract: false, final false
  inline bool IsInUse();

  static inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* New_ctor();

  /// @brief Method Run, addr 0x4aa44e0, size 0x24, virtual true, abstract: false, final false
  inline void Run(::UnityEngine::UIElements::VisualElement* root, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__match_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__match_k__BackingField();

  constexpr void __cordl_internal_set__match_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4aa4514, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_match, addr 0x4aa44d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_match();

  /// @brief Method set_match, addr 0x4aa44d8, size 0x8, virtual false, abstract: false, final false
  inline void set_match(::UnityEngine::UIElements::VisualElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQuery_SingleQueryMatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQuery_SingleQueryMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQuery_SingleQueryMatcher(UQuery_SingleQueryMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQuery_SingleQueryMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQuery_SingleQueryMatcher(UQuery_SingleQueryMatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6223 };

  /// @brief Field <match>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____match_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UQuery_SingleQueryMatcher, ____match_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UQuery_SingleQueryMatcher, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UQuery::SingleQueryMatcher
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UQuery/FirstQueryMatcher
class CORDL_TYPE UQuery_FirstQueryMatcher : public ::UnityEngine::UIElements::UQuery_SingleQueryMatcher {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::UnityEngine::UIElements::UQuery_FirstQueryMatcher* Instance;

  /// @brief Method CreateNew, addr 0x4aa4530, size 0x54, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* CreateNew();

  static inline ::UnityEngine::UIElements::UQuery_FirstQueryMatcher* New_ctor();

  /// @brief Method OnRuleMatchedElement, addr 0x4aa451c, size 0x14, virtual true, abstract: false, final false
  inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method .ctor, addr 0x4aa4584, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UQuery_FirstQueryMatcher* getStaticF_Instance();

  static inline void setStaticF_Instance(::UnityEngine::UIElements::UQuery_FirstQueryMatcher* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQuery_FirstQueryMatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQuery_FirstQueryMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQuery_FirstQueryMatcher(UQuery_FirstQueryMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQuery_FirstQueryMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQuery_FirstQueryMatcher(UQuery_FirstQueryMatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UQuery_FirstQueryMatcher, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UQuery
class CORDL_TYPE UQuery : public ::System::Object {
public:
  // Declarations
  using FirstQueryMatcher = ::UnityEngine::UIElements::UQuery_FirstQueryMatcher;

  using IVisualPredicateWrapper = ::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper;

  template <typename T> using IsOfType_1 = ::UnityEngine::UIElements::UQuery_IsOfType_1<T>;

  using SingleQueryMatcher = ::UnityEngine::UIElements::UQuery_SingleQueryMatcher;

  using UQueryMatcher = ::UnityEngine::UIElements::UQuery_UQueryMatcher;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQuery();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQuery(UQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQuery(UQuery const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6225 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UQuery, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UQuery);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQuery*, "UnityEngine.UIElements", "UQuery");
NEED_NO_BOX(::UnityEngine::UIElements::UQueryMatcher_UQuery___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQueryMatcher_UQuery___c*, "UnityEngine.UIElements", "UQuery/UQueryMatcher/<>c");
NEED_NO_BOX(::UnityEngine::UIElements::UQuery_FirstQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQuery_FirstQueryMatcher*, "UnityEngine.UIElements", "UQuery/FirstQueryMatcher");
NEED_NO_BOX(::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*, "UnityEngine.UIElements", "UQuery/IVisualPredicateWrapper");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UQuery_IsOfType_1, "UnityEngine.UIElements", "UQuery/IsOfType`1");
NEED_NO_BOX(::UnityEngine::UIElements::UQuery_SingleQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQuery_SingleQueryMatcher*, "UnityEngine.UIElements", "UQuery/SingleQueryMatcher");
NEED_NO_BOX(::UnityEngine::UIElements::UQuery_UQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQuery_UQueryMatcher*, "UnityEngine.UIElements", "UQuery/UQueryMatcher");
