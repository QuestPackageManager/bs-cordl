#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(KeyedFactoryBase_2)
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
template <typename TBase, typename TKey> class __KeyedFactoryBase_2____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Zenject {
template <typename TBase, typename TKey> class KeyedFactoryBase_2;
}
namespace Zenject {
template <typename TBase, typename TKey> class __KeyedFactoryBase_2____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::KeyedFactoryBase_2);
MARK_GEN_REF_PTR_T(::Zenject::__KeyedFactoryBase_2____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TBase, typename TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10994))
// CS Name: ::KeyedFactoryBase`2::<>c<TBase,TKey>*
class CORDL_TYPE __KeyedFactoryBase_2____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1))::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* __9__12_1;

  static inline void setStaticF___9(::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>* value);

  static inline ::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>* getStaticF___9();

  static inline void setStaticF___9__12_0(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* getStaticF___9__12_0();

  static inline void setStaticF___9__12_1(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* getStaticF___9__12_1();

  static inline ::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <Initialize>b__12_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TKey _Initialize_b__12_0(::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>* x);

  /// @brief Method <Initialize>b__12_1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Type* _Initialize_b__12_1(::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>* x);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__KeyedFactoryBase_2____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KeyedFactoryBase_2____c(__KeyedFactoryBase_2____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KeyedFactoryBase_2____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KeyedFactoryBase_2____c(__KeyedFactoryBase_2____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KeyedFactoryBase_2____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::KeyedFactoryBase`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TBase, typename TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10995))
// CS Name: ::Zenject::KeyedFactoryBase`2<TBase,TKey>*
class CORDL_TYPE KeyedFactoryBase_2 : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _typePairs, offset 0x18, size 0x8
  __declspec(property(get = __get__typePairs, put = __set__typePairs))::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* _typePairs;

  /// @brief Field _typeMap, offset 0x20, size 0x8
  __declspec(property(get = __get__typeMap, put = __set__typeMap))::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* _typeMap;

  /// @brief Field _fallbackType, offset 0x28, size 0x8
  __declspec(property(get = __get__fallbackType, put = __set__fallbackType))::System::Type* _fallbackType;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  __declspec(property(get = get_ProvidedTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* ProvidedTypes;

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<TKey>* Keys;

  __declspec(property(get = get_TypeMap))::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* TypeMap;

  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>*& __get__typePairs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>*> const& __get__typePairs() const;

  constexpr void __set__typePairs(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>*& __get__typeMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>*> const& __get__typeMap() const;

  constexpr void __set__typeMap(::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* value);

  constexpr ::System::Type*& __get__fallbackType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__fallbackType() const;

  constexpr void __set__fallbackType(::System::Type* value);

  /// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_ProvidedTypes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ProvidedTypes();

  /// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys();

  /// @brief Method get_TypeMap addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* get_TypeMap();

  /// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Initialize();

  /// @brief Method HasKey addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool HasKey(TKey key);

  /// @brief Method GetTypeForKey addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Type* GetTypeForKey(TKey key);

  /// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Validate();

  /// @brief Method AddBindingInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TDerived> static inline ::Zenject::ConditionCopyNonLazyBinder* AddBindingInternal(::Zenject::DiContainer* container, TKey key);

  static inline ::Zenject::KeyedFactoryBase_2<TBase, TKey>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenFieldSetter0 addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1 addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2 addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenInjectMethod0 addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyedFactoryBase_2(KeyedFactoryBase_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyedFactoryBase_2(KeyedFactoryBase_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyedFactoryBase_2();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _typePairs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* ____typePairs;

  /// @brief Field _typeMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* ____typeMap;

  /// @brief Field _fallbackType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____fallbackType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::KeyedFactoryBase_2, "Zenject", "KeyedFactoryBase`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__KeyedFactoryBase_2____c, "Zenject", "KeyedFactoryBase`2/<>c");
