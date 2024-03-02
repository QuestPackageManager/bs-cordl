#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::*)(::System::Object*, void*)>(
    &::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2df0a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::*)()>(
    &::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::Invoke)> {
  constexpr static std::size_t size = 0x1014;
  constexpr static std::size_t addrs = 0x2df0b58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>(object, method));
}
inline void UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::__PlayerLoopSystem__UpdateFunction() {}
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::LowLevel::PlayerLoopSystem::*)()>(&::UnityEngine::LowLevel::PlayerLoopSystem::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2df0a7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::LowLevel::PlayerLoopSystem::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "subSystemList", ty:
// "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updateDelegate", ty:
// "::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updateFunction", ty: "void*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "loopConditionFunction", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem::PlayerLoopSystem(::System::Type* type,
                                                                      ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem, ::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*> subSystemList,
                                                                      ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* updateDelegate, void* updateFunction,
                                                                      void* loopConditionFunction) noexcept {
  this->type = type;
  this->subSystemList = subSystemList;
  this->updateDelegate = updateDelegate;
  this->updateFunction = updateFunction;
  this->loopConditionFunction = loopConditionFunction;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem::PlayerLoopSystem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
