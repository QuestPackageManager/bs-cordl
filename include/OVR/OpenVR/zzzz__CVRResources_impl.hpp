#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRResources.hpp"
#include "OVR/OpenVR/zzzz__IVRResources_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRResources_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRResources::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRResources::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e4723c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRResources*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRResources.LoadSharedResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRResources::*)(::StringW, ::StringW, uint32_t)>(&::OVR::OpenVR::CVRResources::LoadSharedResource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e47330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRResources*>(), { "LoadSharedResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRResources.GetResourceFullPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRResources::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRResources::GetResourceFullPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e47350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::OVR::OpenVR::CVRResources*>(),
                         { "GetResourceFullPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRResources& OVR::OpenVR::CVRResources::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRResources const& OVR::OpenVR::CVRResources::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRResources::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRResources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRResources::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRResources*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline uint32_t OVR::OpenVR::CVRResources::LoadSharedResource(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRResources*>(), { "LoadSharedResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchResourceName, pchBuffer, unBufferLen);
}
inline uint32_t OVR::OpenVR::CVRResources::GetResourceFullPath(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer, uint32_t unBufferLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRResources*>(),
                          { "GetResourceFullPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen);
}
inline ::OVR::OpenVR::CVRResources* OVR::OpenVR::CVRResources::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRResources*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRResources::CVRResources() {}
