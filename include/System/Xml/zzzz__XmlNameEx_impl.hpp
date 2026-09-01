#pragma once
// IWYU pragma private; include "System\Xml\XmlNameEx.hpp"
#include "System/Xml/zzzz__XmlName_impl.hpp"
#include "System/Xml/zzzz__XmlNameEx_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlNameEx._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNameEx::*)(::StringW, ::StringW, ::StringW, int32_t, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*,
                                                                                          ::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::XmlNameEx::_ctor)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x62c617c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlName*>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.get_Validity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaValidity (::System::Xml::XmlNameEx::*)()>(&::System::Xml::XmlNameEx::get_Validity)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62c6608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNameEx::*)()>(&::System::Xml::XmlNameEx::get_IsDefault)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62c6634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.get_IsNil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNameEx::*)()>(&::System::Xml::XmlNameEx::get_IsNil)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62c6640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::XmlNameEx::*)()>(&::System::Xml::XmlNameEx::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c664c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.get_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XmlNameEx::*)()>(&::System::Xml::XmlNameEx::get_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.get_SchemaElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::XmlNameEx::*)()>(&::System::Xml::XmlNameEx::get_SchemaElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62c665c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.get_SchemaAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (::System::Xml::XmlNameEx::*)()>(&::System::Xml::XmlNameEx::get_SchemaAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62c66dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.SetValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNameEx::*)(::System::Xml::Schema::XmlSchemaValidity)>(&::System::Xml::XmlNameEx::SetValidity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62c65b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { "SetValidity", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidity>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.SetIsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNameEx::*)(bool)>(&::System::Xml::XmlNameEx::SetIsDefault)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c65c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { "SetIsDefault", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.SetIsNil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNameEx::*)(bool)>(&::System::Xml::XmlNameEx::SetIsNil)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c65e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { "SetIsNil", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNameEx.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNameEx::*)(::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::XmlNameEx::Equals)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x62c675c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 18 }));
    return ___internal_method;
  }
};
constexpr uint8_t& System::Xml::XmlNameEx::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr uint8_t const& System::Xml::XmlNameEx::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Xml::XmlNameEx::__cordl_internal_set_flags(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& System::Xml::XmlNameEx::__cordl_internal_get_memberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberType;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& System::Xml::XmlNameEx::__cordl_internal_get_memberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberType;
}
constexpr void System::Xml::XmlNameEx::__cordl_internal_set_memberType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberType = value;
}
constexpr ::System::Xml::Schema::XmlSchemaType*& System::Xml::XmlNameEx::__cordl_internal_get_schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr ::System::Xml::Schema::XmlSchemaType* const& System::Xml::XmlNameEx::__cordl_internal_get_schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr void System::Xml::XmlNameEx::__cordl_internal_set_schemaType(::System::Xml::Schema::XmlSchemaType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaType = value;
}
constexpr ::System::Object*& System::Xml::XmlNameEx::__cordl_internal_get_decl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decl;
}
constexpr ::System::Object* const& System::Xml::XmlNameEx::__cordl_internal_get_decl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decl;
}
constexpr void System::Xml::XmlNameEx::__cordl_internal_set_decl(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decl = value;
}
inline void System::Xml::XmlNameEx::_ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next,
                                          ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlName*>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns, hashCode, ownerDoc, next, schemaInfo);
}
inline ::System::Xml::Schema::XmlSchemaValidity System::Xml::XmlNameEx::get_Validity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaValidity>(this, ___internal_method);
}
inline bool System::Xml::XmlNameEx::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNameEx::get_IsNil() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::XmlNameEx::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XmlNameEx::get_SchemaType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::XmlNameEx::get_SchemaElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::XmlNameEx::get_SchemaAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*>(this, ___internal_method);
}
inline void System::Xml::XmlNameEx::SetValidity(::System::Xml::Schema::XmlSchemaValidity value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { "SetValidity", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidity>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlNameEx::SetIsDefault(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { "SetIsDefault", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlNameEx::SetIsNil(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNameEx*>(), { "SetIsNil", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlNameEx::Equals(::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNameEx*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schemaInfo);
}
inline ::System::Xml::XmlNameEx* System::Xml::XmlNameEx::New_ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc,
                                                                  ::System::Xml::XmlName* next, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlNameEx*>(prefix, localName, ns, hashCode, ownerDoc, next, schemaInfo));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNameEx::XmlNameEx() {}
