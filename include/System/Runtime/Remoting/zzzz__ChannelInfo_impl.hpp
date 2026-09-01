#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\ChannelInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__IChannelInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ChannelInfo::*)()>(&::System::Runtime::Remoting::ChannelInfo::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b20ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ChannelInfo::*)(::System::Object*)>(&::System::Runtime::Remoting::ChannelInfo::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b20d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo.get_ChannelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::ChannelInfo::*)()>(&::System::Runtime::Remoting::ChannelInfo::get_ChannelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelInfo*>(), { "get_ChannelData", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Runtime::Remoting::ChannelInfo::__cordl_internal_get_channelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelData;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Remoting::ChannelInfo::__cordl_internal_get_channelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelData;
}
constexpr void System::Runtime::Remoting::ChannelInfo::__cordl_internal_set_channelData(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___channelData = value;
}
inline void System::Runtime::Remoting::ChannelInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ChannelInfo::_ctor(::System::Object* remoteChannelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteChannelData);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::ChannelInfo::get_ChannelData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelInfo*>(), { "get_ChannelData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ChannelInfo* System::Runtime::Remoting::ChannelInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ChannelInfo*>());
}
inline ::System::Runtime::Remoting::ChannelInfo* System::Runtime::Remoting::ChannelInfo::New_ctor(::System::Object* remoteChannelData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ChannelInfo*>(remoteChannelData));
}
/// @brief Convert operator to "::System::Runtime::Remoting::IChannelInfo"
constexpr System::Runtime::Remoting::ChannelInfo::operator ::System::Runtime::Remoting::IChannelInfo*() noexcept {
  return static_cast<::System::Runtime::Remoting::IChannelInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::IChannelInfo"
constexpr ::System::Runtime::Remoting::IChannelInfo* System::Runtime::Remoting::ChannelInfo::i___System__Runtime__Remoting__IChannelInfo() noexcept {
  return static_cast<::System::Runtime::Remoting::IChannelInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ChannelInfo::ChannelInfo() {}
