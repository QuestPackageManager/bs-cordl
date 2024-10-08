#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObjectTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaObjectTable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
struct __XmlSchemaObjectTable__EnumeratorType;
}
namespace System::Xml::Schema {
class __XmlSchemaObjectTable__ValuesCollection;
}
namespace System::Xml::Schema {
class __XmlSchemaObjectTable__XSODictionaryEnumerator;
}
namespace System::Xml::Schema {
class __XmlSchemaObjectTable__XSOEnumerator;
}
namespace System::Xml::Schema {
struct __XmlSchemaObjectTable__XmlSchemaObjectEntry;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __XmlSchemaObjectTable__EnumeratorType;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class __XmlSchemaObjectTable__ValuesCollection;
}
namespace System::Xml::Schema {
class __XmlSchemaObjectTable__XSODictionaryEnumerator;
}
namespace System::Xml::Schema {
class __XmlSchemaObjectTable__XSOEnumerator;
}
namespace System::Xml::Schema {
struct __XmlSchemaObjectTable__XmlSchemaObjectEntry;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType);
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObjectTable);
MARK_REF_PTR_T(::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection);
MARK_REF_PTR_T(::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator);
MARK_REF_PTR_T(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator);
MARK_VAL_T(::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry);
// Type: ::EnumeratorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::XmlSchemaObjectTable::EnumeratorType
struct CORDL_TYPE __XmlSchemaObjectTable__EnumeratorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlSchemaObjectTable__EnumeratorType_Unwrapped
  enum struct ____XmlSchemaObjectTable__EnumeratorType_Unwrapped : int32_t {
    __E_Keys = static_cast<int32_t>(0x0),
    __E_Values = static_cast<int32_t>(0x1),
    __E_DictionaryEntry = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlSchemaObjectTable__EnumeratorType_Unwrapped() const noexcept {
    return static_cast<____XmlSchemaObjectTable__EnumeratorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSchemaObjectTable__EnumeratorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlSchemaObjectTable__EnumeratorType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DictionaryEntry value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType const DictionaryEntry;

  /// @brief Field Keys value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType const Keys;

  /// @brief Field Values value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType const Values;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7674 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::XmlSchemaObjectEntry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::XmlSchemaObjectTable::XmlSchemaObjectEntry
struct CORDL_TYPE __XmlSchemaObjectTable__XmlSchemaObjectEntry {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4248db0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSchemaObjectTable__XmlSchemaObjectEntry();

  // Ctor Parameters [CppParam { name: "qname", ty: "::System::Xml::XmlQualifiedName*", modifiers: "", def_value: None }, CppParam { name: "xso", ty: "::System::Xml::Schema::XmlSchemaObject*",
  // modifiers: "", def_value: None }]
  constexpr __XmlSchemaObjectTable__XmlSchemaObjectEntry(::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* xso) noexcept;

  /// @brief Field qname, offset: 0x0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* qname;

  /// @brief Field xso, offset: 0x8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* xso;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7675 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry, qname) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry, xso) == 0x8, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::ValuesCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XmlSchemaObjectTable::ValuesCollection*
class CORDL_TYPE __XmlSchemaObjectTable__ValuesCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_entries,
                      put = __cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries;

  /// @brief Field size, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x42495a4, size 0x128, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x42496cc, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*
  New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries, int32_t size);

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*& __cordl_internal_get_entries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*> const&
  __cordl_internal_get_entries() const;

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x4249340, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries, int32_t size);

  /// @brief Method get_Count, addr 0x4249454, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x4249500, size 0xa4, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x424945c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSchemaObjectTable__ValuesCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSchemaObjectTable__ValuesCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSchemaObjectTable__ValuesCollection(__XmlSchemaObjectTable__ValuesCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSchemaObjectTable__ValuesCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSchemaObjectTable__ValuesCollection(__XmlSchemaObjectTable__ValuesCollection const&) = delete;

  /// @brief Field entries, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* ___entries;

  /// @brief Field size, offset: 0x18, size: 0x4, def value: None
  int32_t ___size;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection, ___size) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::XSOEnumerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XmlSchemaObjectTable::XSOEnumerator*
