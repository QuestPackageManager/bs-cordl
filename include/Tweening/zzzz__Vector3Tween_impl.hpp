#pragma once
// IWYU pragma private; include "Tweening/Vector3Tween.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Tweening/zzzz__Vector3Tween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::Vector3Tween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::Vector3Tween::*)()>(&::Tweening::Vector3Tween::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x622a7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector3Tween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::Vector3Tween::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType, float_t)>(&::Tweening::Vector3Tween::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x622a840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector3Tween.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Tweening::Vector3Tween::*)(float_t)>(&::Tweening::Vector3Tween::GetValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x622a8f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get(), 6));
    return ___internal_method;
  }
};
inline void Tweening::Vector3Tween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t,
                                                                                  ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector3Tween*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType,
                                                                  float_t, ::Tweening::Vector3Tween*>*,
                                    "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get>(
      std::forward<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                                 ::Tweening::Vector3Tween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                     ::Tweening::Vector3Tween*>*
Tweening::Vector3Tween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t,
                                                                         ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector3Tween*>*,
                                           "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get>();
}
inline void Tweening::Vector3Tween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tweening::Vector3Tween::_ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate, float_t duration,
                                          ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline ::UnityEngine::Vector3 Tweening::Vector3Tween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Vector3Tween*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, t);
}
inline ::Tweening::Vector3Tween* Tweening::Vector3Tween::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::Vector3Tween*>());
}
inline ::Tweening::Vector3Tween* Tweening::Vector3Tween::New_ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate,
                                                                  float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::Vector3Tween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
// Ctor Parameters []
constexpr ::Tweening::Vector3Tween::Vector3Tween() {}
