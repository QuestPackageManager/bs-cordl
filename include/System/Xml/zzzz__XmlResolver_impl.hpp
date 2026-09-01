#pragma once
// IWYU pragma private; include "System\Xml\XmlResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlResolver.GetEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(&::System::Xml::XmlResolver::GetEntity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlResolver*>(), { ::i2c::class_of<::System::Xml::XmlResolver*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlResolver.ResolveUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Xml::XmlResolver::*)(::System::Uri*, ::StringW)>(&::System::Xml::XmlResolver::ResolveUri)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x62e7234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlResolver*>(), { ::i2c::class_of<::System::Xml::XmlResolver*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlResolver.SupportsType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlResolver::*)(::System::Uri*, ::System::Type*)>(&::System::Xml::XmlResolver::SupportsType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x62e7400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlResolver*>(), { ::i2c::class_of<::System::Xml::XmlResolver*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlResolver.GetEntityAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (::System::Xml::XmlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(
    &::System::Xml::XmlResolver::GetEntityAsync)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62e7510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlResolver*>(), { ::i2c::class_of<::System::Xml::XmlResolver*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlResolver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlResolver::*)()>(&::System::Xml::XmlResolver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62e7548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlResolver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Xml::XmlResolver::GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlResolver*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, absoluteUri, role, ofObjectToReturn);
}
inline ::System::Uri* System::Xml::XmlResolver::ResolveUri(::System::Uri* baseUri, ::StringW relativeUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlResolver*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, baseUri, relativeUri);
}
inline bool System::Xml::XmlResolver::SupportsType(::System::Uri* absoluteUri, ::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlResolver*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, absoluteUri, type);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* System::Xml::XmlResolver::GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlResolver*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, absoluteUri, role, ofObjectToReturn);
}
inline void System::Xml::XmlResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlResolver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlResolver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlResolver*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlResolver::XmlResolver() {}
