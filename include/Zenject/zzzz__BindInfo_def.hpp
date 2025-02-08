#pragma once
// IWYU pragma private; include "Zenject/BindInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
#include "Zenject/zzzz__InvalidBindResponses_def.hpp"
#include "Zenject/zzzz__ScopeTypes_def.hpp"
#include "Zenject/zzzz__ToChoices_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BindInfo)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class BindingCondition;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class BindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::BindInfo);
// Dependencies System.IDisposable, System.Object, Zenject.BindingInheritanceMethods, Zenject.InvalidBindResponses, Zenject.ScopeTypes, Zenject.ToChoices
namespace Zenject {
// Is value type: false
// CS Name: Zenject.BindInfo
class CORDL_TYPE BindInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Arguments, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_Arguments, put = __cordl_internal_set_Arguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Arguments;

  /// @brief Field BindingInheritanceMethod, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_BindingInheritanceMethod, put = __cordl_internal_set_BindingInheritanceMethod)) ::Zenject::BindingInheritanceMethods BindingInheritanceMethod;

  /// @brief Field ConcreteIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ConcreteIdentifier, put = __cordl_internal_set_ConcreteIdentifier)) ::System::Object* ConcreteIdentifier;

  /// @brief Field Condition, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Condition, put = __cordl_internal_set_Condition)) ::Zenject::BindingCondition* Condition;

  /// @brief Field ContextInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_ContextInfo, put = __cordl_internal_set_ContextInfo)) ::StringW ContextInfo;

  /// @brief Field ContractTypes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ContractTypes, put = __cordl_internal_set_ContractTypes)) ::System::Collections::Generic::List_1<::System::Type*>* ContractTypes;

  /// @brief Field Identifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Identifier, put = __cordl_internal_set_Identifier)) ::System::Object* Identifier;

