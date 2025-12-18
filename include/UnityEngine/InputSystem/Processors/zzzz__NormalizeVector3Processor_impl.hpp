#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/NormalizeVector3Processor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__NormalizeVector3Processor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::NormalizeVector3Processor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Processors::NormalizeVector3Processor::*)(
    ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::NormalizeVector3Processor::Process)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6408740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::NormalizeVector3Processor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::NormalizeVector3Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::NormalizeVector3Processor::ToString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6408820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::NormalizeVector3Processor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::NormalizeVector3Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::NormalizeVector3Processor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6408864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Processors::NormalizeVector3Processor::Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::NormalizeVector3Processor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::NormalizeVector3Processor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::NormalizeVector3Processor* UnityEngine::InputSystem::Processors::NormalizeVector3Processor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::NormalizeVector3Processor::NormalizeVector3Processor() {}
