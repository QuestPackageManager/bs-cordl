#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlDataContractInterpreter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataContractInterpreter_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataContract_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContractInterpreter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataContractInterpreter::*)(::System::Runtime::Serialization::XmlDataContract*)>(
    &::System::Runtime::Serialization::XmlDataContractInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x617d030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContractInterpreter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContractInterpreter.CreateXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::IXmlSerializable* (::System::Runtime::Serialization::XmlDataContractInterpreter::*)()>(
    &::System::Runtime::Serialization::XmlDataContractInterpreter::CreateXmlSerializable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x617d038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContractInterpreter*>(), { "CreateXmlSerializable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContractInterpreter.GetConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::XmlDataContractInterpreter::*)()>(
    &::System::Runtime::Serialization::XmlDataContractInterpreter::GetConstructor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x617d170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContractInterpreter*>(), { "GetConstructor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlDataContract*& System::Runtime::Serialization::XmlDataContractInterpreter::__cordl_internal_get_contract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contract;
}
constexpr ::System::Runtime::Serialization::XmlDataContract* const& System::Runtime::Serialization::XmlDataContractInterpreter::__cordl_internal_get_contract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contract;
}
constexpr void System::Runtime::Serialization::XmlDataContractInterpreter::__cordl_internal_set_contract(::System::Runtime::Serialization::XmlDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contract = value;
}
inline void System::Runtime::Serialization::XmlDataContractInterpreter::_ctor(::System::Runtime::Serialization::XmlDataContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContractInterpreter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contract);
}
inline ::System::Xml::Serialization::IXmlSerializable* System::Runtime::Serialization::XmlDataContractInterpreter::CreateXmlSerializable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContractInterpreter*>(), { "CreateXmlSerializable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::IXmlSerializable*>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::XmlDataContractInterpreter::GetConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContractInterpreter*>(), { "GetConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlDataContractInterpreter* System::Runtime::Serialization::XmlDataContractInterpreter::New_ctor(::System::Runtime::Serialization::XmlDataContract* contract) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlDataContractInterpreter*>(contract));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlDataContractInterpreter::XmlDataContractInterpreter() {}
