#pragma once
// IWYU pragma private; include "Zenject/FactoryFromBinder_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder_3)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Object;
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
template <typename TParam1, typename TParam2, typename TContract> class FactorySubContainerBinder_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TValue> class IFactory_3;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory> class __FactoryFromBinder_3____c__2_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class __FactoryFromBinder_3____c__DisplayClass1_0;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory> class __FactoryFromBinder_3____c__2_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class __FactoryFromBinder_3____c__DisplayClass1_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_3);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_3____c__2_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0);
// Type: ::<>c__2`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
// Is value type: false
// CS Name: ::FactoryFromBinder`3::<>c__2`1<TParam1,TParam2,TContract,TSubFactory>*
class CORDL_TYPE __FactoryFromBinder_3____c__2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__FactoryFromBinder_3____c__2_1<TParam1, TParam2, TContract, TSubFactory>* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>* __9__2_0;

  static inline ::Zenject::__FactoryFromBinder_3____c__2_1<TParam1, TParam2, TContract, TSubFactory>* New_ctor();

  /// @brief Method <FromFactory>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromFactory_b__2_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__FactoryFromBinder_3____c__2_1<TParam1, TParam2, TContract, TSubFactory>* getStaticF___9();

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder_3____c__2_1<TParam1, TParam2, TContract, TSubFactory>* value);

  static inline void setStaticF___9__2_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_3____c__2_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_3____c__2_1(__FactoryFromBinder_3____c__2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_3____c__2_1(__FactoryFromBinder_3____c__2_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12040 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract>
// Is value type: false
// CS Name: ::FactoryFromBinder`3::<>c__DisplayClass1_0<TParam1,TParam2,TContract>*
class CORDL_TYPE __FactoryFromBinder_3____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>* method;

  static inline ::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>* New_ctor();

  /// @brief Method <FromMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>*& __cordl_internal_get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>*> const& __cordl_internal_get_method() const;

  constexpr void __cordl_internal_set_method(::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_3____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_3____c__DisplayClass1_0(__FactoryFromBinder_3____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_3____c__DisplayClass1_0(__FactoryFromBinder_3____c__DisplayClass1_0 const&) = delete;

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>* ___method;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12041 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactoryFromBinder`3
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract>
// Is value type: false
// CS Name: ::Zenject::FactoryFromBinder`3<TParam1,TParam2,TContract>*
class CORDL_TYPE FactoryFromBinder_3 : public ::Zenject::FactoryFromBinderBase {
public:
  // Declarations
  template <typename TSubFactory> using __c__2_1 = ::Zenject::__FactoryFromBinder_3____c__2_1<TParam1, TParam2, TContract, TSubFactory>;

  using __c__DisplayClass1_0 = ::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>;

  /// @brief Method FromFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSubFactory> inline ::Zenject::ConditionCopyNonLazyBinder* FromFactory();

  /// @brief Method FromMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromMethod(::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>* method);

  /// @brief Method FromSubContainerResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* FromSubContainerResolve();

  /// @brief Method FromSubContainerResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* FromSubContainerResolve(::System::Object* subIdentifier);

  static inline ::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_3(FactoryFromBinder_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_3(FactoryFromBinder_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12042 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_3, "Zenject", "FactoryFromBinder`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_3____c__2_1, "Zenject", "FactoryFromBinder`3/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0, "Zenject", "FactoryFromBinder`3/<>c__DisplayClass1_0");
