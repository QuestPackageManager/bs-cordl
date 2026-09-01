#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_boolean.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_boolean_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaWhiteSpace_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.CreateValueConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlValueConverter* (::System::Xml::Schema::Datatype_boolean::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::Datatype_boolean::CreateValueConverter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61c49d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.get_FacetsChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::FacetsChecker* (::System::Xml::Schema::Datatype_boolean::*)()>(
    &::System::Xml::Schema::Datatype_boolean::get_FacetsChecker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c49e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_boolean::*)()>(&::System::Xml::Schema::Datatype_boolean::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c4a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::Datatype_boolean::*)()>(&::System::Xml::Schema::Datatype_boolean::get_ValueType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c4a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.get_ListValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::Datatype_boolean::*)()>(&::System::Xml::Schema::Datatype_boolean::get_ListValueType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c4aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.get_BuiltInWhitespaceFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaWhiteSpace (::System::Xml::Schema::Datatype_boolean::*)()>(
    &::System::Xml::Schema::Datatype_boolean::get_BuiltInWhitespaceFacet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c4afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.get_ValidRestrictionFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::RestrictionFlags (::System::Xml::Schema::Datatype_boolean::*)()>(
    &::System::Xml::Schema::Datatype_boolean::get_ValidRestrictionFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c4b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::Datatype_boolean::*)(::System::Object*, ::System::Object*)>(&::System::Xml::Schema::Datatype_boolean::Compare)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61c4b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_boolean::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_boolean::TryParseValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61c4b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_boolean._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_boolean::*)()>(&::System::Xml::Schema::Datatype_boolean::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61bf8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Datatype_boolean::setStaticF_atomicValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "atomicValueType", ::System::Xml::Schema::Datatype_boolean*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::Datatype_boolean::getStaticF_atomicValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "atomicValueType", ::System::Xml::Schema::Datatype_boolean*>();
}
inline void System::Xml::Schema::Datatype_boolean::setStaticF_listValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "listValueType", ::System::Xml::Schema::Datatype_boolean*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::Datatype_boolean::getStaticF_listValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "listValueType", ::System::Xml::Schema::Datatype_boolean*>();
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::Datatype_boolean::CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*>(this, ___internal_method, schemaType);
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_boolean::get_FacetsChecker() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::FacetsChecker*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_boolean::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Schema::Datatype_boolean::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Schema::Datatype_boolean::get_ListValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaWhiteSpace System::Xml::Schema::Datatype_boolean::get_BuiltInWhitespaceFacet() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaWhiteSpace>(this, ___internal_method);
}
inline ::System::Xml::Schema::RestrictionFlags System::Xml::Schema::Datatype_boolean::get_ValidRestrictionFlags() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::RestrictionFlags>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::Datatype_boolean::Compare(::System::Object* value1, ::System::Object* value2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value1, value2);
}
inline ::System::Exception* System::Xml::Schema::Datatype_boolean::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                                 ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline void System::Xml::Schema::Datatype_boolean::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_boolean*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_boolean* System::Xml::Schema::Datatype_boolean::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_boolean*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_boolean::Datatype_boolean() {}
