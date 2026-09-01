#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Metadata\SoapAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3e244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.get_UseAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapAttribute::get_UseAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3e248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.get_XmlNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapAttribute::get_XmlNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3e250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.SetReflectionObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapAttribute::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Metadata::SoapAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3e258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(), 9 }));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_get__useAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAttribute;
}
constexpr bool const& System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_get__useAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAttribute;
}
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_set__useAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useAttribute = value;
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_get_ProtXmlNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProtXmlNamespace;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_get_ProtXmlNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProtXmlNamespace;
}
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_set_ProtXmlNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ProtXmlNamespace = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_get_ReflectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReflectInfo;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_get_ReflectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReflectInfo;
}
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__cordl_internal_set_ReflectInfo(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReflectInfo = value;
}
inline void System::Runtime::Remoting::Metadata::SoapAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Metadata::SoapAttribute::get_UseAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Metadata::SoapAttribute::get_XmlNamespace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Metadata::SoapAttribute::SetReflectionObject(::System::Object* reflectionObject) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapAttribute*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reflectionObject);
}
inline ::System::Runtime::Remoting::Metadata::SoapAttribute* System::Runtime::Remoting::Metadata::SoapAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Metadata::SoapAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Metadata::SoapAttribute::SoapAttribute() {}
