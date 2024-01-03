#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerIntroAnimator_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator.SetBeforeIntroValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::SetBeforeIntroValues)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23d64dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>::get(), "SetBeforeIntroValues",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d64f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Playables::PlayableDirector*& GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::__get__introPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::__get__introPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::__set__introPlayableDirector(::UnityEngine::Playables::PlayableDirector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____introPlayableDirector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::SetBeforeIntroValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>::get(),
                                                                             "SetBeforeIntroValues", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::MultiplayerConnectedPlayerIntroAnimator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
