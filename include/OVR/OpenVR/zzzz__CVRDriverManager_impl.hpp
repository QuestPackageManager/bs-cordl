#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRDriverManager.hpp"
#include "OVR/OpenVR/zzzz__IVRDriverManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRDriverManager_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRDriverManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRDriverManager::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRDriverManager::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e47370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRDriverManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRDriverManager.GetDriverCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRDriverManager::*)()>(&::OVR::OpenVR::CVRDriverManager::GetDriverCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4746c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRDriverManager*>(), { "GetDriverCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRDriverManager.GetDriverName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRDriverManager::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRDriverManager::GetDriverName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4748c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRDriverManager*>(),
                                                             { "GetDriverName", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRDriverManager.GetDriverHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::CVRDriverManager::*)(::StringW)>(&::OVR::OpenVR::CVRDriverManager::GetDriverHandle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e474ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRDriverManager*>(), { "GetDriverHandle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRDriverManager& OVR::OpenVR::CVRDriverManager::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRDriverManager const& OVR::OpenVR::CVRDriverManager::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRDriverManager::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRDriverManager value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRDriverManager::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRDriverManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline uint32_t OVR::OpenVR::CVRDriverManager::GetDriverCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRDriverManager*>(), { "GetDriverCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRDriverManager::GetDriverName(uint32_t nDriver, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRDriverManager*>(),
                                                           { "GetDriverName", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, nDriver, pchValue, unBufferSize);
}
inline uint64_t OVR::OpenVR::CVRDriverManager::GetDriverHandle(::StringW pchDriverName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRDriverManager*>(), { "GetDriverHandle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, pchDriverName);
}
inline ::OVR::OpenVR::CVRDriverManager* OVR::OpenVR::CVRDriverManager::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRDriverManager*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRDriverManager::CVRDriverManager() {}
