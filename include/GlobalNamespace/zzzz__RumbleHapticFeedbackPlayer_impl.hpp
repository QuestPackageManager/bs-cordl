#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::*)()>(
    &::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr bool const& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr void GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_set_active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___active = value;
}
constexpr bool& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_continuous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuous;
}
constexpr bool const& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_continuous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuous;
}
constexpr void GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_set_continuous(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___continuous = value;
}
constexpr float_t& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr float_t const& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr void GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_set_strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strength = value;
}
constexpr float_t& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_endTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr float_t const& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_endTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr void GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_set_endTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endTime = value;
}
constexpr float_t& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_frequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr float_t const& GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_get_frequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr void GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__cordl_internal_set_frequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frequency = value;
}
inline ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData* GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>());
}
inline void GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData::__RumbleHapticFeedbackPlayer__RumbleData() {}
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&::GlobalNamespace::RumbleHapticFeedbackPlayer::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x225ec10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)(
    ::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::RumbleHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2258fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), "PlayHapticFeedback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*)>(
    &::GlobalNamespace::RumbleHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x225ee10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), "CanPlayHapticPreset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(
    &::GlobalNamespace::RumbleHapticFeedbackPlayer::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x225ee50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.UpdateRumbles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(
    &::GlobalNamespace::RumbleHapticFeedbackPlayer::UpdateRumbles)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x225ee54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(),
                                                                               "UpdateRumbles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer.GetRumble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData* (
    ::GlobalNamespace::RumbleHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::System::Object*)>(&::GlobalNamespace::RumbleHapticFeedbackPlayer::GetRumble)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x225ecf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), "GetRumble", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RumbleHapticFeedbackPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&::GlobalNamespace::RumbleHapticFeedbackPlayer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x225f2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr GlobalNamespace::RumbleHapticFeedbackPlayer::operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr ::GlobalNamespace::IHapticFeedbackPlayer* GlobalNamespace::RumbleHapticFeedbackPlayer::i___GlobalNamespace__IHapticFeedbackPlayer() noexcept {
  return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                       ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>*&
GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_get__rumblesByNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblesByNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>*> const&
GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_get__rumblesByNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblesByNode;
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer::__cordl_internal_set__rumblesByNode(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                 ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rumblesByNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), "PlayHapticFeedback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, hapticPreset);
}
inline bool GlobalNamespace::RumbleHapticFeedbackPlayer::CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), "CanPlayHapticPreset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hapticPreset);
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(),
                                                                             "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::UpdateRumbles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(),
                                                                             "UpdateRumbles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData* GlobalNamespace::RumbleHapticFeedbackPlayer::GetRumble(::UnityEngine::XR::XRNode node, ::System::Object* preset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), "GetRumble", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*, false>(this, ___internal_method, node, preset);
}
inline ::GlobalNamespace::RumbleHapticFeedbackPlayer* GlobalNamespace::RumbleHapticFeedbackPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RumbleHapticFeedbackPlayer*>());
}
inline void GlobalNamespace::RumbleHapticFeedbackPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RumbleHapticFeedbackPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RumbleHapticFeedbackPlayer::RumbleHapticFeedbackPlayer() {}