class CORDL_TYPE __XmlSchemaObjectTable__XSOEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field currentIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_currentIndex, put = __cordl_internal_set_currentIndex)) int32_t currentIndex;

  /// @brief Field currentKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_currentKey, put = __cordl_internal_set_currentKey)) ::System::Xml::XmlQualifiedName* currentKey;

  /// @brief Field currentValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_currentValue, put = __cordl_internal_set_currentValue)) ::System::Xml::Schema::XmlSchemaObject* currentValue;

  /// @brief Field entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_entries,
                      put = __cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries;

  /// @brief Field enumType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_enumType, put = __cordl_internal_set_enumType)) ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType;

  /// @brief Field size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x4249944, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*
  New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries, int32_t size,
           ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType);

  /// @brief Method Reset, addr 0x42499e4, size 0x10, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_currentKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_currentKey() const;

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_currentValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObject*> const& __cordl_internal_get_currentValue() const;

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*& __cordl_internal_get_entries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*> const&
  __cordl_internal_get_entries() const;

  constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType const& __cordl_internal_get_enumType() const;

  constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType& __cordl_internal_get_enumType();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr void __cordl_internal_set_currentKey(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_currentValue(::System::Xml::Schema::XmlSchemaObject* value);

  constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* value);

  constexpr void __cordl_internal_set_enumType(::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x4249748, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries, int32_t size,
                    ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType);

  /// @brief Method get_Current, addr 0x424978c, size 0x1b8, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSchemaObjectTable__XSOEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSchemaObjectTable__XSOEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSchemaObjectTable__XSOEnumerator(__XmlSchemaObjectTable__XSOEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSchemaObjectTable__XSOEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSchemaObjectTable__XSOEnumerator(__XmlSchemaObjectTable__XSOEnumerator const&) = delete;

  /// @brief Field entries, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* ___entries;

  /// @brief Field enumType, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType ___enumType;

  /// @brief Field currentIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___currentIndex;

  /// @brief Field size, offset: 0x20, size: 0x4, def value: None
  int32_t ___size;

  /// @brief Field currentKey, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___currentKey;

  /// @brief Field currentValue, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___currentValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator, ___enumType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator, ___currentIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator, ___size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator, ___currentKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator, ___currentValue) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::XSODictionaryEnumerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XmlSchemaObjectTable::XSODictionaryEnumerator*
class CORDL_TYPE __XmlSchemaObjectTable__XSODictionaryEnumerator : public ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  static inline ::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*
  New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries, int32_t size,
           ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType);

  /// @brief Method .ctor, addr 0x4249410, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries, int32_t size,
                    ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType);

  /// @brief Method get_Entry, addr 0x42499f4, size 0x14c, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x4249b40, size 0x130, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x4249c70, size 0x130, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSchemaObjectTable__XSODictionaryEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSchemaObjectTable__XSODictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSchemaObjectTable__XSODictionaryEnumerator(__XmlSchemaObjectTable__XSODictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSchemaObjectTable__XSODictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSchemaObjectTable__XSODictionaryEnumerator(__XmlSchemaObjectTable__XSODictionaryEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::XmlSchemaObjectTable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaObjectTable*
class CORDL_TYPE XmlSchemaObjectTable : public ::System::Object {
public:
  // Declarations
  using EnumeratorType = ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType;

  using ValuesCollection = ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection;

  using XSODictionaryEnumerator = ::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator;

  using XSOEnumerator = ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator;

  using XmlSchemaObjectEntry = ::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::System::Xml::Schema::XmlSchemaObject* Item[];

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field entries, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_entries,
                      put = __cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries;

  /// @brief Field table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_table,
                      put = __cordl_internal_set_table)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* table;

  /// @brief Method Add, addr 0x4248ccc, size 0xe4, virtual false, abstract: false, final false
  inline void Add(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);

  /// @brief Method Clear, addr 0x4249028, size 0x94, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x42491dc, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::System::Xml::XmlQualifiedName* name);

  /// @brief Method FindIndexByValue, addr 0x4248eac, size 0x9c, virtual false, abstract: false, final false
  inline int32_t FindIndexByValue(::System::Xml::Schema::XmlSchemaObject* xso);

  /// @brief Method GetEnumerator, addr 0x4249370, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method Insert, addr 0x4248db8, size 0xf4, virtual false, abstract: false, final false
  inline void Insert(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);

  static inline ::System::Xml::Schema::XmlSchemaObjectTable* New_ctor();

  /// @brief Method Remove, addr 0x42490bc, size 0xd0, virtual false, abstract: false, final false
  inline void Remove(::System::Xml::XmlQualifiedName* name);

  /// @brief Method Replace, addr 0x4248f48, size 0xe0, virtual false, abstract: false, final false
  inline void Replace(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*& __cordl_internal_get_entries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*> const&
  __cordl_internal_get_entries() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>*& __cordl_internal_get_table();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>*> const&
  __cordl_internal_get_table() const;

  constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* value);

  constexpr void __cordl_internal_set_table(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* value);

  /// @brief Method .ctor, addr 0x4248c08, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x424918c, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x4249234, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Xml::XmlQualifiedName* name);

  /// @brief Method get_Values, addr 0x42492ac, size 0x94, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObjectTable(XmlSchemaObjectTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObjectTable(XmlSchemaObjectTable const&) = delete;

  /// @brief Field table, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* ___table;

  /// @brief Field entries, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* ___entries;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectTable, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable, ___table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable, ___entries) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType, "System.Xml.Schema", "XmlSchemaObjectTable/EnumeratorType");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable*, "System.Xml.Schema", "XmlSchemaObjectTable");
NEED_NO_BOX(::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*, "System.Xml.Schema", "XmlSchemaObjectTable/ValuesCollection");
NEED_NO_BOX(::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*, "System.Xml.Schema", "XmlSchemaObjectTable/XSODictionaryEnumerator");
NEED_NO_BOX(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*, "System.Xml.Schema", "XmlSchemaObjectTable/XSOEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry, "System.Xml.Schema", "XmlSchemaObjectTable/XmlSchemaObjectEntry");
