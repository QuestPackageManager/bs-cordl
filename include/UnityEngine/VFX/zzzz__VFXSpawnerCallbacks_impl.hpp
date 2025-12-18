#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXSpawnerCallbacks.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerState_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXSpawnerCallbacks.OnPlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::VFX::VFXSpawnerCallbacks::*)(
    ::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::VFXSpawnerCallbacks::OnPlay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXSpawnerCallbacks.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::VFX::VFXSpawnerCallbacks::*)(
    ::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::VFXSpawnerCallbacks::OnUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXSpawnerCallbacks.OnStop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::VFX::VFXSpawnerCallbacks::*)(
    ::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::VFXSpawnerCallbacks::OnStop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXSpawnerCallbacks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::VFX::VFXSpawnerCallbacks::*)()>(&::UnityEngine::VFX::VFXSpawnerCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c60a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VFXSpawnerCallbacks::OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                          ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::VFXSpawnerCallbacks::OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                            ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::VFXSpawnerCallbacks::OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                          ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::VFXSpawnerCallbacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXSpawnerCallbacks*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXSpawnerCallbacks* UnityEngine::VFX::VFXSpawnerCallbacks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::VFX::VFXSpawnerCallbacks*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXSpawnerCallbacks::VFXSpawnerCallbacks() {}
