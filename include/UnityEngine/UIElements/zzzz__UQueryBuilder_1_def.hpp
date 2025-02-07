#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UQueryBuilder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UQueryBuilder_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
template <typename T> struct UQueryState_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> struct UQueryBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::UQueryBuilder_1);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.StyleSelectorRelationship
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.UQueryBuilder`1<T>
struct CORDL_TYPE UQueryBuilder_1 {
public:
  // Declarations
  __declspec(property(get = get_parts)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* parts;

  __declspec(property(get = get_styleSelectors)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* styleSelectors;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*();

  /// @brief Method AddClass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddClass(::StringW c);

  /// @brief Method AddName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddName(::StringW id);

  /// @brief Method AddPseudoStatesRuleIfNecessasy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddPseudoStatesRuleIfNecessasy();

  /// @brief Method Build, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UQueryState_1<T> Build();

  /// @brief Method Class, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UQueryBuilder_1<T> Class(::StringW classname);

  /// @brief Method CurrentSelectorEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool CurrentSelectorEmpty();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::UQueryBuilder_1<T> other);

  /// @brief Method FinishCurrentSelector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FinishCurrentSelector();

  /// @brief Method FinishSelector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FinishSelector();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UQueryBuilder_1<T> Name(::StringW id);

  /// @brief Method SingleBaseType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UQueryBuilder_1<T> SingleBaseType();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* visualElement);

  /// @brief Method get_parts, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* get_parts();

  /// @brief Method get_styleSelectors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* get_styleSelectors();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>* i___System__IEquatable_1___UnityEngine__UIElements__UQueryBuilder_1_T__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UQueryBuilder_1();

  // Ctor Parameters [CppParam { name: "m_StyleSelectors", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*", modifiers: "", def_value: None }, CppParam { name:
  // "m_Parts", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*", modifiers: "", def_value: None }, CppParam { name: "m_Element", ty:
  // "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_Matchers", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: None }, CppParam { name: "m_Relationship", ty:
  // "::UnityEngine::UIElements::StyleSelectorRelationship", modifiers: "", def_value: None }, CppParam { name: "pseudoStatesMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "negatedPseudoStatesMask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UQueryBuilder_1(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* m_StyleSelectors,
                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* m_Parts, ::UnityEngine::UIElements::VisualElement* m_Element,
                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers, ::UnityEngine::UIElements::StyleSelectorRelationship m_Relationship,
                            int32_t pseudoStatesMask, int32_t negatedPseudoStatesMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6230 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_StyleSelectors, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* m_StyleSelectors;

  /// @brief Field m_Parts, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* m_Parts;

  /// @brief Field m_Element, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_Element;

  /// @brief Field m_Matchers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers;

  /// @brief Field m_Relationship, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSelectorRelationship m_Relationship;

  /// @brief Field pseudoStatesMask, offset: 0x24, size: 0x4, def value: None
  int32_t pseudoStatesMask;

  /// @brief Field negatedPseudoStatesMask, offset: 0x28, size: 0x4, def value: None
  int32_t negatedPseudoStatesMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UQueryBuilder_1, "UnityEngine.UIElements", "UQueryBuilder`1");
