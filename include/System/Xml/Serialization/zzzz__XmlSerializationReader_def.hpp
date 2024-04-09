#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlSerializationGeneratedCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class XmlSerializer;
}
namespace System::Xml::Serialization {
class __XmlSerializationReader__CollectionFixup;
}
namespace System::Xml::Serialization {
class __XmlSerializationReader__CollectionItemFixup;
}
namespace System::Xml::Serialization {
class __XmlSerializationReader__Fixup;
}
namespace System::Xml::Serialization {
class __XmlSerializationReader__WriteCallbackInfo;
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
class __XmlSerializationReader__CollectionFixup;
}
namespace System::Xml::Serialization {
class __XmlSerializationReader__CollectionItemFixup;
}
namespace System::Xml::Serialization {
class __XmlSerializationReader__Fixup;
}
namespace System::Xml::Serialization {
class __XmlSerializationReader__WriteCallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationReader);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializationReader__Fixup);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo);
// Type: ::WriteCallbackInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializationReader::WriteCallbackInfo*
class CORDL_TYPE __XmlSerializationReader__WriteCallbackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Callback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Callback, put = __cordl_internal_set_Callback))::System::Xml::Serialization::XmlSerializationReadCallback* Callback;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::System::Type* Type;

  /// @brief Field TypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeName, put = __cordl_internal_set_TypeName))::StringW TypeName;

  /// @brief Field TypeNs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeNs, put = __cordl_internal_set_TypeNs))::StringW TypeNs;

  static inline ::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo* New_ctor();

  constexpr ::System::Xml::Serialization::XmlSerializationReadCallback*& __cordl_internal_get_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationReadCallback*> const& __cordl_internal_get_Callback() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_Type() const;

  constexpr ::StringW const& __cordl_internal_get_TypeName() const;

  constexpr ::StringW& __cordl_internal_get_TypeName();

  constexpr ::StringW const& __cordl_internal_get_TypeNs() const;

  constexpr ::StringW& __cordl_internal_get_TypeNs();

  constexpr void __cordl_internal_set_Callback(::System::Xml::Serialization::XmlSerializationReadCallback* value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  constexpr void __cordl_internal_set_TypeName(::StringW value);

  constexpr void __cordl_internal_set_TypeNs(::StringW value);

  /// @brief Method .ctor, addr 0x2dd7180, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializationReader__WriteCallbackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReader__WriteCallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializationReader__WriteCallbackInfo(__XmlSerializationReader__WriteCallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReader__WriteCallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializationReader__WriteCallbackInfo(__XmlSerializationReader__WriteCallbackInfo const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo, ___TypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo, ___TypeNs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo, ___Callback) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: ::CollectionFixup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializationReader::CollectionFixup*
class CORDL_TYPE __XmlSerializationReader__CollectionFixup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Callback))::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* Callback;

  __declspec(property(get = get_Collection))::System::Object* Collection;

  __declspec(property(get = get_CollectionItems, put = set_CollectionItems))::System::Object* CollectionItems;

  __declspec(property(get = get_Id))::System::Object* Id;

  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback;

  /// @brief Field collection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_collection, put = __cordl_internal_set_collection))::System::Object* collection;

  /// @brief Field collectionItems, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionItems, put = __cordl_internal_set_collectionItems))::System::Object* collectionItems;

  /// @brief Field id, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  static inline ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup* New_ctor(::System::Object* collection,
                                                                                                  ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback, ::StringW id);

  constexpr ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*> const& __cordl_internal_get_callback() const;

  constexpr ::System::Object*& __cordl_internal_get_collection();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_collection() const;

  constexpr ::System::Object*& __cordl_internal_get_collectionItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_collectionItems() const;

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr void __cordl_internal_set_callback(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* value);

  constexpr void __cordl_internal_set_collection(::System::Object* value);

  constexpr void __cordl_internal_set_collectionItems(::System::Object* value);

  constexpr void __cordl_internal_set_id(::StringW value);

  /// @brief Method .ctor, addr 0x2ddb154, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* collection, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback, ::StringW id);

  /// @brief Method get_Callback, addr 0x2ddb190, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* get_Callback();

  /// @brief Method get_Collection, addr 0x2ddb198, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Collection();

  /// @brief Method get_CollectionItems, addr 0x2ddb1a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_CollectionItems();

  /// @brief Method get_Id, addr 0x2ddb1a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Id();

  /// @brief Method set_CollectionItems, addr 0x2ddb1b0, size 0x8, virtual false, abstract: false, final false
  inline void set_CollectionItems(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializationReader__CollectionFixup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReader__CollectionFixup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializationReader__CollectionFixup(__XmlSerializationReader__CollectionFixup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReader__CollectionFixup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializationReader__CollectionFixup(__XmlSerializationReader__CollectionFixup const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup, ___callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup, ___collection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup, ___collectionItems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup, ___id) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: ::Fixup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializationReader::Fixup*
class CORDL_TYPE __XmlSerializationReader__Fixup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Callback))::System::Xml::Serialization::XmlSerializationFixupCallback* Callback;

  __declspec(property(get = get_Ids))::ArrayW<::StringW, ::Array<::StringW>*> Ids;

  __declspec(property(get = get_Source))::System::Object* Source;

  /// @brief Field callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Xml::Serialization::XmlSerializationFixupCallback* callback;

  /// @brief Field ids, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ids, put = __cordl_internal_set_ids))::ArrayW<::StringW, ::Array<::StringW>*> ids;

  /// @brief Field source, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source))::System::Object* source;

  static inline ::System::Xml::Serialization::__XmlSerializationReader__Fixup* New_ctor(::System::Object* o, ::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int32_t count);

  constexpr ::System::Xml::Serialization::XmlSerializationFixupCallback*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationFixupCallback*> const& __cordl_internal_get_callback() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_ids() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_ids();

  constexpr ::System::Object*& __cordl_internal_get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_source() const;

  constexpr void __cordl_internal_set_callback(::System::Xml::Serialization::XmlSerializationFixupCallback* value);

  constexpr void __cordl_internal_set_ids(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_source(::System::Object* value);

  /// @brief Method .ctor, addr 0x2ddb1b8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* o, ::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int32_t count);

  /// @brief Method get_Callback, addr 0x2ddb238, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationFixupCallback* get_Callback();

  /// @brief Method get_Ids, addr 0x2ddb240, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Ids();

  /// @brief Method get_Source, addr 0x2ddb248, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Source();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializationReader__Fixup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReader__Fixup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializationReader__Fixup(__XmlSerializationReader__Fixup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReader__Fixup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializationReader__Fixup(__XmlSerializationReader__Fixup const&) = delete;

  /// @brief Field source, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___source;

  /// @brief Field ids, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___ids;

  /// @brief Field callback, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializationFixupCallback* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializationReader__Fixup, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__Fixup, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__Fixup, ___ids) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__Fixup, ___callback) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: ::CollectionItemFixup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializationReader::CollectionItemFixup*
class CORDL_TYPE __XmlSerializationReader__CollectionItemFixup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Collection))::System::Array* Collection;

  __declspec(property(get = get_Id))::StringW Id;

  __declspec(property(get = get_Index)) int32_t Index;

  /// @brief Field id, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list))::System::Array* list;

  static inline ::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup* New_ctor(::System::Array* list, int32_t index, ::StringW id);

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::System::Array*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& __cordl_internal_get_list() const;

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_list(::System::Array* value);

  /// @brief Method .ctor, addr 0x2dd9534, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Array* list, int32_t index, ::StringW id);

  /// @brief Method get_Collection, addr 0x2ddb250, size 0x8, virtual false, abstract: false, final false
  inline ::System::Array* get_Collection();

  /// @brief Method get_Id, addr 0x2ddb260, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_Index, addr 0x2ddb258, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Index();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializationReader__CollectionItemFixup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReader__CollectionItemFixup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializationReader__CollectionItemFixup(__XmlSerializationReader__CollectionItemFixup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReader__CollectionItemFixup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializationReader__CollectionItemFixup(__XmlSerializationReader__CollectionItemFixup const&) = delete;

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Array* ___list;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field id, offset: 0x20, size: 0x8, def value: None
  ::StringW ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup, ___id) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: System.Xml.Serialization::XmlSerializationReader
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializationReader*
class CORDL_TYPE XmlSerializationReader : public ::System::Xml::Serialization::XmlSerializationGeneratedCode {
public:
  // Declarations
  using CollectionFixup = ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup;

