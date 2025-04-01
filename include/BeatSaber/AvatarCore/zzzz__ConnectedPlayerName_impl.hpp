#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerName.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__ConnectedPlayerName_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerName.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerName::*)()>(&::BeatSaber::AvatarCore::ConnectedPlayerName::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x224be54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerName*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerName::*)()>(&::BeatSaber::AvatarCore::ConnectedPlayerName::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224bf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerName*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& BeatSaber::AvatarCore::ConnectedPlayerName::__cordl_internal_get__nameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& BeatSaber::AvatarCore::ConnectedPlayerName::__cordl_internal_get__nameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerName::__cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& BeatSaber::AvatarCore::ConnectedPlayerName::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& BeatSaber::AvatarCore::ConnectedPlayerName::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerName::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::AvatarCore::ConnectedPlayerName::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerName*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerName::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerName*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::ConnectedPlayerName* BeatSaber::AvatarCore::ConnectedPlayerName::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::ConnectedPlayerName*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::ConnectedPlayerName::ConnectedPlayerName() {}
