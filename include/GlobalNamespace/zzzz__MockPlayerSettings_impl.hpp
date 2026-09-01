#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlayerSettings.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerAvatarType_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerMovementType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerAvatarType_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerMovementType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::StringW)>(&::GlobalNamespace::MockPlayerSettings::set_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_userName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::StringW)>(&::GlobalNamespace::MockPlayerSettings::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_userId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_sortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_sortIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_sortIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_sortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(int32_t)>(&::GlobalNamespace::MockPlayerSettings::set_sortIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_sortIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_latency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_latency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_latency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_latency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(int64_t)>(&::GlobalNamespace::MockPlayerSettings::set_latency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_latency", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_autoConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_autoConnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_autoConnect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_autoConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(bool)>(&::GlobalNamespace::MockPlayerSettings::set_autoConnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_autoConnect", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_inactiveByDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_inactiveByDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_inactiveByDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_inactiveByDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(bool)>(&::GlobalNamespace::MockPlayerSettings::set_inactiveByDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ceef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_inactiveByDefault", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_movementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MockPlayerMovementType (::GlobalNamespace::MockPlayerSettings::*)()>(
    &::GlobalNamespace::MockPlayerSettings::get_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_movementType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_movementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::GlobalNamespace::MockPlayerMovementType)>(
    &::GlobalNamespace::MockPlayerSettings::set_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_movementType", {}, { ::i2c::type_of<::GlobalNamespace::MockPlayerMovementType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_avatarType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MockPlayerAvatarType (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_avatarType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_avatarType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_avatarType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::GlobalNamespace::MockPlayerAvatarType)>(
    &::GlobalNamespace::MockPlayerSettings::set_avatarType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_avatarType", {}, { ::i2c::type_of<::GlobalNamespace::MockPlayerAvatarType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_platformUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_platformUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_platformUserId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_platformUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(uint64_t)>(&::GlobalNamespace::MockPlayerSettings::set_platformUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_platformUserId", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_recodingFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_recodingFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_recodingFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_recodingFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::StringW)>(&::GlobalNamespace::MockPlayerSettings::set_recodingFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_recodingFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_aiCubeHitChance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_aiCubeHitChance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_aiCubeHitChance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_aiCubeHitChance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(float_t)>(&::GlobalNamespace::MockPlayerSettings::set_aiCubeHitChance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_aiCubeHitChance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_leftHanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_leftHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_leftHanded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_leftHanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(bool)>(&::GlobalNamespace::MockPlayerSettings::set_leftHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cef58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_leftHanded", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_saberAColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_saberAColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59cef60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_saberAColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_saberAColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::UnityEngine::Color)>(&::GlobalNamespace::MockPlayerSettings::set_saberAColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59cef6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_saberAColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_saberBColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_saberBColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59cef78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_saberBColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_saberBColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::UnityEngine::Color)>(&::GlobalNamespace::MockPlayerSettings::set_saberBColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59cef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_saberBColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_obstaclesColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_obstaclesColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59cef90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_obstaclesColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_obstaclesColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::UnityEngine::Color)>(&::GlobalNamespace::MockPlayerSettings::set_obstaclesColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59cef9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_obstaclesColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_beatmapDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::MockPlayerSettings::*)()>(
    &::GlobalNamespace::MockPlayerSettings::get_beatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cefa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_beatmapDifficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_beatmapDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::MockPlayerSettings::set_beatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cefb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_beatmapDifficulty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_beatmapLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::get_beatmapLevelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cefb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_beatmapLevelId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_beatmapLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::StringW)>(&::GlobalNamespace::MockPlayerSettings::set_beatmapLevelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cefc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_beatmapLevelId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::MockPlayerSettings::*)()>(
    &::GlobalNamespace::MockPlayerSettings::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cefc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings.set_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MockPlayerSettings::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cefd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerSettings::*)()>(&::GlobalNamespace::MockPlayerSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59cefd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName = value;
}
constexpr ::StringW& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__sortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
constexpr int32_t const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__sortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__sortIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortIndex = value;
}
constexpr int64_t& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__latency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latency;
}
constexpr int64_t const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__latency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latency;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__latency(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____latency = value;
}
constexpr bool& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__autoConnect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoConnect;
}
constexpr bool const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__autoConnect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoConnect;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__autoConnect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoConnect = value;
}
constexpr bool& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__inactiveByDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveByDefault;
}
constexpr bool const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__inactiveByDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveByDefault;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__inactiveByDefault(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inactiveByDefault = value;
}
constexpr ::GlobalNamespace::MockPlayerMovementType& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__movementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementType;
}
constexpr ::GlobalNamespace::MockPlayerMovementType const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__movementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementType;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__movementType(::GlobalNamespace::MockPlayerMovementType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementType = value;
}
constexpr ::GlobalNamespace::MockPlayerAvatarType& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__avatarType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarType;
}
constexpr ::GlobalNamespace::MockPlayerAvatarType const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__avatarType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarType;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__avatarType(::GlobalNamespace::MockPlayerAvatarType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarType = value;
}
constexpr uint64_t& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__platformUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserId;
}
constexpr uint64_t const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__platformUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserId;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__platformUserId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformUserId = value;
}
constexpr ::StringW& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__recodingFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recodingFile;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__recodingFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recodingFile;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__recodingFile(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recodingFile = value;
}
constexpr float_t& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__aiCubeHitChance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aiCubeHitChance;
}
constexpr float_t const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__aiCubeHitChance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aiCubeHitChance;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__aiCubeHitChance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____aiCubeHitChance = value;
}
constexpr bool& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__leftHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHanded;
}
constexpr bool const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__leftHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHanded;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__leftHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHanded = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__saberAColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberAColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__saberAColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberAColor;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__saberAColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberAColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__saberBColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__saberBColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBColor;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__saberBColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberBColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__obstaclesColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__obstaclesColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesColor;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__obstaclesColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclesColor = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficulty = value;
}
constexpr ::StringW& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__beatmapLevelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelId;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__beatmapLevelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelId;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__beatmapLevelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelId = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::MockPlayerSettings::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::MockPlayerSettings::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
inline ::StringW GlobalNamespace::MockPlayerSettings::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_userName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_userName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MockPlayerSettings::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_userId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_userId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MockPlayerSettings::get_sortIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_sortIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_sortIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_sortIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::MockPlayerSettings::get_latency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_latency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_latency(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_latency", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayerSettings::get_autoConnect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_autoConnect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_autoConnect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_autoConnect", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayerSettings::get_inactiveByDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_inactiveByDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_inactiveByDefault(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_inactiveByDefault", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MockPlayerMovementType GlobalNamespace::MockPlayerSettings::get_movementType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_movementType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MockPlayerMovementType>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_movementType(::GlobalNamespace::MockPlayerMovementType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_movementType", {}, { ::i2c::type_of<::GlobalNamespace::MockPlayerMovementType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MockPlayerAvatarType GlobalNamespace::MockPlayerSettings::get_avatarType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_avatarType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MockPlayerAvatarType>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_avatarType(::GlobalNamespace::MockPlayerAvatarType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_avatarType", {}, { ::i2c::type_of<::GlobalNamespace::MockPlayerAvatarType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t GlobalNamespace::MockPlayerSettings::get_platformUserId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_platformUserId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_platformUserId(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_platformUserId", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MockPlayerSettings::get_recodingFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_recodingFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_recodingFile(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_recodingFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MockPlayerSettings::get_aiCubeHitChance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_aiCubeHitChance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_aiCubeHitChance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_aiCubeHitChance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayerSettings::get_leftHanded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_leftHanded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_leftHanded(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_leftHanded", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::MockPlayerSettings::get_saberAColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_saberAColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_saberAColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_saberAColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::MockPlayerSettings::get_saberBColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_saberBColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_saberBColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_saberBColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::MockPlayerSettings::get_obstaclesColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_obstaclesColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_obstaclesColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_obstaclesColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::MockPlayerSettings::get_beatmapDifficulty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_beatmapDifficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_beatmapDifficulty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MockPlayerSettings::get_beatmapLevelId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_beatmapLevelId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_beatmapLevelId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_beatmapLevelId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::MockPlayerSettings::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerSettings::set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPlayerSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlayerSettings* GlobalNamespace::MockPlayerSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerSettings::MockPlayerSettings() {}