  using CollectionItemFixup = ::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup;

  using Fixup = ::System::Xml::Serialization::__XmlSerializationReader__Fixup;

  using WriteCallbackInfo = ::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo;

  __declspec(property(get = get_Document))::System::Xml::XmlDocument* Document;

  __declspec(property(get = get_Reader))::System::Xml::XmlReader* Reader;

  /// @brief Field arrayQName, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_arrayQName, put = __cordl_internal_set_arrayQName))::System::Xml::XmlQualifiedName* arrayQName;

  /// @brief Field arrayType, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_arrayType, put = __cordl_internal_set_arrayType))::StringW arrayType;

  /// @brief Field collFixups, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_collFixups, put = __cordl_internal_set_collFixups))::System::Collections::Hashtable* collFixups;

  /// @brief Field collItemFixups, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_collItemFixups, put = __cordl_internal_set_collItemFixups))::System::Collections::ArrayList* collItemFixups;

  /// @brief Field delayedFixupId, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_delayedFixupId, put = __cordl_internal_set_delayedFixupId)) int32_t delayedFixupId;

  /// @brief Field delayedListFixups, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_delayedListFixups, put = __cordl_internal_set_delayedListFixups))::System::Collections::Hashtable* delayedListFixups;

  /// @brief Field document, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_document, put = __cordl_internal_set_document))::System::Xml::XmlDocument* document;

