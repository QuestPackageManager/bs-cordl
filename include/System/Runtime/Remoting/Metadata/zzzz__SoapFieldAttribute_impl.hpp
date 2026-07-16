#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Metadata/SoapFieldAttribute.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapFieldAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapFieldAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3bf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapFieldAttribute.get_XmlElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapFieldAttribute::get_XmlElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3bf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(), { "get_XmlElementName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapFieldAttribute.IsInteropXmlElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapFieldAttribute::IsInteropXmlElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3bf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(), { "IsInteropXmlElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapFieldAttribute.SetReflectionObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Metadata::SoapFieldAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b3bf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_get__elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementName;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_get__elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementName;
}
constexpr void System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_set__elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementName = value;
}
constexpr bool& System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_get__isElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isElement;
}
constexpr bool const& System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_get__isElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isElement;
}
constexpr void System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_set__isElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isElement = value;
}
inline void System::Runtime::Remoting::Metadata::SoapFieldAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Metadata::SoapFieldAttribute::get_XmlElementName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(), { "get_XmlElementName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Metadata::SoapFieldAttribute::IsInteropXmlElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(), { "IsInteropXmlElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Metadata::SoapFieldAttribute::SetReflectionObject(::System::Object* reflectionObject) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reflectionObject);
}
inline ::System::Runtime::Remoting::Metadata::SoapFieldAttribute* System::Runtime::Remoting::Metadata::SoapFieldAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Metadata::SoapFieldAttribute::SoapFieldAttribute() {}
