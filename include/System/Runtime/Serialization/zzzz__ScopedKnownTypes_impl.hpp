#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ScopedKnownTypes.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ScopedKnownTypes_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ScopedKnownTypes.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ScopedKnownTypes::*)(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*)>(&::System::Runtime::Serialization::ScopedKnownTypes::Push)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6160810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ScopedKnownTypes>(),
                            { "Push", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ScopedKnownTypes.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ScopedKnownTypes::*)()>(&::System::Runtime::Serialization::ScopedKnownTypes::Pop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x616091c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ScopedKnownTypes>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ScopedKnownTypes.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::ScopedKnownTypes::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Runtime::Serialization::ScopedKnownTypes::GetDataContract)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x616092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ScopedKnownTypes>(), { "GetDataContract", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ScopedKnownTypes::Push(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* dataContractDictionary) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ScopedKnownTypes>(),
                          { "Push", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dataContractDictionary);
}
inline void System::Runtime::Serialization::ScopedKnownTypes::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ScopedKnownTypes>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::ScopedKnownTypes::GetDataContract(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ScopedKnownTypes>(), { "GetDataContract", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(*this, ___internal_method, qname);
}
// Ctor Parameters [CppParam { name: "dataContractDictionaries", ty:
// "::ArrayW<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Runtime::Serialization::DataContract*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::ScopedKnownTypes::ScopedKnownTypes(
    ::ArrayW<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> dataContractDictionaries, int32_t count) noexcept {
  this->dataContractDictionaries = dataContractDictionaries;
  this->count = count;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ScopedKnownTypes::ScopedKnownTypes() {}
