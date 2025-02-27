#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleVariableResolver)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxParser;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyValueMatcher;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements {
struct StyleVariableResolver_ResolveContext;
}
namespace UnityEngine::UIElements {
struct StyleVariableResolver_Result;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleVariableResolver_Result;
}
namespace UnityEngine::UIElements {
class StyleVariableResolver;
}
namespace UnityEngine::UIElements {
struct StyleVariableResolver_ResolveContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleVariableResolver_Result);
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleVariableResolver);
MARK_VAL_T(::UnityEngine::UIElements::StyleVariableResolver_ResolveContext);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleVariableResolver/Result
struct CORDL_TYPE StyleVariableResolver_Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleVariableResolver_Result_Unwrapped
  enum struct __StyleVariableResolver_Result_Unwrapped : int32_t {
    __E_Valid = static_cast<int32_t>(0x0),
    __E_Invalid = static_cast<int32_t>(0x1),
    __E_NotFound = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleVariableResolver_Result_Unwrapped() const noexcept {
    return static_cast<__StyleVariableResolver_Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleVariableResolver_Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleVariableResolver_Result(int32_t value__) noexcept;

  /// @brief Field Invalid value: I32(1)
  static ::UnityEngine::UIElements::StyleVariableResolver_Result const Invalid;

  /// @brief Field NotFound value: I32(2)
  static ::UnityEngine::UIElements::StyleVariableResolver_Result const NotFound;

  /// @brief Field Valid value: I32(0)
  static ::UnityEngine::UIElements::StyleVariableResolver_Result const Valid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6191 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver_Result, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariableResolver_Result, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleVariableResolver/ResolveContext
struct CORDL_TYPE StyleVariableResolver_ResolveContext {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleVariableResolver_ResolveContext();

  // Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None }, CppParam { name: "handles", ty:
  // "::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>", modifiers: "", def_value: None }]
  constexpr StyleVariableResolver_ResolveContext(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet,
                                                 ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6192 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> sheet;

  /// @brief Field handles, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver_ResolveContext, sheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver_ResolveContext, handles) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariableResolver_ResolveContext, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.StyleVariableResolver::ResolveContext
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleVariableResolver
class CORDL_TYPE StyleVariableResolver : public ::System::Object {
public:
  // Declarations
  using ResolveContext = ::UnityEngine::UIElements::StyleVariableResolver_ResolveContext;

  using Result = ::UnityEngine::UIElements::StyleVariableResolver_Result;

  /// @brief Field <variableContext>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__variableContext_k__BackingField,
                      put = __cordl_internal_set__variableContext_k__BackingField)) ::UnityEngine::UIElements::StyleVariableContext* _variableContext_k__BackingField;

  __declspec(property(get = get_currentHandles)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> currentHandles;

  __declspec(property(get = get_currentSheet)) ::UnityW<::UnityEngine::UIElements::StyleSheet> currentSheet;

  /// @brief Field m_ContextStack, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContextStack,
                      put = __cordl_internal_set_m_ContextStack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleVariableResolver_ResolveContext>* m_ContextStack;

  /// @brief Field m_CurrentContext, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CurrentContext, put = __cordl_internal_set_m_CurrentContext)) ::UnityEngine::UIElements::StyleVariableResolver_ResolveContext m_CurrentContext;

  /// @brief Field m_Matcher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Matcher, put = __cordl_internal_set_m_Matcher)) ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* m_Matcher;

  /// @brief Field m_Property, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::UnityEngine::UIElements::StyleProperty* m_Property;

  /// @brief Field m_ResolvedValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResolvedValues,
                      put = __cordl_internal_set_m_ResolvedValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_ResolvedValues;

  /// @brief Field m_ResolvedVarStack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResolvedVarStack, put = __cordl_internal_set_m_ResolvedVarStack)) ::System::Collections::Generic::Stack_1<::StringW>* m_ResolvedVarStack;

  __declspec(property(get = get_resolvedValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* resolvedValues;

  /// @brief Field s_SyntaxParser, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SyntaxParser, put = setStaticF_s_SyntaxParser)) ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* s_SyntaxParser;

  __declspec(property(get = get_variableContext, put = set_variableContext)) ::UnityEngine::UIElements::StyleVariableContext* variableContext;

  /// @brief Method AddValue, addr 0x4a9c010, size 0xa8, virtual false, abstract: false, final false
  inline void AddValue(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method Init, addr 0x4a9be78, size 0xb0, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::StyleProperty* property, ::UnityEngine::UIElements::StyleSheet* sheet,
                   ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles);

  static inline ::UnityEngine::UIElements::StyleVariableResolver* New_ctor();

  /// @brief Method ParseVarFunction, addr 0x4a9c184, size 0xb0, virtual false, abstract: false, final false
  static inline void ParseVarFunction(::UnityEngine::UIElements::StyleSheet* sheet,
                                      ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles, ::ByRef<int32_t> index,
                                      ::ByRef<int32_t> argCount, ::ByRef<::StringW> variableName);

  /// @brief Method PopContext, addr 0x4a9bf94, size 0x7c, virtual false, abstract: false, final false
  inline void PopContext();

  /// @brief Method PushContext, addr 0x4a9bf28, size 0x6c, virtual false, abstract: false, final false
  inline void PushContext(::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles);

  /// @brief Method ResolveFallback, addr 0x4a9c604, size 0x280, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleVariableResolver_Result ResolveFallback(::ByRef<int32_t> index);

  /// @brief Method ResolveVarFunction, addr 0x4a9c234, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleVariableResolver_Result ResolveVarFunction(::ByRef<int32_t> index, int32_t argc, ::StringW varName);

  /// @brief Method ResolveVarFunction, addr 0x4a9c0b8, size 0xcc, virtual false, abstract: false, final false
  inline bool ResolveVarFunction(::ByRef<int32_t> index);

  /// @brief Method ResolveVariable, addr 0x4a9c390, size 0x274, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleVariableResolver_Result ResolveVariable(::StringW variableName);

  /// @brief Method ValidateResolvedValues, addr 0x4a9c884, size 0x170, virtual false, abstract: false, final false
  inline bool ValidateResolvedValues();

  constexpr ::UnityEngine::UIElements::StyleVariableContext* const& __cordl_internal_get__variableContext_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::StyleVariableContext*& __cordl_internal_get__variableContext_k__BackingField();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleVariableResolver_ResolveContext>* const& __cordl_internal_get_m_ContextStack() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleVariableResolver_ResolveContext>*& __cordl_internal_get_m_ContextStack();

  constexpr ::UnityEngine::UIElements::StyleVariableResolver_ResolveContext const& __cordl_internal_get_m_CurrentContext() const;

  constexpr ::UnityEngine::UIElements::StyleVariableResolver_ResolveContext& __cordl_internal_get_m_CurrentContext();

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* const& __cordl_internal_get_m_Matcher() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*& __cordl_internal_get_m_Matcher();

  constexpr ::UnityEngine::UIElements::StyleProperty* const& __cordl_internal_get_m_Property() const;

  constexpr ::UnityEngine::UIElements::StyleProperty*& __cordl_internal_get_m_Property();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const& __cordl_internal_get_m_ResolvedValues() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_ResolvedValues();

  constexpr ::System::Collections::Generic::Stack_1<::StringW>* const& __cordl_internal_get_m_ResolvedVarStack() const;

  constexpr ::System::Collections::Generic::Stack_1<::StringW>*& __cordl_internal_get_m_ResolvedVarStack();

  constexpr void __cordl_internal_set__variableContext_k__BackingField(::UnityEngine::UIElements::StyleVariableContext* value);

  constexpr void __cordl_internal_set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleVariableResolver_ResolveContext>* value);

  constexpr void __cordl_internal_set_m_CurrentContext(::UnityEngine::UIElements::StyleVariableResolver_ResolveContext value);

  constexpr void __cordl_internal_set_m_Matcher(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* value);

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::UIElements::StyleProperty* value);

  constexpr void __cordl_internal_set_m_ResolvedValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  constexpr void __cordl_internal_set_m_ResolvedVarStack(::System::Collections::Generic::Stack_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x4a9c9f4, size 0x138, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* getStaticF_s_SyntaxParser();

  /// @brief Method get_currentHandles, addr 0x4a9be58, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> get_currentHandles();

  /// @brief Method get_currentSheet, addr 0x4a9be50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::StyleSheet> get_currentSheet();

  /// @brief Method get_resolvedValues, addr 0x4a9be60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* get_resolvedValues();

  /// @brief Method get_variableContext, addr 0x4a9be68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleVariableContext* get_variableContext();

  static inline void setStaticF_s_SyntaxParser(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* value);

  /// @brief Method set_variableContext, addr 0x4a9be70, size 0x8, virtual false, abstract: false, final false
  inline void set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleVariableResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleVariableResolver(StyleVariableResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleVariableResolver(StyleVariableResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6193 };

  /// @brief Field kMaxResolves offset 0xffffffff size 0x4
  static constexpr int32_t kMaxResolves{ static_cast<int32_t>(0x64) };

  /// @brief Field m_Matcher, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* ___m_Matcher;

  /// @brief Field m_ResolvedValues, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_ResolvedValues;

  /// @brief Field m_ResolvedVarStack, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::StringW>* ___m_ResolvedVarStack;

  /// @brief Field m_Property, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleProperty* ___m_Property;

  /// @brief Field m_ContextStack, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleVariableResolver_ResolveContext>* ___m_ContextStack;

  /// @brief Field m_CurrentContext, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::UIElements::StyleVariableResolver_ResolveContext ___m_CurrentContext;

  /// @brief Field <variableContext>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableContext* ____variableContext_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_Matcher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ResolvedValues) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ResolvedVarStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_Property) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ContextStack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_CurrentContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ____variableContext_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariableResolver, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableResolver_Result, "UnityEngine.UIElements", "StyleVariableResolver/Result");
NEED_NO_BOX(::UnityEngine::UIElements::StyleVariableResolver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableResolver*, "UnityEngine.UIElements", "StyleVariableResolver");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableResolver_ResolveContext, "UnityEngine.UIElements", "StyleVariableResolver/ResolveContext");
