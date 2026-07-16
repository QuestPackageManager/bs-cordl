#pragma once
// IWYU pragma private; include "Zenject/ProviderBindingFinalizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProviderBindingFinalizer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class ProviderBindingFinalizer___c;
}
namespace Zenject {
struct ScopeTypes;
}
// Forward declare root types
namespace Zenject {
class ProviderBindingFinalizer;
}
namespace Zenject {
class ProviderBindingFinalizer___c;
}
// Write type traits
MARK_REF_T(::Zenject::ProviderBindingFinalizer*);
MARK_REF_T(::Zenject::ProviderBindingFinalizer___c*);
DEFINE_IL2CPP_CLASS(::Zenject::ProviderBindingFinalizer*, "Zenject", "ProviderBindingFinalizer");
DEFINE_IL2CPP_CLASS(::Zenject::ProviderBindingFinalizer___c*, "Zenject", "ProviderBindingFinalizer/<>c");
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ProviderBindingFinalizer/<>c
class CORDL_TYPE ProviderBindingFinalizer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::ProviderBindingFinalizer___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::System::Type*, ::StringW>* __9__8_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::System::Type*, ::StringW>* __9__9_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_1, put = setStaticF___9__9_1)) ::System::Func_2<::System::Type*, ::StringW>* __9__9_1;

  static inline ::Zenject::ProviderBindingFinalizer___c* New_ctor();

  /// @brief Method <FinalizeBinding>b__9_0, addr 0x6e63a64, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW _FinalizeBinding_b__9_0(::System::Type* x);

  /// @brief Method <FinalizeBinding>b__9_1, addr 0x6e63ac0, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW _FinalizeBinding_b__9_1(::System::Type* x);

  /// @brief Method <GetScope>b__8_0, addr 0x6e63a08, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW _GetScope_b__8_0(::System::Type* x);

  /// @brief Method __zenCreate, addr 0x6e63b1c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e63b60, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e63a04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::ProviderBindingFinalizer___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__8_0();

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__9_0();

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__9_1();

  static inline void setStaticF___9(::Zenject::ProviderBindingFinalizer___c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::System::Type*, ::StringW>* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::System::Type*, ::StringW>* value);

  static inline void setStaticF___9__9_1(::System::Func_2<::System::Type*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderBindingFinalizer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProviderBindingFinalizer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderBindingFinalizer___c(ProviderBindingFinalizer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderBindingFinalizer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderBindingFinalizer___c(ProviderBindingFinalizer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14292 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::ProviderBindingFinalizer___c) == 0x10, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ProviderBindingFinalizer
class CORDL_TYPE ProviderBindingFinalizer : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::ProviderBindingFinalizer___c;

  __declspec(property(get = get_BindInfo, put = set_BindInfo)) ::Zenject::BindInfo* BindInfo;

  __declspec(property(get = get_BindingInheritanceMethod)) ::Zenject::BindingInheritanceMethods BindingInheritanceMethod;

  /// @brief Field <BindInfo>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__BindInfo_k__BackingField, put = __cordl_internal_set__BindInfo_k__BackingField)) ::Zenject::BindInfo* _BindInfo_k__BackingField;

  /// @brief Field _skipDisposableForIfNotBound, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__skipDisposableForIfNotBound, put = __cordl_internal_set__skipDisposableForIfNotBound)) bool _skipDisposableForIfNotBound;

  /// @brief Convert operator to "::Zenject::IBindingFinalizer"
  constexpr operator ::Zenject::IBindingFinalizer*() noexcept;

  /// @brief Method FinalizeBinding, addr 0x6e627f8, size 0x5b0, virtual true, abstract: false, final true
  inline void FinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method GetScope, addr 0x6e60414, size 0x26c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeTypes GetScope();

  static inline ::Zenject::ProviderBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method OnFinalizeBinding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method RegisterProvider, addr 0x6e62f7c, size 0x2b4, virtual false, abstract: false, final false
  inline void RegisterProvider(::Zenject::DiContainer* container, ::System::Type* contractType, ::Zenject::IProvider* provider);

  /// @brief Method RegisterProvider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline void RegisterProvider(::Zenject::DiContainer* container, ::Zenject::IProvider* provider);

  /// @brief Method RegisterProviderForAllContracts, addr 0x6e63418, size 0x19c, virtual false, abstract: false, final false
  inline void RegisterProviderForAllContracts(::Zenject::DiContainer* container, ::Zenject::IProvider* provider);

  /// @brief Method RegisterProviderPerContract, addr 0x6e60b08, size 0x1d0, virtual false, abstract: false, final false
  inline void RegisterProviderPerContract(::Zenject::DiContainer* container, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFunc);

  /// @brief Method RegisterProvidersForAllContractsPerConcreteType, addr 0x6e60680, size 0x480, virtual false, abstract: false, final false
  inline void RegisterProvidersForAllContractsPerConcreteType(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes,
                                                              ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFunc);

  /// @brief Method RegisterProvidersPerContractAndConcreteType, addr 0x6e635b4, size 0x21c, virtual false, abstract: false, final false
  inline void RegisterProvidersPerContractAndConcreteType(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes,
                                                          ::System::Func_3<::System::Type*, ::System::Type*, ::Zenject::IProvider*>* providerFunc);

  /// @brief Method ShouldSkipDisposableForIfNotBound, addr 0x6e62da8, size 0x1cc, virtual false, abstract: false, final false
  inline bool ShouldSkipDisposableForIfNotBound(::Zenject::DiContainer* container);

  /// @brief Method ValidateBindTypes, addr 0x6e637d0, size 0x1e0, virtual false, abstract: false, final false
  inline bool ValidateBindTypes(::System::Type* concreteType, ::System::Type* contractType);

  constexpr ::Zenject::BindInfo* const& __cordl_internal_get__BindInfo_k__BackingField() const;

  constexpr ::Zenject::BindInfo*& __cordl_internal_get__BindInfo_k__BackingField();

  constexpr bool const& __cordl_internal_get__skipDisposableForIfNotBound() const;

  constexpr bool& __cordl_internal_get__skipDisposableForIfNotBound();

  constexpr void __cordl_internal_set__BindInfo_k__BackingField(::Zenject::BindInfo* value);

  constexpr void __cordl_internal_set__skipDisposableForIfNotBound(bool value);

  /// @brief Method .ctor, addr 0x6e5fd48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method get_BindInfo, addr 0x6e627e8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::BindInfo* get_BindInfo();

  /// @brief Method get_BindingInheritanceMethod, addr 0x6e627d0, size 0x18, virtual true, abstract: false, final true
  inline ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();

  /// @brief Convert to "::Zenject::IBindingFinalizer"
  constexpr ::Zenject::IBindingFinalizer* i___Zenject__IBindingFinalizer() noexcept;

  /// @brief Method set_BindInfo, addr 0x6e627f0, size 0x8, virtual false, abstract: false, final false
  inline void set_BindInfo(::Zenject::BindInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderBindingFinalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProviderBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderBindingFinalizer(ProviderBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderBindingFinalizer(ProviderBindingFinalizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14293 };

  /// @brief Field _skipDisposableForIfNotBound, offset: 0x10, size: 0x1, def value: None
  bool ____skipDisposableForIfNotBound;

  /// @brief Field <BindInfo>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Zenject::BindInfo* ____BindInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ProviderBindingFinalizer, ____skipDisposableForIfNotBound) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProviderBindingFinalizer, ____BindInfo_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::ProviderBindingFinalizer) == 0x20, "Size mismatch!");

} // namespace Zenject
