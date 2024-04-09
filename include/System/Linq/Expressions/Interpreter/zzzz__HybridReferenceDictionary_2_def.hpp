#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HybridReferenceDictionary_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq::Expressions::Interpreter {
template <typename TKey, typename TValue> class __HybridReferenceDictionary_2___GetEnumeratorWorker_d__7;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
template <typename TKey, typename TValue> class HybridReferenceDictionary_2;
}
namespace System::Linq::Expressions::Interpreter {
template <typename TKey, typename TValue> class __HybridReferenceDictionary_2___GetEnumeratorWorker_d__7;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2);
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::Interpreter::__HybridReferenceDictionary_2___GetEnumeratorWorker_d__7);
// Type: ::<GetEnumeratorWorker>d__7
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::HybridReferenceDictionary`2::<GetEnumeratorWorker>d__7<TKey,TValue>*
class CORDL_TYPE __HybridReferenceDictionary_2___GetEnumeratorWorker_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current))::System::Collections::Generic::KeyValuePair_2<
      TKey, TValue> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Collections::Generic::KeyValuePair_2<TKey, TValue> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>* __4__this;

  /// @brief Field <i>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Expressions::Interpreter::__HybridReferenceDictionary_2___GetEnumeratorWorker_d__7<TKey, TValue>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>& __cordl_internal_get___2__current();

  constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value);

  constexpr void __cordl_internal_set___4__this(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

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
  constexpr __HybridReferenceDictionary_2___GetEnumeratorWorker_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HybridReferenceDictionary_2___GetEnumeratorWorker_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HybridReferenceDictionary_2___GetEnumeratorWorker_d__7(__HybridReferenceDictionary_2___GetEnumeratorWorker_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HybridReferenceDictionary_2___GetEnumeratorWorker_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HybridReferenceDictionary_2___GetEnumeratorWorker_d__7(__HybridReferenceDictionary_2___GetEnumeratorWorker_d__7 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>* _____4__this;

  /// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions::Interpreter
// Type: System.Linq.Expressions.Interpreter::HybridReferenceDictionary`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::HybridReferenceDictionary`2<TKey,TValue>*
class CORDL_TYPE HybridReferenceDictionary_2 : public ::System::Object {
public:
  // Declarations
  using _GetEnumeratorWorker_d__7 = ::System::Linq::Expressions::Interpreter::__HybridReferenceDictionary_2___GetEnumeratorWorker_d__7<TKey, TValue>;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  /// @brief Field _dict, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dict, put = __cordl_internal_set__dict))::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dict;

  /// @brief Field _keysAndValues, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__keysAndValues,
                      put = __cordl_internal_set__keysAndValues))::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>,
                                                                          ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> _keysAndValues;

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsKey(TKey key);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator();

  /// @brief Method GetEnumeratorWorker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumeratorWorker();

  static inline ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>* New_ctor();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(TKey key);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& __cordl_internal_get__dict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const& __cordl_internal_get__dict() const;

  constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> const&
  __cordl_internal_get__keysAndValues() const;

  constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>& __cordl_internal_get__keysAndValues();

  constexpr void __cordl_internal_set__dict(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value);

  constexpr void
  __cordl_internal_set__keysAndValues(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Item(TKey key);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(TKey key, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HybridReferenceDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HybridReferenceDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HybridReferenceDictionary_2(HybridReferenceDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HybridReferenceDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HybridReferenceDictionary_2(HybridReferenceDictionary_2 const&) = delete;

  /// @brief Field _keysAndValues, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> ____keysAndValues;

  /// @brief Field _dict, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* ____dict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions::Interpreter
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2, "System.Linq.Expressions.Interpreter", "HybridReferenceDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Interpreter::__HybridReferenceDictionary_2___GetEnumeratorWorker_d__7, "System.Linq.Expressions.Interpreter",
                                     "HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7");
