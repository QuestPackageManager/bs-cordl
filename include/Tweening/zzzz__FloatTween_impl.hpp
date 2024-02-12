#pragma once
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::FloatTween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::FloatTween::*)()>(&::Tweening::FloatTween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a105a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::FloatTween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Tweening::FloatTween::*)(float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t)>(&::Tweening::FloatTween::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a105ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::FloatTween.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tweening::FloatTween::*)(float_t)>(&::Tweening::FloatTween::GetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a1067c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get(), 6));
    return ___internal_method;
  }
};
inline void
Tweening::FloatTween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>*, "Pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get>(
      std::forward<::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* Tweening::FloatTween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>*,
                                           "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get>();
}
inline ::Tweening::FloatTween* Tweening::FloatTween::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::FloatTween*>());
}
inline void Tweening::FloatTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param delay: float_t (default: 0.0)
inline ::Tweening::FloatTween* Tweening::FloatTween::New_ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                                                              float_t delay) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::FloatTween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
/// @param delay: float_t (default: 0.0)
inline void Tweening::FloatTween::_ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline float_t Tweening::FloatTween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FloatTween*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Tweening::FloatTween::FloatTween() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
