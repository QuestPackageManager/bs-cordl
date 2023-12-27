#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpiringDictionary_2)
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class __ExpiringDictionary_2___Enumerate_d__14;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class __ExpiringDictionary_2__Entry;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
template <typename T> class OrderedSet_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class __ExpiringDictionary_2__Entry;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class __ExpiringDictionary_2___Enumerate_d__14;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ExpiringDictionary_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ExpiringDictionary_2__Entry);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14);
// Type: ::Entry
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12728))
// CS Name: ::ExpiringDictionary`2::Entry<TKey,TValue>*
class CORDL_TYPE __ExpiringDictionary_2__Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key)) TKey key;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __get_value, put = __set_value)) TValue value;

  /// @brief Field expireTime, offset 0x20, size 0x8
  __declspec(property(get = __get_expireTime, put = __set_expireTime)) int64_t expireTime;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr TKey& __get_key();

  constexpr TKey const& __get_key() const;

  constexpr void __set_key(TKey value);

  constexpr TValue& __get_value();

  constexpr TValue const& __get_value() const;

  constexpr void __set_value(TValue value);

  constexpr int64_t& __get_expireTime();

  constexpr int64_t const& __get_expireTime() const;

  constexpr void __set_expireTime(int64_t value);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  static inline ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ExpiringDictionary_2__Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpiringDictionary_2__Entry(__ExpiringDictionary_2__Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpiringDictionary_2__Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpiringDictionary_2__Entry(__ExpiringDictionary_2__Entry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpiringDictionary_2__Entry();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  TKey ___key;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  TValue ___value;

  /// @brief Field expireTime, offset: 0x20, size: 0x8, def value: None
  int64_t ___expireTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<Enumerate>d__14
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12729))
// CS Name: ::ExpiringDictionary`2::<Enumerate>d__14<TKey,TValue>*
class CORDL_TYPE __ExpiringDictionary_2___Enumerate_d__14 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) TValue __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* __4__this;

  /// @brief Field <>7__wrap1, offset 0x28, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_TValue__get_Current)) TValue System_Collections_Generic_IEnumerator_TValue__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr TValue& __get___2__current();

  constexpr TValue const& __get___2__current() const;

  constexpr void __set___2__current(TValue value);

  constexpr ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* value);

  static inline ::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey, TValue>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<TValue>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TValue System_Collections_Generic_IEnumerator_TValue__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ExpiringDictionary_2___Enumerate_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpiringDictionary_2___Enumerate_d__14(__ExpiringDictionary_2___Enumerate_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpiringDictionary_2___Enumerate_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpiringDictionary_2___Enumerate_d__14(__ExpiringDictionary_2___Enumerate_d__14 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpiringDictionary_2___Enumerate_d__14();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TValue _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ExpiringDictionary`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12730))
// CS Name: ::ExpiringDictionary`2<TKey,TValue>*
class CORDL_TYPE ExpiringDictionary_2 : public ::System::Object {
public:
  // Declarations
  using _Enumerate_d__14 = ::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey, TValue>;

  using Entry = ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>;

  /// @brief Field _timeProvider, offset 0x10, size 0x8
  __declspec(property(get = __get__timeProvider, put = __set__timeProvider))::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _expirationLengthMs, offset 0x18, size 0x8
  __declspec(property(get = __get__expirationLengthMs, put = __set__expirationLengthMs)) int64_t _expirationLengthMs;

  /// @brief Field _expirationQueue, offset 0x20, size 0x8
  __declspec(property(get = __get__expirationQueue, put = __set__expirationQueue))::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* _expirationQueue;

  /// @brief Field _entryLookup, offset 0x28, size 0x8
  __declspec(property(get = __get__entryLookup,
                      put = __set__entryLookup))::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* _entryLookup;

  /// @brief Field _reusableEntries, offset 0x30, size 0x8
  __declspec(property(get = __get__reusableEntries,
                      put = __set__reusableEntries))::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* _reusableEntries;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::BGNet::Core::ITimeProvider*& __get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& __get__timeProvider() const;

  constexpr void __set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr int64_t& __get__expirationLengthMs();

  constexpr int64_t const& __get__expirationLengthMs() const;

  constexpr void __set__expirationLengthMs(int64_t value);

  constexpr ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>*& __get__expirationQueue();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>*> const& __get__expirationQueue() const;

  constexpr void __set__expirationQueue(::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>*& __get__entryLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>*> const& __get__entryLookup() const;

  constexpr void __set__entryLookup(::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>*& __get__reusableEntries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>*> const& __get__reusableEntries() const;

  constexpr void __set__reusableEntries(::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* value);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_Count();

  static inline ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, int64_t expirationLengthMs);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, int64_t expirationLengthMs);

  /// @brief Method CompareEntries addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline int32_t CompareEntries(::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>* a, ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>* b);

  /// @brief Method RemoveExpiredEntries addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void RemoveExpiredEntries();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator();

  /// @brief Method Enumerate addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* Enumerate();

  /// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool ContainsKey(TKey key);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  /// @brief Method TryGetValueAndResetExpiration addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryGetValueAndResetExpiration(TKey key, ByRef<TValue> value);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool Remove(TKey key);

  /// @brief Method ResetExpiration addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ResetExpiration(TKey key);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool Add(TKey key, TValue value);

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue Get(TKey key);

  /// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Set(TKey key, TValue value);

  /// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue get_Item(TKey key);

  /// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_Item(TKey key, TValue value);

  /// @brief Method PollUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void PollUpdate();

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method GetEntry addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>* GetEntry(TKey key, TValue value);

  /// @brief Method ReleaseEntry addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ReleaseEntry(::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>* entry);

  // Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpiringDictionary_2(ExpiringDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpiringDictionary_2(ExpiringDictionary_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpiringDictionary_2();

public:
  /// @brief Field _timeProvider, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _expirationLengthMs, offset: 0x18, size: 0x8, def value: None
  int64_t ____expirationLengthMs;

  /// @brief Field _expirationQueue, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* ____expirationQueue;

  /// @brief Field _entryLookup, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* ____entryLookup;

  /// @brief Field _reusableEntries, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey, TValue>*>* ____reusableEntries;

  /// @brief Field kMaxReusableEntries offset 0xffffffff size 0x4
  static constexpr int32_t kMaxReusableEntries{ static_cast<int32_t>(0x400) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ExpiringDictionary_2, "", "ExpiringDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ExpiringDictionary_2__Entry, "", "ExpiringDictionary`2/Entry");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14, "", "ExpiringDictionary`2/<Enumerate>d__14");
