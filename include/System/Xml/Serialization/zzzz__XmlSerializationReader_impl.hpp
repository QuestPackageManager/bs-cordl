#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationReader.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationGeneratedCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationCollectionFixupCallback_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationFixupCallback_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReadCallback_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializer_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f81cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::System::Type* const& System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_set_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_get_TypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_get_TypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeName;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_set_TypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TypeName = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_get_TypeNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeNs;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_get_TypeNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeNs;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_set_TypeNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TypeNs = value;
}
constexpr ::System::Xml::Serialization::XmlSerializationReadCallback*& System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_get_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callback;
}
constexpr ::System::Xml::Serialization::XmlSerializationReadCallback* const& System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_get_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callback;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::__cordl_internal_set_Callback(::System::Xml::Serialization::XmlSerializationReadCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Callback = value;
}
inline void System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo* System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo::XmlSerializationReader_WriteCallbackInfo() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::*)(
    ::System::Object*, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*, ::StringW)>(&::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62fc0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup.get_Callback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* (
    ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::*)()>(&::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(), { "get_Callback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup.get_Collection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Collection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(), { "get_Collection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup.get_CollectionItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_CollectionItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(), { "get_CollectionItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup.set_CollectionItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::set_CollectionItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(),
                                                                                           { "set_CollectionItems", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*& System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* const& System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_set_callback(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
constexpr ::System::Object*& System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_get_collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr ::System::Object* const& System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_get_collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_set_collection(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collection = value;
}
constexpr ::System::Object*& System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_get_collectionItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionItems;
}
constexpr ::System::Object* const& System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_get_collectionItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionItems;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_set_collectionItems(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collectionItems = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_CollectionFixup::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
inline void System::Xml::Serialization::XmlSerializationReader_CollectionFixup::_ctor(::System::Object* collection, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback,
                                                                                      ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, callback, id);
}
inline ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Callback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(), { "get_Callback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Collection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(), { "get_Collection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Id() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_CollectionItems() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(), { "get_CollectionItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader_CollectionFixup::set_CollectionItems(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(),
                                                                                         { "set_CollectionItems", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*
System::Xml::Serialization::XmlSerializationReader_CollectionFixup::New_ctor(::System::Object* collection, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback,
                                                                             ::StringW id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>(collection, callback, id));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::XmlSerializationReader_CollectionFixup() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_Fixup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader_Fixup::*)(
    ::System::Object*, ::System::Xml::Serialization::XmlSerializationFixupCallback*, int32_t)>(&::System::Xml::Serialization::XmlSerializationReader_Fixup::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62fc0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Serialization::XmlSerializationFixupCallback*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_Fixup.get_Callback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializationFixupCallback* (::System::Xml::Serialization::XmlSerializationReader_Fixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_Fixup::get_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(), { "get_Callback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_Fixup.get_Ids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Xml::Serialization::XmlSerializationReader_Fixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_Fixup::get_Ids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(), { "get_Ids", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_Fixup.get_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader_Fixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_Fixup::get_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(), { "get_Source", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::System::Object* const& System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_set_source(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::ArrayW<::StringW>& System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_get_ids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ids;
}
constexpr ::ArrayW<::StringW> const& System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_get_ids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ids;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_set_ids(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ids = value;
}
constexpr ::System::Xml::Serialization::XmlSerializationFixupCallback*& System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::System::Xml::Serialization::XmlSerializationFixupCallback* const& System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_Fixup::__cordl_internal_set_callback(::System::Xml::Serialization::XmlSerializationFixupCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
inline void System::Xml::Serialization::XmlSerializationReader_Fixup::_ctor(::System::Object* o, ::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Serialization::XmlSerializationFixupCallback*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, callback, count);
}
inline ::System::Xml::Serialization::XmlSerializationFixupCallback* System::Xml::Serialization::XmlSerializationReader_Fixup::get_Callback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(), { "get_Callback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationFixupCallback*>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Xml::Serialization::XmlSerializationReader_Fixup::get_Ids() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(), { "get_Ids", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader_Fixup::get_Source() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(), { "get_Source", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationReader_Fixup*
System::Xml::Serialization::XmlSerializationReader_Fixup::New_ctor(::System::Object* o, ::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int32_t count) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReader_Fixup*>(o, callback, count));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReader_Fixup::XmlSerializationReader_Fixup() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::*)(::System::Array*, int32_t, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62fa5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup.get_Collection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::get_Collection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(), { "get_Collection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup.get_Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(), { "get_Index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fc17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Array*& System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Array* const& System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_set_list(::System::Array* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
constexpr int32_t& System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
inline void System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::_ctor(::System::Array* list, int32_t index, ::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, index, id);
}
inline ::System::Array* System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::get_Collection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(), { "get_Collection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method);
}
inline int32_t System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::get_Index() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(), { "get_Index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::get_Id() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup* System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::New_ctor(::System::Array* list, int32_t index,
                                                                                                                                                                  ::StringW id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>(list, index, id));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup::XmlSerializationReader_CollectionItemFixup() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlSerializer*)>(
    &::System::Xml::Serialization::XmlSerializationReader::Initialize)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x62f7af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                             { "Initialize", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Serialization::XmlSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.EnsureArrayList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Collections::ArrayList*)>(
    &::System::Xml::Serialization::XmlSerializationReader::EnsureArrayList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62f7e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "EnsureArrayList", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.EnsureHashtable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Collections::Hashtable*)>(
    &::System::Xml::Serialization::XmlSerializationReader::EnsureHashtable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62f7eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "EnsureHashtable", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f7f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.get_Document
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::get_Document)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x62f7f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "get_Document", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.get_Reader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::get_Reader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f7fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "get_Reader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*)>(
    &::System::Xml::Serialization::XmlSerializationReader::AddFixup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x62f7fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                             { "AddFixup", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::Serialization::XmlSerializationReader_Fixup*)>(
    &::System::Xml::Serialization::XmlSerializationReader::AddFixup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62f8064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "AddFixup", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*)>(
    &::System::Xml::Serialization::XmlSerializationReader::AddFixup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62f80a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                             { "AddFixup", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddReadCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(
    ::StringW, ::StringW, ::System::Type*, ::System::Xml::Serialization::XmlSerializationReadCallback*)>(&::System::Xml::Serialization::XmlSerializationReader::AddReadCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62f80ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "AddReadCallback",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(),
                                                                                               ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReadCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReader::AddTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62f81d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "AddTarget", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CurrentTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::CurrentTag)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x62f8278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "CurrentTag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CreateReadOnlyCollectionException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::CreateReadOnlyCollectionException)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62f843c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "CreateReadOnlyCollectionException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CreateUnknownConstantException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializationReader::CreateUnknownConstantException)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x62f8504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                             { "CreateUnknownConstantException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CreateUnknownNodeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::CreateUnknownNodeException)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x62f85dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "CreateUnknownNodeException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CreateUnknownTypeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Serialization::XmlSerializationReader::CreateUnknownTypeException)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x62f867c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "CreateUnknownTypeException", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.EnsureArrayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Array*, int32_t, ::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializationReader::EnsureArrayIndex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x62f87f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                             { "EnsureArrayIndex", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.GetNullAttr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::GetNullAttr)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x62f887c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "GetNullAttr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.GetTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::GetTarget)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62f892c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "GetTarget", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.TargetReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::TargetReady)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62f89f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "TargetReady", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.GetXsiType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::GetXsiType)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x62f8a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "GetXsiType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.InitCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::InitCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.InitIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::InitIDs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.IsXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::IsXmlnsAttribute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62f8c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "IsXmlnsAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ParseWsdlArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlAttribute*)>(
    &::System::Xml::Serialization::XmlSerializationReader::ParseWsdlArrayType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x62f8cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ParseWsdlArrayType", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadElementQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadElementQualifiedName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62f8e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadElementQualifiedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadEndElement)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62f9160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadNull)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62f9208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadNullableQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadNullableQualifiedName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f930c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadNullableQualifiedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadNullableString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadNullableString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62f9334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadNullableString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadReferencedElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x62f937c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadReferencedElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.GetCallbackInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo* (
    ::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Serialization::XmlSerializationReader::GetCallbackInfo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x62f96a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "GetCallbackInfo", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadReferencedElement)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x62f93d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "ReadReferencedElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)(::by_ref<::System::Object*>)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadList)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x62f9790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadList", {}, { ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencedElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadReferencedElements)> {
  constexpr static std::size_t size = 0xd54;
  constexpr static std::size_t addrs = 0x62fa5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadReferencedElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::by_ref<::StringW>)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62fb3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadReferencingElement", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::StringW, ::by_ref<::StringW>)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62fa5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                             { "ReadReferencingElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::StringW, bool, ::by_ref<::StringW>)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x62fb438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                            { "ReadReferencingElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::IXmlSerializable* (
    ::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::Serialization::IXmlSerializable*)>(&::System::Xml::Serialization::XmlSerializationReader::ReadSerializable)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x62fb768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "ReadSerializable", {}, { ::i2c::type_of<::System::Xml::Serialization::IXmlSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadTypedPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadTypedPrimitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62fb900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "ReadTypedPrimitive", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadTypedPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlQualifiedName*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadTypedPrimitive)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x62f9c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                             { "ReadTypedPrimitive", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::Serialization::XmlSerializationReader::*)(bool)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadXmlNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62fbb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadXmlNode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadXmlDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Xml::Serialization::XmlSerializationReader::*)(bool)>(
    &::System::Xml::Serialization::XmlSerializationReader::ReadXmlDocument)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x62fbbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadXmlDocument", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ShrinkArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Array*, int32_t, ::System::Type*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReader::ShrinkArray)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x62fbd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                { "ShrinkArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ToXmlQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::ToXmlQualifiedName)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x62f8f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ToXmlQualifiedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnknownAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Object*, ::System::Xml::XmlAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::UnknownAttribute)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x62fbda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                { "UnknownAttribute", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnknownElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Object*, ::System::Xml::XmlElement*, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::UnknownElement)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x62fbf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                { "UnknownElement", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnknownNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReader::UnknownNode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x62f92d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "UnknownNode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnknownNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Object*, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::UnknownNode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62fc070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "UnknownNode", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.OnUnknownNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlNode*, ::System::Object*, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationReader::OnUnknownNode)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x62fb908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                { "OnUnknownNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnreferencedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReader::UnreferencedObject)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x62fb33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                           { "UnreferencedObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDocument*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_document() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr ::System::Xml::XmlDocument* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_document() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_document(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___document = value;
}
constexpr ::System::Xml::XmlReader*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_fixups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixups;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_fixups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixups;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_fixups(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixups = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_collFixups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collFixups;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_collFixups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collFixups;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_collFixups(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collFixups = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_collItemFixups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collItemFixups;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_collItemFixups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collItemFixups;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_collItemFixups(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collItemFixups = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_typesCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typesCallbacks;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_typesCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typesCallbacks;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_typesCallbacks(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typesCallbacks = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_noIDTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noIDTargets;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_noIDTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noIDTargets;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_noIDTargets(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noIDTargets = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targets;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targets;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_targets(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targets = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_delayedListFixups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delayedListFixups;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_delayedListFixups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delayedListFixups;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_delayedListFixups(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delayedListFixups = value;
}
constexpr ::System::Xml::Serialization::XmlSerializer*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_eventSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSource;
}
constexpr ::System::Xml::Serialization::XmlSerializer* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_eventSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSource;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_eventSource(::System::Xml::Serialization::XmlSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventSource = value;
}
constexpr int32_t& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_delayedFixupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delayedFixupId;
}
constexpr int32_t const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_delayedFixupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delayedFixupId;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_delayedFixupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delayedFixupId = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_referencedObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencedObjects;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_referencedObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencedObjects;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_referencedObjects(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___referencedObjects = value;
}
constexpr int32_t& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_readCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readCount;
}
constexpr int32_t const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_readCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readCount;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_readCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readCount = value;
}
constexpr int32_t& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_whileIterationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whileIterationCount;
}
constexpr int32_t const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_whileIterationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whileIterationCount;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_whileIterationCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___whileIterationCount = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3SchemaNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w3SchemaNS;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3SchemaNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w3SchemaNS;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_w3SchemaNS(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w3SchemaNS = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w3InstanceNS;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w3InstanceNS;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_w3InstanceNS(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w3InstanceNS = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS2000() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w3InstanceNS2000;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS2000() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w3InstanceNS2000;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_w3InstanceNS2000(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w3InstanceNS2000 = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS1999() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w3InstanceNS1999;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS1999() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w3InstanceNS1999;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_w3InstanceNS1999(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w3InstanceNS1999 = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_soapNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soapNS;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_soapNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soapNS;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_soapNS(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___soapNS = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_wsdlNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wsdlNS;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_wsdlNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wsdlNS;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_wsdlNS(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wsdlNS = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_nullX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullX;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_nullX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullX;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_nullX(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nullX = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_nil() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nil;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_nil() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nil;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_nil(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nil = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_typeX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeX;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_typeX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeX;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_typeX(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeX = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_arrayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayType;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_arrayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayType;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_arrayType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayType = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_arrayQName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayQName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_arrayQName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayQName;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_arrayQName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayQName = value;
}
inline void System::Xml::Serialization::XmlSerializationReader::Initialize(::System::Xml::XmlReader* reader, ::System::Xml::Serialization::XmlSerializer* eventSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                           { "Initialize", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Serialization::XmlSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, eventSource);
}
inline ::System::Collections::ArrayList* System::Xml::Serialization::XmlSerializationReader::EnsureArrayList(::System::Collections::ArrayList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "EnsureArrayList", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, list);
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::XmlSerializationReader::EnsureHashtable(::System::Collections::Hashtable* hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "EnsureHashtable", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method, hash);
}
inline void System::Xml::Serialization::XmlSerializationReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Xml::Serialization::XmlSerializationReader::get_Document() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "get_Document", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Xml::Serialization::XmlSerializationReader::get_Reader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "get_Reader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddFixup(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup* fixup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                           { "AddFixup", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixup);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddFixup(::System::Xml::Serialization::XmlSerializationReader_Fixup* fixup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "AddFixup", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReader_Fixup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixup);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddFixup(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup* fixup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                           { "AddFixup", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixup);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddReadCallback(::StringW name, ::StringW ns, ::System::Type* type, ::System::Xml::Serialization::XmlSerializationReadCallback* read) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "AddReadCallback",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReadCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, type, read);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddTarget(::StringW id, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "AddTarget", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, o);
}
inline ::StringW System::Xml::Serialization::XmlSerializationReader::CurrentTag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "CurrentTag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationReader::CreateReadOnlyCollectionException(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "CreateReadOnlyCollectionException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, name);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationReader::CreateUnknownConstantException(::StringW value, ::System::Type* enumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                           { "CreateUnknownConstantException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, enumType);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationReader::CreateUnknownNodeException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "CreateUnknownNodeException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationReader::CreateUnknownTypeException(::System::Xml::XmlQualifiedName* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "CreateUnknownTypeException", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, type);
}
inline ::System::Array* System::Xml::Serialization::XmlSerializationReader::EnsureArrayIndex(::System::Array* a, int32_t index, ::System::Type* elementType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                           { "EnsureArrayIndex", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, a, index, elementType);
}
inline bool System::Xml::Serialization::XmlSerializationReader::GetNullAttr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "GetNullAttr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::GetTarget(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "GetTarget", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, id);
}
inline bool System::Xml::Serialization::XmlSerializationReader::TargetReady(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "TargetReady", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReader::GetXsiType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "GetXsiType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader::InitCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader::InitIDs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlSerializationReader::IsXmlnsAttribute(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "IsXmlnsAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void System::Xml::Serialization::XmlSerializationReader::ParseWsdlArrayType(::System::Xml::XmlAttribute* attr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ParseWsdlArrayType", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attr);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReader::ReadElementQualifiedName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadElementQualifiedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader::ReadEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlSerializationReader::ReadNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReader::ReadNullableQualifiedName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadNullableQualifiedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlSerializationReader::ReadNullableString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadNullableString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencedElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadReferencedElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo* System::Xml::Serialization::XmlSerializationReader::GetCallbackInfo(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "GetCallbackInfo", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo*>(this, ___internal_method, qname);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencedElement(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "ReadReferencedElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, ns);
}
inline bool System::Xml::Serialization::XmlSerializationReader::ReadList(::by_ref<::System::Object*> resultList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadList", {}, { ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, resultList);
}
inline void System::Xml::Serialization::XmlSerializationReader::ReadReferencedElements() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadReferencedElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement(::by_ref<::StringW> fixupReference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadReferencingElement", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, fixupReference);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement(::StringW name, ::StringW ns, ::by_ref<::StringW> fixupReference) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                           { "ReadReferencingElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, ns, fixupReference);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement(::StringW name, ::StringW ns, bool elementCanBeType, ::by_ref<::StringW> fixupReference) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                       { "ReadReferencingElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, ns, elementCanBeType, fixupReference);
}
inline ::System::Xml::Serialization::IXmlSerializable* System::Xml::Serialization::XmlSerializationReader::ReadSerializable(::System::Xml::Serialization::IXmlSerializable* serializable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "ReadSerializable", {}, { ::i2c::type_of<::System::Xml::Serialization::IXmlSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::IXmlSerializable*>(this, ___internal_method, serializable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadTypedPrimitive(::System::Xml::XmlQualifiedName* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "ReadTypedPrimitive", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadTypedPrimitive(::System::Xml::XmlQualifiedName* qname, bool reportUnknown) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                           { "ReadTypedPrimitive", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, qname, reportUnknown);
}
inline ::System::Xml::XmlNode* System::Xml::Serialization::XmlSerializationReader::ReadXmlNode(bool wrapped) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadXmlNode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, wrapped);
}
inline ::System::Xml::XmlDocument* System::Xml::Serialization::XmlSerializationReader::ReadXmlDocument(bool wrapped) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ReadXmlDocument", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method, wrapped);
}
inline ::System::Array* System::Xml::Serialization::XmlSerializationReader::ShrinkArray(::System::Array* a, int32_t length, ::System::Type* elementType, bool isNullable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                              { "ShrinkArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, a, length, elementType, isNullable);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReader::ToXmlQualifiedName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "ToXmlQualifiedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnknownAttribute(::System::Object* o, ::System::Xml::XmlAttribute* attr, ::StringW qnames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                              { "UnknownAttribute", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, attr, qnames);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnknownElement(::System::Object* o, ::System::Xml::XmlElement* elem, ::StringW qnames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                              { "UnknownElement", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, elem, qnames);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnknownNode(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(), { "UnknownNode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnknownNode(::System::Object* o, ::StringW qnames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "UnknownNode", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, qnames);
}
inline void System::Xml::Serialization::XmlSerializationReader::OnUnknownNode(::System::Xml::XmlNode* node, ::System::Object* o, ::StringW qnames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                           { "OnUnknownNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, o, qnames);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnreferencedObject(::StringW id, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReader*>(),
                                                                                         { "UnreferencedObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, o);
}
inline ::System::Xml::Serialization::XmlSerializationReader* System::Xml::Serialization::XmlSerializationReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReader*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReader::XmlSerializationReader() {}
