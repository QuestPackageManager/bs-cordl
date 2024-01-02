#pragma once
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateDirectionProcessor_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidCompensateDirectionProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::*)(
    ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::Process)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ae6f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae6f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::Process(::UnityEngine::Vector3 vector,
                                                                                                                        ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, vector, control);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor* UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>());
}
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::AndroidCompensateDirectionProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
