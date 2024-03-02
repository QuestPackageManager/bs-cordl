#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder_11)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename TResult> class Func_12;
}
namespace System {
class Object;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
class FactorySubContainerBinder_11;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TValue>
class IFactory_11;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TSubFactory>
class __FactoryFromBinder_11____c__2_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
class __FactoryFromBinder_11____c__DisplayClass1_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
class __FactoryFromBinder_11____c__DisplayClass3_0;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
class FactoryFromBinder_11;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TSubFactory>
class __FactoryFromBinder_11____c__2_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
class __FactoryFromBinder_11____c__DisplayClass1_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
class __FactoryFromBinder_11____c__DisplayClass3_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_11);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_11____c__2_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_11____c__DisplayClass1_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_11____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
// Is value type: false
// CS Name: ::FactoryFromBinder`11::<>c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>*
class CORDL_TYPE __FactoryFromBinder_11____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_method,
      put = __cordl_internal_set_method))::System::Func_12<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* method;

  static inline ::Zenject::__FactoryFromBinder_11____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* New_ctor();

  /// @brief Method <FromMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::System::Func_12<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*& __cordl_internal_get_method();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Func_12<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*> const&
  __cordl_internal_get_method() const;

  constexpr void __cordl_internal_set_method(::System::Func_12<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_11____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_11____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_11____c__DisplayClass1_0(__FactoryFromBinder_11____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_11____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_11____c__DisplayClass1_0(__FactoryFromBinder_11____c__DisplayClass1_0 const&) = delete;

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_12<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__2`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TSubFactory>
// Is value type: false
// CS Name: ::FactoryFromBinder`11::<>c__2`1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract,TSubFactory>*
class CORDL_TYPE __FactoryFromBinder_11____c__2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9,
      put = setStaticF___9))::Zenject::__FactoryFromBinder_11____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract, TSubFactory>* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Action_1<
      ::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>*>* __9__2_0;

  static inline ::Zenject::__FactoryFromBinder_11____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract, TSubFactory>* New_ctor();

  /// @brief Method <FromFactory>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromFactory_b__2_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__FactoryFromBinder_11____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract, TSubFactory>* getStaticF___9();

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>*>*
  getStaticF___9__2_0();

  static inline void
  setStaticF___9(::Zenject::__FactoryFromBinder_11____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract, TSubFactory>* value);

  static inline void setStaticF___9__2_0(
      ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_11____c__2_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_11____c__2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_11____c__2_1(__FactoryFromBinder_11____c__2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_11____c__2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_11____c__2_1(__FactoryFromBinder_11____c__2_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
// Is value type: false
// CS Name: ::FactoryFromBinder`11::<>c__DisplayClass3_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>*
class CORDL_TYPE __FactoryFromBinder_11____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field factoryId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_factoryId, put = __cordl_internal_set_factoryId))::System::Guid factoryId;

  static inline ::Zenject::__FactoryFromBinder_11____c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* New_ctor();

  /// @brief Method <FromIFactory>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromIFactory_b__0(::Zenject::DiContainer* container);

  constexpr ::System::Guid const& __cordl_internal_get_factoryId() const;

  constexpr ::System::Guid& __cordl_internal_get_factoryId();

  constexpr void __cordl_internal_set_factoryId(::System::Guid value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_11____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_11____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_11____c__DisplayClass3_0(__FactoryFromBinder_11____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_11____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_11____c__DisplayClass3_0(__FactoryFromBinder_11____c__DisplayClass3_0 const&) = delete;

  /// @brief Field factoryId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___factoryId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactoryFromBinder`11
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
// Is value type: false
// CS Name: ::Zenject::FactoryFromBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>*
class CORDL_TYPE FactoryFromBinder_11 : public ::Zenject::FactoryFromBinderBase {
public:
  // Declarations
  template <typename TSubFactory>
  using __c__2_1 = ::Zenject::__FactoryFromBinder_11____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract, TSubFactory>;

  using __c__DisplayClass1_0 = ::Zenject::__FactoryFromBinder_11____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>;

  using __c__DisplayClass3_0 = ::Zenject::__FactoryFromBinder_11____c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>;

  /// @brief Method FromFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSubFactory> inline ::Zenject::ConditionCopyNonLazyBinder* FromFactory();

  /// @brief Method FromIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ArgConditionCopyNonLazyBinder*
  FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>*>*
                   factoryBindGenerator);

  /// @brief Method FromMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder*
  FromMethod(::System::Func_12<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* method);

  /// @brief Method FromSubContainerResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* FromSubContainerResolve();

  /// @brief Method FromSubContainerResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
  FromSubContainerResolve(::System::Object* subIdentifier);

  static inline ::Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
  New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_11(FactoryFromBinder_11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_11(FactoryFromBinder_11 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_11, "Zenject", "FactoryFromBinder`11");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_11____c__2_1, "Zenject", "FactoryFromBinder`11/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_11____c__DisplayClass1_0, "Zenject", "FactoryFromBinder`11/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_11____c__DisplayClass3_0, "Zenject", "FactoryFromBinder`11/<>c__DisplayClass3_0");
