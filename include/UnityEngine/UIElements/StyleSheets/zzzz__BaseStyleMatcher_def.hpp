#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseStyleMatcher)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
namespace UnityEngine::UIElements::StyleSheets {
struct __BaseStyleMatcher__MatchContext;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class BaseStyleMatcher;
}
namespace UnityEngine::UIElements::StyleSheets {
struct __BaseStyleMatcher__MatchContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext);
// Type: ::MatchContext
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: ::BaseStyleMatcher::MatchContext
struct CORDL_TYPE __BaseStyleMatcher__MatchContext {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseStyleMatcher__MatchContext();

  // Ctor Parameters [CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "matchedVariableCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BaseStyleMatcher__MatchContext(int32_t valueIndex, int32_t matchedVariableCount) noexcept;

  /// @brief Field valueIndex, offset: 0x0, size: 0x4, def value: None
  int32_t valueIndex;

  /// @brief Field matchedVariableCount, offset: 0x4, size: 0x4, def value: None
  int32_t matchedVariableCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext, valueIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext, matchedVariableCount) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::BaseStyleMatcher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.StyleSheets::BaseStyleMatcher*
class CORDL_TYPE BaseStyleMatcher : public ::System::Object {
public:
  // Declarations
  using MatchContext = ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext;

  __declspec(property(get = get_currentIndex, put = set_currentIndex)) int32_t currentIndex;

  __declspec(property(get = get_hasCurrent)) bool hasCurrent;

  __declspec(property(get = get_isCurrentComma)) bool isCurrentComma;

  __declspec(property(get = get_isCurrentVariable)) bool isCurrentVariable;

  /// @brief Field m_ContextStack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContextStack,
                      put = __cordl_internal_set_m_ContextStack))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* m_ContextStack;

  /// @brief Field m_CurrentContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentContext,
                      put = __cordl_internal_set_m_CurrentContext))::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext m_CurrentContext;

  __declspec(property(get = get_matchedVariableCount, put = set_matchedVariableCount)) int32_t matchedVariableCount;

  /// @brief Field s_CustomIdentRegex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CustomIdentRegex, put = setStaticF_s_CustomIdentRegex))::System::Text::RegularExpressions::Regex* s_CustomIdentRegex;

  __declspec(property(get = get_valueCount)) int32_t valueCount;

  /// @brief Method DropContext, addr 0x2f000ac, size 0x50, virtual false, abstract: false, final false
  inline void DropContext();

  /// @brief Method Initialize, addr 0x2efff68, size 0x54, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method Match, addr 0x2f000fc, size 0xb4, virtual false, abstract: false, final false
  inline bool Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchAndAnd, addr 0x2f0077c, size 0x30, virtual false, abstract: false, final false
  inline bool MatchAndAnd(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchAngle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchAngle();

  /// @brief Method MatchColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchColor();

  /// @brief Method MatchCombinator, addr 0x2f00418, size 0xcc, virtual false, abstract: false, final false
  inline bool MatchCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchCustomIdent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchCustomIdent();

  /// @brief Method MatchDataType, addr 0x2f004e4, size 0xfc, virtual false, abstract: false, final false
  inline bool MatchDataType(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchExpression, addr 0x2f001b8, size 0x114, virtual false, abstract: false, final false
  inline bool MatchExpression(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchExpressionWithMultiplier, addr 0x2f002cc, size 0x14c, virtual false, abstract: false, final false
  inline bool MatchExpressionWithMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchGroup, addr 0x2f005e0, size 0xb4, virtual false, abstract: false, final false
  inline bool MatchGroup(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchInteger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchInteger();

  /// @brief Method MatchJuxtaposition, addr 0x2f007ac, size 0x6c, virtual false, abstract: false, final false
  inline bool MatchJuxtaposition(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchKeyword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchKeyword(::StringW keyword);

  /// @brief Method MatchLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchLength();

  /// @brief Method MatchMany, addr 0x2f00818, size 0x180, virtual false, abstract: false, final false
  inline int32_t MatchMany(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchManyByOrder, addr 0x2f00998, size 0x190, virtual false, abstract: false, final false
  inline int32_t MatchManyByOrder(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp, ::cordl_internals::Ptr<int32_t> matchOrder);

  /// @brief Method MatchNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchNumber();

  /// @brief Method MatchOr, addr 0x2f00694, size 0xd0, virtual false, abstract: false, final false
  inline bool MatchOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchOrOr, addr 0x2f00764, size 0x18, virtual false, abstract: false, final false
  inline bool MatchOrOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchPercentage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchPercentage();

  /// @brief Method MatchResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchResource();

  /// @brief Method MatchTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchTime();

  /// @brief Method MatchUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MatchUrl();

  /// @brief Method MoveNext, addr 0x2efffbc, size 0x44, virtual false, abstract: false, final false
  inline void MoveNext();

  static inline ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher* New_ctor();

  /// @brief Method RestoreContext, addr 0x2f00054, size 0x58, virtual false, abstract: false, final false
  inline void RestoreContext();

  /// @brief Method SaveContext, addr 0x2f00000, size 0x54, virtual false, abstract: false, final false
  inline void SaveContext();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*& __cordl_internal_get_m_ContextStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*> const&
  __cordl_internal_get_m_ContextStack() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext const& __cordl_internal_get_m_CurrentContext() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext& __cordl_internal_get_m_CurrentContext();

  constexpr void __cordl_internal_set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* value);

  constexpr void __cordl_internal_set_m_CurrentContext(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext value);

  /// @brief Method .ctor, addr 0x2f00b28, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_CustomIdentRegex();

  /// @brief Method get_currentIndex, addr 0x2efff48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentIndex();

  /// @brief Method get_hasCurrent, addr 0x2efff20, size 0x28, virtual false, abstract: false, final false
  inline bool get_hasCurrent();

  /// @brief Method get_isCurrentComma, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isCurrentComma();

  /// @brief Method get_isCurrentVariable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isCurrentVariable();

  /// @brief Method get_matchedVariableCount, addr 0x2efff58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_matchedVariableCount();

  /// @brief Method get_valueCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_valueCount();

  static inline void setStaticF_s_CustomIdentRegex(::System::Text::RegularExpressions::Regex* value);

  /// @brief Method set_currentIndex, addr 0x2efff50, size 0x8, virtual false, abstract: false, final false
  inline void set_currentIndex(int32_t value);

  /// @brief Method set_matchedVariableCount, addr 0x2efff60, size 0x8, virtual false, abstract: false, final false
  inline void set_matchedVariableCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseStyleMatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseStyleMatcher(BaseStyleMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseStyleMatcher(BaseStyleMatcher const&) = delete;

  /// @brief Field m_ContextStack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* ___m_ContextStack;

  /// @brief Field m_CurrentContext, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext ___m_CurrentContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, ___m_ContextStack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, ___m_CurrentContext) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher/MatchContext");
