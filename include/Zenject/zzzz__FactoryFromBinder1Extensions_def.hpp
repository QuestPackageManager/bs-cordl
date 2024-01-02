#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder1Extensions)
namespace Zenject {
template <typename TParam1, typename TContract> class FactoryFromBinder_2;
}
namespace Zenject {
template <typename TParam1, typename TContract> class __FactoryFromBinder1Extensions____c__DisplayClass0_0_2;
}
namespace Zenject {
template <typename TParam1, typename TContract> class __FactoryFromBinder1Extensions____c__1_2;
}
namespace Zenject {
template <typename TParam1, typename TContract> class __FactoryFromBinder1Extensions____c__3_2;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
template <typename TContract> class MemoryPoolInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
template <typename TParam1, typename TContract, typename TMemoryPool> class __FactoryFromBinder1Extensions____c__5_3;
}
namespace Zenject {
template <typename TParam1, typename TContract, typename TMemoryPool> class __FactoryFromBinder1Extensions____c__DisplayClass6_0_3;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
template <typename TParam1, typename TValue> class IFactory_2;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class FactoryFromBinder1Extensions;
}
namespace Zenject {
template <typename TParam1, typename TContract> class __FactoryFromBinder1Extensions____c__1_2;
}
namespace Zenject {
template <typename TParam1, typename TContract> class __FactoryFromBinder1Extensions____c__3_2;
}
namespace Zenject {
template <typename TParam1, typename TContract, typename TMemoryPool> class __FactoryFromBinder1Extensions____c__5_3;
}
namespace Zenject {
template <typename TParam1, typename TContract> class __FactoryFromBinder1Extensions____c__DisplayClass0_0_2;
}
namespace Zenject {
template <typename TParam1, typename TContract, typename TMemoryPool> class __FactoryFromBinder1Extensions____c__DisplayClass6_0_3;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryFromBinder1Extensions);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder1Extensions____c__1_2);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder1Extensions____c__3_2);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder1Extensions____c__5_3);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3);
// Type: ::<>c__DisplayClass0_0`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10726))
// CS Name: ::FactoryFromBinder1Extensions::<>c__DisplayClass0_0`2<TParam1,TContract>*
class CORDL_TYPE __FactoryFromBinder1Extensions____c__DisplayClass0_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field factoryId, offset 0x10, size 0x10
  __declspec(property(get = __get_factoryId, put = __set_factoryId))::System::Guid factoryId;

  constexpr ::System::Guid& __get_factoryId();

  constexpr ::System::Guid const& __get_factoryId() const;

  constexpr void __set_factoryId(::System::Guid value);

  static inline ::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromIFactory>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromIFactory_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__DisplayClass0_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder1Extensions____c__DisplayClass0_0_2(__FactoryFromBinder1Extensions____c__DisplayClass0_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__DisplayClass0_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder1Extensions____c__DisplayClass0_0_2(__FactoryFromBinder1Extensions____c__DisplayClass0_0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder1Extensions____c__DisplayClass0_0_2();

public:
  /// @brief Field factoryId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___factoryId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__1`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10727))
// CS Name: ::FactoryFromBinder1Extensions::<>c__1`2<TParam1,TContract>*
class CORDL_TYPE __FactoryFromBinder1Extensions____c__1_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__1_0;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>* value);

  static inline ::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__1_0();

  static inline ::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromPoolableMemoryPool>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromPoolableMemoryPool_b__1_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__1_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder1Extensions____c__1_2(__FactoryFromBinder1Extensions____c__1_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__1_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder1Extensions____c__1_2(__FactoryFromBinder1Extensions____c__1_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder1Extensions____c__1_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__3`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10728))
// CS Name: ::FactoryFromBinder1Extensions::<>c__3`2<TParam1,TContract>*
class CORDL_TYPE __FactoryFromBinder1Extensions____c__3_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__3_0;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>* value);

  static inline ::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__3_0();

  static inline ::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromMonoPoolableMemoryPool>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromMonoPoolableMemoryPool_b__3_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__3_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder1Extensions____c__3_2(__FactoryFromBinder1Extensions____c__3_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__3_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder1Extensions____c__3_2(__FactoryFromBinder1Extensions____c__3_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder1Extensions____c__3_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__5`3
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TContract, typename TMemoryPool>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10729))
// CS Name: ::FactoryFromBinder1Extensions::<>c__5`3<TParam1,TContract,TMemoryPool>*
class CORDL_TYPE __FactoryFromBinder1Extensions____c__5_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__5_0;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>* value);

  static inline ::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__5_0();

  static inline ::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromPoolableMemoryPool>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromPoolableMemoryPool_b__5_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__5_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder1Extensions____c__5_3(__FactoryFromBinder1Extensions____c__5_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__5_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder1Extensions____c__5_3(__FactoryFromBinder1Extensions____c__5_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder1Extensions____c__5_3();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass6_0`3
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TContract, typename TMemoryPool>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10730))
// CS Name: ::FactoryFromBinder1Extensions::<>c__DisplayClass6_0`3<TParam1,TContract,TMemoryPool>*
class CORDL_TYPE __FactoryFromBinder1Extensions____c__DisplayClass6_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field poolId, offset 0x10, size 0x10
  __declspec(property(get = __get_poolId, put = __set_poolId))::System::Guid poolId;

  constexpr ::System::Guid& __get_poolId();

  constexpr ::System::Guid const& __get_poolId() const;

  constexpr void __set_poolId(::System::Guid value);

  static inline ::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromPoolableMemoryPool>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromPoolableMemoryPool_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__DisplayClass6_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder1Extensions____c__DisplayClass6_0_3(__FactoryFromBinder1Extensions____c__DisplayClass6_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder1Extensions____c__DisplayClass6_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder1Extensions____c__DisplayClass6_0_3(__FactoryFromBinder1Extensions____c__DisplayClass6_0_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder1Extensions____c__DisplayClass6_0_3();

public:
  /// @brief Field poolId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___poolId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactoryFromBinder1Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10731))
// CS Name: ::Zenject::FactoryFromBinder1Extensions*
class CORDL_TYPE FactoryFromBinder1Extensions : public ::System::Object {
public:
  // Declarations
  template <typename TParam1, typename TContract, typename TMemoryPool>
  using __c__DisplayClass6_0_3 = ::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>;

  template <typename TParam1, typename TContract, typename TMemoryPool> using __c__5_3 = ::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>;

  template <typename TParam1, typename TContract> using __c__3_2 = ::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>;

  template <typename TParam1, typename TContract> using __c__1_2 = ::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>;

  template <typename TParam1, typename TContract> using __c__DisplayClass0_0_2 = ::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>;

  /// @brief Method FromIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder,
                                                                       ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_2<TParam1, TContract>*>*>* factoryBindGenerator);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract> static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder,
                                                                                 ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

  /// @brief Method FromMonoPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract> static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder);

  /// @brief Method FromMonoPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder,
                                                                                     ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract, typename TMemoryPool>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract, typename TMemoryPool>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder,
                                                                                 ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder1Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder1Extensions(FactoryFromBinder1Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder1Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder1Extensions(FactoryFromBinder1Extensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder1Extensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinder1Extensions, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FactoryFromBinder1Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinder1Extensions*, "Zenject", "FactoryFromBinder1Extensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder1Extensions____c__1_2, "Zenject", "FactoryFromBinder1Extensions/<>c__1`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder1Extensions____c__3_2, "Zenject", "FactoryFromBinder1Extensions/<>c__3`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder1Extensions____c__5_3, "Zenject", "FactoryFromBinder1Extensions/<>c__5`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2, "Zenject", "FactoryFromBinder1Extensions/<>c__DisplayClass0_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3, "Zenject", "FactoryFromBinder1Extensions/<>c__DisplayClass6_0`3");
