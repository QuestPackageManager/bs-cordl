#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ChannelInfo.hpp"
#include "System/Runtime/Remoting/zzzz__IChannelInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ChannelInfo::*)()>(&::System::Runtime::Remoting::ChannelInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3cc6f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ChannelInfo::*)(::System::Object*)>(
    &::System::Runtime::Remoting::ChannelInfo::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3cc6fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo.get_ChannelData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Runtime::Remoting::ChannelInfo::*)()>(
    &::System::Runtime::Remoting::ChannelInfo::get_ChannelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc708c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(),
                                                                               "get_ChannelData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Remoting::ChannelInfo::__cordl_internal_get_channelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelData;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Remoting::ChannelInfo::__cordl_internal_get_channelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelData;
}
constexpr void System::Runtime::Remoting::ChannelInfo::__cordl_internal_set_channelData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___channelData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::ChannelInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ChannelInfo::_ctor(::System::Object* remoteChannelData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteChannelData);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::ChannelInfo::get_ChannelData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(),
                                                                             "get_ChannelData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ChannelInfo* System::Runtime::Remoting::ChannelInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::ChannelInfo*>());
}
inline ::System::Runtime::Remoting::ChannelInfo* System::Runtime::Remoting::ChannelInfo::New_ctor(::System::Object* remoteChannelData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::ChannelInfo*>(remoteChannelData));
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
