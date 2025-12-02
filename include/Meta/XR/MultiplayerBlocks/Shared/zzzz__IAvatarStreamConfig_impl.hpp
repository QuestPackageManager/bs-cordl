#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/IAvatarStreamConfig.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__IAvatarStreamConfig_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__AvatarStreamLOD_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig.SetAvatarStreamLOD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig::*)(
    ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD)>(&::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig::SetAvatarStreamLOD)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig.SetAvatarUpdateIntervalInS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig::*)(float_t)>(
    &::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig::SetAvatarUpdateIntervalInS)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig*>::get(), 1));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig::SetAvatarStreamLOD(::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD lod) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lod);
}
inline void Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig::SetAvatarUpdateIntervalInS(float_t interval) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interval);
}
