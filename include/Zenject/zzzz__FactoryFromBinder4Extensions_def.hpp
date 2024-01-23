#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder4Extensions)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactoryFromBinder_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> class IFactory_5;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template <typename TContract> class MemoryPoolInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactoryFromBinder4Extensions____c__1_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactoryFromBinder4Extensions____c__3_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool> class __FactoryFromBinder4Extensions____c__5_6;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactoryFromBinder4Extensions____c__DisplayClass0_0_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool> class __FactoryFromBinder4Extensions____c__DisplayClass6_0_6;
}
// Forward declare root types
namespace Zenject {
class FactoryFromBinder4Extensions;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactoryFromBinder4Extensions____c__1_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactoryFromBinder4Extensions____c__3_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool> class __FactoryFromBinder4Extensions____c__5_6;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactoryFromBinder4Extensions____c__DisplayClass0_0_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool> class __FactoryFromBinder4Extensions____c__DisplayClass6_0_6;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryFromBinder4Extensions);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder4Extensions____c__1_5);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder4Extensions____c__3_5);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder4Extensions____c__5_6);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder4Extensions____c__DisplayClass0_0_5);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder4Extensions____c__DisplayClass6_0_6);
// Type: ::<>c__DisplayClass0_0`5
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10757))
// CS Name: ::FactoryFromBinder4Extensions::<>c__DisplayClass0_0`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE __FactoryFromBinder4Extensions____c__DisplayClass0_0_5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field factoryId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_factoryId, put = __cordl_internal_set_factoryId))::System::Guid factoryId;

  constexpr ::System::Guid& __cordl_internal_get_factoryId();

  constexpr ::System::Guid const& __cordl_internal_get_factoryId() const;

  constexpr void __cordl_internal_set_factoryId(::System::Guid value);

  static inline ::Zenject::__FactoryFromBinder4Extensions____c__DisplayClass0_0_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromIFactory>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromIFactory_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__DisplayClass0_0_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder4Extensions____c__DisplayClass0_0_5(__FactoryFromBinder4Extensions____c__DisplayClass0_0_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__DisplayClass0_0_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder4Extensions____c__DisplayClass0_0_5(__FactoryFromBinder4Extensions____c__DisplayClass0_0_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder4Extensions____c__DisplayClass0_0_5();

public:
  /// @brief Field factoryId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___factoryId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__1`5
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10758))
// CS Name: ::FactoryFromBinder4Extensions::<>c__1`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE __FactoryFromBinder4Extensions____c__1_5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder4Extensions____c__1_5<TParam1, TParam2, TParam3, TParam4, TContract>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__1_0;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder4Extensions____c__1_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  static inline ::Zenject::__FactoryFromBinder4Extensions____c__1_5<TParam1, TParam2, TParam3, TParam4, TContract>* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__1_0();

  static inline ::Zenject::__FactoryFromBinder4Extensions____c__1_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromPoolableMemoryPool>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromPoolableMemoryPool_b__1_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__1_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder4Extensions____c__1_5(__FactoryFromBinder4Extensions____c__1_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__1_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder4Extensions____c__1_5(__FactoryFromBinder4Extensions____c__1_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder4Extensions____c__1_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__3`5
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10759))
// CS Name: ::FactoryFromBinder4Extensions::<>c__3`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE __FactoryFromBinder4Extensions____c__3_5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder4Extensions____c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__3_0;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder4Extensions____c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  static inline ::Zenject::__FactoryFromBinder4Extensions____c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__3_0();

  static inline ::Zenject::__FactoryFromBinder4Extensions____c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromMonoPoolableMemoryPool>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromMonoPoolableMemoryPool_b__3_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__3_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder4Extensions____c__3_5(__FactoryFromBinder4Extensions____c__3_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__3_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder4Extensions____c__3_5(__FactoryFromBinder4Extensions____c__3_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder4Extensions____c__3_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__5`6
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10760))
// CS Name: ::FactoryFromBinder4Extensions::<>c__5`6<TParam1,TParam2,TParam3,TParam4,TContract,TMemoryPool>*
class CORDL_TYPE __FactoryFromBinder4Extensions____c__5_6 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder4Extensions____c__5_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__5_0;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder4Extensions____c__5_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>* value);

  static inline ::Zenject::__FactoryFromBinder4Extensions____c__5_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__5_0();

  static inline ::Zenject::__FactoryFromBinder4Extensions____c__5_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromPoolableMemoryPool>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromPoolableMemoryPool_b__5_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__5_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder4Extensions____c__5_6(__FactoryFromBinder4Extensions____c__5_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__5_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder4Extensions____c__5_6(__FactoryFromBinder4Extensions____c__5_6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder4Extensions____c__5_6();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass6_0`6
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10761))
// CS Name: ::FactoryFromBinder4Extensions::<>c__DisplayClass6_0`6<TParam1,TParam2,TParam3,TParam4,TContract,TMemoryPool>*
class CORDL_TYPE __FactoryFromBinder4Extensions____c__DisplayClass6_0_6 : public ::System::Object {
public:
  // Declarations
  /// @brief Field poolId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_poolId, put = __cordl_internal_set_poolId))::System::Guid poolId;

  constexpr ::System::Guid& __cordl_internal_get_poolId();

  constexpr ::System::Guid const& __cordl_internal_get_poolId() const;

  constexpr void __cordl_internal_set_poolId(::System::Guid value);

  static inline ::Zenject::__FactoryFromBinder4Extensions____c__DisplayClass6_0_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromPoolableMemoryPool>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromPoolableMemoryPool_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__DisplayClass6_0_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder4Extensions____c__DisplayClass6_0_6(__FactoryFromBinder4Extensions____c__DisplayClass6_0_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder4Extensions____c__DisplayClass6_0_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder4Extensions____c__DisplayClass6_0_6(__FactoryFromBinder4Extensions____c__DisplayClass6_0_6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder4Extensions____c__DisplayClass6_0_6();

public:
  /// @brief Field poolId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___poolId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactoryFromBinder4Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10762))
// CS Name: ::Zenject::FactoryFromBinder4Extensions*
class CORDL_TYPE FactoryFromBinder4Extensions : public ::System::Object {
public:
  // Declarations
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
  using __c__DisplayClass6_0_6 = ::Zenject::__FactoryFromBinder4Extensions____c__DisplayClass6_0_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>;

  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
  using __c__5_6 = ::Zenject::__FactoryFromBinder4Extensions____c__5_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>;

  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  using __c__3_5 = ::Zenject::__FactoryFromBinder4Extensions____c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>;

  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  using __c__1_5 = ::Zenject::__FactoryFromBinder4Extensions____c__1_5<TParam1, TParam2, TParam3, TParam4, TContract>;

  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  using __c__DisplayClass0_0_5 = ::Zenject::__FactoryFromBinder4Extensions____c__DisplayClass0_0_5<TParam1, TParam2, TParam3, TParam4, TContract>;

  /// @brief Method FromIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder*
  FromIFactory(::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder,
               ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>*>* factoryBindGenerator);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder,
                                                                                 ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

  /// @brief Method FromMonoPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder);

  /// @brief Method FromMonoPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder,
                                                                                     ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder,
                                                                                 ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder4Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder4Extensions(FactoryFromBinder4Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder4Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder4Extensions(FactoryFromBinder4Extensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder4Extensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinder4Extensions, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FactoryFromBinder4Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinder4Extensions*, "Zenject", "FactoryFromBinder4Extensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder4Extensions____c__1_5, "Zenject", "FactoryFromBinder4Extensions/<>c__1`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder4Extensions____c__3_5, "Zenject", "FactoryFromBinder4Extensions/<>c__3`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder4Extensions____c__5_6, "Zenject", "FactoryFromBinder4Extensions/<>c__5`6");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder4Extensions____c__DisplayClass0_0_5, "Zenject", "FactoryFromBinder4Extensions/<>c__DisplayClass0_0`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder4Extensions____c__DisplayClass6_0_6, "Zenject", "FactoryFromBinder4Extensions/<>c__DisplayClass6_0`6");
