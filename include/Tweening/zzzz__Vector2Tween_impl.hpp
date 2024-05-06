#pragma once
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Tweening/zzzz__Vector2Tween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::Vector2Tween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::Vector2Tween::*)()>(&::Tweening::Vector2Tween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3043e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector2Tween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::Vector2Tween::*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType, float_t)>(&::Tweening::Vector2Tween::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3043ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector2Tween.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::Tweening::Vector2Tween::*)(float_t)>(&::Tweening::Vector2Tween::GetValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3043f7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get(), 6));
    return ___internal_method;
  }
};
inline void Tweening::Vector2Tween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t,
                                                                                  ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector2Tween*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType,
                                                                  float_t, ::Tweening::Vector2Tween*>*,
                                    "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get>(
      std::forward<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                                 ::Tweening::Vector2Tween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                     ::Tweening::Vector2Tween*>*
Tweening::Vector2Tween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t,
                                                                         ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector2Tween*>*,
                                           "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get>();
}
inline ::Tweening::Vector2Tween* Tweening::Vector2Tween::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::Vector2Tween*>());
}
inline void Tweening::Vector2Tween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param delay: float_t (default: 0.0)
inline ::Tweening::Vector2Tween* Tweening::Vector2Tween::New_ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2>* onUpdate,
                                                                  float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::Vector2Tween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
/// @param delay: float_t (default: 0.0)
inline void Tweening::Vector2Tween::_ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2>* onUpdate, float_t duration,
                                          ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline ::UnityEngine::Vector2 Tweening::Vector2Tween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector2Tween*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Tweening::Vector2Tween::Vector2Tween() {}
