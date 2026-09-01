#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SpecialTypeDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SpecialTypeDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__SpecialTypeDataContract_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper::*)(
    ::System::Type*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6160a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper::_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name,
                                                                                                                 ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, name, ns);
}
inline ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper*
System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper::New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name,
                                                                                                        ::System::Xml::XmlDictionaryString* ns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper*>(type, name, ns));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::SpecialTypeDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SpecialTypeDataContract::*)(
    ::System::Type*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::SpecialTypeDataContract::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61609d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SpecialTypeDataContract*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SpecialTypeDataContract.get_IsBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::SpecialTypeDataContract::*)()>(
    &::System::Runtime::Serialization::SpecialTypeDataContract::get_IsBuiltInDataContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6160b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SpecialTypeDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SpecialTypeDataContract*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper*& System::Runtime::Serialization::SpecialTypeDataContract::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper* const&
System::Runtime::Serialization::SpecialTypeDataContract::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void
System::Runtime::Serialization::SpecialTypeDataContract::__cordl_internal_set_helper(::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Runtime::Serialization::SpecialTypeDataContract::_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SpecialTypeDataContract*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, name, ns);
}
inline bool System::Runtime::Serialization::SpecialTypeDataContract::get_IsBuiltInDataContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SpecialTypeDataContract*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SpecialTypeDataContract* System::Runtime::Serialization::SpecialTypeDataContract::New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name,
                                                                                                                                    ::System::Xml::XmlDictionaryString* ns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SpecialTypeDataContract*>(type, name, ns));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SpecialTypeDataContract::SpecialTypeDataContract() {}