  /// @brief Field eventSource, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_eventSource, put = __cordl_internal_set_eventSource))::System::Xml::Serialization::XmlSerializer* eventSource;

  /// @brief Field fixups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fixups, put = __cordl_internal_set_fixups))::System::Collections::ArrayList* fixups;

  /// @brief Field nil, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_nil, put = __cordl_internal_set_nil))::StringW nil;

  /// @brief Field noIDTargets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_noIDTargets, put = __cordl_internal_set_noIDTargets))::System::Collections::ArrayList* noIDTargets;

  /// @brief Field nullX, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_nullX, put = __cordl_internal_set_nullX))::StringW nullX;

  /// @brief Field readCount, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_readCount, put = __cordl_internal_set_readCount)) int32_t readCount;

  /// @brief Field reader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader))::System::Xml::XmlReader* reader;

  /// @brief Field referencedObjects, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_referencedObjects, put = __cordl_internal_set_referencedObjects))::System::Collections::Hashtable* referencedObjects;

  /// @brief Field soapNS, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_soapNS, put = __cordl_internal_set_soapNS))::StringW soapNS;

  /// @brief Field targets, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_targets, put = __cordl_internal_set_targets))::System::Collections::Hashtable* targets;

  /// @brief Field typeX, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_typeX, put = __cordl_internal_set_typeX))::StringW typeX;

  /// @brief Field typesCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_typesCallbacks, put = __cordl_internal_set_typesCallbacks))::System::Collections::Hashtable* typesCallbacks;

  /// @brief Field w3InstanceNS, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_w3InstanceNS, put = __cordl_internal_set_w3InstanceNS))::StringW w3InstanceNS;

  /// @brief Field w3InstanceNS1999, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_w3InstanceNS1999, put = __cordl_internal_set_w3InstanceNS1999))::StringW w3InstanceNS1999;

  /// @brief Field w3InstanceNS2000, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_w3InstanceNS2000, put = __cordl_internal_set_w3InstanceNS2000))::StringW w3InstanceNS2000;

  /// @brief Field w3SchemaNS, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_w3SchemaNS, put = __cordl_internal_set_w3SchemaNS))::StringW w3SchemaNS;

  /// @brief Field whileIterationCount, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_whileIterationCount, put = __cordl_internal_set_whileIterationCount)) int32_t whileIterationCount;

  /// @brief Field wsdlNS, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_wsdlNS, put = __cordl_internal_set_wsdlNS))::StringW wsdlNS;

  /// @brief Method AddFixup, addr 0x2dd6f60, size 0xb4, virtual false, abstract: false, final false
  inline void AddFixup(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup* fixup);

  /// @brief Method AddFixup, addr 0x2dd7058, size 0x44, virtual false, abstract: false, final false
  inline void AddFixup(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup* fixup);

  /// @brief Method AddFixup, addr 0x2dd7014, size 0x44, virtual false, abstract: false, final false
  inline void AddFixup(::System::Xml::Serialization::__XmlSerializationReader__Fixup* fixup);

  /// @brief Method AddReadCallback, addr 0x2dd709c, size 0xe4, virtual false, abstract: false, final false
  inline void AddReadCallback(::StringW name, ::StringW ns, ::System::Type* type, ::System::Xml::Serialization::XmlSerializationReadCallback* read);

  /// @brief Method AddTarget, addr 0x2dd7188, size 0xa8, virtual false, abstract: false, final false
  inline void AddTarget(::StringW id, ::System::Object* o);

  /// @brief Method CreateReadOnlyCollectionException, addr 0x2dd7390, size 0x98, virtual false, abstract: false, final false
  inline ::System::Exception* CreateReadOnlyCollectionException(::StringW name);

  /// @brief Method CreateUnknownConstantException, addr 0x2dd7428, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownConstantException(::StringW value, ::System::Type* enumType);

