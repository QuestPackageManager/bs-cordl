#pragma once
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_impl.hpp"
#include "UnityEngine/Experimental/Playables/zzzz__TexturePlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::TexturePlayableOutput.GetHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Experimental::Playables::TexturePlayableOutput::*)()>(
    &::UnityEngine::Experimental::Playables::TexturePlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b8c574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::TexturePlayableOutput>::get(), "GetHandle",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr UnityEngine::Experimental::Playables::TexturePlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput*() {
  return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Experimental::Playables::TexturePlayableOutput::GetHandle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::TexturePlayableOutput>::get(), "GetHandle",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Playables::TexturePlayableOutput::TexturePlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Playables::TexturePlayableOutput::TexturePlayableOutput() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
