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
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
namespace UnityEngine::UIElements::StyleSheets {
struct __BaseStyleMatcher__MatchContext;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7482))
// CS Name: ::BaseStyleMatcher::MatchContext
struct CORDL_TYPE __BaseStyleMatcher__MatchContext {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "matchedVariableCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BaseStyleMatcher__MatchContext(int32_t valueIndex, int32_t matchedVariableCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseStyleMatcher__MatchContext();

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

} // namespace UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::BaseStyleMatcher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7482))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7483))
// CS Name: ::UnityEngine.UIElements.StyleSheets::BaseStyleMatcher*
class CORDL_TYPE BaseStyleMatcher : public ::System::Object {
public:
  // Declarations
  using MatchContext = ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext;

  /// @brief Field m_ContextStack, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ContextStack,
                      put = __set_m_ContextStack))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* m_ContextStack;

  /// @brief Field m_CurrentContext, offset 0x18, size 0x8
  __declspec(property(get = __get_m_CurrentContext, put = __set_m_CurrentContext))::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext m_CurrentContext;

  /// @brief Field s_CustomIdentRegex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CustomIdentRegex, put = setStaticF_s_CustomIdentRegex))::System::Text::RegularExpressions::Regex* s_CustomIdentRegex;

  __declspec(property(get = get_valueCount)) int32_t valueCount;

  __declspec(property(get = get_isCurrentVariable)) bool isCurrentVariable;

  __declspec(property(get = get_isCurrentComma)) bool isCurrentComma;

  __declspec(property(get = get_hasCurrent)) bool hasCurrent;

  __declspec(property(get = get_currentIndex, put = set_currentIndex)) int32_t currentIndex;

  __declspec(property(get = get_matchedVariableCount, put = set_matchedVariableCount)) int32_t matchedVariableCount;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*& __get_m_ContextStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*> const& __get_m_ContextStack() const;

  constexpr void __set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* value);

  constexpr ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext& __get_m_CurrentContext();

  constexpr ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext const& __get_m_CurrentContext() const;

  constexpr void __set_m_CurrentContext(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext value);

  static inline void setStaticF_s_CustomIdentRegex(::System::Text::RegularExpressions::Regex* value);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_CustomIdentRegex();

  /// @brief Method MatchKeyword addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchKeyword(::StringW keyword);

  /// @brief Method MatchNumber addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchNumber();

  /// @brief Method MatchInteger addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchInteger();

  /// @brief Method MatchLength addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchLength();

  /// @brief Method MatchPercentage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchPercentage();

  /// @brief Method MatchColor addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchColor();

  /// @brief Method MatchResource addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchResource();

  /// @brief Method MatchUrl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchUrl();

  /// @brief Method MatchTime addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchTime();

  /// @brief Method MatchAngle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchAngle();

  /// @brief Method MatchCustomIdent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MatchCustomIdent();

  /// @brief Method get_valueCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_valueCount();

  /// @brief Method get_isCurrentVariable addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isCurrentVariable();

  /// @brief Method get_isCurrentComma addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isCurrentComma();

  /// @brief Method get_hasCurrent addr 0x2df1410 size 0x28 virtual false final false
  inline bool get_hasCurrent();

  /// @brief Method get_currentIndex addr 0x2df1438 size 0x8 virtual false final false
  inline int32_t get_currentIndex();

  /// @brief Method set_currentIndex addr 0x2df1440 size 0x8 virtual false final false
  inline void set_currentIndex(int32_t value);

  /// @brief Method get_matchedVariableCount addr 0x2df1448 size 0x8 virtual false final false
  inline int32_t get_matchedVariableCount();

  /// @brief Method set_matchedVariableCount addr 0x2df1450 size 0x8 virtual false final false
  inline void set_matchedVariableCount(int32_t value);

  /// @brief Method Initialize addr 0x2df1458 size 0x54 virtual false final false
  inline void Initialize();

  /// @brief Method MoveNext addr 0x2df14ac size 0x44 virtual false final false
  inline void MoveNext();

  /// @brief Method SaveContext addr 0x2df14f0 size 0x54 virtual false final false
  inline void SaveContext();

  /// @brief Method RestoreContext addr 0x2df1544 size 0x58 virtual false final false
  inline void RestoreContext();

  /// @brief Method DropContext addr 0x2df159c size 0x50 virtual false final false
  inline void DropContext();

  /// @brief Method Match addr 0x2df15ec size 0xb4 virtual false final false
  inline bool Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchExpression addr 0x2df16a8 size 0x114 virtual false final false
  inline bool MatchExpression(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchExpressionWithMultiplier addr 0x2df17bc size 0x14c virtual false final false
  inline bool MatchExpressionWithMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchGroup addr 0x2df1ad0 size 0xb4 virtual false final false
  inline bool MatchGroup(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchCombinator addr 0x2df1908 size 0xcc virtual false final false
  inline bool MatchCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchOr addr 0x2df1b84 size 0xd0 virtual false final false
  inline bool MatchOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchOrOr addr 0x2df1c54 size 0x18 virtual false final false
  inline bool MatchOrOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchAndAnd addr 0x2df1c6c size 0x30 virtual false final false
  inline bool MatchAndAnd(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchMany addr 0x2df1d08 size 0x180 virtual false final false
  inline int32_t MatchMany(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchManyByOrder addr 0x2df1e88 size 0x190 virtual false final false
  inline int32_t MatchManyByOrder(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp, ::cordl_internals::Ptr<int32_t> matchOrder);

  /// @brief Method MatchJuxtaposition addr 0x2df1c9c size 0x6c virtual false final false
  inline bool MatchJuxtaposition(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  /// @brief Method MatchDataType addr 0x2df19d4 size 0xfc virtual false final false
  inline bool MatchDataType(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);

  static inline ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher* New_ctor();

  /// @brief Method .ctor addr 0x2df2018 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseStyleMatcher(BaseStyleMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseStyleMatcher(BaseStyleMatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseStyleMatcher();

public:
  /// @brief Field m_ContextStack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* ___m_ContextStack;

  /// @brief Field m_CurrentContext, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext ___m_CurrentContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher/MatchContext");
