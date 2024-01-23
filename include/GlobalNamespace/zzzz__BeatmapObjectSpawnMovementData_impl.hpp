#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2380b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData::_ctor(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                                                                                        float_t obstacleHeight, float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, moveStartPos, moveEndPos, jumpEndPos, obstacleHeight, moveDuration, jumpDuration, noteLinesDistance);
}
// Ctor Parameters [CppParam { name: "moveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveEndPos", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "jumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "obstacleHeight", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "noteLinesDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__BeatmapObjectSpawnMovementData__ObstacleSpawnData(::UnityEngine::Vector3 moveStartPos,
                                                                                                                                      ::UnityEngine::Vector3 moveEndPos,
                                                                                                                                      ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight,
                                                                                                                                      float_t moveDuration, float_t jumpDuration,
                                                                                                                                      float_t noteLinesDistance) noexcept {
  this->moveStartPos = moveStartPos;
  this->moveEndPos = moveEndPos;
  this->jumpEndPos = jumpEndPos;
  this->obstacleHeight = obstacleHeight;
  this->moveDuration = moveDuration;
  this->jumpDuration = jumpDuration;
  this->noteLinesDistance = noteLinesDistance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__BeatmapObjectSpawnMovementData__ObstacleSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t)>(&::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2380c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData::_ctor(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                                                                                    float_t jumpGravity, float_t moveDuration, float_t jumpDuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, moveStartPos, moveEndPos, jumpEndPos, jumpGravity, moveDuration, jumpDuration);
}
// Ctor Parameters [CppParam { name: "moveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveEndPos", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "jumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpGravity", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData::__BeatmapObjectSpawnMovementData__NoteSpawnData(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos,
                                                                                                                              ::UnityEngine::Vector3 jumpEndPos, float_t jumpGravity,
                                                                                                                              float_t moveDuration, float_t jumpDuration) noexcept {
  this->moveStartPos = moveStartPos;
  this->moveEndPos = moveEndPos;
  this->jumpEndPos = jumpEndPos;
  this->jumpGravity = jumpGravity;
  this->moveDuration = moveDuration;
  this->jumpDuration = jumpDuration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData::__BeatmapObjectSpawnMovementData__NoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t)>(
    &::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2380c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData::_ctor(::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos,
                                                                                      ::UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity, ::UnityEngine::Vector3 tailMoveStartPos,
                                                                                      ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity,
                                                                                      float_t moveDuration, float_t jumpDuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headMoveStartPos, headJumpStartPos, headJumpEndPos, headJumpGravity, tailMoveStartPos, tailJumpStartPos,
                                                          tailJumpEndPos, tailJumpGravity, moveDuration, jumpDuration);
}
// Ctor Parameters [CppParam { name: "headMoveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "headJumpStartPos", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "headJumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "headJumpGravity", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "tailMoveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailJumpStartPos", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailJumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "tailJumpGravity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpDuration",
// ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData::__BeatmapObjectSpawnMovementData__SliderSpawnData(
    ::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity, ::UnityEngine::Vector3 tailMoveStartPos,
    ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration) noexcept {
  this->headMoveStartPos = headMoveStartPos;
  this->headJumpStartPos = headJumpStartPos;
  this->headJumpEndPos = headJumpEndPos;
  this->headJumpGravity = headJumpGravity;
  this->tailMoveStartPos = tailMoveStartPos;
  this->tailJumpStartPos = tailJumpStartPos;
  this->tailJumpEndPos = tailJumpEndPos;
  this->tailJumpGravity = tailJumpGravity;
  this->moveDuration = moveDuration;
  this->jumpDuration = jumpDuration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData::__BeatmapObjectSpawnMovementData__SliderSpawnData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType::__BeatmapObjectSpawnMovementData__NoteJumpValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType::__BeatmapObjectSpawnMovementData__NoteJumpValueType() {}
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType::BeatOffset{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType::JumpDuration{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_spawnAheadTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_spawnAheadTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2380a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_spawnAheadTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_moveDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_moveDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2380a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_moveDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_jumpDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2380a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_jumpDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_noteLinesDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x237fa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_noteLinesDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_verticalLayersDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_verticalLayersDistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x237fa44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_verticalLayersDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_jumpDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2380a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_jumpDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_noteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2380a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_noteJumpMovementSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_noteLinesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2380a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_noteLinesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_centerPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_centerPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2380a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_centerPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x237f930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               "get_jumpOffsetY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(
    int32_t, float_t, float_t, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType, float_t, ::GlobalNamespace::IJumpOffsetYProvider*, ::UnityEngine::Vector3,
    ::UnityEngine::Vector3)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::Init)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x237ff64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IJumpOffsetYProvider*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetObstacleSpawnData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData (
    ::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::ObstacleData*)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x238021c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetObstacleSpawnData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetJumpingNoteSpawnData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData (
    ::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteData*)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2380494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetJumpingNoteSpawnData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetSliderSpawnData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData (
    ::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::SliderData*)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetSliderSpawnData)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x23806a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetSliderSpawnData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetNoteOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(
    int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2380b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetNoteOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetObstacleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(
    int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleOffset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2380aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetObstacleOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.Get2DNoteOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(
    int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2380878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "Get2DNoteOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer, float_t)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23808a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                 "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.HighestJumpPosYForLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2380d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "HighestJumpPosYForLineLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.HighestJumpPosYForLineLayerWithoutJumpOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2380e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "HighestJumpPosYForLineLayerWithoutJumpOffset",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.NoteJumpGravityForLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(
    ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2380bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "NoteJumpGravityForLineLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.NoteJumpGravityForLineLayerWithoutJumpOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(
    ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2380cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                 "NoteJumpGravityForLineLayerWithoutJumpOffset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23809a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__centerPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__centerPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerPos;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__centerPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerPos = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__maxHalfJumpDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHalfJumpDistance;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__maxHalfJumpDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHalfJumpDistance;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__maxHalfJumpDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxHalfJumpDistance = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__startHalfJumpDurationInBeats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startHalfJumpDurationInBeats;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__startHalfJumpDurationInBeats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startHalfJumpDurationInBeats;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__startHalfJumpDurationInBeats(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startHalfJumpDurationInBeats = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__baseLinesHighestJumpPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseLinesHighestJumpPosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__baseLinesHighestJumpPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseLinesHighestJumpPosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__baseLinesHighestJumpPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseLinesHighestJumpPosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__upperLinesHighestJumpPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upperLinesHighestJumpPosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__upperLinesHighestJumpPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upperLinesHighestJumpPosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__upperLinesHighestJumpPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upperLinesHighestJumpPosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__topLinesHighestJumpPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topLinesHighestJumpPosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__topLinesHighestJumpPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topLinesHighestJumpPosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__topLinesHighestJumpPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topLinesHighestJumpPosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSpeed;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSpeed;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__moveSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveSpeed = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDuration;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__moveDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveDuration = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__verticalObstaclePosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalObstaclePosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__verticalObstaclePosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalObstaclePosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__verticalObstaclePosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalObstaclePosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__obstacleTopPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleTopPosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__obstacleTopPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleTopPosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__obstacleTopPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleTopPosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__spawnAheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnAheadTime;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__spawnAheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnAheadTime;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__spawnAheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnAheadTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDuration;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__jumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpDuration = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__noteJumpStartBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDistance;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDistance;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__jumpDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpDistance = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDistance;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDistance;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__moveDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveDistance = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveStartPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveStartPos;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__moveStartPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveStartPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveEndPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__moveEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveEndPos;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__moveEndPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveEndPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndPos;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__jumpEndPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpEndPos = value;
}
constexpr int32_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__noteLinesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLinesCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__noteLinesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLinesCount;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__noteLinesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteLinesCount = value;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider*& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpOffsetYProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IJumpOffsetYProvider*> const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpOffsetYProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____jumpOffsetYProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__rightVec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightVec;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__rightVec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightVec;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__rightVec(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightVec = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__forwardVec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forwardVec;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__forwardVec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forwardVec;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__forwardVec(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forwardVec = value;
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_spawnAheadTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_spawnAheadTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_moveDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_moveDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_jumpDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_noteLinesDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_verticalLayersDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_verticalLayersDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_jumpDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteJumpMovementSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_noteJumpMovementSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_noteLinesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectSpawnMovementData::get_centerPos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_centerPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                                                             "get_jumpOffsetY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectSpawnMovementData::Init(int32_t noteLinesCount, float_t startNoteJumpMovementSpeed, float_t startBpm,
                                                                  ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue,
                                                                  ::GlobalNamespace::IJumpOffsetYProvider* jumpOffsetYProvider, ::UnityEngine::Vector3 rightVec, ::UnityEngine::Vector3 forwardVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IJumpOffsetYProvider*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteLinesCount, startNoteJumpMovementSpeed, startBpm, noteJumpValueType, noteJumpValue, jumpOffsetYProvider,
                                                          rightVec, forwardVec);
}
inline ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData(::GlobalNamespace::ObstacleData* obstacleData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetObstacleSpawnData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, false>(this, ___internal_method, obstacleData);
}
inline ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetJumpingNoteSpawnData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, false>(this, ___internal_method, noteData);
}
inline ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData GlobalNamespace::BeatmapObjectSpawnMovementData::GetSliderSpawnData(::GlobalNamespace::SliderData* sliderData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetSliderSpawnData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, false>(this, ___internal_method, sliderData);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetNoteOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, noteLineIndex, noteLineLayer);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "GetObstacleOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, noteLineIndex, noteLineLayer);
}
inline ::UnityEngine::Vector2 GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "Get2DNoteOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, noteLineIndex, noteLineLayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                               "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lineLayer, distanceFromPlayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "HighestJumpPosYForLineLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lineLayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "HighestJumpPosYForLineLayerWithoutJumpOffset",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lineLayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), "NoteJumpGravityForLineLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lineLayer, beforeJumpLineLayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer,
                                                                                                             ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(),
                                               "NoteJumpGravityForLineLayerWithoutJumpOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lineLayer, beforeJumpLineLayer);
}
inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* GlobalNamespace::BeatmapObjectSpawnMovementData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectSpawnMovementData*>());
}
inline void GlobalNamespace::BeatmapObjectSpawnMovementData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData::BeatmapObjectSpawnMovementData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
