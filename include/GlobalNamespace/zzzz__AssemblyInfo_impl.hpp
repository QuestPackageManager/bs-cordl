#pragma once
// IWYU pragma private; include "GlobalNamespace/AssemblyInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AssemblyInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssemblyInfo.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::AssemblyInfo::get_Version)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3655384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssemblyInfo*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AssemblyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AssemblyInfo::*)()>(&::GlobalNamespace::AssemblyInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3655520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssemblyInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AssemblyInfo::setStaticF_version(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "version", ::GlobalNamespace::AssemblyInfo*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AssemblyInfo::getStaticF_version() {
  return ::cordl_internals::getStaticField<::StringW, "version", ::GlobalNamespace::AssemblyInfo*>();
}
inline ::StringW GlobalNamespace::AssemblyInfo::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssemblyInfo*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AssemblyInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssemblyInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AssemblyInfo* GlobalNamespace::AssemblyInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AssemblyInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssemblyInfo::AssemblyInfo() {}
