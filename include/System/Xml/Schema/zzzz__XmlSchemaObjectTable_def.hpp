#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObjectTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
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
class IEnumerator;
}
namespace System::Xml::Schema {
struct XmlSchemaObjectTable_EnumeratorType;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_ValuesCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_XSODictionaryEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_XSOEnumerator;
}
namespace System::Xml::Schema {
struct XmlSchemaObjectTable_XmlSchemaObjectEntry;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
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
struct XmlSchemaObjectTable_EnumeratorType;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_ValuesCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_XSODictionaryEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_XSOEnumerator;
}
namespace System::Xml::Schema {
struct XmlSchemaObjectTable_XmlSchemaObjectEntry;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType);
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObjectTable);
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection);
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator);
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator);
MARK_VAL_T(::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/EnumeratorType
struct CORDL_TYPE XmlSchemaObjectTable_EnumeratorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaObjectTable_EnumeratorType_Unwrapped
  enum struct __XmlSchemaObjectTable_EnumeratorType_Unwrapped : int32_t {
    __E_Keys = static_cast<int32_t>(0x0),
    __E_Values = static_cast<int32_t>(0x1),
    __E_DictionaryEntry = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaObjectTable_EnumeratorType_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaObjectTable_EnumeratorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectTable_EnumeratorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaObjectTable_EnumeratorType(int32_t value__) noexcept;

  /// @brief Field DictionaryEntry value: I32(2)
  static ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType const DictionaryEntry;

  /// @brief Field Keys value: I32(0)
  static ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType const Keys;

  /// @brief Field Values value: I32(1)
  static ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType const Values;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7709 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct CORDL_TYPE XmlSchemaObjectTable_XmlSchemaObjectEntry {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x42bb288, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectTable_XmlSchemaObjectEntry();

  // Ctor Parameters [CppParam { name: "qname", ty: "::System::Xml::XmlQualifiedName*", modifiers: "", def_value: None }, CppParam { name: "xso", ty: "::System::Xml::Schema::XmlSchemaObject*",
  // modifiers: "", def_value: None }]
  constexpr XmlSchemaObjectTable_XmlSchemaObjectEntry(::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* xso) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7710 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field qname, offset: 0x0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* qname;

  /// @brief Field xso, offset: 0x8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* xso;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry, qname) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry, xso) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/ValuesCollection
class CORDL_TYPE XmlSchemaObjectTable_ValuesCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_entries,
                      put = __cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries;

  /// @brief Field size, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x42bba7c, size 0x128, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x42bbba4, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*
  New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size);

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const& __cordl_internal_get_entries() const;

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*& __cordl_internal_get_entries();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x42bb818, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size);

  /// @brief Method get_Count, addr 0x42bb92c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x42bb9d8, size 0xa4, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x42bb934, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectTable_ValuesCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_ValuesCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObjectTable_ValuesCollection(XmlSchemaObjectTable_ValuesCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_ValuesCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObjectTable_ValuesCollection(XmlSchemaObjectTable_ValuesCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7711 };

  /// @brief Field entries, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* ___entries;

  /// @brief Field size, offset: 0x18, size: 0x4, def value: None
  int32_t ___size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection, ___size) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Collections.IEnumerator, System.Object, System.Xml.Schema.XmlSchemaObjectTable::EnumeratorType
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/XSOEnumerator
class CORDL_TYPE XmlSchemaObjectTable_XSOEnumerator : public ::System::Object {
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
                      put = __cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries;

  /// @brief Field enumType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_enumType, put = __cordl_internal_set_enumType)) ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType;

