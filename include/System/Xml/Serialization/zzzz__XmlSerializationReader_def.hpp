#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlSerializationGeneratedCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializationReader)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml::Serialization {
class XmlSerializationCollectionFixupCallback;
}
namespace System::Xml::Serialization {
class XmlSerializationFixupCallback;
}
namespace System::Xml::Serialization {
class XmlSerializationReadCallback;
}
namespace System::Xml::Serialization {
class XmlSerializationReader_CollectionFixup;
}
namespace System::Xml::Serialization {
class XmlSerializationReader_CollectionItemFixup;
}
namespace System::Xml::Serialization {
class XmlSerializationReader_Fixup;
}
namespace System::Xml::Serialization {
class XmlSerializationReader_WriteCallbackInfo;
}
namespace System::Xml::Serialization {
class XmlSerializer;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System {
class Array;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializationReader;
}
namespace System::Xml::Serialization {
class XmlSerializationReader_CollectionFixup;
}
namespace System::Xml::Serialization {
class XmlSerializationReader_CollectionItemFixup;
}
namespace System::Xml::Serialization {
class XmlSerializationReader_Fixup;
}
namespace System::Xml::Serialization {
class XmlSerializationReader_WriteCallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationReader);
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup);
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup);
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationReader_Fixup);
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
class CORDL_TYPE XmlSerializationReader_WriteCallbackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Callback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Callback, put = __cordl_internal_set_Callback)) ::System::Xml::Serialization::XmlSerializationReadCallback* Callback;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::System::Type* Type;

  /// @brief Field TypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeName, put = __cordl_internal_set_TypeName)) ::StringW TypeName;

  /// @brief Field TypeNs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeNs, put = __cordl_internal_set_TypeNs)) ::StringW TypeNs;

  static inline ::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo* New_ctor();

  constexpr ::System::Xml::Serialization::XmlSerializationReadCallback* const& __cordl_internal_get_Callback() const;

  constexpr ::System::Xml::Serialization::XmlSerializationReadCallback*& __cordl_internal_get_Callback();

  constexpr ::System::Type* const& __cordl_internal_get_Type() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::StringW const& __cordl_internal_get_TypeName() const;

  constexpr ::StringW& __cordl_internal_get_TypeName();

  constexpr ::StringW const& __cordl_internal_get_TypeNs() const;

  constexpr ::StringW& __cordl_internal_get_TypeNs();

  constexpr void __cordl_internal_set_Callback(::System::Xml::Serialization::XmlSerializationReadCallback* value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  constexpr void __cordl_internal_set_TypeName(::StringW value);

  constexpr void __cordl_internal_set_TypeNs(::StringW value);

  /// @brief Method .ctor, addr 0x437a5bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationReader_WriteCallbackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader_WriteCallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationReader_WriteCallbackInfo(XmlSerializationReader_WriteCallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader_WriteCallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationReader_WriteCallbackInfo(XmlSerializationReader_WriteCallbackInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7437 };

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___Type;

  /// @brief Field TypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___TypeName;

  /// @brief Field TypeNs, offset: 0x20, size: 0x8, def value: None
  ::StringW ___TypeNs;

  /// @brief Field Callback, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializationReadCallback* ___Callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo, ___TypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo, ___TypeNs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo, ___Callback) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo, 0x30>, "Size mismatch!");

} // namespace System::Xml::Serialization
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationReader/CollectionFixup
class CORDL_TYPE XmlSerializationReader_CollectionFixup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Callback)) ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* Callback;

  __declspec(property(get = get_Collection)) ::System::Object* Collection;

  __declspec(property(get = get_CollectionItems, put = set_CollectionItems)) ::System::Object* CollectionItems;

  __declspec(property(get = get_Id)) ::System::Object* Id;

  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback;

  /// @brief Field collection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_collection, put = __cordl_internal_set_collection)) ::System::Object* collection;

  /// @brief Field collectionItems, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionItems, put = __cordl_internal_set_collectionItems)) ::System::Object* collectionItems;

  /// @brief Field id, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  static inline ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup* New_ctor(::System::Object* collection,
                                                                                               ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback, ::StringW id);

  constexpr ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* const& __cordl_internal_get_callback() const;

  constexpr ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*& __cordl_internal_get_callback();

  constexpr ::System::Object* const& __cordl_internal_get_collection() const;

  constexpr ::System::Object*& __cordl_internal_get_collection();

  constexpr ::System::Object* const& __cordl_internal_get_collectionItems() const;

  constexpr ::System::Object*& __cordl_internal_get_collectionItems();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr void __cordl_internal_set_callback(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* value);

  constexpr void __cordl_internal_set_collection(::System::Object* value);

  constexpr void __cordl_internal_set_collectionItems(::System::Object* value);

  constexpr void __cordl_internal_set_id(::StringW value);

  /// @brief Method .ctor, addr 0x437e4a0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* collection, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback, ::StringW id);

  /// @brief Method get_Callback, addr 0x437e4dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* get_Callback();

  /// @brief Method get_Collection, addr 0x437e4e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Collection();

  /// @brief Method get_CollectionItems, addr 0x437e4f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_CollectionItems();

  /// @brief Method get_Id, addr 0x437e4ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Id();

  /// @brief Method set_CollectionItems, addr 0x437e4fc, size 0x8, virtual false, abstract: false, final false
  inline void set_CollectionItems(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationReader_CollectionFixup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader_CollectionFixup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationReader_CollectionFixup(XmlSerializationReader_CollectionFixup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader_CollectionFixup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationReader_CollectionFixup(XmlSerializationReader_CollectionFixup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7438 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* ___callback;

  /// @brief Field collection, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___collection;

  /// @brief Field collectionItems, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___collectionItems;

  /// @brief Field id, offset: 0x28, size: 0x8, def value: None
  ::StringW ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup, ___callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup, ___collection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup, ___collectionItems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup, ___id) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup, 0x30>, "Size mismatch!");

} // namespace System::Xml::Serialization
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationReader/Fixup
class CORDL_TYPE XmlSerializationReader_Fixup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Callback)) ::System::Xml::Serialization::XmlSerializationFixupCallback* Callback;

  __declspec(property(get = get_Ids)) ::ArrayW<::StringW, ::Array<::StringW>*> Ids;

  __declspec(property(get = get_Source)) ::System::Object* Source;

  /// @brief Field callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Xml::Serialization::XmlSerializationFixupCallback* callback;

  /// @brief Field ids, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ids, put = __cordl_internal_set_ids)) ::ArrayW<::StringW, ::Array<::StringW>*> ids;

  /// @brief Field source, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Object* source;

  static inline ::System::Xml::Serialization::XmlSerializationReader_Fixup* New_ctor(::System::Object* o, ::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int32_t count);

  constexpr ::System::Xml::Serialization::XmlSerializationFixupCallback* const& __cordl_internal_get_callback() const;

  constexpr ::System::Xml::Serialization::XmlSerializationFixupCallback*& __cordl_internal_get_callback();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_ids() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_ids();

  constexpr ::System::Object* const& __cordl_internal_get_source() const;

  constexpr ::System::Object*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_callback(::System::Xml::Serialization::XmlSerializationFixupCallback* value);

  constexpr void __cordl_internal_set_ids(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_source(::System::Object* value);

  /// @brief Method .ctor, addr 0x437e504, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* o, ::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int32_t count);

  /// @brief Method get_Callback, addr 0x437e584, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationFixupCallback* get_Callback();

  /// @brief Method get_Ids, addr 0x437e58c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Ids();

  /// @brief Method get_Source, addr 0x437e594, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Source();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationReader_Fixup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader_Fixup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationReader_Fixup(XmlSerializationReader_Fixup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader_Fixup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationReader_Fixup(XmlSerializationReader_Fixup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7439 };

  /// @brief Field source, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___source;

  /// @brief Field ids, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___ids;

  /// @brief Field callback, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializationFixupCallback* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_Fixup, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_Fixup, ___ids) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_Fixup, ___callback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationReader_Fixup, 0x28>, "Size mismatch!");

} // namespace System::Xml::Serialization
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
class CORDL_TYPE XmlSerializationReader_CollectionItemFixup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Collection)) ::System::Array* Collection;

  __declspec(property(get = get_Id)) ::StringW Id;

  __declspec(property(get = get_Index)) int32_t Index;

  /// @brief Field id, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Array* list;

  static inline ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup* New_ctor(::System::Array* list, int32_t index, ::StringW id);

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::System::Array* const& __cordl_internal_get_list() const;

  constexpr ::System::Array*& __cordl_internal_get_list();

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_list(::System::Array* value);

  /// @brief Method .ctor, addr 0x437c8a0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Array* list, int32_t index, ::StringW id);

  /// @brief Method get_Collection, addr 0x437e59c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Array* get_Collection();

  /// @brief Method get_Id, addr 0x437e5ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_Index, addr 0x437e5a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Index();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationReader_CollectionItemFixup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader_CollectionItemFixup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationReader_CollectionItemFixup(XmlSerializationReader_CollectionItemFixup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader_CollectionItemFixup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationReader_CollectionItemFixup(XmlSerializationReader_CollectionItemFixup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7440 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Array* ___list;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field id, offset: 0x20, size: 0x8, def value: None
  ::StringW ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup, ___id) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup, 0x28>, "Size mismatch!");

} // namespace System::Xml::Serialization
// Dependencies System.Xml.Serialization.XmlSerializationGeneratedCode
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationReader
class CORDL_TYPE XmlSerializationReader : public ::System::Xml::Serialization::XmlSerializationGeneratedCode {
public:
  // Declarations
  using CollectionFixup = ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup;

