#pragma once
// IWYU pragma private; include "UnityEngine\AI\NavMesh.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMesh_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a1ef5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::*)()>(&::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a1efc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(), { ::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate() {}
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.ClearPreUpdateListeners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AI::NavMesh::ClearPreUpdateListeners)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a1ef10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AI::NavMesh*>(), { "ClearPreUpdateListeners", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMesh::setStaticF_onPreUpdate(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*, "onPreUpdate", ::UnityEngine::AI::NavMesh*>(std::forward<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(value));
}
inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* UnityEngine::AI::NavMesh::getStaticF_onPreUpdate() {
  return ::cordl_internals::getStaticField<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*, "onPreUpdate", ::UnityEngine::AI::NavMesh*>();
}
inline void UnityEngine::AI::NavMesh::ClearPreUpdateListeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AI::NavMesh*>(), { "ClearPreUpdateListeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMesh::NavMesh() {}
