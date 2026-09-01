#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_NCName.hpp"
#include "System/Xml/Schema/zzzz__Datatype_Name_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_NCName_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_NCName.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_NCName::*)()>(&::System::Xml::Schema::Datatype_NCName::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c7b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_NCName*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_NCName*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_NCName.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_NCName::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_NCName::TryParseValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61c7b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_NCName*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_NCName*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_NCName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_NCName::*)()>(&::System::Xml::Schema::Datatype_NCName::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61c0120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_NCName*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_NCName::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_NCName*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::System::Exception* System::Xml::Schema::Datatype_NCName::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                                ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_NCName*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline void System::Xml::Schema::Datatype_NCName::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_NCName*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_NCName* System::Xml::Schema::Datatype_NCName::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_NCName*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_NCName::Datatype_NCName() {}
