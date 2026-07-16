#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationLayerMixerPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationLayerMixerPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AvatarMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationLayerMixerPlayable (*)(::UnityEngine::Playables::PlayableGraph, int32_t, bool)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::Create)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a420d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                             { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.CreateHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, int32_t)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandle)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6a4217c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                             { "CreateHandle", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationLayerMixerPlayable::*)(::UnityEngine::Playables::PlayableHandle, bool)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6a4228c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationLayerMixerPlayable::*)()>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a424d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.op_Implicit___UnityEngine__Playables__Playable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Animations::AnimationLayerMixerPlayable)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::op_Implicit___UnityEngine__Playables__Playable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a424e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationLayerMixerPlayable::*)(::UnityEngine::Animations::AnimationLayerMixerPlayable)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6a42548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.SetLayerMaskFromAvatarMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationLayerMixerPlayable::*)(uint32_t, ::UnityEngine::AvatarMask*)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6a425ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                             { "SetLayerMaskFromAvatarMask", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::AvatarMask*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.CreateHandleInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableGraph, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a42400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                            { "CreateHandleInternal", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.SetSingleLayerOptimizationInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, bool)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a42490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                { "SetSingleLayerOptimizationInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.SetLayerMaskFromAvatarMaskInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, uint32_t, ::UnityEngine::AvatarMask*)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a42804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                         { "SetLayerMaskFromAvatarMaskInternal",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::AvatarMask*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.CreateHandleInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a428c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
            { "CreateHandleInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationLayerMixerPlayable.SetLayerMaskFromAvatarMaskInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, uint32_t, ::System::IntPtr)>(
    &::UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a42908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                { "SetLayerMaskFromAvatarMaskInternal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationLayerMixerPlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationLayerMixerPlayable value) {
  ::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationLayerMixerPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationLayerMixerPlayable>(
      std::forward<::UnityEngine::Animations::AnimationLayerMixerPlayable>(value));
}
inline ::UnityEngine::Animations::AnimationLayerMixerPlayable UnityEngine::Animations::AnimationLayerMixerPlayable::getStaticF_m_NullPlayable() {
  return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationLayerMixerPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationLayerMixerPlayable>();
}
inline ::UnityEngine::Animations::AnimationLayerMixerPlayable UnityEngine::Animations::AnimationLayerMixerPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount,
                                                                                                                           bool singleLayerOptimization) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationLayerMixerPlayable>(nullptr, ___internal_method, graph, inputCount, singleLayerOptimization);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                           { "CreateHandle", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, inputCount);
}
inline void UnityEngine::Animations::AnimationLayerMixerPlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle, bool singleLayerOptimization) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, singleLayerOptimization);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationLayerMixerPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable
UnityEngine::Animations::AnimationLayerMixerPlayable::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationLayerMixerPlayable playable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
inline bool UnityEngine::Animations::AnimationLayerMixerPlayable::Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask(uint32_t layerIndex, ::UnityEngine::AvatarMask* mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                                           { "SetLayerMaskFromAvatarMask", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::AvatarMask*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layerIndex, mask);
}
inline bool UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::by_ref<::UnityEngine::Playables::PlayableHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                          { "CreateHandleInternal", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, handle);
}
inline void UnityEngine::Animations::AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> handle, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                              { "SetSingleLayerOptimizationInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, value);
}
inline void UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> handle, uint32_t layerIndex,
                                                                                                     ::UnityEngine::AvatarMask* mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                              { "SetLayerMaskFromAvatarMaskInternal",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::AvatarMask*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, mask);
}
inline bool UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> graph,
                                                                                                ::by_ref<::UnityEngine::Playables::PlayableHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
          { "CreateHandleInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, handle);
}
inline void UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> handle, uint32_t layerIndex,
                                                                                                              ::System::IntPtr mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(),
                                              { "SetLayerMaskFromAvatarMaskInternal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, mask);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Animations::AnimationLayerMixerPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationLayerMixerPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
constexpr UnityEngine::Animations::AnimationLayerMixerPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*
UnityEngine::Animations::AnimationLayerMixerPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationLayerMixerPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationLayerMixerPlayable::AnimationLayerMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationLayerMixerPlayable::AnimationLayerMixerPlayable() {}
