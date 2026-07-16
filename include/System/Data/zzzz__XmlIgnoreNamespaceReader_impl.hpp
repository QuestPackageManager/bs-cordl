#pragma once
// IWYU pragma private; include "System/Data/XmlIgnoreNamespaceReader.hpp"
#include "System/Xml/zzzz__XmlNodeReader_impl.hpp"
#include "System/Data/zzzz__XmlIgnoreNamespaceReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
//  Writing Method size for method: ::System::Data::XmlIgnoreNamespaceReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlIgnoreNamespaceReader::*)(::System::Xml::XmlDocument*, ::ArrayW<::StringW>)>(
    &::System::Data::XmlIgnoreNamespaceReader::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6062b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlIgnoreNamespaceReader*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlIgnoreNamespaceReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlIgnoreNamespaceReader::*)()>(&::System::Data::XmlIgnoreNamespaceReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6062be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::XmlIgnoreNamespaceReader*>(), { ::i2c::class_of<::System::Data::XmlIgnoreNamespaceReader*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlIgnoreNamespaceReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlIgnoreNamespaceReader::*)()>(&::System::Data::XmlIgnoreNamespaceReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6062cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::XmlIgnoreNamespaceReader*>(), { ::i2c::class_of<::System::Data::XmlIgnoreNamespaceReader*>(), 47 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Data::XmlIgnoreNamespaceReader::__cordl_internal_get__namespacesToIgnore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespacesToIgnore;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Data::XmlIgnoreNamespaceReader::__cordl_internal_get__namespacesToIgnore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespacesToIgnore;
}
constexpr void System::Data::XmlIgnoreNamespaceReader::__cordl_internal_set__namespacesToIgnore(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____namespacesToIgnore = value;
}
inline void System::Data::XmlIgnoreNamespaceReader::_ctor(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW> namespacesToIgnore) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlIgnoreNamespaceReader*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xdoc, namespacesToIgnore);
}
inline bool System::Data::XmlIgnoreNamespaceReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::XmlIgnoreNamespaceReader*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::XmlIgnoreNamespaceReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::XmlIgnoreNamespaceReader*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::XmlIgnoreNamespaceReader* System::Data::XmlIgnoreNamespaceReader::New_ctor(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW> namespacesToIgnore) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlIgnoreNamespaceReader*>(xdoc, namespacesToIgnore));
}
// Ctor Parameters []
constexpr ::System::Data::XmlIgnoreNamespaceReader::XmlIgnoreNamespaceReader() {}
