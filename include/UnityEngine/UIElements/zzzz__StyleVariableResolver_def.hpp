#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __StyleVariableResolver__ResolveContext;
}
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__Result;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__Result;
}
namespace UnityEngine::UIElements {
class StyleVariableResolver;
}
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__ResolveContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__StyleVariableResolver__Result);
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleVariableResolver);
MARK_VAL_T(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext);
// Type: ::Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6526))
// CS Name: ::StyleVariableResolver::Result
struct CORDL_TYPE __StyleVariableResolver__Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____StyleVariableResolver__Result_Unwrapped
  enum struct ____StyleVariableResolver__Result_Unwrapped : int32_t {
    __E_Valid = static_cast<int32_t>(0x0),
    __E_Invalid = static_cast<int32_t>(0x1),
    __E_NotFound = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____StyleVariableResolver__Result_Unwrapped() const noexcept {
    return static_cast<____StyleVariableResolver__Result_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StyleVariableResolver__Result(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleVariableResolver__Result();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Valid value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__StyleVariableResolver__Result const Valid;

  /// @brief Field Invalid value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__StyleVariableResolver__Result const Invalid;

  /// @brief Field NotFound value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__StyleVariableResolver__Result const NotFound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleVariableResolver__Result, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleVariableResolver__Result, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ResolveContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6527))
// CS Name: ::StyleVariableResolver::ResolveContext
struct CORDL_TYPE __StyleVariableResolver__ResolveContext {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None }, CppParam { name: "handles", ty:
  // "::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>", modifiers: "", def_value: None }]
  constexpr __StyleVariableResolver__ResolveContext(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet,
                                                    ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleVariableResolver__ResolveContext();

  /// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> sheet;

  /// @brief Field handles, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext, sheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext, handles) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleVariableResolver
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6527))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6528))
// CS Name: ::UnityEngine.UIElements::StyleVariableResolver*
class CORDL_TYPE StyleVariableResolver : public ::System::Object {
public:
  // Declarations
  using ResolveContext = ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext;

  using Result = ::UnityEngine::UIElements::__StyleVariableResolver__Result;

  /// @brief Field m_Matcher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Matcher, put = __cordl_internal_set_m_Matcher))::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* m_Matcher;

  /// @brief Field m_ResolvedValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResolvedValues,
                      put = __cordl_internal_set_m_ResolvedValues))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_ResolvedValues;

  /// @brief Field m_ResolvedVarStack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResolvedVarStack, put = __cordl_internal_set_m_ResolvedVarStack))::System::Collections::Generic::Stack_1<::StringW>* m_ResolvedVarStack;

  /// @brief Field m_Property, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property))::UnityEngine::UIElements::StyleProperty* m_Property;

  /// @brief Field m_ContextStack, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContextStack,
                      put = __cordl_internal_set_m_ContextStack))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* m_ContextStack;

  /// @brief Field m_CurrentContext, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CurrentContext, put = __cordl_internal_set_m_CurrentContext))::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext m_CurrentContext;

  /// @brief Field <variableContext>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__variableContext_k__BackingField,
                      put = __cordl_internal_set__variableContext_k__BackingField))::UnityEngine::UIElements::StyleVariableContext* _variableContext_k__BackingField;

  /// @brief Field s_SyntaxParser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SyntaxParser, put = setStaticF_s_SyntaxParser))::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* s_SyntaxParser;

  __declspec(property(get = get_currentSheet))::UnityW<::UnityEngine::UIElements::StyleSheet> currentSheet;

  __declspec(property(get = get_currentHandles))::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> currentHandles;

  __declspec(property(get = get_resolvedValues))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* resolvedValues;

  __declspec(property(get = get_variableContext, put = set_variableContext))::UnityEngine::UIElements::StyleVariableContext* variableContext;

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*& __cordl_internal_get_m_Matcher();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*> const& __cordl_internal_get_m_Matcher() const;

  constexpr void __cordl_internal_set_m_Matcher(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_ResolvedValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*> const&
  __cordl_internal_get_m_ResolvedValues() const;

  constexpr void __cordl_internal_set_m_ResolvedValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  constexpr ::System::Collections::Generic::Stack_1<::StringW>*& __cordl_internal_get_m_ResolvedVarStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::StringW>*> const& __cordl_internal_get_m_ResolvedVarStack() const;

  constexpr void __cordl_internal_set_m_ResolvedVarStack(::System::Collections::Generic::Stack_1<::StringW>* value);

  constexpr ::UnityEngine::UIElements::StyleProperty*& __cordl_internal_get_m_Property();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleProperty*> const& __cordl_internal_get_m_Property() const;

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::UIElements::StyleProperty* value);

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*& __cordl_internal_get_m_ContextStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*> const&
  __cordl_internal_get_m_ContextStack() const;

  constexpr void __cordl_internal_set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* value);

  constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext& __cordl_internal_get_m_CurrentContext();

  constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext const& __cordl_internal_get_m_CurrentContext() const;

  constexpr void __cordl_internal_set_m_CurrentContext(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext value);

  constexpr ::UnityEngine::UIElements::StyleVariableContext*& __cordl_internal_get__variableContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableContext*> const& __cordl_internal_get__variableContext_k__BackingField() const;

  constexpr void __cordl_internal_set__variableContext_k__BackingField(::UnityEngine::UIElements::StyleVariableContext* value);

  static inline void setStaticF_s_SyntaxParser(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* value);

  static inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* getStaticF_s_SyntaxParser();

  /// @brief Method get_currentSheet, addr 0x2e845a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::StyleSheet> get_currentSheet();

  /// @brief Method get_currentHandles, addr 0x2e845a8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> get_currentHandles();

  /// @brief Method get_resolvedValues, addr 0x2e845b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* get_resolvedValues();

  /// @brief Method get_variableContext, addr 0x2e845b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleVariableContext* get_variableContext();

  /// @brief Method set_variableContext, addr 0x2e845c0, size 0x8, virtual false, abstract: false, final false
  inline void set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value);

  /// @brief Method Init, addr 0x2e845c8, size 0xb0, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::StyleProperty* property, ::UnityEngine::UIElements::StyleSheet* sheet,
                   ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles);

  /// @brief Method PushContext, addr 0x2e84678, size 0x6c, virtual false, abstract: false, final false
  inline void PushContext(::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles);

  /// @brief Method PopContext, addr 0x2e846e4, size 0x7c, virtual false, abstract: false, final false
  inline void PopContext();

  /// @brief Method AddValue, addr 0x2e84760, size 0xac, virtual false, abstract: false, final false
  inline void AddValue(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method ResolveVarFunction, addr 0x2e8480c, size 0xcc, virtual false, abstract: false, final false
  inline bool ResolveVarFunction(ByRef<int32_t> index);

  /// @brief Method ResolveVarFunction, addr 0x2e84988, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__StyleVariableResolver__Result ResolveVarFunction(ByRef<int32_t> index, int32_t argc, ::StringW varName);

  /// @brief Method ValidateResolvedValues, addr 0x2e84fe8, size 0x170, virtual false, abstract: false, final false
  inline bool ValidateResolvedValues();

  /// @brief Method ResolveVariable, addr 0x2e84ae4, size 0x278, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__StyleVariableResolver__Result ResolveVariable(::StringW variableName);

  /// @brief Method ResolveFallback, addr 0x2e84d64, size 0x284, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__StyleVariableResolver__Result ResolveFallback(ByRef<int32_t> index);

  /// @brief Method ParseVarFunction, addr 0x2e848d8, size 0xb0, virtual false, abstract: false, final false
  static inline void ParseVarFunction(::UnityEngine::UIElements::StyleSheet* sheet,
                                      ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles, ByRef<int32_t> index,
                                      ByRef<int32_t> argCount, ByRef<::StringW> variableName);

  static inline ::UnityEngine::UIElements::StyleVariableResolver* New_ctor();

  /// @brief Method .ctor, addr 0x2e852b0, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleVariableResolver(StyleVariableResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleVariableResolver(StyleVariableResolver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleVariableResolver();

public:
  /// @brief Field m_Matcher, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* ___m_Matcher;

  /// @brief Field m_ResolvedValues, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_ResolvedValues;

  /// @brief Field m_ResolvedVarStack, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::StringW>* ___m_ResolvedVarStack;

  /// @brief Field m_Property, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleProperty* ___m_Property;

  /// @brief Field m_ContextStack, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* ___m_ContextStack;

  /// @brief Field m_CurrentContext, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext ___m_CurrentContext;

  /// @brief Field <variableContext>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableContext* ____variableContext_k__BackingField;

  /// @brief Field kMaxResolves offset 0xffffffff size 0x4
  static constexpr int32_t kMaxResolves{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariableResolver, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_Matcher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ResolvedValues) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ResolvedVarStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_Property) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ContextStack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_CurrentContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ____variableContext_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleVariableResolver__Result, "UnityEngine.UIElements", "StyleVariableResolver/Result");
NEED_NO_BOX(::UnityEngine::UIElements::StyleVariableResolver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableResolver*, "UnityEngine.UIElements", "StyleVariableResolver");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext, "UnityEngine.UIElements", "StyleVariableResolver/ResolveContext");
