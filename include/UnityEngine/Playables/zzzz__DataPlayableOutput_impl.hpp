#pragma once
// IWYU pragma private; include "UnityEngine/Playables/DataPlayableOutput.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_impl.hpp"
#include "UnityEngine/Playables/zzzz__DataPlayableOutput_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutput._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::DataPlayableOutput::*)(::UnityEngine::Playables::PlayableOutputHandle)>(
    &::UnityEngine::Playables::DataPlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6967620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::DataPlayableOutput>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableOutputHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutput.GetHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Playables::DataPlayableOutput::*)()>(
    &::UnityEngine::Playables::DataPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6967734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::DataPlayableOutput>::get(), "GetHandle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutput.Internal_CallOnPlayerChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Playables::PlayableOutputHandle, ::System::Object*, ::System::Object*)>(
    &::UnityEngine::Playables::DataPlayableOutput::Internal_CallOnPlayerChanged)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6967740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::DataPlayableOutput>::get(), "Internal_CallOnPlayerChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableOutputHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::DataPlayableOutput::_ctor(::UnityEngine::Playables::PlayableOutputHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::DataPlayableOutput>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableOutputHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::DataPlayableOutput::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::DataPlayableOutput>::get(), "GetHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::DataPlayableOutput::Internal_CallOnPlayerChanged(::UnityEngine::Playables::PlayableOutputHandle handle, ::System::Object* previousPlayer,
                                                                                     ::System::Object* currentPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::DataPlayableOutput>::get(), "Internal_CallOnPlayerChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableOutputHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, previousPlayer, currentPlayer);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr UnityEngine::Playables::DataPlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput*() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* UnityEngine::Playables::DataPlayableOutput::i___UnityEngine__Playables__IPlayableOutput() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::DataPlayableOutput::DataPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::DataPlayableOutput::DataPlayableOutput() {}