  /// @brief Method CreateUnknownNodeException, addr 0x2dd74c8, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownNodeException();

  /// @brief Method CreateUnknownTypeException, addr 0x2dd7564, size 0x208, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownTypeException(::System::Xml::XmlQualifiedName* type);

  /// @brief Method CurrentTag, addr 0x2dd7230, size 0x160, virtual false, abstract: false, final false
  inline ::StringW CurrentTag();

  /// @brief Method EnsureArrayIndex, addr 0x2dd776c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Array* EnsureArrayIndex(::System::Array* a, int32_t index, ::System::Type* elementType);

  /// @brief Method EnsureArrayList, addr 0x2dd6df8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* EnsureArrayList(::System::Collections::ArrayList* list);

  /// @brief Method EnsureHashtable, addr 0x2dd6e5c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* EnsureHashtable(::System::Collections::Hashtable* hash);

  /// @brief Method GetCallbackInfo, addr 0x2dd8604, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo* GetCallbackInfo(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetNullAttr, addr 0x2dd77f8, size 0xa8, virtual false, abstract: false, final false
  inline bool GetNullAttr();

  /// @brief Method GetTarget, addr 0x2dd78a0, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Object* GetTarget(::StringW id);

  /// @brief Method GetXsiType, addr 0x2dd7974, size 0x218, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* GetXsiType();

  /// @brief Method InitCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InitCallbacks();

  /// @brief Method InitIDs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InitIDs();

  /// @brief Method Initialize, addr 0x2dd6ad0, size 0x328, virtual false, abstract: false, final false
  inline void Initialize(::System::Xml::XmlReader* reader, ::System::Xml::Serialization::XmlSerializer* eventSource);

  /// @brief Method IsXmlnsAttribute, addr 0x2dd7b8c, size 0xa0, virtual false, abstract: false, final false
  inline bool IsXmlnsAttribute(::StringW name);

  static inline ::System::Xml::Serialization::XmlSerializationReader* New_ctor();

  /// @brief Method OnUnknownNode, addr 0x2dda9c8, size 0x280, virtual false, abstract: false, final false
  inline void OnUnknownNode(::System::Xml::XmlNode* node, ::System::Object* o, ::StringW qnames);

  /// @brief Method ParseWsdlArrayType, addr 0x2dd7c2c, size 0x184, virtual false, abstract: false, final false
  inline void ParseWsdlArrayType(::System::Xml::XmlAttribute* attr);

  /// @brief Method ReadElementQualifiedName, addr 0x2dd7db0, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ReadElementQualifiedName();

  /// @brief Method ReadEndElement, addr 0x2dd80e4, size 0x98, virtual false, abstract: false, final false
  inline void ReadEndElement();

  /// @brief Method ReadList, addr 0x2dd86e4, size 0x4e0, virtual false, abstract: false, final false
  inline bool ReadList(ByRef<::System::Object*> resultList);

  /// @brief Method ReadNull, addr 0x2dd817c, size 0xc8, virtual false, abstract: false, final false
  inline bool ReadNull();

  /// @brief Method ReadNullableQualifiedName, addr 0x2dd8278, size 0x28, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ReadNullableQualifiedName();

  /// @brief Method ReadNullableString, addr 0x2dd82a0, size 0x48, virtual false, abstract: false, final false
  inline ::StringW ReadNullableString();

  /// @brief Method ReadReferencedElement, addr 0x2dd82e8, size 0x58, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencedElement();

  /// @brief Method ReadReferencedElement, addr 0x2dd8340, size 0x2c4, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencedElement(::StringW name, ::StringW ns);

  /// @brief Method ReadReferencedElements, addr 0x2dd9574, size 0xea8, virtual false, abstract: false, final false
  inline void ReadReferencedElements();

  /// @brief Method ReadReferencingElement, addr 0x2dda4b8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencingElement(ByRef<::StringW> fixupReference);

  /// @brief Method ReadReferencingElement, addr 0x2dda51c, size 0x314, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencingElement(::StringW name, ::StringW ns, bool elementCanBeType, ByRef<::StringW> fixupReference);

  /// @brief Method ReadReferencingElement, addr 0x2dd9528, size 0xc, virtual false, abstract: false, final false
  inline ::System::Object* ReadReferencingElement(::StringW name, ::StringW ns, ByRef<::StringW> fixupReference);

  /// @brief Method ReadSerializable, addr 0x2dda830, size 0x190, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::IXmlSerializable* ReadSerializable(::System::Xml::Serialization::IXmlSerializable* serializable);