  using CollectionItemFixup = ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup;

  using Fixup = ::System::Xml::Serialization::XmlSerializationReader_Fixup;

  using WriteCallbackInfo = ::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo;

  __declspec(property(get = get_Document)) ::System::Xml::XmlDocument* Document;

  __declspec(property(get = get_Reader)) ::System::Xml::XmlReader* Reader;

  /// @brief Field arrayQName, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_arrayQName, put = __cordl_internal_set_arrayQName)) ::System::Xml::XmlQualifiedName* arrayQName;

  /// @brief Field arrayType, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_arrayType, put = __cordl_internal_set_arrayType)) ::StringW arrayType;

  /// @brief Field collFixups, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_collFixups, put = __cordl_internal_set_collFixups)) ::System::Collections::Hashtable* collFixups;

  /// @brief Field collItemFixups, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_collItemFixups, put = __cordl_internal_set_collItemFixups)) ::System::Collections::ArrayList* collItemFixups;

  /// @brief Field delayedFixupId, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_delayedFixupId, put = __cordl_internal_set_delayedFixupId)) int32_t delayedFixupId;

  /// @brief Field delayedListFixups, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_delayedListFixups, put = __cordl_internal_set_delayedListFixups)) ::System::Collections::Hashtable* delayedListFixups;