  /// @brief Field InstantiatedCallback, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_InstantiatedCallback,
                      put = __cordl_internal_set_InstantiatedCallback)) ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* InstantiatedCallback;

  /// @brief Field InvalidBindResponse, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_InvalidBindResponse, put = __cordl_internal_set_InvalidBindResponse)) ::Zenject::InvalidBindResponses InvalidBindResponse;

  /// @brief Field MarkAsCreationBinding, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_MarkAsCreationBinding, put = __cordl_internal_set_MarkAsCreationBinding)) bool MarkAsCreationBinding;

  /// @brief Field MarkAsUniqueSingleton, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_MarkAsUniqueSingleton, put = __cordl_internal_set_MarkAsUniqueSingleton)) bool MarkAsUniqueSingleton;

  /// @brief Field NonLazy, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_NonLazy, put = __cordl_internal_set_NonLazy)) bool NonLazy;

  /// @brief Field OnlyBindIfNotBound, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_OnlyBindIfNotBound, put = __cordl_internal_set_OnlyBindIfNotBound)) bool OnlyBindIfNotBound;

  /// @brief Field RequireExplicitScope, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_RequireExplicitScope, put = __cordl_internal_set_RequireExplicitScope)) bool RequireExplicitScope;

  /// @brief Field SaveProvider, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_SaveProvider, put = __cordl_internal_set_SaveProvider)) bool SaveProvider;

  /// @brief Field Scope, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_Scope, put = __cordl_internal_set_Scope)) ::Zenject::ScopeTypes Scope;

  /// @brief Field ToChoice, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_ToChoice, put = __cordl_internal_set_ToChoice)) ::Zenject::ToChoices ToChoice;

  /// @brief Field ToTypes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ToTypes, put = __cordl_internal_set_ToTypes)) ::System::Collections::Generic::List_1<::System::Type*>* ToTypes;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x4b19954, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::Zenject::BindInfo* New_ctor();

  /// @brief Method Reset, addr 0x4b19858, size 0xfc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetContextInfo, addr 0x4b199ac, size 0x8, virtual false, abstract: false, final false
  inline void SetContextInfo(::StringW contextInfo);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get_Arguments() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_Arguments();

  constexpr ::Zenject::BindingInheritanceMethods const& __cordl_internal_get_BindingInheritanceMethod() const;

  constexpr ::Zenject::BindingInheritanceMethods& __cordl_internal_get_BindingInheritanceMethod();

  constexpr ::System::Object* const& __cordl_internal_get_ConcreteIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get_ConcreteIdentifier();

  constexpr ::Zenject::BindingCondition* const& __cordl_internal_get_Condition() const;

  constexpr ::Zenject::BindingCondition*& __cordl_internal_get_Condition();

  constexpr ::StringW const& __cordl_internal_get_ContextInfo() const;

  constexpr ::StringW& __cordl_internal_get_ContextInfo();

  constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& __cordl_internal_get_ContractTypes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get_ContractTypes();

  constexpr ::System::Object* const& __cordl_internal_get_Identifier() const;

  constexpr ::System::Object*& __cordl_internal_get_Identifier();

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* const& __cordl_internal_get_InstantiatedCallback() const;

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get_InstantiatedCallback();

  constexpr ::Zenject::InvalidBindResponses const& __cordl_internal_get_InvalidBindResponse() const;

  constexpr ::Zenject::InvalidBindResponses& __cordl_internal_get_InvalidBindResponse();

  constexpr bool const& __cordl_internal_get_MarkAsCreationBinding() const;

  constexpr bool& __cordl_internal_get_MarkAsCreationBinding();

  constexpr bool const& __cordl_internal_get_MarkAsUniqueSingleton() const;

  constexpr bool& __cordl_internal_get_MarkAsUniqueSingleton();

  constexpr bool const& __cordl_internal_get_NonLazy() const;

  constexpr bool& __cordl_internal_get_NonLazy();

  constexpr bool const& __cordl_internal_get_OnlyBindIfNotBound() const;

  constexpr bool& __cordl_internal_get_OnlyBindIfNotBound();

  constexpr bool const& __cordl_internal_get_RequireExplicitScope() const;

  constexpr bool& __cordl_internal_get_RequireExplicitScope();

  constexpr bool const& __cordl_internal_get_SaveProvider() const;

  constexpr bool& __cordl_internal_get_SaveProvider();

  constexpr ::Zenject::ScopeTypes const& __cordl_internal_get_Scope() const;

  constexpr ::Zenject::ScopeTypes& __cordl_internal_get_Scope();

  constexpr ::Zenject::ToChoices const& __cordl_internal_get_ToChoice() const;

  constexpr ::Zenject::ToChoices& __cordl_internal_get_ToChoice();

  constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& __cordl_internal_get_ToTypes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get_ToTypes();

  constexpr void __cordl_internal_set_Arguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set_BindingInheritanceMethod(::Zenject::BindingInheritanceMethods value);

  constexpr void __cordl_internal_set_ConcreteIdentifier(::System::Object* value);

  constexpr void __cordl_internal_set_Condition(::Zenject::BindingCondition* value);

  constexpr void __cordl_internal_set_ContextInfo(::StringW value);

  constexpr void __cordl_internal_set_ContractTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_Identifier(::System::Object* value);

  constexpr void __cordl_internal_set_InstantiatedCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value);

  constexpr void __cordl_internal_set_InvalidBindResponse(::Zenject::InvalidBindResponses value);

  constexpr void __cordl_internal_set_MarkAsCreationBinding(bool value);

  constexpr void __cordl_internal_set_MarkAsUniqueSingleton(bool value);

  constexpr void __cordl_internal_set_NonLazy(bool value);

  constexpr void __cordl_internal_set_OnlyBindIfNotBound(bool value);

  constexpr void __cordl_internal_set_RequireExplicitScope(bool value);

  constexpr void __cordl_internal_set_SaveProvider(bool value);

  constexpr void __cordl_internal_set_Scope(::Zenject::ScopeTypes value);

  constexpr void __cordl_internal_set_ToChoice(::Zenject::ToChoices value);

  constexpr void __cordl_internal_set_ToTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  /// @brief Method .ctor, addr 0x4b19774, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindInfo(BindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindInfo(BindInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12287 };

  /// @brief Field MarkAsCreationBinding, offset: 0x10, size: 0x1, def value: None
  bool ___MarkAsCreationBinding;

  /// @brief Field MarkAsUniqueSingleton, offset: 0x11, size: 0x1, def value: None
  bool ___MarkAsUniqueSingleton;

  /// @brief Field ConcreteIdentifier, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___ConcreteIdentifier;

  /// @brief Field SaveProvider, offset: 0x20, size: 0x1, def value: None
  bool ___SaveProvider;

  /// @brief Field OnlyBindIfNotBound, offset: 0x21, size: 0x1, def value: None
  bool ___OnlyBindIfNotBound;

  /// @brief Field RequireExplicitScope, offset: 0x22, size: 0x1, def value: None
  bool ___RequireExplicitScope;

  /// @brief Field Identifier, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___Identifier;

  /// @brief Field ContractTypes, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ___ContractTypes;

  /// @brief Field BindingInheritanceMethod, offset: 0x38, size: 0x4, def value: None
  ::Zenject::BindingInheritanceMethods ___BindingInheritanceMethod;

  /// @brief Field InvalidBindResponse, offset: 0x3c, size: 0x4, def value: None
  ::Zenject::InvalidBindResponses ___InvalidBindResponse;

  /// @brief Field NonLazy, offset: 0x40, size: 0x1, def value: None
  bool ___NonLazy;

  /// @brief Field Condition, offset: 0x48, size: 0x8, def value: None
  ::Zenject::BindingCondition* ___Condition;

  /// @brief Field ToChoice, offset: 0x50, size: 0x4, def value: None
  ::Zenject::ToChoices ___ToChoice;

  /// @brief Field ContextInfo, offset: 0x58, size: 0x8, def value: None
  ::StringW ___ContextInfo;

  /// @brief Field ToTypes, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ___ToTypes;

  /// @brief Field Scope, offset: 0x68, size: 0x4, def value: None
  ::Zenject::ScopeTypes ___Scope;

  /// @brief Field Arguments, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___Arguments;

  /// @brief Field InstantiatedCallback, offset: 0x78, size: 0x8, def value: None
  ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* ___InstantiatedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::BindInfo, ___MarkAsCreationBinding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___MarkAsUniqueSingleton) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___ConcreteIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___SaveProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___OnlyBindIfNotBound) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___RequireExplicitScope) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___Identifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___ContractTypes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___BindingInheritanceMethod) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___InvalidBindResponse) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___NonLazy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___Condition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___ToChoice) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___ContextInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___ToTypes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___Scope) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___Arguments) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindInfo, ___InstantiatedCallback) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::BindInfo, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindInfo*, "Zenject", "BindInfo");
