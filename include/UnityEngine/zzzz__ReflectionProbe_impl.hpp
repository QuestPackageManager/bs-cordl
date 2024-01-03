#pragma once
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent::__ReflectionProbe__ReflectionProbeEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent::__ReflectionProbe__ReflectionProbeEvent() {}
constexpr ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent UnityEngine::__ReflectionProbe__ReflectionProbeEvent::ReflectionProbeAdded{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent UnityEngine::__ReflectionProbe__ReflectionProbeEvent::ReflectionProbeRemoved{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallReflectionProbeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent)>(
    &::UnityEngine::ReflectionProbe::CallReflectionProbeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cc68c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get(), "CallReflectionProbeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ReflectionProbe*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallSetDefaultReflection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture*)>(&::UnityEngine::ReflectionProbe::CallSetDefaultReflection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cc6948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get(), "CallSetDefaultReflection", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ReflectionProbe::setStaticF_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>*, "reflectionProbeChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>(
      std::forward<::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>*>(value));
}
inline ::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* UnityEngine::ReflectionProbe::getStaticF_reflectionProbeChanged() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>*, "reflectionProbeChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>();
}
inline void UnityEngine::ReflectionProbe::setStaticF_defaultReflectionTexture(::System::Action_1<::UnityEngine::Texture*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Texture*>*, "defaultReflectionTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>(std::forward<::System::Action_1<::UnityEngine::Texture*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Texture*>* UnityEngine::ReflectionProbe::getStaticF_defaultReflectionTexture() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Texture*>*, "defaultReflectionTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>();
}
inline void UnityEngine::ReflectionProbe::CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent probeEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get(), "CallReflectionProbeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ReflectionProbe*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, probe, probeEvent);
}
inline void UnityEngine::ReflectionProbe::CallSetDefaultReflection(::UnityEngine::Texture* defaultReflectionCubemap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get(), "CallSetDefaultReflection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, defaultReflectionCubemap);
}
// Ctor Parameters []
constexpr ::UnityEngine::ReflectionProbe::ReflectionProbe() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
