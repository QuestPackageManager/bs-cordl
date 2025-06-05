#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaCollection)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class ReaderWriterLock;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class SchemaNames;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaCollectionEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaCollectionNode;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlResolver;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaCollection);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaCollection
class CORDL_TYPE XmlSchemaCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_EventHandler, put = set_EventHandler)) ::System::Xml::Schema::ValidationEventHandler* EventHandler;

  __declspec(property(get = get_Item)) ::System::Xml::Schema::XmlSchema* Item[];

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(put = set_XmlResolver)) ::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_collection, put = __cordl_internal_set_collection)) ::System::Collections::Hashtable* collection;

  /// @brief Field isThreadSafe, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_isThreadSafe, put = __cordl_internal_set_isThreadSafe)) bool isThreadSafe;

  /// @brief Field nameTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field schemaNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaNames, put = __cordl_internal_set_schemaNames)) ::System::Xml::Schema::SchemaNames* schemaNames;

  /// @brief Field timeout, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_timeout, put = __cordl_internal_set_timeout)) int32_t timeout;

  /// @brief Field validationEventHandler, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_validationEventHandler, put = __cordl_internal_set_validationEventHandler)) ::System::Xml::Schema::ValidationEventHandler* validationEventHandler;

  /// @brief Field wLock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_wLock, put = __cordl_internal_set_wLock)) ::System::Threading::ReaderWriterLock* wLock;

  /// @brief Field xmlResolver, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver)) ::System::Xml::XmlResolver* xmlResolver;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x42b4968, size 0xc, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* Add(::StringW ns, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::System::Xml::Schema::XmlSchema* schema, bool compile);

  /// @brief Method Add, addr 0x42bb33c, size 0x148, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* Add(::StringW ns, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::System::Xml::Schema::XmlSchema* schema, bool compile,
                                               ::System::Xml::XmlResolver* resolver);

  /// @brief Method Add, addr 0x42bb48c, size 0x13c, virtual false, abstract: false, final false
  inline void Add(::StringW ns, ::System::Xml::Schema::XmlSchemaCollectionNode* node);

  /// @brief Method GetEnumerator, addr 0x42baf8c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaCollectionEnumerator* GetEnumerator();

  /// @brief Method GetSchemaInfo, addr 0x42b6240, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaInfo* GetSchemaInfo(::StringW ns);

  /// @brief Method GetSchemaNames, addr 0x42bb2a4, size 0x98, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaNames* GetSchemaNames(::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::Schema::XmlSchemaCollection* New_ctor(::System::Xml::XmlNameTable* nametable);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x42bafe8, size 0x114, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x42bb280, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x42bb274, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x42bb27c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x42baeec, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_collection() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_collection();

  constexpr bool const& __cordl_internal_get_isThreadSafe() const;

  constexpr bool& __cordl_internal_get_isThreadSafe();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::System::Xml::Schema::SchemaNames* const& __cordl_internal_get_schemaNames() const;

  constexpr ::System::Xml::Schema::SchemaNames*& __cordl_internal_get_schemaNames();

  constexpr int32_t const& __cordl_internal_get_timeout() const;

  constexpr int32_t& __cordl_internal_get_timeout();

  constexpr ::System::Xml::Schema::ValidationEventHandler* const& __cordl_internal_get_validationEventHandler() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_validationEventHandler();

  constexpr ::System::Threading::ReaderWriterLock* const& __cordl_internal_get_wLock() const;

  constexpr ::System::Threading::ReaderWriterLock*& __cordl_internal_get_wLock();

  constexpr ::System::Xml::XmlResolver* const& __cordl_internal_get_xmlResolver() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr void __cordl_internal_set_collection(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_isThreadSafe(bool value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value);

  constexpr void __cordl_internal_set_timeout(int32_t value);

  constexpr void __cordl_internal_set_validationEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_wLock(::System::Threading::ReaderWriterLock* value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method .ctor, addr 0x42bacfc, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nametable);

  /// @brief Method get_Count, addr 0x42bae14, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_EventHandler, addr 0x42bb5c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ValidationEventHandler* get_EventHandler();

  /// @brief Method get_Item, addr 0x42bae48, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* get_Item(::StringW ns);

  /// @brief Method get_NameTable, addr 0x42bae38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_EventHandler, addr 0x42bb5d0, size 0x8, virtual false, abstract: false, final false
  inline void set_EventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  /// @brief Method set_XmlResolver, addr 0x42bae40, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaCollection(XmlSchemaCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaCollection(XmlSchemaCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7660 };

  /// @brief Field collection, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___collection;

  /// @brief Field nameTable, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field schemaNames, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaNames* ___schemaNames;

  /// @brief Field wLock, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLock* ___wLock;

  /// @brief Field timeout, offset: 0x30, size: 0x4, def value: None
  int32_t ___timeout;

  /// @brief Field isThreadSafe, offset: 0x34, size: 0x1, def value: None
  bool ___isThreadSafe;

  /// @brief Field validationEventHandler, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___validationEventHandler;

  /// @brief Field xmlResolver, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollection, ___collection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollection, ___nameTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollection, ___schemaNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollection, ___wLock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollection, ___timeout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollection, ___isThreadSafe) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollection, ___validationEventHandler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollection, ___xmlResolver) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaCollection, 0x48>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaCollection*, "System.Xml.Schema", "XmlSchemaCollection");