  /// @brief Field document, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_document, put = __cordl_internal_set_document)) ::System::Xml::XmlDocument* document;

  /// @brief Field eventSource, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_eventSource, put = __cordl_internal_set_eventSource)) ::System::Xml::Serialization::XmlSerializer* eventSource;

  /// @brief Field fixups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fixups, put = __cordl_internal_set_fixups)) ::System::Collections::ArrayList* fixups;

  /// @brief Field nil, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_nil, put = __cordl_internal_set_nil)) ::StringW nil;

  /// @brief Field noIDTargets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_noIDTargets, put = __cordl_internal_set_noIDTargets)) ::System::Collections::ArrayList* noIDTargets;

  /// @brief Field nullX, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_nullX, put = __cordl_internal_set_nullX)) ::StringW nullX;

  /// @brief Field readCount, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_readCount, put = __cordl_internal_set_readCount)) int32_t readCount;

  /// @brief Field reader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlReader* reader;

  /// @brief Field referencedObjects, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_referencedObjects, put = __cordl_internal_set_referencedObjects)) ::System::Collections::Hashtable* referencedObjects;

  /// @brief Field soapNS, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_soapNS, put = __cordl_internal_set_soapNS)) ::StringW soapNS;

  /// @brief Field targets, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_targets, put = __cordl_internal_set_targets)) ::System::Collections::Hashtable* targets;

