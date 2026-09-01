#pragma once
// IWYU pragma private; include "UnityEngine\Playables\DataPlayableOutput.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_impl.hpp"
#include "UnityEngine/Playables/zzzz__DataPlayableOutput_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::DataPlayableOutput::*)(::UnityEngine::Playables::PlayableOutputHandle)>(
    &::UnityEngine::Playables::DataPlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6b32b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutput>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutput.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Playables::DataPlayableOutput::*)()>(
    &::UnityEngine::Playables::DataPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b32c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutput>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutput.Internal_CallOnPlayerChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Playables::PlayableOutputHandle, ::System::Object*, ::System::Object*)>(
    &::UnityEngine::Playables::DataPlayableOutput::Internal_CallOnPlayerChanged)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6b32c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Playables::DataPlayableOutput>(),
            { "Internal_CallOnPlayerChanged", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::DataPlayableOutput::_ctor(::UnityEngine::Playables::PlayableOutputHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutput>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::DataPlayableOutput::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutput>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle>(*this, ___internal_method);
}
inline void UnityEngine::Playables::DataPlayableOutput::Internal_CallOnPlayerChanged(::UnityEngine::Playables::PlayableOutputHandle handle, ::System::Object* previousPlayer,
                                                                                     ::System::Object* currentPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Playables::DataPlayableOutput>(),
          { "Internal_CallOnPlayerChanged", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, previousPlayer, currentPlayer);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr UnityEngine::Playables::DataPlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput*() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* UnityEngine::Playables::DataPlayableOutput::i___UnityEngine__Playables__IPlayableOutput() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::DataPlayableOutput::DataPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::DataPlayableOutput::DataPlayableOutput() {}
