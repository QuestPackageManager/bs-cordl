#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__ScaleProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleProcessor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Processors::ScaleProcessor::*)(
    float_t, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::ScaleProcessor::Process)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bdf74c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleProcessor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleProcessor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::ScaleProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::ScaleProcessor::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bdf758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleProcessor*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::ScaleProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::ScaleProcessor::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2bdf7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleProcessor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleProcessor::__cordl_internal_get_factor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factor;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleProcessor::__cordl_internal_get_factor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factor;
}
constexpr void UnityEngine::InputSystem::Processors::ScaleProcessor::__cordl_internal_set_factor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___factor = value;
}
inline float_t UnityEngine::InputSystem::Processors::ScaleProcessor::Process(float_t value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleProcessor*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::ScaleProcessor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleProcessor*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::ScaleProcessor* UnityEngine::InputSystem::Processors::ScaleProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Processors::ScaleProcessor*>());
}
inline void UnityEngine::InputSystem::Processors::ScaleProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleProcessor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::ScaleProcessor::ScaleProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
