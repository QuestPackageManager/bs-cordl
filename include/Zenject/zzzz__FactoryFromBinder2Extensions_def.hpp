#pragma once
// IWYU pragma private; include "Zenject/FactoryFromBinder2Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder2Extensions)
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
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder2Extensions___c__1_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder2Extensions___c__3_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool> class FactoryFromBinder2Extensions___c__5_4;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder2Extensions___c__DisplayClass0_0_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool> class FactoryFromBinder2Extensions___c__DisplayClass6_0_4;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder_3;
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
template <typename TContract> class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Forward declare root types
namespace Zenject {
class FactoryFromBinder2Extensions;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder2Extensions___c__1_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder2Extensions___c__3_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool> class FactoryFromBinder2Extensions___c__5_4;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder2Extensions___c__DisplayClass0_0_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool> class FactoryFromBinder2Extensions___c__DisplayClass6_0_4;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryFromBinder2Extensions);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder2Extensions___c__1_3);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder2Extensions___c__3_3);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder2Extensions___c__5_4);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder2Extensions___c__DisplayClass0_0_3);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder2Extensions___c__DisplayClass6_0_4);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder2Extensions/<>c__1`3<TParam1,TParam2,TContract>
class CORDL_TYPE FactoryFromBinder2Extensions___c__1_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::FactoryFromBinder2Extensions___c__1_3<TParam1, TParam2, TContract>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__1_0;

  static inline ::Zenject::FactoryFromBinder2Extensions___c__1_3<TParam1, TParam2, TContract>* New_ctor();

  /// @brief Method <FromPoolableMemoryPool>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromPoolableMemoryPool_b__1_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::FactoryFromBinder2Extensions___c__1_3<TParam1, TParam2, TContract>* getStaticF___9();

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::Zenject::FactoryFromBinder2Extensions___c__1_3<TParam1, TParam2, TContract>* value);

  static inline void setStaticF___9__1_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder2Extensions___c__1_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__1_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder2Extensions___c__1_3(FactoryFromBinder2Extensions___c__1_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__1_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder2Extensions___c__1_3(FactoryFromBinder2Extensions___c__1_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder2Extensions/<>c__3`3<TParam1,TParam2,TContract>
