#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/IAttributeProvider.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IAttributeProvider.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Attribute*>* (::Newtonsoft::Json::Serialization::IAttributeProvider::*)(bool)>(
    &::Newtonsoft::Json::Serialization::IAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IAttributeProvider*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::IAttributeProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IAttributeProvider.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Attribute*>* (
    ::Newtonsoft::Json::Serialization::IAttributeProvider::*)(::System::Type*, bool)>(&::Newtonsoft::Json::Serialization::IAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IAttributeProvider*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::IAttributeProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* Newtonsoft::Json::Serialization::IAttributeProvider::GetAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IAttributeProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Attribute*>*>(this, ___internal_method, inherit);
}
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* Newtonsoft::Json::Serialization::IAttributeProvider::GetAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IAttributeProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Attribute*>*>(this, ___internal_method, attributeType, inherit);
}
