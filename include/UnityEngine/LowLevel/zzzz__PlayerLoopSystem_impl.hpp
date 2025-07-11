#pragma once
// IWYU pragma private; include "UnityEngine/LowLevel/PlayerLoopSystem.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48c1d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::*)()>(
    &::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x48c1d98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::PlayerLoopSystem_UpdateFunction() {}
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::LowLevel::PlayerLoopSystem::*)()>(&::UnityEngine::LowLevel::PlayerLoopSystem::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x48c1cf0;

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
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "subSystemList", ty:
// "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "updateDelegate", ty:
// "::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*", modifiers: "", def_value: Some("{}") }, CppParam { name: "updateFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "loopConditionFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem::PlayerLoopSystem(::System::Type* type,
                                                                      ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem, ::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*> subSystemList,
                                                                      ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate, ::System::IntPtr updateFunction,
                                                                      ::System::IntPtr loopConditionFunction) noexcept {
  this->type = type;
  this->subSystemList = subSystemList;
  this->updateDelegate = updateDelegate;
  this->updateFunction = updateFunction;
  this->loopConditionFunction = loopConditionFunction;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem::PlayerLoopSystem() {}