  /// @brief Method ReadTypedPrimitive, addr 0x2dd8bc4, size 0x964, virtual false, abstract: false, final false
  inline ::System::Object* ReadTypedPrimitive(::System::Xml::XmlQualifiedName* qname, bool reportUnknown);

  /// @brief Method ReadTypedPrimitive, addr 0x2dda9c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* ReadTypedPrimitive(::System::Xml::XmlQualifiedName* type);

  /// @brief Method ReadXmlDocument, addr 0x2ddacb0, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* ReadXmlDocument(bool wrapped);

  /// @brief Method ReadXmlNode, addr 0x2ddac48, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ReadXmlNode(bool wrapped);

  /// @brief Method ShrinkArray, addr 0x2ddadcc, size 0x90, virtual false, abstract: false, final false
  inline ::System::Array* ShrinkArray(::System::Array* a, int32_t length, ::System::Type* elementType, bool isNullable);

  /// @brief Method TargetReady, addr 0x2dd7958, size 0x1c, virtual false, abstract: false, final false
  inline bool TargetReady(::StringW id);

  /// @brief Method ToXmlQualifiedName, addr 0x2dd7eac, size 0x238, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ToXmlQualifiedName(::StringW value);

  /// @brief Method UnknownAttribute, addr 0x2ddae5c, size 0x160, virtual false, abstract: false, final false
  inline void UnknownAttribute(::System::Object* o, ::System::Xml::XmlAttribute* attr, ::StringW qnames);

  /// @brief Method UnknownElement, addr 0x2ddafbc, size 0x160, virtual false, abstract: false, final false
  inline void UnknownElement(::System::Object* o, ::System::Xml::XmlElement* elem, ::StringW qnames);

  /// @brief Method UnknownNode, addr 0x2dd8244, size 0x34, virtual false, abstract: false, final false
  inline void UnknownNode(::System::Object* o);

  /// @brief Method UnknownNode, addr 0x2ddb11c, size 0x38, virtual false, abstract: false, final false
  inline void UnknownNode(::System::Object* o, ::StringW qnames);

  /// @brief Method UnreferencedObject, addr 0x2dda41c, size 0x9c, virtual false, abstract: false, final false
  inline void UnreferencedObject(::StringW id, ::System::Object* o);

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_arrayQName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_arrayQName() const;

  constexpr ::StringW const& __cordl_internal_get_arrayType() const;

  constexpr ::StringW& __cordl_internal_get_arrayType();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_collFixups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_collFixups() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_collItemFixups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_collItemFixups() const;

  constexpr int32_t const& __cordl_internal_get_delayedFixupId() const;

  constexpr int32_t& __cordl_internal_get_delayedFixupId();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_delayedListFixups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_delayedListFixups() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_document();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& __cordl_internal_get_document() const;

  constexpr ::System::Xml::Serialization::XmlSerializer*& __cordl_internal_get_eventSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializer*> const& __cordl_internal_get_eventSource() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_fixups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_fixups() const;

  constexpr ::StringW const& __cordl_internal_get_nil() const;

  constexpr ::StringW& __cordl_internal_get_nil();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_noIDTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_noIDTargets() const;

  constexpr ::StringW const& __cordl_internal_get_nullX() const;

  constexpr ::StringW& __cordl_internal_get_nullX();

  constexpr int32_t const& __cordl_internal_get_readCount() const;

  constexpr int32_t& __cordl_internal_get_readCount();

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __cordl_internal_get_reader() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_referencedObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_referencedObjects() const;

  constexpr ::StringW const& __cordl_internal_get_soapNS() const;

  constexpr ::StringW& __cordl_internal_get_soapNS();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_targets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_targets() const;

  constexpr ::StringW const& __cordl_internal_get_typeX() const;

  constexpr ::StringW& __cordl_internal_get_typeX();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_typesCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_typesCallbacks() const;

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

  /// @brief Method .ctor, addr 0x2dd6ec0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Document, addr 0x2dd6ec8, size 0x90, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_Document();

  /// @brief Method get_Reader, addr 0x2dd6f58, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationReader, 0xd0>, "Size mismatch!");

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

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReader*, "System.Xml.Serialization", "XmlSerializationReader");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*, "System.Xml.Serialization", "XmlSerializationReader/CollectionFixup");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*, "System.Xml.Serialization", "XmlSerializationReader/CollectionItemFixup");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializationReader__Fixup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializationReader__Fixup*, "System.Xml.Serialization", "XmlSerializationReader/Fixup");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo*, "System.Xml.Serialization", "XmlSerializationReader/WriteCallbackInfo");
