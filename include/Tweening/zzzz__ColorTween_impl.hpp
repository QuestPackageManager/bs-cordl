#pragma once
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Tweening/zzzz__ColorTween_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Tweening::ColorTween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::ColorTween::*)()>(&::Tweening::ColorTween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28903f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::ColorTween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::ColorTween::*)(
    ::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t)>(&::Tweening::ColorTween::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x289043c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::ColorTween.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tweening::ColorTween::*)(float_t)>(&::Tweening::ColorTween::GetValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x289050c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get(), 6));
    return ___internal_method;
  }
};
inline void Tweening::ColorTween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t,
                                                                                ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>* value) {
  ::cordl_internals::setStaticField<
      ::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>*,
      "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get>(
      std::forward<::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                                 ::Tweening::ColorTween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>*
Tweening::ColorTween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<
      ::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>*,
      "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get>();
}
inline ::Tweening::ColorTween* Tweening::ColorTween::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tweening::ColorTween*>());
}
inline void Tweening::ColorTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param delay: float_t (default: 0.0)
inline ::Tweening::ColorTween* Tweening::ColorTween::New_ctor(::UnityEngine::Color fromValue, ::UnityEngine::Color toValue, ::System::Action_1<::UnityEngine::Color>* onUpdate, float_t duration,
                                                              ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::il2cpp_utils::New<::Tweening::ColorTween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
/// @param delay: float_t (default: 0.0)
inline void Tweening::ColorTween::_ctor(::UnityEngine::Color fromValue, ::UnityEngine::Color toValue, ::System::Action_1<::UnityEngine::Color>* onUpdate, float_t duration,
                                        ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline ::UnityEngine::Color Tweening::ColorTween::GetValue(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::ColorTween*>::get(), "GetValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Tweening::ColorTween::ColorTween() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
