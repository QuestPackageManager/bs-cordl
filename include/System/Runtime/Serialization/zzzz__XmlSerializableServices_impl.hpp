#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlSerializableServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlSerializableServices_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableServices.ReadNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XmlNode*> (*)(::System::Xml::XmlReader*)>(&::System::Runtime::Serialization::XmlSerializableServices::ReadNodes)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x61783a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlSerializableServices*>(), { "ReadNodes", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableServices.IsValidAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlReader*)>(&::System::Runtime::Serialization::XmlSerializableServices::IsValidAttribute)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6178728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlSerializableServices*>(), { "IsValidAttribute", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XmlSerializableServices::setStaticF_ReadNodesMethodName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ReadNodesMethodName", ::System::Runtime::Serialization::XmlSerializableServices*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Serialization::XmlSerializableServices::getStaticF_ReadNodesMethodName() {
  return ::cordl_internals::getStaticField<::StringW, "ReadNodesMethodName", ::System::Runtime::Serialization::XmlSerializableServices*>();
}
inline void System::Runtime::Serialization::XmlSerializableServices::setStaticF_WriteNodesMethodName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "WriteNodesMethodName", ::System::Runtime::Serialization::XmlSerializableServices*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Serialization::XmlSerializableServices::getStaticF_WriteNodesMethodName() {
  return ::cordl_internals::getStaticField<::StringW, "WriteNodesMethodName", ::System::Runtime::Serialization::XmlSerializableServices*>();
}
inline void System::Runtime::Serialization::XmlSerializableServices::setStaticF_AddDefaultSchemaMethodName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "AddDefaultSchemaMethodName", ::System::Runtime::Serialization::XmlSerializableServices*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Serialization::XmlSerializableServices::getStaticF_AddDefaultSchemaMethodName() {
  return ::cordl_internals::getStaticField<::StringW, "AddDefaultSchemaMethodName", ::System::Runtime::Serialization::XmlSerializableServices*>();
}
inline ::ArrayW<::System::Xml::XmlNode*> System::Runtime::Serialization::XmlSerializableServices::ReadNodes(::System::Xml::XmlReader* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlSerializableServices*>(), { "ReadNodes", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlNode*>>(nullptr, ___internal_method, xmlReader);
}
inline bool System::Runtime::Serialization::XmlSerializableServices::IsValidAttribute(::System::Xml::XmlReader* xmlReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlSerializableServices*>(), { "IsValidAttribute", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xmlReader);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlSerializableServices::XmlSerializableServices() {}
