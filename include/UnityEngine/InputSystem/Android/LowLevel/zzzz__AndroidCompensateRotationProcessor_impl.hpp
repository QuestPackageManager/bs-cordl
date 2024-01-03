#pragma once
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateRotationProcessor_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidCompensateRotationProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::Process)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ae6f64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae6f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::Process(::UnityEngine::Quaternion value,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, value, control);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor* UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>());
}
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::AndroidCompensateRotationProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
