#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyValueMatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyValueMatcher)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResult;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyValueMatcher;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher);
// Dependencies UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher
class CORDL_TYPE StylePropertyValueMatcher : public ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher {
public:
  // Declarations
  __declspec(property(get = get_current)) ::UnityEngine::UIElements::StyleSheets::StylePropertyValue current;

  __declspec(property(get = get_isCurrentComma)) bool isCurrentComma;

  __declspec(property(get = get_isCurrentVariable)) bool isCurrentVariable;

  /// @brief Field m_Values, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Values,
                      put = __cordl_internal_set_m_Values)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_Values;

  __declspec(property(get = get_valueCount)) int32_t valueCount;

  /// @brief Method Match, addr 0x49dd79c, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::MatchResult Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* values);

  /// @brief Method MatchAngle, addr 0x49ddeb4, size 0xfc, virtual true, abstract: false, final false
  inline bool MatchAngle();

  /// @brief Method MatchColor, addr 0x49ddc18, size 0xdc, virtual true, abstract: false, final false
  inline bool MatchColor();

  /// @brief Method MatchCustomIdent, addr 0x49dddd4, size 0xe0, virtual true, abstract: false, final false
  inline bool MatchCustomIdent();

  /// @brief Method MatchInteger, addr 0x49dd9f8, size 0x38, virtual true, abstract: false, final false
  inline bool MatchInteger();

  /// @brief Method MatchKeyword, addr 0x49dd90c, size 0xb4, virtual true, abstract: false, final false
  inline bool MatchKeyword(::StringW keyword);

  /// @brief Method MatchLength, addr 0x49dda30, size 0xf4, virtual true, abstract: false, final false
  inline bool MatchLength();

  /// @brief Method MatchNumber, addr 0x49dd9c0, size 0x38, virtual true, abstract: false, final false
  inline bool MatchNumber();

  /// @brief Method MatchPercentage, addr 0x49ddb24, size 0xf4, virtual true, abstract: false, final false
  inline bool MatchPercentage();

  /// @brief Method MatchResource, addr 0x49ddcf4, size 0x38, virtual true, abstract: false, final false
  inline bool MatchResource();

  /// @brief Method MatchTime, addr 0x49ddd70, size 0x64, virtual true, abstract: false, final false
  inline bool MatchTime();

  /// @brief Method MatchUrl, addr 0x49ddd2c, size 0x44, virtual true, abstract: false, final false
  inline bool MatchUrl();

  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const& __cordl_internal_get_m_Values() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_Values();

  constexpr void __cordl_internal_set_m_Values(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  /// @brief Method .ctor, addr 0x49ddfb0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_current, addr 0x49dd61c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue get_current();

  /// @brief Method get_isCurrentComma, addr 0x49dd6f0, size 0xac, virtual true, abstract: false, final false
  inline bool get_isCurrentComma();

  /// @brief Method get_isCurrentVariable, addr 0x49dd6e8, size 0x8, virtual true, abstract: false, final false
  inline bool get_isCurrentVariable();

  /// @brief Method get_valueCount, addr 0x49dd6a0, size 0x48, virtual true, abstract: false, final false
  inline int32_t get_valueCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyValueMatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyValueMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyValueMatcher(StylePropertyValueMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyValueMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyValueMatcher(StylePropertyValueMatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6471 };

  /// @brief Field m_Values, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher, ___m_Values) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*, "UnityEngine.UIElements.StyleSheets", "StylePropertyValueMatcher");
