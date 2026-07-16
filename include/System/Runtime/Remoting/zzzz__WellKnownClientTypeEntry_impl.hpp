#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/WellKnownClientTypeEntry.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownClientTypeEntry_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Remoting::WellKnownClientTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b2eb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry.get_ApplicationUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownClientTypeEntry::get_ApplicationUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2ec74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(), { "get_ApplicationUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry.get_ObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2ec7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(), { "get_ObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry.get_ObjectUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(&::System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2ec84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(), { "get_ObjectUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(&::System::Runtime::Remoting::WellKnownClientTypeEntry::ToString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b2ec8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_obj_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr ::System::Type* const& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_obj_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr void System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_set_obj_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj_type = value;
}
constexpr ::StringW& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_obj_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_url;
}
constexpr ::StringW const& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_obj_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_url;
}
constexpr void System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_set_obj_url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj_url = value;
}
constexpr ::StringW& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_app_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___app_url;
}
constexpr ::StringW const& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_app_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___app_url;
}
constexpr void System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_set_app_url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___app_url = value;
}
inline void System::Runtime::Remoting::WellKnownClientTypeEntry::_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, assemblyName, objectUrl);
}
inline ::StringW System::Runtime::Remoting::WellKnownClientTypeEntry::get_ApplicationUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(), { "get_ApplicationUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(), { "get_ObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(), { "get_ObjectUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::WellKnownClientTypeEntry::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::WellKnownClientTypeEntry* System::Runtime::Remoting::WellKnownClientTypeEntry::New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(typeName, assemblyName, objectUrl));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::WellKnownClientTypeEntry::WellKnownClientTypeEntry() {}
