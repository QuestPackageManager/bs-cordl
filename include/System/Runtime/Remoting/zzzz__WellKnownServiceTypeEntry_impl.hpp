#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\WellKnownServiceTypeEntry.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_impl.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownServiceTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)(
    ::StringW, ::StringW, ::StringW, ::System::Runtime::Remoting::WellKnownObjectMode)>(&::System::Runtime::Remoting::WellKnownServiceTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b30fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::WellKnownObjectMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::WellKnownObjectMode (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b310a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(), { "get_Mode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry.get_ObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b310ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(), { "get_ObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry.get_ObjectUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b310b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(), { "get_ObjectUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&::System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b310bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr ::System::Type* const& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_set_obj_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj_type = value;
}
constexpr ::StringW& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_uri;
}
constexpr ::StringW const& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_uri;
}
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_set_obj_uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj_uri = value;
}
constexpr ::System::Runtime::Remoting::WellKnownObjectMode& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_mode;
}
constexpr ::System::Runtime::Remoting::WellKnownObjectMode const& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_mode;
}
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_set_obj_mode(::System::Runtime::Remoting::WellKnownObjectMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj_mode = value;
}
inline void System::Runtime::Remoting::WellKnownServiceTypeEntry::_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::WellKnownObjectMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, assemblyName, objectUri, mode);
}
inline ::System::Runtime::Remoting::WellKnownObjectMode System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(), { "get_Mode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::WellKnownObjectMode>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(), { "get_ObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(), { "get_ObjectUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::WellKnownServiceTypeEntry* System::Runtime::Remoting::WellKnownServiceTypeEntry::New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri,
                                                                                                                              ::System::Runtime::Remoting::WellKnownObjectMode mode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(typeName, assemblyName, objectUri, mode));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::WellKnownServiceTypeEntry::WellKnownServiceTypeEntry() {}
