#pragma once
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Animations::AnimationScriptPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(
    &::UnityEngine::Animations::AnimationScriptPlayable::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c976b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationScriptPlayable>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationScriptPlayable::*)()>(
    &::UnityEngine::Animations::AnimationScriptPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c97770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationScriptPlayable>::get(),
                                                                               "GetHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Animations::AnimationScriptPlayable::*)(::UnityEngine::Animations::AnimationScriptPlayable)>(
    &::UnityEngine::Animations::AnimationScriptPlayable::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c9777c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationScriptPlayable>::get(), "Equals", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationScriptPlayable>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Animations::AnimationScriptPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationScriptPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr UnityEngine::Animations::AnimationScriptPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*
UnityEngine::Animations::AnimationScriptPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationScriptPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void UnityEngine::Animations::AnimationScriptPlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationScriptPlayable value) {
  ::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationScriptPlayable, "m_NullPlayable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationScriptPlayable>::get>(
      std::forward<::UnityEngine::Animations::AnimationScriptPlayable>(value));
}
inline ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine::Animations::AnimationScriptPlayable::getStaticF_m_NullPlayable() {
  return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationScriptPlayable, "m_NullPlayable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationScriptPlayable>::get>();
}
inline void UnityEngine::Animations::AnimationScriptPlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationScriptPlayable>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationScriptPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationScriptPlayable>::get(),
                                                                             "GetHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle, false>(this, ___internal_method);
}
inline bool UnityEngine::Animations::AnimationScriptPlayable::Equals(::UnityEngine::Animations::AnimationScriptPlayable other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationScriptPlayable>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationScriptPlayable>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationScriptPlayable::AnimationScriptPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationScriptPlayable::AnimationScriptPlayable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
