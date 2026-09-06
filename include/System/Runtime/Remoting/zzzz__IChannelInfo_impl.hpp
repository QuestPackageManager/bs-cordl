#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/IChannelInfo.hpp"
#include "System/Runtime/Remoting/zzzz__IChannelInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::IChannelInfo.get_ChannelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::IChannelInfo::*)()>(&::System::Runtime::Remoting::IChannelInfo::get_ChannelData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::IChannelInfo*>(), { ::i2c::class_of<::System::Runtime::Remoting::IChannelInfo*>(), 0 }));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::IChannelInfo::get_ChannelData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::IChannelInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
