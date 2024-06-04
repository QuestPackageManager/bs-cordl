#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/MainSettings.hpp"
#include "BGLib/SaveDataCore/zzzz__VersionableSaveData_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__MainSettings_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "BeatSaber/GameSettings/zzzz__Audio_def.hpp"
#include "BeatSaber/GameSettings/zzzz__Controllers_def.hpp"
#include "BeatSaber/GameSettings/zzzz__CustomServer_def.hpp"
#include "BeatSaber/GameSettings/zzzz__DebugSettings_def.hpp"
#include "BeatSaber/GameSettings/zzzz__SmoothCamera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_isDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::GameSettings::MainSettings::*)()>(&::BeatSaber::GameSettings::MainSettings::get_isDirty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1067e24;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_isDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(bool)>(&::BeatSaber::GameSettings::MainSettings::set_isDirty)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1067e98;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_audioSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::Audio* (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_audioSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                               "get_audioSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_audioSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(::BeatSaber::GameSettings::Audio*)>(
    &::BeatSaber::GameSettings::MainSettings::set_audioSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_audioSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::Audio*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_smoothCameraSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::SmoothCamera* (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_smoothCameraSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                               "get_smoothCameraSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_smoothCameraSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(::BeatSaber::GameSettings::SmoothCamera*)>(
    &::BeatSaber::GameSettings::MainSettings::set_smoothCameraSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_smoothCameraSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::SmoothCamera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_controllerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::Controllers* (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_controllerSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                               "get_controllerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_controllerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(::BeatSaber::GameSettings::Controllers*)>(
    &::BeatSaber::GameSettings::MainSettings::set_controllerSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_controllerSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::Controllers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_customServerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::CustomServer* (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_customServerSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                               "get_customServerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_customServerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(::BeatSaber::GameSettings::CustomServer*)>(
    &::BeatSaber::GameSettings::MainSettings::set_customServerSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_customServerSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::CustomServer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_debugSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::DebugSettings* (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_debugSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                               "get_debugSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_debugSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(::BeatSaber::GameSettings::DebugSettings*)>(
    &::BeatSaber::GameSettings::MainSettings::set_debugSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_debugSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::DebugSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_language
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_language)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1067f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "get_language",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_language
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(::BGLib::Polyglot::Language)>(
    &::BeatSaber::GameSettings::MainSettings::set_language)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10679d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_language", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_pauseButtonPressDurationLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_pauseButtonPressDurationLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "get_pauseButtonPressDurationLevel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_pauseButtonPressDurationLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(int32_t)>(
    &::BeatSaber::GameSettings::MainSettings::set_pauseButtonPressDurationLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1067a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_pauseButtonPressDurationLevel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_roomCenter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_roomCenter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1067f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                               "get_roomCenter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_roomCenter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::GameSettings::MainSettings::set_roomCenter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1067f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_roomCenter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_roomRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatSaber::GameSettings::MainSettings::*)()>(&::BeatSaber::GameSettings::MainSettings::get_roomRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                               "get_roomRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_roomRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(float_t)>(
    &::BeatSaber::GameSettings::MainSettings::set_roomRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1067fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_roomRotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_hapticFeedback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::GameSettings::MainSettings::*)()>(&::BeatSaber::GameSettings::MainSettings::get_hapticFeedback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                               "get_hapticFeedback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_hapticFeedback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(bool)>(
    &::BeatSaber::GameSettings::MainSettings::set_hapticFeedback)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1067b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_hapticFeedback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.get_createScreenshotDuringTheGame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::GameSettings::MainSettings::*)()>(
    &::BeatSaber::GameSettings::MainSettings::get_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "get_createScreenshotDuringTheGame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings.set_createScreenshotDuringTheGame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)(bool)>(
    &::BeatSaber::GameSettings::MainSettings::set_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1067fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_createScreenshotDuringTheGame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::MainSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::MainSettings::*)()>(&::BeatSaber::GameSettings::MainSettings::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1067850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GameSettings::Audio*& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__audioSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::Audio*> const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__audioSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSettings_k__BackingField;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__audioSettings_k__BackingField(::BeatSaber::GameSettings::Audio* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSettings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GameSettings::SmoothCamera*& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__smoothCameraSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothCameraSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::SmoothCamera*> const&
BeatSaber::GameSettings::MainSettings::__cordl_internal_get__smoothCameraSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothCameraSettings_k__BackingField;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__smoothCameraSettings_k__BackingField(::BeatSaber::GameSettings::SmoothCamera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smoothCameraSettings_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GameSettings::Controllers*& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__controllerSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllerSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::Controllers*> const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__controllerSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllerSettings_k__BackingField;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__controllerSettings_k__BackingField(::BeatSaber::GameSettings::Controllers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllerSettings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GameSettings::CustomServer*& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__customServerSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customServerSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::CustomServer*> const&
BeatSaber::GameSettings::MainSettings::__cordl_internal_get__customServerSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customServerSettings_k__BackingField;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__customServerSettings_k__BackingField(::BeatSaber::GameSettings::CustomServer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customServerSettings_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GameSettings::DebugSettings*& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__debugSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::DebugSettings*> const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__debugSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugSettings_k__BackingField;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__debugSettings_k__BackingField(::BeatSaber::GameSettings::DebugSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugSettings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language;
}
constexpr ::StringW const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__pauseButtonPressDurationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseButtonPressDurationLevel;
}
constexpr int32_t const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__pauseButtonPressDurationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseButtonPressDurationLevel;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__pauseButtonPressDurationLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseButtonPressDurationLevel = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__roomCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomCenter;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__roomCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomCenter;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__roomCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____roomCenter = value;
}
constexpr float_t& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__roomRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomRotation;
}
constexpr float_t const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__roomRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomRotation;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__roomRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____roomRotation = value;
}
constexpr bool& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__hapticFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedback;
}
constexpr bool const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__hapticFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedback;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__hapticFeedback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedback = value;
}
constexpr bool& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__createScreenshotDuringTheGame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createScreenshotDuringTheGame;
}
constexpr bool const& BeatSaber::GameSettings::MainSettings::__cordl_internal_get__createScreenshotDuringTheGame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createScreenshotDuringTheGame;
}
constexpr void BeatSaber::GameSettings::MainSettings::__cordl_internal_set__createScreenshotDuringTheGame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createScreenshotDuringTheGame = value;
}
inline bool BeatSaber::GameSettings::MainSettings::get_isDirty() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_isDirty(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::Audio* BeatSaber::GameSettings::MainSettings::get_audioSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                             "get_audioSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::Audio*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_audioSettings(::BeatSaber::GameSettings::Audio* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_audioSettings", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::Audio*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::SmoothCamera* BeatSaber::GameSettings::MainSettings::get_smoothCameraSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                             "get_smoothCameraSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::SmoothCamera*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_smoothCameraSettings(::BeatSaber::GameSettings::SmoothCamera* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_smoothCameraSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::SmoothCamera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::Controllers* BeatSaber::GameSettings::MainSettings::get_controllerSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                             "get_controllerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::Controllers*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_controllerSettings(::BeatSaber::GameSettings::Controllers* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_controllerSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::Controllers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::CustomServer* BeatSaber::GameSettings::MainSettings::get_customServerSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                             "get_customServerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::CustomServer*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_customServerSettings(::BeatSaber::GameSettings::CustomServer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_customServerSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::CustomServer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::DebugSettings* BeatSaber::GameSettings::MainSettings::get_debugSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                             "get_debugSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::DebugSettings*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_debugSettings(::BeatSaber::GameSettings::DebugSettings* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_debugSettings", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::DebugSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BGLib::Polyglot::Language BeatSaber::GameSettings::MainSettings::get_language() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "get_language",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_language(::BGLib::Polyglot::Language value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_language", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t BeatSaber::GameSettings::MainSettings::get_pauseButtonPressDurationLevel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "get_pauseButtonPressDurationLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_pauseButtonPressDurationLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_pauseButtonPressDurationLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 BeatSaber::GameSettings::MainSettings::get_roomCenter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "get_roomCenter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_roomCenter(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_roomCenter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t BeatSaber::GameSettings::MainSettings::get_roomRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                             "get_roomRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_roomRotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_roomRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool BeatSaber::GameSettings::MainSettings::get_hapticFeedback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(),
                                                                             "get_hapticFeedback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_hapticFeedback(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_hapticFeedback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool BeatSaber::GameSettings::MainSettings::get_createScreenshotDuringTheGame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "get_createScreenshotDuringTheGame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::MainSettings::set_createScreenshotDuringTheGame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), "set_createScreenshotDuringTheGame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::MainSettings* BeatSaber::GameSettings::MainSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::MainSettings*>());
}
inline void BeatSaber::GameSettings::MainSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::MainSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::MainSettings::MainSettings() {}
