#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarEditor/EditAvatarHistorySnapshot.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarHistorySnapshot_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::*)(
    ::BeatSaber::BeatAvatarSDK::AvatarData*, ::BeatSaber::BeatAvatarSDK::AvatarPart)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2259be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPart>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::_ctor(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPart>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarData, avatarEditPart);
}
// Ctor Parameters [CppParam { name: "avatarEditPart", ty: "::BeatSaber::BeatAvatarSDK::AvatarPart", modifiers: "", def_value: Some("{}") }, CppParam { name: "avatarData", ty:
// "::BeatSaber::BeatAvatarSDK::AvatarData*", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::EditAvatarHistorySnapshot(::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart,
                                                                                                             ::BeatSaber::BeatAvatarSDK::AvatarData* avatarData) noexcept {
  this->avatarEditPart = avatarEditPart;
  this->avatarData = avatarData;
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::EditAvatarHistorySnapshot() {}
