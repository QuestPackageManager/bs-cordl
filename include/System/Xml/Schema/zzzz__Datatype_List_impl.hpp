#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_List.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_List_def.hpp"
#include "System/Xml/Schema/zzzz__DatatypeImplementation_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.CreateValueConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlValueConverter* (::System::Xml::Schema::Datatype_List::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::Datatype_List::CreateValueConverter)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x61c2b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_List::*)(::System::Xml::Schema::DatatypeImplementation*, int32_t)>(
    &::System::Xml::Schema::Datatype_List::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61c1d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::DatatypeImplementation*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::Datatype_List::*)(::System::Object*, ::System::Object*)>(&::System::Xml::Schema::Datatype_List::Compare)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x61c2e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::Datatype_List::*)()>(&::System::Xml::Schema::Datatype_List::get_ValueType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61c30b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.get_TokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlTokenizedType (::System::Xml::Schema::Datatype_List::*)()>(&::System::Xml::Schema::Datatype_List::get_TokenizedType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61c30c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.get_ListValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::Datatype_List::*)()>(&::System::Xml::Schema::Datatype_List::get_ListValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61c30e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.get_FacetsChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::FacetsChecker* (::System::Xml::Schema::Datatype_List::*)()>(&::System::Xml::Schema::Datatype_List::get_FacetsChecker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c3104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_List::*)()>(&::System::Xml::Schema::Datatype_List::get_TypeCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61c3160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.get_ValidRestrictionFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::RestrictionFlags (::System::Xml::Schema::Datatype_List::*)()>(
    &::System::Xml::Schema::Datatype_List::get_ValidRestrictionFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c317c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.get_ItemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::DatatypeImplementation* (::System::Xml::Schema::Datatype_List::*)()>(
    &::System::Xml::Schema::Datatype_List::get_ItemType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c3184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { "get_ItemType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_List::*)(::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_List::TryParseValue)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x61c318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_List.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_List::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_List::TryParseValue)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x61c375c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 16 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::DatatypeImplementation*& System::Xml::Schema::Datatype_List::__cordl_internal_get_itemType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemType;
}
constexpr ::System::Xml::Schema::DatatypeImplementation* const& System::Xml::Schema::Datatype_List::__cordl_internal_get_itemType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemType;
}
constexpr void System::Xml::Schema::Datatype_List::__cordl_internal_set_itemType(::System::Xml::Schema::DatatypeImplementation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemType = value;
}
constexpr int32_t& System::Xml::Schema::Datatype_List::__cordl_internal_get_minListSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minListSize;
}
constexpr int32_t const& System::Xml::Schema::Datatype_List::__cordl_internal_get_minListSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minListSize;
}
constexpr void System::Xml::Schema::Datatype_List::__cordl_internal_set_minListSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minListSize = value;
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::Datatype_List::CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*>(this, ___internal_method, schemaType);
}
inline void System::Xml::Schema::Datatype_List::_ctor(::System::Xml::Schema::DatatypeImplementation* type, int32_t minListSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::DatatypeImplementation*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, minListSize);
}
inline int32_t System::Xml::Schema::Datatype_List::Compare(::System::Object* value1, ::System::Object* value2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value1, value2);
}
inline ::System::Type* System::Xml::Schema::Datatype_List::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Xml::XmlTokenizedType System::Xml::Schema::Datatype_List::get_TokenizedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTokenizedType>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Schema::Datatype_List::get_ListValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_List::get_FacetsChecker() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::FacetsChecker*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_List::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::System::Xml::Schema::RestrictionFlags System::Xml::Schema::Datatype_List::get_ValidRestrictionFlags() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::RestrictionFlags>(this, ___internal_method);
}
inline ::System::Xml::Schema::DatatypeImplementation* System::Xml::Schema::Datatype_List::get_ItemType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), { "get_ItemType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::DatatypeImplementation*>(this, ___internal_method);
}
inline ::System::Exception* System::Xml::Schema::Datatype_List::TryParseValue(::System::Object* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* namespaceResolver,
                                                                              ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, nameTable, namespaceResolver, typedValue);
}
inline ::System::Exception* System::Xml::Schema::Datatype_List::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                              ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_List*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline ::System::Xml::Schema::Datatype_List* System::Xml::Schema::Datatype_List::New_ctor(::System::Xml::Schema::DatatypeImplementation* type, int32_t minListSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_List*>(type, minListSize));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_List::Datatype_List() {}