class CORDL_TYPE FactoryFromBinder2Extensions___c__3_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::FactoryFromBinder2Extensions___c__3_3<TParam1, TParam2, TContract>* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__3_0;

  static inline ::Zenject::FactoryFromBinder2Extensions___c__3_3<TParam1, TParam2, TContract>* New_ctor();

  /// @brief Method <FromMonoPoolableMemoryPool>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromMonoPoolableMemoryPool_b__3_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::FactoryFromBinder2Extensions___c__3_3<TParam1, TParam2, TContract>* getStaticF___9();

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__3_0();

  static inline void setStaticF___9(::Zenject::FactoryFromBinder2Extensions___c__3_3<TParam1, TParam2, TContract>* value);

  static inline void setStaticF___9__3_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder2Extensions___c__3_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__3_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder2Extensions___c__3_3(FactoryFromBinder2Extensions___c__3_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__3_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder2Extensions___c__3_3(FactoryFromBinder2Extensions___c__3_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12077 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder2Extensions/<>c__5`4<TParam1,TParam2,TContract,TMemoryPool>
class CORDL_TYPE FactoryFromBinder2Extensions___c__5_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::FactoryFromBinder2Extensions___c__5_4<TParam1, TParam2, TContract, TMemoryPool>* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* __9__5_0;

  static inline ::Zenject::FactoryFromBinder2Extensions___c__5_4<TParam1, TParam2, TContract, TMemoryPool>* New_ctor();

  /// @brief Method <FromPoolableMemoryPool>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromPoolableMemoryPool_b__5_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::FactoryFromBinder2Extensions___c__5_4<TParam1, TParam2, TContract, TMemoryPool>* getStaticF___9();

  static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__5_0();

  static inline void setStaticF___9(::Zenject::FactoryFromBinder2Extensions___c__5_4<TParam1, TParam2, TContract, TMemoryPool>* value);

  static inline void setStaticF___9__5_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder2Extensions___c__5_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__5_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder2Extensions___c__5_4(FactoryFromBinder2Extensions___c__5_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__5_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder2Extensions___c__5_4(FactoryFromBinder2Extensions___c__5_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12078 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Guid, System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3<TParam1,TParam2,TContract>
class CORDL_TYPE FactoryFromBinder2Extensions___c__DisplayClass0_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field factoryId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_factoryId, put = __cordl_internal_set_factoryId)) ::System::Guid factoryId;

  static inline ::Zenject::FactoryFromBinder2Extensions___c__DisplayClass0_0_3<TParam1, TParam2, TContract>* New_ctor();

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
  constexpr FactoryFromBinder2Extensions___c__DisplayClass0_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__DisplayClass0_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder2Extensions___c__DisplayClass0_0_3(FactoryFromBinder2Extensions___c__DisplayClass0_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__DisplayClass0_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder2Extensions___c__DisplayClass0_0_3(FactoryFromBinder2Extensions___c__DisplayClass0_0_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12079 };

  /// @brief Field factoryId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___factoryId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Guid, System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder2Extensions/<>c__DisplayClass6_0`4<TParam1,TParam2,TContract,TMemoryPool>
class CORDL_TYPE FactoryFromBinder2Extensions___c__DisplayClass6_0_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field poolId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_poolId, put = __cordl_internal_set_poolId)) ::System::Guid poolId;

  static inline ::Zenject::FactoryFromBinder2Extensions___c__DisplayClass6_0_4<TParam1, TParam2, TContract, TMemoryPool>* New_ctor();

  /// @brief Method <FromPoolableMemoryPool>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromPoolableMemoryPool_b__0(::Zenject::DiContainer* container);

  constexpr ::System::Guid const& __cordl_internal_get_poolId() const;

  constexpr ::System::Guid& __cordl_internal_get_poolId();

  constexpr void __cordl_internal_set_poolId(::System::Guid value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder2Extensions___c__DisplayClass6_0_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__DisplayClass6_0_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder2Extensions___c__DisplayClass6_0_4(FactoryFromBinder2Extensions___c__DisplayClass6_0_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions___c__DisplayClass6_0_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder2Extensions___c__DisplayClass6_0_4(FactoryFromBinder2Extensions___c__DisplayClass6_0_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12080 };

  /// @brief Field poolId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___poolId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinder2Extensions
class CORDL_TYPE FactoryFromBinder2Extensions : public ::System::Object {
public:
  // Declarations
  template <typename TParam1, typename TParam2, typename TContract> using __c__1_3 = ::Zenject::FactoryFromBinder2Extensions___c__1_3<TParam1, TParam2, TContract>;

  template <typename TParam1, typename TParam2, typename TContract> using __c__3_3 = ::Zenject::FactoryFromBinder2Extensions___c__3_3<TParam1, TParam2, TContract>;

  template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool> using __c__5_4 = ::Zenject::FactoryFromBinder2Extensions___c__5_4<TParam1, TParam2, TContract, TMemoryPool>;

  template <typename TParam1, typename TParam2, typename TContract> using __c__DisplayClass0_0_3 = ::Zenject::FactoryFromBinder2Extensions___c__DisplayClass0_0_3<TParam1, TParam2, TContract>;

  template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
  using __c__DisplayClass6_0_4 = ::Zenject::FactoryFromBinder2Extensions___c__DisplayClass6_0_4<TParam1, TParam2, TContract, TMemoryPool>;

  /// @brief Method FromIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder*
  FromIFactory(::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* fromBinder,
               ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>* factoryBindGenerator);

  /// @brief Method FromMonoPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* fromBinder);

  /// @brief Method FromMonoPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* fromBinder,
                                                                                     ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* fromBinder);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* fromBinder);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* fromBinder,
                                                                                 ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

  /// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* fromBinder,
                                                                                 ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder2Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder2Extensions(FactoryFromBinder2Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder2Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder2Extensions(FactoryFromBinder2Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12081 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinder2Extensions, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FactoryFromBinder2Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinder2Extensions*, "Zenject", "FactoryFromBinder2Extensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder2Extensions___c__1_3, "Zenject", "FactoryFromBinder2Extensions/<>c__1`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder2Extensions___c__3_3, "Zenject", "FactoryFromBinder2Extensions/<>c__3`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder2Extensions___c__5_4, "Zenject", "FactoryFromBinder2Extensions/<>c__5`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder2Extensions___c__DisplayClass0_0_3, "Zenject", "FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder2Extensions___c__DisplayClass6_0_4, "Zenject", "FactoryFromBinder2Extensions/<>c__DisplayClass6_0`4");
