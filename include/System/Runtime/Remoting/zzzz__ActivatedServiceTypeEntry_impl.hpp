#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\ActivatedServiceTypeEntry.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedServiceTypeEntry_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedServiceTypeEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ActivatedServiceTypeEntry::*)(::StringW, ::StringW)>(
    &::System::Runtime::Remoting::ActivatedServiceTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b20ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedServiceTypeEntry.get_ObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::ActivatedServiceTypeEntry::*)()>(
    &::System::Runtime::Remoting::ActivatedServiceTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(), { "get_ObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedServiceTypeEntry.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::ActivatedServiceTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedServiceTypeEntry::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b20fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Remoting::ActivatedServiceTypeEntry::__cordl_internal_get_obj_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr ::System::Type* const& System::Runtime::Remoting::ActivatedServiceTypeEntry::__cordl_internal_get_obj_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr void System::Runtime::Remoting::ActivatedServiceTypeEntry::__cordl_internal_set_obj_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj_type = value;
}
inline void System::Runtime::Remoting::ActivatedServiceTypeEntry::_ctor(::StringW typeName, ::StringW assemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, assemblyName);
}
inline ::System::Type* System::Runtime::Remoting::ActivatedServiceTypeEntry::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(), { "get_ObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::ActivatedServiceTypeEntry::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ActivatedServiceTypeEntry* System::Runtime::Remoting::ActivatedServiceTypeEntry::New_ctor(::StringW typeName, ::StringW assemblyName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(typeName, assemblyName));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ActivatedServiceTypeEntry::ActivatedServiceTypeEntry() {}
