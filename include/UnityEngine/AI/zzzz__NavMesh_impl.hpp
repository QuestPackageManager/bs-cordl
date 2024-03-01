#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMesh_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshHit_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
#include "UnityEngine/AI/zzzz__NavMesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate::*)(::System::Object*, void*)>(
    &::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d637cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate::*)()>(
    &::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d63888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate* UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*>(object, method));
}
inline void UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate::__NavMesh__OnNavMeshPreUpdate() {}
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.Internal_CallOnNavMeshPreUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AI::NavMesh::Internal_CallOnNavMeshPreUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d6352c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "Internal_CallOnNavMeshPreUpdate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CalculatePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::UnityEngine::AI::NavMeshPath*)>(
    &::UnityEngine::AI::NavMesh::CalculatePath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d63590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "CalculatePath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AI::NavMeshPath*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CalculatePathInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::UnityEngine::AI::NavMeshPath*)>(
    &::UnityEngine::AI::NavMesh::CalculatePathInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d63630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "CalculatePathInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AI::NavMeshPath*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SamplePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ByRef<::UnityEngine::AI::NavMeshHit>, float_t, int32_t)>(
    &::UnityEngine::AI::NavMesh::SamplePosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d636f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "SamplePosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AI::NavMeshHit>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CalculatePathInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, int32_t, ::UnityEngine::AI::NavMeshPath*)>(
    &::UnityEngine::AI::NavMesh::CalculatePathInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6369c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "CalculatePathInternal_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AI::NavMeshPath*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SamplePosition_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::AI::NavMeshHit>, float_t, int32_t)>(
    &::UnityEngine::AI::NavMesh::SamplePosition_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d63768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "SamplePosition_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AI::NavMeshHit>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMesh::setStaticF_onPreUpdate(::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*, "onPreUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get>(
      std::forward<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*>(value));
}
inline ::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate* UnityEngine::AI::NavMesh::getStaticF_onPreUpdate() {
  return ::cordl_internals::getStaticField<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*, "onPreUpdate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get>();
}
inline void UnityEngine::AI::NavMesh::Internal_CallOnNavMeshPreUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(),
                                                                             "Internal_CallOnNavMeshPreUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::AI::NavMesh::CalculatePath(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, int32_t areaMask, ::UnityEngine::AI::NavMeshPath* path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "CalculatePath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AI::NavMeshPath*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourcePosition, targetPosition, areaMask, path);
}
inline bool UnityEngine::AI::NavMesh::CalculatePathInternal(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, int32_t areaMask, ::UnityEngine::AI::NavMeshPath* path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "CalculatePathInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AI::NavMeshPath*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourcePosition, targetPosition, areaMask, path);
}
inline bool UnityEngine::AI::NavMesh::SamplePosition(::UnityEngine::Vector3 sourcePosition, ByRef<::UnityEngine::AI::NavMeshHit> hit, float_t maxDistance, int32_t areaMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "SamplePosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AI::NavMeshHit>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourcePosition, hit, maxDistance, areaMask);
}
inline bool UnityEngine::AI::NavMesh::CalculatePathInternal_Injected(ByRef<::UnityEngine::Vector3> sourcePosition, ByRef<::UnityEngine::Vector3> targetPosition, int32_t areaMask,
                                                                     ::UnityEngine::AI::NavMeshPath* path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "CalculatePathInternal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AI::NavMeshPath*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourcePosition, targetPosition, areaMask, path);
}
inline bool UnityEngine::AI::NavMesh::SamplePosition_Injected(ByRef<::UnityEngine::Vector3> sourcePosition, ByRef<::UnityEngine::AI::NavMeshHit> hit, float_t maxDistance, int32_t areaMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMesh*>::get(), "SamplePosition_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AI::NavMeshHit>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourcePosition, hit, maxDistance, areaMask);
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMesh::NavMesh() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
