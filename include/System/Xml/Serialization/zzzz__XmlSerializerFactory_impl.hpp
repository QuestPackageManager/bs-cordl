#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializerFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerFactory_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeOverrides_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializer_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializerFactory::*)()>(&::System::Xml::Serialization::XmlSerializerFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6311cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerFactory.CreateSerializer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializer* (::System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6311cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerFactory*>(), { "CreateSerializer", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerFactory.CreateSerializer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializer* (
    ::System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*)>(&::System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6311f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerFactory*>(),
                                                             { "CreateSerializer", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerFactory.CreateSerializer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializer* (
    ::System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::ArrayW<::System::Type*>,
                                                           ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(&::System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6311cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerFactory*>(),
                                                { "CreateSerializer",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributeOverrides*>(),
                                                    ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlSerializerFactory::setStaticF_serializersBySource(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "serializersBySource", ::System::Xml::Serialization::XmlSerializerFactory*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::XmlSerializerFactory::getStaticF_serializersBySource() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "serializersBySource", ::System::Xml::Serialization::XmlSerializerFactory*>();
}
inline void System::Xml::Serialization::XmlSerializerFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Xml::Serialization::XmlSerializerFactory::CreateSerializer(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerFactory*>(), { "CreateSerializer", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*>(this, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Xml::Serialization::XmlSerializerFactory::CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerFactory*>(),
                                                           { "CreateSerializer", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*>(this, ___internal_method, type, root);
}
inline ::System::Xml::Serialization::XmlSerializer*
System::Xml::Serialization::XmlSerializerFactory::CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides, ::ArrayW<::System::Type*> extraTypes,
                                                                   ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerFactory*>(),
                                              { "CreateSerializer",
                                                {},
                                                { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributeOverrides*>(),
                                                  ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*>(this, ___internal_method, type, overrides, extraTypes, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlSerializerFactory* System::Xml::Serialization::XmlSerializerFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializerFactory*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializerFactory::XmlSerializerFactory() {}
