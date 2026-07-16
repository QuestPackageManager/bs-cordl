#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/TypeEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::TypeEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::TypeEntry::*)()>(&::System::Runtime::Remoting::TypeEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2e914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeEntry.get_AssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::TypeEntry::*)()>(&::System::Runtime::Remoting::TypeEntry::get_AssemblyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2e918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { "get_AssemblyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeEntry.set_AssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::TypeEntry::*)(::StringW)>(&::System::Runtime::Remoting::TypeEntry::set_AssemblyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2e920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { "set_AssemblyName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeEntry.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::TypeEntry::*)()>(&::System::Runtime::Remoting::TypeEntry::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2e928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeEntry.set_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::TypeEntry::*)(::StringW)>(&::System::Runtime::Remoting::TypeEntry::set_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2e930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { "set_TypeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::TypeEntry::__cordl_internal_get_assembly_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly_name;
}
constexpr ::StringW const& System::Runtime::Remoting::TypeEntry::__cordl_internal_get_assembly_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly_name;
}
constexpr void System::Runtime::Remoting::TypeEntry::__cordl_internal_set_assembly_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assembly_name = value;
}
constexpr ::StringW& System::Runtime::Remoting::TypeEntry::__cordl_internal_get_type_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type_name;
}
constexpr ::StringW const& System::Runtime::Remoting::TypeEntry::__cordl_internal_get_type_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type_name;
}
constexpr void System::Runtime::Remoting::TypeEntry::__cordl_internal_set_type_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type_name = value;
}
inline void System::Runtime::Remoting::TypeEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::TypeEntry::get_AssemblyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { "get_AssemblyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::TypeEntry::set_AssemblyName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { "set_AssemblyName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Remoting::TypeEntry::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::TypeEntry::set_TypeName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::TypeEntry*>(), { "set_TypeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::TypeEntry* System::Runtime::Remoting::TypeEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::TypeEntry*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::TypeEntry::TypeEntry() {}
