#pragma once
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Experimental/Playables/zzzz__CameraPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::CameraPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Experimental::Playables::CameraPlayable::*)()>(
    &::UnityEngine::Experimental::Playables::CameraPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf4834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::CameraPlayable>::get(),
                                                                               "GetHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::CameraPlayable.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Playables::CameraPlayable::*)(
    ::UnityEngine::Experimental::Playables::CameraPlayable)>(&::UnityEngine::Experimental::Playables::CameraPlayable::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2cf4840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::CameraPlayable>::get(), "Equals", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Playables::CameraPlayable>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Experimental::Playables::CameraPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::CameraPlayable>"
constexpr UnityEngine::Experimental::Playables::CameraPlayable::operator ::System::IEquatable_1<::UnityEngine::Experimental::Playables::CameraPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Playables::CameraPlayable>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Experimental::Playables::CameraPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::CameraPlayable>::get(),
                                                                             "GetHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Playables::CameraPlayable::Equals(::UnityEngine::Experimental::Playables::CameraPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::CameraPlayable>::get(), "Equals", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Playables::CameraPlayable>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Playables::CameraPlayable::CameraPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Playables::CameraPlayable::CameraPlayable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
