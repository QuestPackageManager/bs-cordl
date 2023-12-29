#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProviderBindingFinalizer)
namespace Zenject {
class __ProviderBindingFinalizer____c;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
struct ScopeTypes;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ProviderBindingFinalizer;
}
namespace Zenject {
class __ProviderBindingFinalizer____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ProviderBindingFinalizer);
MARK_REF_PTR_T(::Zenject::__ProviderBindingFinalizer____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10893))
// CS Name: ::ProviderBindingFinalizer::<>c*
class CORDL_TYPE __ProviderBindingFinalizer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__ProviderBindingFinalizer____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::System::Type*, ::StringW>* __9__7_0;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::System::Type*, ::StringW>* __9__8_0;

  static inline void setStaticF___9(::Zenject::__ProviderBindingFinalizer____c* value);

  static inline ::Zenject::__ProviderBindingFinalizer____c* getStaticF___9();

  static inline void setStaticF___9__7_0(::System::Func_2<::System::Type*, ::StringW>* value);

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__7_0();

  static inline void setStaticF___9__8_0(::System::Func_2<::System::Type*, ::StringW>* value);

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__8_0();

  static inline ::Zenject::__ProviderBindingFinalizer____c* New_ctor();

  /// @brief Method .ctor addr 0x2d7df44 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetScope>b__7_0 addr 0x2d7df4c size 0x58 virtual false final false
  inline ::StringW _GetScope_b__7_0(::System::Type* x);

  /// @brief Method <FinalizeBinding>b__8_0 addr 0x2d7dfa4 size 0x58 virtual false final false
  inline ::StringW _FinalizeBinding_b__8_0(::System::Type* x);

  /// @brief Method __zenCreate addr 0x2d7dffc size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d7e058 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ProviderBindingFinalizer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProviderBindingFinalizer____c(__ProviderBindingFinalizer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProviderBindingFinalizer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProviderBindingFinalizer____c(__ProviderBindingFinalizer____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProviderBindingFinalizer____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ProviderBindingFinalizer____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::ProviderBindingFinalizer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10894))
// CS Name: ::Zenject::ProviderBindingFinalizer*
class CORDL_TYPE ProviderBindingFinalizer : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__ProviderBindingFinalizer____c;

  /// @brief Field <BindInfo>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__BindInfo_k__BackingField, put = __set__BindInfo_k__BackingField))::Zenject::BindInfo* _BindInfo_k__BackingField;

  __declspec(property(get = get_BindingInheritanceMethod))::Zenject::BindingInheritanceMethods BindingInheritanceMethod;

  __declspec(property(get = get_BindInfo, put = set_BindInfo))::Zenject::BindInfo* BindInfo;

  /// @brief Convert operator to "::Zenject::IBindingFinalizer"
  constexpr operator ::Zenject::IBindingFinalizer*() noexcept;

  constexpr ::Zenject::BindInfo*& __get__BindInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& __get__BindInfo_k__BackingField() const;

  constexpr void __set__BindInfo_k__BackingField(::Zenject::BindInfo* value);

  static inline ::Zenject::ProviderBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method .ctor addr 0x2d7a1dc size 0x28 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method get_BindingInheritanceMethod addr 0x2d7d098 size 0x1c virtual true final true
  inline ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();

  /// @brief Method get_BindInfo addr 0x2d7d0b4 size 0x8 virtual false final false
  inline ::Zenject::BindInfo* get_BindInfo();

  /// @brief Method set_BindInfo addr 0x2d7d0bc size 0x8 virtual false final false
  inline void set_BindInfo(::Zenject::BindInfo* value);

  /// @brief Method GetScope addr 0x2d7a8f4 size 0x24c virtual false final false
  inline ::Zenject::ScopeTypes GetScope();

  /// @brief Method FinalizeBinding addr 0x2d7d0c4 size 0x370 virtual true final true
  inline void FinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method OnFinalizeBinding addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method RegisterProvider addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline void RegisterProvider(::Zenject::DiContainer* container, ::Zenject::IProvider* provider);

  /// @brief Method RegisterProvider addr 0x2d7d434 size 0x254 virtual false final false
  inline void RegisterProvider(::Zenject::DiContainer* container, ::System::Type* contractType, ::Zenject::IProvider* provider);

  /// @brief Method RegisterProviderPerContract addr 0x2d7b0ec size 0x214 virtual false final false
  inline void RegisterProviderPerContract(::Zenject::DiContainer* container, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFunc);

  /// @brief Method RegisterProviderForAllContracts addr 0x2d7d84c size 0x1e8 virtual false final false
  inline void RegisterProviderForAllContracts(::Zenject::DiContainer* container, ::Zenject::IProvider* provider);

  /// @brief Method RegisterProvidersPerContractAndConcreteType addr 0x2d7da34 size 0x2cc virtual false final false
  inline void RegisterProvidersPerContractAndConcreteType(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes,
                                                          ::System::Func_3<::System::Type*, ::System::Type*, ::Zenject::IProvider*>* providerFunc);

  /// @brief Method ValidateBindTypes addr 0x2d7dd00 size 0x1e0 virtual false final false
  inline bool ValidateBindTypes(::System::Type* concreteType, ::System::Type* contractType);

  /// @brief Method RegisterProvidersForAllContractsPerConcreteType addr 0x2d7ab40 size 0x59c virtual false final false
  inline void RegisterProvidersForAllContractsPerConcreteType(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes,
                                                              ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFunc);

  // Ctor Parameters [CppParam { name: "", ty: "ProviderBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderBindingFinalizer(ProviderBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderBindingFinalizer(ProviderBindingFinalizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderBindingFinalizer();

public:
  /// @brief Field <BindInfo>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Zenject::BindInfo* ____BindInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ProviderBindingFinalizer, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::ProviderBindingFinalizer, ____BindInfo_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ProviderBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProviderBindingFinalizer*, "Zenject", "ProviderBindingFinalizer");
NEED_NO_BOX(::Zenject::__ProviderBindingFinalizer____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ProviderBindingFinalizer____c*, "Zenject", "ProviderBindingFinalizer/<>c");
