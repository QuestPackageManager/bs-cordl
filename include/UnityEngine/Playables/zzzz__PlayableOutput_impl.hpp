#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableOutput.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutput.get_Null
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutput (*)()>(&::UnityEngine::Playables::PlayableOutput::get_Null)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b0133c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { "get_Null", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableOutput::*)(::UnityEngine::Playables::PlayableOutputHandle)>(
    &::UnityEngine::Playables::PlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b02ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutput.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Playables::PlayableOutput::*)()>(
    &::UnityEngine::Playables::PlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b02acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutput.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableOutput::*)(::UnityEngine::Playables::PlayableOutput)>(
    &::UnityEngine::Playables::PlayableOutput::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b02ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutput>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableOutput::setStaticF_m_NullPlayableOutput(::UnityEngine::Playables::PlayableOutput value) {
  ::cordl_internals::setStaticField<::UnityEngine::Playables::PlayableOutput, "m_NullPlayableOutput", ::UnityEngine::Playables::PlayableOutput>(
      std::forward<::UnityEngine::Playables::PlayableOutput>(value));
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableOutput::getStaticF_m_NullPlayableOutput() {
  return ::cordl_internals::getStaticField<::UnityEngine::Playables::PlayableOutput, "m_NullPlayableOutput", ::UnityEngine::Playables::PlayableOutput>();
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableOutput::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput>(nullptr, ___internal_method);
}
inline void UnityEngine::Playables::PlayableOutput::_ctor(::UnityEngine::Playables::PlayableOutputHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::PlayableOutput::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Playables::PlayableOutput::IsPlayableOutputOfType() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { "IsPlayableOutputOfType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableOutput::Equals(::UnityEngine::Playables::PlayableOutput other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutput>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr UnityEngine::Playables::PlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput*() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* UnityEngine::Playables::PlayableOutput::i___UnityEngine__Playables__IPlayableOutput() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>"
constexpr UnityEngine::Playables::PlayableOutput::operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>"
constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>* UnityEngine::Playables::PlayableOutput::i___System__IEquatable_1___UnityEngine__Playables__PlayableOutput_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableOutput::PlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableOutput::PlayableOutput() {}