  /// @brief Field typeX, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_typeX, put = __cordl_internal_set_typeX)) ::StringW typeX;

  /// @brief Field typesCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_typesCallbacks, put = __cordl_internal_set_typesCallbacks)) ::System::Collections::Hashtable* typesCallbacks;

  /// @brief Field w3InstanceNS, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_w3InstanceNS, put = __cordl_internal_set_w3InstanceNS)) ::StringW w3InstanceNS;

  /// @brief Field w3InstanceNS1999, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_w3InstanceNS1999, put = __cordl_internal_set_w3InstanceNS1999)) ::StringW w3InstanceNS1999;

  /// @brief Field w3InstanceNS2000, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_w3InstanceNS2000, put = __cordl_internal_set_w3InstanceNS2000)) ::StringW w3InstanceNS2000;

  /// @brief Field w3SchemaNS, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_w3SchemaNS, put = __cordl_internal_set_w3SchemaNS)) ::StringW w3SchemaNS;

  /// @brief Field whileIterationCount, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_whileIterationCount, put = __cordl_internal_set_whileIterationCount)) int32_t whileIterationCount;

  /// @brief Field wsdlNS, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_wsdlNS, put = __cordl_internal_set_wsdlNS)) ::StringW wsdlNS;

  /// @brief Method AddFixup, addr 0x437a3a0, size 0xb4, virtual false, abstract: false, final false
  inline void AddFixup(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup* fixup);

  /// @brief Method AddFixup, addr 0x437a498, size 0x44, virtual false, abstract: false, final false
  inline void AddFixup(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup* fixup);

  /// @brief Method AddFixup, addr 0x437a454, size 0x44, virtual false, abstract: false, final false
  inline void AddFixup(::System::Xml::Serialization::XmlSerializationReader_Fixup* fixup);

  /// @brief Method AddReadCallback, addr 0x437a4dc, size 0xe0, virtual false, abstract: false, final false
  inline void AddReadCallback(::StringW name, ::StringW ns, ::System::Type* type, ::System::Xml::Serialization::XmlSerializationReadCallback* read);

  /// @brief Method AddTarget, addr 0x437a5c4, size 0xa8, virtual false, abstract: false, final false
  inline void AddTarget(::StringW id, ::System::Object* o);

  /// @brief Method CreateReadOnlyCollectionException, addr 0x437a7cc, size 0x90, virtual false, abstract: false, final false
  inline ::System::Exception* CreateReadOnlyCollectionException(::StringW name);

  /// @brief Method CreateUnknownConstantException, addr 0x437a85c, size 0x98, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownConstantException(::StringW value, ::System::Type* enumType);

  /// @brief Method CreateUnknownNodeException, addr 0x437a8f4, size 0x94, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownNodeException();

  /// @brief Method CreateUnknownTypeException, addr 0x437a988, size 0x154, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownTypeException(::System::Xml::XmlQualifiedName* type);

  /// @brief Method CurrentTag, addr 0x437a66c, size 0x160, virtual false, abstract: false, final false
  inline ::StringW CurrentTag();

  /// @brief Method EnsureArrayIndex, addr 0x437aadc, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Array* EnsureArrayIndex(::System::Array* a, int32_t index, ::System::Type* elementType);

  /// @brief Method EnsureArrayList, addr 0x437a24c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* EnsureArrayList(::System::Collections::ArrayList* list);

  /// @brief Method EnsureHashtable, addr 0x437a2a8, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* EnsureHashtable(::System::Collections::Hashtable* hash);

  /// @brief Method GetCallbackInfo, addr 0x437b960, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo* GetCallbackInfo(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetNullAttr, addr 0x437ab68, size 0xa8, virtual false, abstract: false, final false
  inline bool GetNullAttr();

  /// @brief Method GetTarget, addr 0x437ac10, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Object* GetTarget(::StringW id);

  /// @brief Method GetXsiType, addr 0x437ace4, size 0x214, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* GetXsiType();

