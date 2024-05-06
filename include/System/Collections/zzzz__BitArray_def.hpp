#pragma once
// IWYU pragma private; include "System/Collections/BitArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitArray)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class __BitArray__BitArrayEnumeratorSimple;
}
namespace System {
class Array;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class BitArray;
}
namespace System::Collections {
class __BitArray__BitArrayEnumeratorSimple;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::BitArray);
MARK_REF_PTR_T(::System::Collections::__BitArray__BitArrayEnumeratorSimple);
// Type: ::BitArrayEnumeratorSimple
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::BitArray::BitArrayEnumeratorSimple*
class CORDL_TYPE __BitArray__BitArrayEnumeratorSimple : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Field bitarray, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bitarray, put = __cordl_internal_set_bitarray))::System::Collections::BitArray* bitarray;

  /// @brief Field currentElement, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_currentElement, put = __cordl_internal_set_currentElement)) bool currentElement;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x2908bb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x2908bb8, size 0x1ac, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Collections::__BitArray__BitArrayEnumeratorSimple* New_ctor(::System::Collections::BitArray* bitarray);

  /// @brief Method Reset, addr 0x2908ec0, size 0x7c, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::BitArray*& __cordl_internal_get_bitarray();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::BitArray*> const& __cordl_internal_get_bitarray() const;

  constexpr bool const& __cordl_internal_get_currentElement() const;

  constexpr bool& __cordl_internal_get_currentElement();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_bitarray(::System::Collections::BitArray* value);

  constexpr void __cordl_internal_set_currentElement(bool value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x2908b70, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::BitArray* bitarray);

  /// @brief Method get_Current, addr 0x2908d64, size 0x15c, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BitArray__BitArrayEnumeratorSimple();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BitArray__BitArrayEnumeratorSimple", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BitArray__BitArrayEnumeratorSimple(__BitArray__BitArrayEnumeratorSimple&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BitArray__BitArrayEnumeratorSimple", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BitArray__BitArrayEnumeratorSimple(__BitArray__BitArrayEnumeratorSimple const&) = delete;

  /// @brief Field bitarray, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::BitArray* ___bitarray;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field version, offset: 0x1c, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field currentElement, offset: 0x20, size: 0x1, def value: None
  bool ___currentElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__BitArray__BitArrayEnumeratorSimple, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__BitArray__BitArrayEnumeratorSimple, ___bitarray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__BitArray__BitArrayEnumeratorSimple, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__BitArray__BitArrayEnumeratorSimple, ___version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__BitArray__BitArrayEnumeratorSimple, ___currentElement) == 0x20, "Offset mismatch!");

} // namespace System::Collections
// Type: System.Collections::BitArray
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::BitArray*
class CORDL_TYPE BitArray : public ::System::Object {
public:
  // Declarations
  using BitArrayEnumeratorSimple = ::System::Collections::__BitArray__BitArrayEnumeratorSimple;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field m_array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_array, put = __cordl_internal_set_m_array))::ArrayW<int32_t, ::Array<int32_t>*> m_array;

  /// @brief Field m_length, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_length, put = __cordl_internal_set_m_length)) int32_t m_length;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x2908ab0, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method CopyTo, addr 0x2908504, size 0x524, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method Get, addr 0x2908144, size 0xe4, virtual false, abstract: false, final false
  inline bool Get(int32_t index);

  /// @brief Method GetArrayLength, addr 0x2908028, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t GetArrayLength(int32_t n, int32_t div);

  /// @brief Method GetEnumerator, addr 0x2908b10, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::BitArray* New_ctor(::System::Collections::BitArray* bits);

  static inline ::System::Collections::BitArray* New_ctor(int32_t length);

  static inline ::System::Collections::BitArray* New_ctor(int32_t length, bool defaultValue);

  /// @brief Method Set, addr 0x2908230, size 0xfc, virtual false, abstract: false, final false
  inline void Set(int32_t index, bool value);

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_array() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_array();

  constexpr int32_t const& __cordl_internal_get_m_length() const;

  constexpr int32_t& __cordl_internal_get_m_length();

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  constexpr void __cordl_internal_set_m_array(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_length(int32_t value);

  /// @brief Method .ctor, addr 0x2908044, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::BitArray* bits);

  /// @brief Method .ctor, addr 0x2907ec4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t length);

  /// @brief Method .ctor, addr 0x2907ecc, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(int32_t length, bool defaultValue);

  /// @brief Method get_Count, addr 0x2908a28, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x2908aa8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x2908140, size 0x4, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x290832c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_SyncRoot, addr 0x2908a30, size 0x78, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Item, addr 0x2908228, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  /// @brief Method set_Length, addr 0x2908334, size 0x1d0, virtual false, abstract: false, final false
  inline void set_Length(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitArray(BitArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitArray(BitArray const&) = delete;

  /// @brief Field m_array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_array;

  /// @brief Field m_length, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_length;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::BitArray, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::BitArray, ___m_array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray, ___m_length) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray, ____syncRoot) == 0x20, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::BitArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::BitArray*, "System.Collections", "BitArray");
NEED_NO_BOX(::System::Collections::__BitArray__BitArrayEnumeratorSimple);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__BitArray__BitArrayEnumeratorSimple*, "System.Collections", "BitArray/BitArrayEnumeratorSimple");
