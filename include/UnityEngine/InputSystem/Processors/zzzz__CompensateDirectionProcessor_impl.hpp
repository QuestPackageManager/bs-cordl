#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateDirectionProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::*)(
    ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::Process)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2af8e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2af9034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2af9074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>::get(), "Process", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor* UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>());
}
inline void UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::CompensateDirectionProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