  /// @brief Method InitCallbacks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InitCallbacks();

  /// @brief Method InitIDs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InitIDs();

  /// @brief Method Initialize, addr 0x4379f28, size 0x324, virtual false, abstract: false, final false
  inline void Initialize(::System::Xml::XmlReader* reader, ::System::Xml::Serialization::XmlSerializer* eventSource);

  /// @brief Method IsXmlnsAttribute, addr 0x437aef8, size 0xa0, virtual false, abstract: false, final false
  inline bool IsXmlnsAttribute(::StringW name);

  static inline ::System::Xml::Serialization::XmlSerializationReader* New_ctor();

  /// @brief Method OnUnknownNode, addr 0x437dd24, size 0x278, virtual false, abstract: false, final false
  inline void OnUnknownNode(::System::Xml::XmlNode* node, ::System::Object* o, ::StringW qnames);

  /// @brief Method ParseWsdlArrayType, addr 0x437af98, size 0x184, virtual false, abstract: false, final false
  inline void ParseWsdlArrayType(::System::Xml::XmlAttribute* attr);

  /// @brief Method ReadElementQualifiedName, addr 0x437b11c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ReadElementQualifiedName();

  /// @brief Method ReadEndElement, addr 0x437b444, size 0x98, virtual false, abstract: false, final false
  inline void ReadEndElement();

  /// @brief Method ReadList, addr 0x437ba3c, size 0x4d8, virtual false, abstract: false, final false
  inline bool ReadList(::ByRef<::System::Object*> resultList);

  /// @brief Method ReadNull, addr 0x437b4dc, size 0xc8, virtual false, abstract: false, final false
  inline bool ReadNull();

  /// @brief Method ReadNullableQualifiedName, addr 0x437b5d8, size 0x28, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ReadNullableQualifiedName();

  /// @brief Method ReadNullableString, addr 0x437b600, size 0x48, virtual false, abstract: false, final false
  inline ::StringW ReadNullableString();

  /// @brief Method ReadReferencedElement, addr 0x437b648, size 0x58, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencedElement();

  /// @brief Method ReadReferencedElement, addr 0x437b6a0, size 0x2c0, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencedElement(::StringW name, ::StringW ns);

  /// @brief Method ReadReferencedElements, addr 0x437c8e0, size 0xea8, virtual false, abstract: false, final false
  inline void ReadReferencedElements();

  /// @brief Method ReadReferencingElement, addr 0x437d81c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencingElement(::ByRef<::StringW> fixupReference);

  /// @brief Method ReadReferencingElement, addr 0x437d880, size 0x30c, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencingElement(::StringW name, ::StringW ns, bool elementCanBeType, ::ByRef<::StringW> fixupReference);

  /// @brief Method ReadReferencingElement, addr 0x437c894, size 0xc, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencingElement(::StringW name, ::StringW ns, ::ByRef<::StringW> fixupReference);

  /// @brief Method ReadSerializable, addr 0x437db8c, size 0x190, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::IXmlSerializable* ReadSerializable(::System::Xml::Serialization::IXmlSerializable* serializable);

  /// @brief Method ReadTypedPrimitive, addr 0x437bf14, size 0x980, virtual false, abstract: false, final false
  inline ::System::Object* ReadTypedPrimitive(::System::Xml::XmlQualifiedName* qname, bool reportUnknown);

  /// @brief Method ReadTypedPrimitive, addr 0x437dd1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* ReadTypedPrimitive(::System::Xml::XmlQualifiedName* type);

  /// @brief Method ReadXmlDocument, addr 0x437e004, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* ReadXmlDocument(bool wrapped);

  /// @brief Method ReadXmlNode, addr 0x437df9c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ReadXmlNode(bool wrapped);

  /// @brief Method ShrinkArray, addr 0x437e120, size 0x90, virtual false, abstract: false, final false
  inline ::System::Array* ShrinkArray(::System::Array* a, int32_t length, ::System::Type* elementType, bool isNullable);

  /// @brief Method TargetReady, addr 0x437acc8, size 0x1c, virtual false, abstract: false, final false
  inline bool TargetReady(::StringW id);

