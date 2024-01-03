#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerIntroAnimator_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator.SetBeforeIntroValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23dc508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>::get(), "SetBeforeIntroValues",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator.SetAfterIntroValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23dc524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>::get(), "SetAfterIntroValues",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dc56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Playables::PlayableDirector*& GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::__get__introPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::__get__introPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::__set__introPlayableDirector(::UnityEngine::Playables::PlayableDirector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____introPlayableDirector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>::get(), "SetBeforeIntroValues",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>::get(), "SetAfterIntroValues",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>());
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::MultiplayerLocalActivePlayerIntroAnimator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
