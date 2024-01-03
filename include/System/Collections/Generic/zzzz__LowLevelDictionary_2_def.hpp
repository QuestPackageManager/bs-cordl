#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LowLevelDictionary_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __LowLevelDictionary_2__Entry;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue, typename T> class __LowLevelDictionary_2__DefaultComparer_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class LowLevelDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue, typename T> class __LowLevelDictionary_2__DefaultComparer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __LowLevelDictionary_2__Entry;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LowLevelDictionary_2);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__LowLevelDictionary_2__Entry);
// Type: ::Entry
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3848))
// CS Name: ::LowLevelDictionary`2::Entry<TKey,TValue>*
class CORDL_TYPE __LowLevelDictionary_2__Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __get__key, put = __set__key)) TKey _key;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __get__value, put = __set__value)) TValue _value;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __get__next, put = __set__next))::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>* _next;

  constexpr TKey& __get__key();

  constexpr TKey const& __get__key() const;

  constexpr void __set__key(TKey value);

  constexpr TValue& __get__value();

  constexpr TValue const& __get__value() const;

  constexpr void __set__value(TValue value);

  constexpr ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*& __get__next();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*> const& __get__next() const;

  constexpr void __set__next(::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>* value);

  static inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LowLevelDictionary_2__Entry(__LowLevelDictionary_2__Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LowLevelDictionary_2__Entry(__LowLevelDictionary_2__Entry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LowLevelDictionary_2__Entry();

public:
  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  TKey ____key;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  TValue ____value;

  /// @brief Field _next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>* ____next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::DefaultComparer`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue, typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3849))
// CS Name: ::LowLevelDictionary`2::DefaultComparer`1<TKey,TValue,T>*
class CORDL_TYPE __LowLevelDictionary_2__DefaultComparer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<T>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<T>*() noexcept;

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(T x, T y);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t GetHashCode(T obj);

  static inline ::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey, TValue, T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__DefaultComparer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LowLevelDictionary_2__DefaultComparer_1(__LowLevelDictionary_2__DefaultComparer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__DefaultComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LowLevelDictionary_2__DefaultComparer_1(__LowLevelDictionary_2__DefaultComparer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LowLevelDictionary_2__DefaultComparer_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: System.Collections.Generic::LowLevelDictionary`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3850))
// CS Name: ::System.Collections.Generic::LowLevelDictionary`2<TKey,TValue>*
class CORDL_TYPE LowLevelDictionary_2 : public ::System::Object {
public:
  // Declarations
  template <typename T> using DefaultComparer_1 = ::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey, TValue, T>;

  using Entry = ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __get__buckets, put = __set__buckets))::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*,
                                                                           ::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*>*> _buckets;

  /// @brief Field _numEntries, offset 0x18, size 0x4
  __declspec(property(get = __get__numEntries, put = __set__numEntries)) int32_t _numEntries;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _comparer, offset 0x20, size 0x8
  __declspec(property(get = __get__comparer, put = __set__comparer))::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer;

  __declspec(property(put = set_Item)) TKey Item;

  constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*>*>&
  __get__buckets();

  constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*>*> const&
  __get__buckets() const;

  constexpr void
  __set__buckets(::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*>*> value);

  constexpr int32_t& __get__numEntries();

  constexpr int32_t const& __get__numEntries() const;

  constexpr void __set__numEntries(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& __get__comparer() const;

  constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  static inline ::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>* New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(TKey key, TValue value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param capacity: int32_t (default: static_cast<int32_t>(0x11))
  inline void Clear(int32_t capacity = static_cast<int32_t>(0x11));

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(TKey key);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>* Find(TKey key);

  /// @brief Method UncheckedAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>* UncheckedAdd(TKey key, TValue value);

  /// @brief Method ExpandBuckets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ExpandBuckets();

  /// @brief Method GetBucket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param numBuckets: int32_t (default: static_cast<int32_t>(0x0))
  inline int32_t GetBucket(TKey key, int32_t numBuckets = static_cast<int32_t>(0x0));

  // Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LowLevelDictionary_2(LowLevelDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LowLevelDictionary_2(LowLevelDictionary_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LowLevelDictionary_2();

public:
  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>*>*> ____buckets;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1, "System.Collections.Generic", "LowLevelDictionary`2/DefaultComparer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__LowLevelDictionary_2__Entry, "System.Collections.Generic", "LowLevelDictionary`2/Entry");