  /// @brief Field size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x42bbe1c, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator* New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries,
                                                                                    int32_t size, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType);

  /// @brief Method Reset, addr 0x42bbebc, size 0x10, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_currentKey() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_currentKey();

  constexpr ::System::Xml::Schema::XmlSchemaObject* const& __cordl_internal_get_currentValue() const;

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_currentValue();

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const& __cordl_internal_get_entries() const;

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*& __cordl_internal_get_entries();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType const& __cordl_internal_get_enumType() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType& __cordl_internal_get_enumType();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr void __cordl_internal_set_currentKey(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_currentValue(::System::Xml::Schema::XmlSchemaObject* value);

  constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* value);

  constexpr void __cordl_internal_set_enumType(::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x42bbc20, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size,
                    ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType);

  /// @brief Method get_Current, addr 0x42bbc64, size 0x1b8, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectTable_XSOEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_XSOEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObjectTable_XSOEnumerator(XmlSchemaObjectTable_XSOEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_XSOEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObjectTable_XSOEnumerator(XmlSchemaObjectTable_XSOEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7712 };

  /// @brief Field entries, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* ___entries;

  /// @brief Field enumType, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType ___enumType;

  /// @brief Field currentIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___currentIndex;

  /// @brief Field size, offset: 0x20, size: 0x4, def value: None
  int32_t ___size;

  /// @brief Field currentKey, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___currentKey;

  /// @brief Field currentValue, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___currentValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___enumType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___currentIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___currentKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___currentValue) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Collections.IDictionaryEnumerator, System.Collections.IEnumerator, System.Xml.Schema.XmlSchemaObjectTable::XSOEnumerator
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/XSODictionaryEnumerator
class CORDL_TYPE XmlSchemaObjectTable_XSODictionaryEnumerator : public ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  static inline ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*
  New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size,
           ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType);

  /// @brief Method .ctor, addr 0x42bb8e8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size,
                    ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType);

  /// @brief Method get_Entry, addr 0x42bbecc, size 0x14c, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x42bc018, size 0x130, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x42bc148, size 0x130, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectTable_XSODictionaryEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_XSODictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObjectTable_XSODictionaryEnumerator(XmlSchemaObjectTable_XSODictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_XSODictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObjectTable_XSODictionaryEnumerator(XmlSchemaObjectTable_XSODictionaryEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectTable
class CORDL_TYPE XmlSchemaObjectTable : public ::System::Object {
public:
  // Declarations
  using EnumeratorType = ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType;

  using ValuesCollection = ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection;

  using XSODictionaryEnumerator = ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator;

  using XSOEnumerator = ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator;

  using XmlSchemaObjectEntry = ::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::System::Xml::Schema::XmlSchemaObject* Item[];

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field entries, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_entries,
                      put = __cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries;

  /// @brief Field table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_table,
                      put = __cordl_internal_set_table)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* table;

  /// @brief Method Add, addr 0x42bb1a4, size 0xe4, virtual false, abstract: false, final false
  inline void Add(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);

  /// @brief Method Clear, addr 0x42bb500, size 0x94, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x42bb6b4, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::System::Xml::XmlQualifiedName* name);

  /// @brief Method FindIndexByValue, addr 0x42bb384, size 0x9c, virtual false, abstract: false, final false
  inline int32_t FindIndexByValue(::System::Xml::Schema::XmlSchemaObject* xso);

  /// @brief Method GetEnumerator, addr 0x42bb848, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method Insert, addr 0x42bb290, size 0xf4, virtual false, abstract: false, final false
  inline void Insert(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);

  static inline ::System::Xml::Schema::XmlSchemaObjectTable* New_ctor();

  /// @brief Method Remove, addr 0x42bb594, size 0xd0, virtual false, abstract: false, final false
  inline void Remove(::System::Xml::XmlQualifiedName* name);

  /// @brief Method Replace, addr 0x42bb420, size 0xe0, virtual false, abstract: false, final false
  inline void Replace(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const& __cordl_internal_get_entries() const;

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*& __cordl_internal_get_entries();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* const& __cordl_internal_get_table() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>*& __cordl_internal_get_table();

  constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* value);

  constexpr void __cordl_internal_set_table(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* value);

  /// @brief Method .ctor, addr 0x42bb0e0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x42bb664, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x42bb70c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Xml::XmlQualifiedName* name);

  /// @brief Method get_Values, addr 0x42bb784, size 0x94, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7714 };

  /// @brief Field table, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* ___table;

  /// @brief Field entries, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* ___entries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable, ___table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable, ___entries) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectTable, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType, "System.Xml.Schema", "XmlSchemaObjectTable/EnumeratorType");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable*, "System.Xml.Schema", "XmlSchemaObjectTable");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*, "System.Xml.Schema", "XmlSchemaObjectTable/ValuesCollection");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*, "System.Xml.Schema", "XmlSchemaObjectTable/XSODictionaryEnumerator");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*, "System.Xml.Schema", "XmlSchemaObjectTable/XSOEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry, "System.Xml.Schema", "XmlSchemaObjectTable/XmlSchemaObjectEntry");
