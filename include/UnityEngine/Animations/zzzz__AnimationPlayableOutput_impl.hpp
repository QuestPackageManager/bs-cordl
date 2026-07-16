#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableOutput.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationPlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW, ::UnityEngine::Animator*)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a41ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                         { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Animator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationPlayableOutput::*)(::UnityEngine::Playables::PlayableOutputHandle)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a43e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.get_Null
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationPlayableOutput (*)()>(&::UnityEngine::Animations::AnimationPlayableOutput::get_Null)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a43e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "get_Null", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Animations::AnimationPlayableOutput::*)()>(
    &::UnityEngine::Animations::AnimationPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a43fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.op_Implicit___UnityEngine__Playables__PlayableOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutput (*)(::UnityEngine::Animations::AnimationPlayableOutput)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::op_Implicit___UnityEngine__Playables__PlayableOutput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a41b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.op_Explicit___UnityEngine__Animations__AnimationPlayableOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationPlayableOutput (*)(::UnityEngine::Playables::PlayableOutput)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::op_Explicit___UnityEngine__Animations__AnimationPlayableOutput)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a43fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                                                                           { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.GetTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (::UnityEngine::Animations::AnimationPlayableOutput::*)()>(
    &::UnityEngine::Animations::AnimationPlayableOutput::GetTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a4403c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "GetTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.SetTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationPlayableOutput::*)(::UnityEngine::Animator*)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::SetTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a43fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "SetTarget", {}, { ::i2c::type_of<::UnityEngine::Animator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.InternalGetTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::InternalGetTarget)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a44040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                                             { "InternalGetTarget", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.InternalSetTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::UnityEngine::Animator*)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a44160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                         { "InternalSetTarget", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::UnityEngine::Animator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.InternalGetTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::InternalGetTarget_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a441f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                                             { "InternalGetTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.InternalSetTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::System::IntPtr)>(
    &::UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a4422c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                         { "InternalSetTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Animations::AnimationPlayableOutput UnityEngine::Animations::AnimationPlayableOutput::Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name,
                                                                                                                   ::UnityEngine::Animator* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                       { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Animator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationPlayableOutput>(nullptr, ___internal_method, graph, name, target);
}
inline void UnityEngine::Animations::AnimationPlayableOutput::_ctor(::UnityEngine::Playables::PlayableOutputHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Animations::AnimationPlayableOutput UnityEngine::Animations::AnimationPlayableOutput::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationPlayableOutput>(nullptr, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Animations::AnimationPlayableOutput::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutput
UnityEngine::Animations::AnimationPlayableOutput::op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Animations::AnimationPlayableOutput output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput>(nullptr, ___internal_method, output);
}
inline ::UnityEngine::Animations::AnimationPlayableOutput
UnityEngine::Animations::AnimationPlayableOutput::op_Explicit___UnityEngine__Animations__AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutput output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationPlayableOutput>(nullptr, ___internal_method, output);
}
inline ::UnityW<::UnityEngine::Animator> UnityEngine::Animations::AnimationPlayableOutput::GetTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "GetTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(*this, ___internal_method);
}
inline void UnityEngine::Animations::AnimationPlayableOutput::SetTarget(::UnityEngine::Animator* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(), { "SetTarget", {}, { ::i2c::type_of<::UnityEngine::Animator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Animator> UnityEngine::Animations::AnimationPlayableOutput::InternalGetTarget(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                                                                         { "InternalGetTarget", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle, ::UnityEngine::Animator* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                       { "InternalSetTarget", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::UnityEngine::Animator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, target);
}
inline ::System::IntPtr UnityEngine::Animations::AnimationPlayableOutput::InternalGetTarget_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                                           { "InternalGetTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle, ::System::IntPtr target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                                       { "InternalSetTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, target);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr UnityEngine::Animations::AnimationPlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput*() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* UnityEngine::Animations::AnimationPlayableOutput::i___UnityEngine__Playables__IPlayableOutput() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationPlayableOutput::AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPlayableOutput::AnimationPlayableOutput() {}
