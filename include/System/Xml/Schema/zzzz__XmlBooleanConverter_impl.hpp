#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlBooleanConverter.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlBooleanConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlBooleanConverter::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlBooleanConverter::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x624e67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(&::System::Xml::Schema::XmlBooleanConverter::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x624e6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { "Create", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlBooleanConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBooleanConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x624e744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlBooleanConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBooleanConverter::ToBoolean)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x624e7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBooleanConverter::*)(bool)>(&::System::Xml::Schema::XmlBooleanConverter::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x624ea84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBooleanConverter::*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlBooleanConverter::ToString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x624eae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBooleanConverter::*)(bool, ::System::Type*)>(
    &::System::Xml::Schema::XmlBooleanConverter::ChangeType)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x624ed4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBooleanConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlBooleanConverter::ChangeType)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x624f018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBooleanConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBooleanConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlBooleanConverter::ChangeType)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x624f2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 61 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlBooleanConverter::_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaType);
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlBooleanConverter::Create(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), { "Create", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*>(nullptr, ___internal_method, schemaType);
}
inline bool System::Xml::Schema::XmlBooleanConverter::ToBoolean(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlBooleanConverter::ToBoolean(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBooleanConverter::ToString(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBooleanConverter::ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlBooleanConverter::ChangeType(bool value, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlBooleanConverter::ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlBooleanConverter::ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBooleanConverter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Xml::Schema::XmlBooleanConverter* System::Xml::Schema::XmlBooleanConverter::New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlBooleanConverter*>(schemaType));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlBooleanConverter::XmlBooleanConverter() {}