  /// @brief Method ToXmlQualifiedName, addr 0x437b218, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ToXmlQualifiedName(::StringW value);

  /// @brief Method UnknownAttribute, addr 0x437e1b0, size 0x15c, virtual false, abstract: false, final false
  inline void UnknownAttribute(::System::Object* o, ::System::Xml::XmlAttribute* attr, ::StringW qnames);

  /// @brief Method UnknownElement, addr 0x437e30c, size 0x15c, virtual false, abstract: false, final false
  inline void UnknownElement(::System::Object* o, ::System::Xml::XmlElement* elem, ::StringW qnames);

  /// @brief Method UnknownNode, addr 0x437b5a4, size 0x34, virtual false, abstract: false, final false
  inline void UnknownNode(::System::Object* o);

  /// @brief Method UnknownNode, addr 0x437e468, size 0x38, virtual false, abstract: false, final false
  inline void UnknownNode(::System::Object* o, ::StringW qnames);

  /// @brief Method UnreferencedObject, addr 0x437d788, size 0x94, virtual false, abstract: false, final false
  inline void UnreferencedObject(::StringW id, ::System::Object* o);

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_arrayQName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_arrayQName();

  constexpr ::StringW const& __cordl_internal_get_arrayType() const;

  constexpr ::StringW& __cordl_internal_get_arrayType();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_collFixups() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_collFixups();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_collItemFixups() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_collItemFixups();

  constexpr int32_t const& __cordl_internal_get_delayedFixupId() const;

  constexpr int32_t& __cordl_internal_get_delayedFixupId();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_delayedListFixups() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_delayedListFixups();

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_document() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_document();

  constexpr ::System::Xml::Serialization::XmlSerializer* const& __cordl_internal_get_eventSource() const;

  constexpr ::System::Xml::Serialization::XmlSerializer*& __cordl_internal_get_eventSource();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_fixups() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_fixups();

  constexpr ::StringW const& __cordl_internal_get_nil() const;

  constexpr ::StringW& __cordl_internal_get_nil();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_noIDTargets() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_noIDTargets();

  constexpr ::StringW const& __cordl_internal_get_nullX() const;

  constexpr ::StringW& __cordl_internal_get_nullX();

  constexpr int32_t const& __cordl_internal_get_readCount() const;

  constexpr int32_t& __cordl_internal_get_readCount();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_referencedObjects() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_referencedObjects();

  constexpr ::StringW const& __cordl_internal_get_soapNS() const;

  constexpr ::StringW& __cordl_internal_get_soapNS();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_targets() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_targets();

  constexpr ::StringW const& __cordl_internal_get_typeX() const;

  constexpr ::StringW& __cordl_internal_get_typeX();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_typesCallbacks() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_typesCallbacks();

  constexpr ::StringW const& __cordl_internal_get_w3InstanceNS() const;

  constexpr ::StringW& __cordl_internal_get_w3InstanceNS();

  constexpr ::StringW const& __cordl_internal_get_w3InstanceNS1999() const;

  constexpr ::StringW& __cordl_internal_get_w3InstanceNS1999();

  constexpr ::StringW const& __cordl_internal_get_w3InstanceNS2000() const;

  constexpr ::StringW& __cordl_internal_get_w3InstanceNS2000();

  constexpr ::StringW const& __cordl_internal_get_w3SchemaNS() const;

  constexpr ::StringW& __cordl_internal_get_w3SchemaNS();

  constexpr int32_t const& __cordl_internal_get_whileIterationCount() const;

  constexpr int32_t& __cordl_internal_get_whileIterationCount();

  constexpr ::StringW const& __cordl_internal_get_wsdlNS() const;

  constexpr ::StringW& __cordl_internal_get_wsdlNS();

  constexpr void __cordl_internal_set_arrayQName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_arrayType(::StringW value);

