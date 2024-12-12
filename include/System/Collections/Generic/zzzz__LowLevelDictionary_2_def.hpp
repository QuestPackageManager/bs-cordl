#pragma once
// IWYU pragma private; include "System/Collections/Generic/LowLevelDictionary_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LowLevelDictionary_2)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue, typename T> class LowLevelDictionary_2_DefaultComparer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class LowLevelDictionary_2_Entry;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class LowLevelDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue, typename T> class LowLevelDictionary_2_DefaultComparer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class LowLevelDictionary_2_Entry;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LowLevelDictionary_2);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LowLevelDictionary_2_Entry);
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Generic.LowLevelDictionary`2/Entry<TKey,TValue>
class CORDL_TYPE LowLevelDictionary_2_Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) TKey _key;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next)) ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* _next;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) TValue _value;

  static inline ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* New_ctor();

  constexpr TKey const& __cordl_internal_get__key() const;

  constexpr TKey& __cordl_internal_get__key();

  constexpr ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* const& __cordl_internal_get__next() const;

  constexpr ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*& __cordl_internal_get__next();

  constexpr TValue const& __cordl_internal_get__value() const;

  constexpr TValue& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__key(TKey value);

  constexpr void __cordl_internal_set__next(::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* value);

  constexpr void __cordl_internal_set__value(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LowLevelDictionary_2_Entry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2_Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LowLevelDictionary_2_Entry(LowLevelDictionary_2_Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2_Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LowLevelDictionary_2_Entry(LowLevelDictionary_2_Entry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3862 };

  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  TKey ____key;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  TValue ____value;

  /// @brief Field _next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* ____next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Collections.Generic.IEqualityComparer`1<T>, System.Object
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue, typename T>
// Is value type: false
// CS Name: System.Collections.Generic.LowLevelDictionary`2/DefaultComparer`1<TKey,TValue,T>
class CORDL_TYPE LowLevelDictionary_2_DefaultComparer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<T>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<T>*() noexcept;

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(T x, T y);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t GetHashCode(T obj);

  static inline ::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<T>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* i___System__Collections__Generic__IEqualityComparer_1_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LowLevelDictionary_2_DefaultComparer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2_DefaultComparer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LowLevelDictionary_2_DefaultComparer_1(LowLevelDictionary_2_DefaultComparer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2_DefaultComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LowLevelDictionary_2_DefaultComparer_1(LowLevelDictionary_2_DefaultComparer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Generic.LowLevelDictionary`2<TKey,TValue>
class CORDL_TYPE LowLevelDictionary_2 : public ::System::Object {
public:
  // Declarations
  template <typename T> using DefaultComparer_1 = ::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>;

  using Entry = ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>;

  __declspec(property(put = set_Item)) TKey Item;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets, put = __cordl_internal_set__buckets)) ::ArrayW<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*,
                                                                                                          ::Array<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>*>
      _buckets;

  /// @brief Field _comparer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer;

  /// @brief Field _numEntries, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__numEntries, put = __cordl_internal_set__numEntries)) int32_t _numEntries;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear(int32_t capacity);

  /// @brief Method ExpandBuckets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ExpandBuckets();

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* Find(TKey key);

  /// @brief Method GetBucket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetBucket(TKey key, int32_t numBuckets);

  static inline ::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>* New_ctor();

  static inline ::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>* New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(TKey key);

  /// @brief Method UncheckedAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* UncheckedAdd(TKey key, TValue value);

  constexpr ::ArrayW<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>*> const&
  __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>*>&
  __cordl_internal_get__buckets();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get__comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get__comparer();

  constexpr int32_t const& __cordl_internal_get__numEntries() const;

  constexpr int32_t& __cordl_internal_get__numEntries();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__buckets(
      ::ArrayW<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>*> value);

  constexpr void __cordl_internal_set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  constexpr void __cordl_internal_set__numEntries(int32_t value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(TKey key, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LowLevelDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LowLevelDictionary_2(LowLevelDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LowLevelDictionary_2(LowLevelDictionary_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3864 };

  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>*> ____buckets;

  /// @brief Field _numEntries, offset: 0x18, size: 0x4, def value: None
  int32_t ____numEntries;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _comparer, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TKey>* ____comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LowLevelDictionary_2, "System.Collections.Generic", "LowLevelDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1, "System.Collections.Generic", "LowLevelDictionary`2/DefaultComparer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LowLevelDictionary_2_Entry, "System.Collections.Generic", "LowLevelDictionary`2/Entry");
