#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ActivatedClientTypeEntry.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Remoting::ActivatedClientTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5b1eaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ApplicationUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1eb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), { "get_ApplicationUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ContextAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*> (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1eba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), { "get_ContextAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1eba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), { "get_ObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedClientTypeEntry::ToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b1ebb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_get_applicationUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applicationUrl;
}
constexpr ::StringW const& System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_get_applicationUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applicationUrl;
}
constexpr void System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_set_applicationUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___applicationUrl = value;
}
constexpr ::System::Type*& System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_get_obj_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr ::System::Type* const& System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_get_obj_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr void System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_set_obj_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj_type = value;
}
inline void System::Runtime::Remoting::ActivatedClientTypeEntry::_ctor(::StringW typeName, ::StringW assemblyName, ::StringW appUrl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, assemblyName, appUrl);
}
inline ::StringW System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), { "get_ApplicationUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*> System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), { "get_ContextAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*>>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), { "get_ObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::ActivatedClientTypeEntry::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ActivatedClientTypeEntry* System::Runtime::Remoting::ActivatedClientTypeEntry::New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW appUrl) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(typeName, assemblyName, appUrl));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ActivatedClientTypeEntry::ActivatedClientTypeEntry() {}
