#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConditionalWeakTable_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConditionalWeakTable_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class __ConditionalWeakTable_2__CreateValueCallback;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class __ConditionalWeakTable_2__Enumerator;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class __ConditionalWeakTable_2__CreateValueCallback;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class __ConditionalWeakTable_2__Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::ConditionalWeakTable_2);
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback);
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator);
// Type: ::CreateValueCallback
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::ConditionalWeakTable`2::CreateValueCallback<TKey,TValue>*
class CORDL_TYPE __ConditionalWeakTable_2__CreateValueCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Invoke(TKey key);

  static inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConditionalWeakTable_2__CreateValueCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConditionalWeakTable_2__CreateValueCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConditionalWeakTable_2__CreateValueCallback(__ConditionalWeakTable_2__CreateValueCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConditionalWeakTable_2__CreateValueCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConditionalWeakTable_2__CreateValueCallback(__ConditionalWeakTable_2__CreateValueCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
// Type: ::Enumerator
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::ConditionalWeakTable`2::Enumerator<TKey,TValue>*
class CORDL_TYPE __ConditionalWeakTable_2__Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Collections::Generic::KeyValuePair_2<TKey, TValue> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _current, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current))::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _current;

  /// @brief Field _currentIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__currentIndex, put = __cordl_internal_set__currentIndex)) int32_t _currentIndex;

  /// @brief Field _table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* _table;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>* New_ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* table);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> const& __cordl_internal_get__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>& __cordl_internal_get__current();

  constexpr int32_t const& __cordl_internal_get__currentIndex() const;

  constexpr int32_t& __cordl_internal_get__currentIndex();

  constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__current(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value);

  constexpr void __cordl_internal_set__currentIndex(int32_t value);

  constexpr void __cordl_internal_set__table(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* table);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConditionalWeakTable_2__Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConditionalWeakTable_2__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConditionalWeakTable_2__Enumerator(__ConditionalWeakTable_2__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConditionalWeakTable_2__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConditionalWeakTable_2__Enumerator(__ConditionalWeakTable_2__Enumerator const&) = delete;

  /// @brief Field _table, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* ____table;

  /// @brief Field _currentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____currentIndex;

  /// @brief Field _current, offset: 0x20, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConditionalWeakTable`2
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::ConditionalWeakTable`2<TKey,TValue>*
class CORDL_TYPE ConditionalWeakTable_2 : public ::System::Object {
public:
  // Declarations
  using CreateValueCallback = ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>;

  using Enumerator = ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>;

  /// @brief Field _lock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock))::System::Object* _lock;

  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data,
                      put = __cordl_internal_set_data))::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*> data;

  /// @brief Field size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(TKey key, TValue value);

  /// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetValue(TKey key, ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>* createValueCallback);

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* New_ctor();

  /// @brief Method RecomputeSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RecomputeSize();

  /// @brief Method Rehash, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Rehash();

  /// @brief Method RehashWithoutResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RehashWithoutResize();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(TKey key);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  constexpr ::System::Object*& __cordl_internal_get__lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__lock() const;

  constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*>& __cordl_internal_get_data();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set__lock(::System::Object* value);

  constexpr void __cordl_internal_set_data(::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*> value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalWeakTable_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalWeakTable_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalWeakTable_2(ConditionalWeakTable_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalWeakTable_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalWeakTable_2(ConditionalWeakTable_2 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*> ___data;

  /// @brief Field _lock, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____lock;

  /// @brief Field size, offset: 0x20, size: 0x4, def value: None
  int32_t ___size;

  /// @brief Field COMPACT_FACTOR offset 0xffffffff size 0x4
  static constexpr float_t COMPACT_FACTOR{ 0.5 };

  /// @brief Field EXPAND_FACTOR offset 0xffffffff size 0x4
  static constexpr float_t EXPAND_FACTOR{ 1.1 };

  /// @brief Field INITIAL_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t INITIAL_SIZE{ static_cast<int32_t>(0xd) };

  /// @brief Field LOAD_FACTOR offset 0xffffffff size 0x4
  static constexpr float_t LOAD_FACTOR{ 0.7 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::ConditionalWeakTable_2, "System.Runtime.CompilerServices", "ConditionalWeakTable`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback, "System.Runtime.CompilerServices",
                                     "ConditionalWeakTable`2/CreateValueCallback");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator, "System.Runtime.CompilerServices", "ConditionalWeakTable`2/Enumerator");
