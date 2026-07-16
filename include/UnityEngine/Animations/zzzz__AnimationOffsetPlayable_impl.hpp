#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationOffsetPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationOffsetPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationOffsetPlayable (*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t)>(&::UnityEngine::Animations::AnimationOffsetPlayable::Create)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6a43564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                                                           { "Create",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.CreateHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                    int32_t)>(&::UnityEngine::Animations::AnimationOffsetPlayable::CreateHandle)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6a43658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                                                           { "CreateHandle",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationOffsetPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(
    &::UnityEngine::Animations::AnimationOffsetPlayable::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a437c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationOffsetPlayable::*)()>(
    &::UnityEngine::Animations::AnimationOffsetPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a4397c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.op_Implicit___UnityEngine__Playables__Playable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Animations::AnimationOffsetPlayable)>(
    &::UnityEngine::Animations::AnimationOffsetPlayable::op_Implicit___UnityEngine__Playables__Playable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a43988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationOffsetPlayable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationOffsetPlayable::*)(::UnityEngine::Animations::AnimationOffsetPlayable)>(
    &::UnityEngine::Animations::AnimationOffsetPlayable::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a439f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationOffsetPlayable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.CreateHandleInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a438d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                             { "CreateHandleInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.CreateHandleInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
        &::UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a43aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                             { "CreateHandleInternal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationOffsetPlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationOffsetPlayable value) {
  ::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationOffsetPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationOffsetPlayable>(
      std::forward<::UnityEngine::Animations::AnimationOffsetPlayable>(value));
}
inline ::UnityEngine::Animations::AnimationOffsetPlayable UnityEngine::Animations::AnimationOffsetPlayable::getStaticF_m_NullPlayable() {
  return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationOffsetPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationOffsetPlayable>();
}
inline ::UnityEngine::Animations::AnimationOffsetPlayable UnityEngine::Animations::AnimationOffsetPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position,
                                                                                                                   ::UnityEngine::Quaternion rotation, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                                                         { "Create",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationOffsetPlayable>(nullptr, ___internal_method, graph, position, rotation, inputCount);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationOffsetPlayable::CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position,
                                                                                                               ::UnityEngine::Quaternion rotation, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                                                         { "CreateHandle",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, position, rotation, inputCount);
}
inline void UnityEngine::Animations::AnimationOffsetPlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationOffsetPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable
UnityEngine::Animations::AnimationOffsetPlayable::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationOffsetPlayable playable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationOffsetPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
inline bool UnityEngine::Animations::AnimationOffsetPlayable::Equals(::UnityEngine::Animations::AnimationOffsetPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationOffsetPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                   ::by_ref<::UnityEngine::Playables::PlayableHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                           { "CreateHandleInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, position, rotation, handle);
}
inline bool UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::by_ref<::UnityEngine::Vector3> position,
                                                                                            ::by_ref<::UnityEngine::Quaternion> rotation, ::by_ref<::UnityEngine::Playables::PlayableHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                                                           { "CreateHandleInternal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, position, rotation, handle);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Animations::AnimationOffsetPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationOffsetPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>"
constexpr UnityEngine::Animations::AnimationOffsetPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*
UnityEngine::Animations::AnimationOffsetPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationOffsetPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationOffsetPlayable::AnimationOffsetPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationOffsetPlayable::AnimationOffsetPlayable() {}
