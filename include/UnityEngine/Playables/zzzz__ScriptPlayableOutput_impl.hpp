#pragma once
// IWYU pragma private; include "UnityEngine\Playables\ScriptPlayableOutput.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_impl.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW)>(
    &::UnityEngine::Playables::ScriptPlayableOutput::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b06a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(),
                                                             { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::ScriptPlayableOutput::*)(::UnityEngine::Playables::PlayableOutputHandle)>(
    &::UnityEngine::Playables::ScriptPlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6b06ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput.get_Null
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayableOutput (*)()>(&::UnityEngine::Playables::ScriptPlayableOutput::get_Null)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b06a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(), { "get_Null", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Playables::ScriptPlayableOutput::*)()>(
    &::UnityEngine::Playables::ScriptPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b06bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput.op_Implicit___UnityEngine__Playables__PlayableOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutput (*)(::UnityEngine::Playables::ScriptPlayableOutput)>(
    &::UnityEngine::Playables::ScriptPlayableOutput::op_Implicit___UnityEngine__Playables__PlayableOutput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b06a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Playables::ScriptPlayableOutput>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::ScriptPlayableOutput UnityEngine::Playables::ScriptPlayableOutput::Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(),
                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayableOutput>(nullptr, ___internal_method, graph, name);
}
inline void UnityEngine::Playables::ScriptPlayableOutput::_ctor(::UnityEngine::Playables::PlayableOutputHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::ScriptPlayableOutput UnityEngine::Playables::ScriptPlayableOutput::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayableOutput>(nullptr, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::ScriptPlayableOutput::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutput
UnityEngine::Playables::ScriptPlayableOutput::op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Playables::ScriptPlayableOutput output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayableOutput>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Playables::ScriptPlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput>(nullptr, ___internal_method, output);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr UnityEngine::Playables::ScriptPlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput*() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* UnityEngine::Playables::ScriptPlayableOutput::i___UnityEngine__Playables__IPlayableOutput() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::ScriptPlayableOutput::ScriptPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::ScriptPlayableOutput::ScriptPlayableOutput() {}
