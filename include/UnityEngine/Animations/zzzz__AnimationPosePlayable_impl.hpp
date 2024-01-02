#pragma once
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPosePlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPosePlayable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Animations::AnimationPosePlayable::*)(::UnityEngine::Playables::PlayableHandle)>(
    &::UnityEngine::Animations::AnimationPosePlayable::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c98568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPosePlayable>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPosePlayable.GetHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationPosePlayable::*)()>(
    &::UnityEngine::Animations::AnimationPosePlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c98628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPosePlayable>::get(),
                                                                               "GetHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPosePlayable.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Animations::AnimationPosePlayable::*)(::UnityEngine::Animations::AnimationPosePlayable)>(
    &::UnityEngine::Animations::AnimationPosePlayable::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2c98634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPosePlayable>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPosePlayable>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Animations::AnimationPosePlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>"
constexpr UnityEngine::Animations::AnimationPosePlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void UnityEngine::Animations::AnimationPosePlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationPosePlayable value) {
  ::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationPosePlayable, "m_NullPlayable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPosePlayable>::get>(
      std::forward<::UnityEngine::Animations::AnimationPosePlayable>(value));
}
inline ::UnityEngine::Animations::AnimationPosePlayable UnityEngine::Animations::AnimationPosePlayable::getStaticF_m_NullPlayable() {
  return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationPosePlayable, "m_NullPlayable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPosePlayable>::get>();
}
inline void UnityEngine::Animations::AnimationPosePlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPosePlayable>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationPosePlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPosePlayable>::get(),
                                                                             "GetHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle, false>(this, ___internal_method);
}
inline bool UnityEngine::Animations::AnimationPosePlayable::Equals(::UnityEngine::Animations::AnimationPosePlayable other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPosePlayable>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPosePlayable>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationPosePlayable::AnimationPosePlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPosePlayable::AnimationPosePlayable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
