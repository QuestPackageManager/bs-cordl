#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarEditor/EditAvatarHistorySnapshot.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarHistorySnapshot_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::*)(
    ::BeatSaber::BeatAvatarSDK::AvatarData*, ::BeatSaber::BeatAvatarSDK::AvatarPart)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3274c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>(),
                                                { ".ctor", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::_ctor(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, avatarData, avatarEditPart);
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
