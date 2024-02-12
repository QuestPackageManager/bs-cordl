#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncCache_2)
namespace GlobalNamespace {
template <typename TKey, typename TValue> class __AsyncCache_2____c__DisplayClass4_0;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Lazy_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TKey, typename TValue> class AsyncCache_2;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class __AsyncCache_2____c__DisplayClass4_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AsyncCache_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16024))
// CS Name: ::AsyncCache`2::<>c__DisplayClass4_0<TKey,TValue>*
class CORDL_TYPE __AsyncCache_2____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field toAdd, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_toAdd, put = __cordl_internal_set_toAdd)) TKey toAdd;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::AsyncCache_2<TKey, TValue>* __4__this;

  constexpr TKey& __cordl_internal_get_toAdd();

  constexpr TKey const& __cordl_internal_get_toAdd() const;

  constexpr void __cordl_internal_set_toAdd(TKey value);

  constexpr ::GlobalNamespace::AsyncCache_2<TKey, TValue>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCache_2<TKey, TValue>*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::AsyncCache_2<TKey, TValue>* value);

  static inline ::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_Item>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TValue>* _get_Item_b__1();

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncCache_2____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncCache_2____c__DisplayClass4_0(__AsyncCache_2____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncCache_2____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncCache_2____c__DisplayClass4_0(__AsyncCache_2____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncCache_2____c__DisplayClass4_0();

public:
  /// @brief Field toAdd, offset: 0x10, size: 0x8, def value: None
  TKey ___toAdd;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AsyncCache_2<TKey, TValue>* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::AsyncCache`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16025))
// CS Name: ::AsyncCache`2<TKey,TValue>*
class CORDL_TYPE AsyncCache_2 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>;

  /// @brief Field _valueFactory, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__valueFactory, put = __cordl_internal_set__valueFactory))::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>* _valueFactory;

  /// @brief Field _map, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__map,
                      put = __cordl_internal_set__map))::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>* _map;

  __declspec(property(get = get_Item))::System::Threading::Tasks::Task_1<TValue>* Item[];

  constexpr ::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>*& __cordl_internal_get__valueFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>*> const& __cordl_internal_get__valueFactory() const;

  constexpr void __cordl_internal_set__valueFactory(::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>* value);

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*& __cordl_internal_get__map();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*> const&
  __cordl_internal_get__map() const;

  constexpr void __cordl_internal_set__map(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>* value);

  static inline ::GlobalNamespace::AsyncCache_2<TKey, TValue>* New_ctor(::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>* valueFactory);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>* valueFactory);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TValue>* get_Item(TKey key);

  /// @brief Method RemoveKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveKey(TKey key);

  /// @brief Method <get_Item>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>* _get_Item_b__4_0(TKey toAdd);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCache_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncCache_2(AsyncCache_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncCache_2(AsyncCache_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncCache_2();

public:
  /// @brief Field _valueFactory, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>* ____valueFactory;

  /// @brief Field _map, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>* ____map;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AsyncCache_2, "", "AsyncCache`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0, "", "AsyncCache`2/<>c__DisplayClass4_0");
