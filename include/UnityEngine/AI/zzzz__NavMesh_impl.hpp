#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMesh.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMesh_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x684e5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::*)()>(&::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x684e650;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate() {}
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.ClearPreUpdateListeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AI::NavMesh::ClearPreUpdateListeners)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x684e59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "ClearPreUpdateListeners",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMesh::setStaticF_onPreUpdate(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*, "onPreUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get>(
      std::forward<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(value));
}
inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* UnityEngine::AI::NavMesh::getStaticF_onPreUpdate() {
  return ::cordl_internals::getStaticField<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*, "onPreUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get>();
}
inline void UnityEngine::AI::NavMesh::ClearPreUpdateListeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "ClearPreUpdateListeners",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMesh::NavMesh() {}