  constexpr void __cordl_internal_set_collFixups(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_collItemFixups(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_delayedFixupId(int32_t value);

  constexpr void __cordl_internal_set_delayedListFixups(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_document(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_eventSource(::System::Xml::Serialization::XmlSerializer* value);

  constexpr void __cordl_internal_set_fixups(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_nil(::StringW value);

  constexpr void __cordl_internal_set_noIDTargets(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_nullX(::StringW value);

  constexpr void __cordl_internal_set_readCount(int32_t value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_referencedObjects(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_soapNS(::StringW value);

  constexpr void __cordl_internal_set_targets(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_typeX(::StringW value);

  constexpr void __cordl_internal_set_typesCallbacks(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_w3InstanceNS(::StringW value);

  constexpr void __cordl_internal_set_w3InstanceNS1999(::StringW value);

  constexpr void __cordl_internal_set_w3InstanceNS2000(::StringW value);

  constexpr void __cordl_internal_set_w3SchemaNS(::StringW value);

  constexpr void __cordl_internal_set_whileIterationCount(int32_t value);

  constexpr void __cordl_internal_set_wsdlNS(::StringW value);

  /// @brief Method .ctor, addr 0x437a304, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Document, addr 0x437a30c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_Document();

  /// @brief Method get_Reader, addr 0x437a398, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* get_Reader();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationReader(XmlSerializationReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationReader(XmlSerializationReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7441 };

  /// @brief Field document, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___document;

  /// @brief Field reader, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field fixups, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___fixups;

  /// @brief Field collFixups, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___collFixups;

  /// @brief Field collItemFixups, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___collItemFixups;

  /// @brief Field typesCallbacks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___typesCallbacks;

  /// @brief Field noIDTargets, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___noIDTargets;

  /// @brief Field targets, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___targets;

  /// @brief Field delayedListFixups, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___delayedListFixups;

  /// @brief Field eventSource, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializer* ___eventSource;

  /// @brief Field delayedFixupId, offset: 0x60, size: 0x4, def value: None
  int32_t ___delayedFixupId;

  /// @brief Field referencedObjects, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___referencedObjects;

  /// @brief Field readCount, offset: 0x70, size: 0x4, def value: None
  int32_t ___readCount;

  /// @brief Field whileIterationCount, offset: 0x74, size: 0x4, def value: None
  int32_t ___whileIterationCount;

  /// @brief Field w3SchemaNS, offset: 0x78, size: 0x8, def value: None
  ::StringW ___w3SchemaNS;

  /// @brief Field w3InstanceNS, offset: 0x80, size: 0x8, def value: None
  ::StringW ___w3InstanceNS;

  /// @brief Field w3InstanceNS2000, offset: 0x88, size: 0x8, def value: None
  ::StringW ___w3InstanceNS2000;

  /// @brief Field w3InstanceNS1999, offset: 0x90, size: 0x8, def value: None
  ::StringW ___w3InstanceNS1999;

  /// @brief Field soapNS, offset: 0x98, size: 0x8, def value: None
  ::StringW ___soapNS;

  /// @brief Field wsdlNS, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___wsdlNS;

  /// @brief Field nullX, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___nullX;

  /// @brief Field nil, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___nil;

  /// @brief Field typeX, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___typeX;

  /// @brief Field arrayType, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___arrayType;

  /// @brief Field arrayQName, offset: 0xc8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___arrayQName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___document) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___reader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___fixups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___collFixups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___collItemFixups) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___typesCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___noIDTargets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___targets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___delayedListFixups) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___eventSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___delayedFixupId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___referencedObjects) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___readCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___whileIterationCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___w3SchemaNS) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___w3InstanceNS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___w3InstanceNS2000) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___w3InstanceNS1999) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___soapNS) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___wsdlNS) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___nullX) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___nil) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___typeX) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___arrayType) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReader, ___arrayQName) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationReader, 0xd0>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReader*, "System.Xml.Serialization", "XmlSerializationReader");
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*, "System.Xml.Serialization", "XmlSerializationReader/CollectionFixup");
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*, "System.Xml.Serialization", "XmlSerializationReader/CollectionItemFixup");
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReader_Fixup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReader_Fixup*, "System.Xml.Serialization", "XmlSerializationReader/Fixup");
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo*, "System.Xml.Serialization", "XmlSerializationReader/WriteCallbackInfo");
