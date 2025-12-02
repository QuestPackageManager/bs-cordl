#pragma once
// IWYU pragma private; include "Zenject/KeyedFactoryBase_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KeyedFactoryBase_2)
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template <typename TBase, typename TKey> class KeyedFactoryBase_2___c;
}
// Forward declare root types
namespace Zenject {
template <typename TBase, typename TKey> class KeyedFactoryBase_2;
}
namespace Zenject {
template <typename TBase, typename TKey> class KeyedFactoryBase_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::KeyedFactoryBase_2);
MARK_GEN_REF_PTR_T(::Zenject::KeyedFactoryBase_2___c);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TBase, typename TKey>
// Is value type: false
// CS Name: Zenject.KeyedFactoryBase`2/<>c<TBase,TKey>
class CORDL_TYPE KeyedFactoryBase_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1)) ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* __9__12_1;

  static inline ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>* New_ctor();

  /// @brief Method <Initialize>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey _Initialize_b__12_0(::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>* x);

  /// @brief Method <Initialize>b__12_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Type* _Initialize_b__12_1(::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>* getStaticF___9();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* getStaticF___9__12_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* getStaticF___9__12_1();

  static inline void setStaticF___9(::Zenject::KeyedFactoryBase_2___c<TBase, TKey>* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* value);

  static inline void setStaticF___9__12_1(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyedFactoryBase_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyedFactoryBase_2___c(KeyedFactoryBase_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyedFactoryBase_2___c(KeyedFactoryBase_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14317 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TBase, typename TKey>
// Is value type: false
// CS Name: Zenject.KeyedFactoryBase`2<TBase,TKey>
class CORDL_TYPE KeyedFactoryBase_2 : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>;

  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>* Keys;

  __declspec(property(get = get_ProvidedTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ProvidedTypes;

  __declspec(property(get = get_TypeMap)) ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* TypeMap;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _fallbackType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fallbackType, put = __cordl_internal_set__fallbackType)) ::System::Type* _fallbackType;

  /// @brief Field _typeMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__typeMap, put = __cordl_internal_set__typeMap)) ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* _typeMap;

  /// @brief Field _typePairs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__typePairs,
                      put = __cordl_internal_set__typePairs)) ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* _typePairs;

  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  /// @brief Method AddBindingInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDerived> static inline ::Zenject::ConditionCopyNonLazyBinder* AddBindingInternal(::Zenject::DiContainer* container, TKey key);

  /// @brief Method GetTypeForKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Type* GetTypeForKey(TKey key);

  /// @brief Method HasKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasKey(TKey key);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::Zenject::KeyedFactoryBase_2<TBase, TKey>* New_ctor();

  /// @brief Method Validate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Validate();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Type* const& __cordl_internal_get__fallbackType() const;

  constexpr ::System::Type*& __cordl_internal_get__fallbackType();

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* const& __cordl_internal_get__typeMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>*& __cordl_internal_get__typeMap();

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* const& __cordl_internal_get__typePairs() const;

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>*& __cordl_internal_get__typePairs();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__fallbackType(::System::Type* value);

  constexpr void __cordl_internal_set__typeMap(::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* value);

  constexpr void __cordl_internal_set__typePairs(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenFieldSetter0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenInjectMethod0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Container, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys();

  /// @brief Method get_ProvidedTypes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ProvidedTypes();

  /// @brief Method get_TypeMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* get_TypeMap();

  /// @brief Convert to "::Zenject::IValidatable"
  constexpr ::Zenject::IValidatable* i___Zenject__IValidatable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyedFactoryBase_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyedFactoryBase_2(KeyedFactoryBase_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyedFactoryBase_2(KeyedFactoryBase_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14318 };

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::KeyedFactoryBase_2___c, "Zenject", "KeyedFactoryBase`2/<>c");
