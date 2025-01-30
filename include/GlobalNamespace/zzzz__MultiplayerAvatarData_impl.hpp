#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerAvatarData.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerAvatarData::*)(uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::MultiplayerAvatarData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x271f858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerAvatarData::_ctor(uint32_t avatarTypeIdentifierHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarTypeIdentifierHash, data);
}
// Ctor Parameters [CppParam { name: "avatarTypeIdentifierHash", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData(uint32_t avatarTypeIdentifierHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept {
  this->avatarTypeIdentifierHash = avatarTypeIdentifierHash;
  this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData() {}
