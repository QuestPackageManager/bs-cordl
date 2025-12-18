#pragma once
// IWYU pragma private; include "GlobalNamespace/ExpiringDictionary_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpiringDictionary_2)
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2_Entry;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2__Enumerate_d__14;
}
namespace GlobalNamespace {
template <typename T> class OrderedSet_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2_Entry;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2__Enumerate_d__14;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ExpiringDictionary_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::ExpiringDictionary_2_Entry);
MARK_GEN_REF_PTR_T(::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ExpiringDictionary`2/Entry<TKey,TValue>
class CORDL_TYPE ExpiringDictionary_2_Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field expireTime, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_expireTime, put = __cordl_internal_set_expireTime)) int64_t expireTime;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) TKey key;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) TValue value;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* New_ctor();

  constexpr int64_t const& __cordl_internal_get_expireTime() const;

  constexpr int64_t& __cordl_internal_get_expireTime();

  constexpr TKey const& __cordl_internal_get_key() const;

  constexpr TKey& __cordl_internal_get_key();

  constexpr TValue const& __cordl_internal_get_value() const;

  constexpr TValue& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_expireTime(int64_t value);

  constexpr void __cordl_internal_set_key(TKey value);

  constexpr void __cordl_internal_set_value(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpiringDictionary_2_Entry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2_Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpiringDictionary_2_Entry(ExpiringDictionary_2_Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2_Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpiringDictionary_2_Entry(ExpiringDictionary_2_Entry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18122 };

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
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ExpiringDictionary`2/<Enumerate>d__14<TKey,TValue>
class CORDL_TYPE ExpiringDictionary_2__Enumerate_d__14 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TValue__get_Current)) TValue System_Collections_Generic_IEnumerator_TValue__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TValue __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* __4__this;

  /// @brief Field <>7__wrap1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* __7__wrap1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<TValue>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue System_Collections_Generic_IEnumerator_TValue__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr TValue const& __cordl_internal_get___2__current() const;

  constexpr TValue& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>*& __cordl_internal_get___7__wrap1();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TValue value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpiringDictionary_2__Enumerate_d__14();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2__Enumerate_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpiringDictionary_2__Enumerate_d__14(ExpiringDictionary_2__Enumerate_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2__Enumerate_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpiringDictionary_2__Enumerate_d__14(ExpiringDictionary_2__Enumerate_d__14 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18123 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TValue _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ExpiringDictionary`2<TKey,TValue>
class CORDL_TYPE ExpiringDictionary_2 : public ::System::Object {
public:
  // Declarations
  using Entry = ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>;

  using _Enumerate_d__14 = ::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  /// @brief Field _entryLookup, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__entryLookup,
                      put = __cordl_internal_set__entryLookup)) ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* _entryLookup;

  /// @brief Field _expirationLengthMs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__expirationLengthMs, put = __cordl_internal_set__expirationLengthMs)) int64_t _expirationLengthMs;

  /// @brief Field _expirationQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__expirationQueue,
                      put = __cordl_internal_set__expirationQueue)) ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* _expirationQueue;

  /// @brief Field _reusableEntries, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableEntries,
                      put = __cordl_internal_set__reusableEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* _reusableEntries;

  /// @brief Field _timeProvider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__timeProvider, put = __cordl_internal_set__timeProvider)) ::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Add(TKey key, TValue value);

  /// @brief Method CompareEntries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t CompareEntries(::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* a, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* b);

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsKey(TKey key);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enumerate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* Enumerate();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue Get(TKey key);

  /// @brief Method GetEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* GetEntry(TKey key, TValue value);

  static inline ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, int64_t expirationLengthMs);

  /// @brief Method PollUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PollUpdate();

  /// @brief Method ReleaseEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReleaseEntry(::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* entry);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(TKey key);

  /// @brief Method RemoveExpiredEntries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveExpiredEntries();

  /// @brief Method ResetExpiration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetExpiration(TKey key);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(TKey key, TValue value);

  /// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(TKey key, ::ByRef<TValue> value);

  /// @brief Method TryGetValueAndResetExpiration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValueAndResetExpiration(TKey key, ::ByRef<TValue> value);

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* const& __cordl_internal_get__entryLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>*& __cordl_internal_get__entryLookup();

  constexpr int64_t const& __cordl_internal_get__expirationLengthMs() const;

  constexpr int64_t& __cordl_internal_get__expirationLengthMs();

  constexpr ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* const& __cordl_internal_get__expirationQueue() const;

  constexpr ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>*& __cordl_internal_get__expirationQueue();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* const& __cordl_internal_get__reusableEntries() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>*& __cordl_internal_get__reusableEntries();

  constexpr ::BGNet::Core::ITimeProvider* const& __cordl_internal_get__timeProvider() const;

  constexpr ::BGNet::Core::ITimeProvider*& __cordl_internal_get__timeProvider();

  constexpr void __cordl_internal_set__entryLookup(::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* value);

  constexpr void __cordl_internal_set__expirationLengthMs(int64_t value);

  constexpr void __cordl_internal_set__expirationQueue(::GlobalNamespace::OrderedSet_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* value);

  constexpr void __cordl_internal_set__reusableEntries(::System::Collections::Generic::List_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* value);

  constexpr void __cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, int64_t expirationLengthMs);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Item(TKey key);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(TKey key, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpiringDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpiringDictionary_2(ExpiringDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpiringDictionary_2(ExpiringDictionary_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18124 };

  /// @brief Field kMaxReusableEntries offset 0xffffffff size 0x4
  static constexpr int32_t kMaxReusableEntries{ static_cast<int32_t>(0x400) };

  /// @brief Field _timeProvider, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _expirationLengthMs, offset: 0x18, size: 0x8, def value: None
  int64_t ____expirationLengthMs;

  /// @brief Field _expirationQueue, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* ____expirationQueue;

  /// @brief Field _entryLookup, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* ____entryLookup;

  /// @brief Field _reusableEntries, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* ____reusableEntries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ExpiringDictionary_2, "", "ExpiringDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ExpiringDictionary_2_Entry, "", "ExpiringDictionary`2/Entry");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14, "", "ExpiringDictionary`2/<Enumerate>d__14");
