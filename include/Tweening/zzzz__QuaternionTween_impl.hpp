#pragma once
// IWYU pragma private; include "Tweening/QuaternionTween.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Tweening/zzzz__QuaternionTween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::QuaternionTween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::QuaternionTween::*)()>(&::Tweening::QuaternionTween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x44db900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::QuaternionTween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::QuaternionTween::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t, ::GlobalNamespace::EaseType, float_t)>(&::Tweening::QuaternionTween::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x44db948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Quaternion>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::QuaternionTween.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::Tweening::QuaternionTween::*)(float_t)>(&::Tweening::QuaternionTween::GetValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x44dba18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get(), 6));
    return ___internal_method;
  }
};
inline void Tweening::QuaternionTween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t,
                                                                                     ::GlobalNamespace::EaseType, float_t, ::Tweening::QuaternionTween*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t,
                                                                  ::GlobalNamespace::EaseType, float_t, ::Tweening::QuaternionTween*>*,
                                    "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get>(
      std::forward<::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                                 ::Tweening::QuaternionTween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                     ::Tweening::QuaternionTween*>*
Tweening::QuaternionTween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t,
                                                                         ::GlobalNamespace::EaseType, float_t, ::Tweening::QuaternionTween*>*,
                                           "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get>();
}
inline void Tweening::QuaternionTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tweening::QuaternionTween::_ctor(::UnityEngine::Quaternion fromValue, ::UnityEngine::Quaternion toValue, ::System::Action_1<::UnityEngine::Quaternion>* onUpdate, float_t duration,
                                             ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Quaternion>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline ::UnityEngine::Quaternion Tweening::QuaternionTween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::QuaternionTween*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, t);
}
inline ::Tweening::QuaternionTween* Tweening::QuaternionTween::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::QuaternionTween*>());
}
inline ::Tweening::QuaternionTween* Tweening::QuaternionTween::New_ctor(::UnityEngine::Quaternion fromValue, ::UnityEngine::Quaternion toValue, ::System::Action_1<::UnityEngine::Quaternion>* onUpdate,
                                                                        float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::QuaternionTween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
// Ctor Parameters []
constexpr ::Tweening::QuaternionTween::QuaternionTween() {}
