#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyValueMatcher)
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResult;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyValueMatcher;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher);
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyValueMatcher
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7483))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7484))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StylePropertyValueMatcher*
class CORDL_TYPE StylePropertyValueMatcher : public ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher {
public:
  // Declarations
  /// @brief Field m_Values, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Values, put = __set_m_Values))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_Values;

  __declspec(property(get = get_current))::UnityEngine::UIElements::StyleSheets::StylePropertyValue current;

  __declspec(property(get = get_valueCount)) int32_t valueCount;

  __declspec(property(get = get_isCurrentVariable)) bool isCurrentVariable;

  __declspec(property(get = get_isCurrentComma)) bool isCurrentComma;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __get_m_Values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*> const& __get_m_Values() const;

  constexpr void __set_m_Values(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  /// @brief Method get_current addr 0x2df2128 size 0x84 virtual false final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue get_current();

  /// @brief Method get_valueCount addr 0x2df21ac size 0x48 virtual true final false
  inline int32_t get_valueCount();

  /// @brief Method get_isCurrentVariable addr 0x2df21f4 size 0x8 virtual true final false
  inline bool get_isCurrentVariable();

  /// @brief Method get_isCurrentComma addr 0x2df21fc size 0xa8 virtual true final false
  inline bool get_isCurrentComma();

  /// @brief Method Match addr 0x2df22a4 size 0x17c virtual false final false
  inline ::UnityEngine::UIElements::StyleSheets::MatchResult Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* values);

  /// @brief Method MatchKeyword addr 0x2df2420 size 0xb4 virtual true final false
  inline bool MatchKeyword(::StringW keyword);

  /// @brief Method MatchNumber addr 0x2df24d4 size 0x34 virtual true final false
  inline bool MatchNumber();

  /// @brief Method MatchInteger addr 0x2df2508 size 0x34 virtual true final false
  inline bool MatchInteger();

  /// @brief Method MatchLength addr 0x2df253c size 0xf4 virtual true final false
  inline bool MatchLength();

  /// @brief Method MatchPercentage addr 0x2df2630 size 0xf4 virtual true final false
  inline bool MatchPercentage();

  /// @brief Method MatchColor addr 0x2df2724 size 0xe0 virtual true final false
  inline bool MatchColor();

  /// @brief Method MatchResource addr 0x2df2804 size 0x34 virtual true final false
  inline bool MatchResource();

  /// @brief Method MatchUrl addr 0x2df2838 size 0x40 virtual true final false
  inline bool MatchUrl();

  /// @brief Method MatchTime addr 0x2df2878 size 0x60 virtual true final false
  inline bool MatchTime();

  /// @brief Method MatchCustomIdent addr 0x2df28d8 size 0xe0 virtual true final false
  inline bool MatchCustomIdent();

  /// @brief Method MatchAngle addr 0x2df29b8 size 0xfc virtual true final false
  inline bool MatchAngle();

  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* New_ctor();

  /// @brief Method .ctor addr 0x2df2ab4 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyValueMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyValueMatcher(StylePropertyValueMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyValueMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyValueMatcher(StylePropertyValueMatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyValueMatcher();

public:
  /// @brief Field m_Values, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*, "UnityEngine.UIElements.StyleSheets", "StylePropertyValueMatcher");
