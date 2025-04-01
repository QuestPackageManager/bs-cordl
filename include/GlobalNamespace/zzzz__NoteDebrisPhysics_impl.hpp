#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteDebrisPhysics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisPhysics.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisPhysics::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, bool)>(
    &::GlobalNamespace::NoteDebrisPhysics::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisPhysics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisPhysics*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisPhysics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisPhysics::*)()>(&::GlobalNamespace::NoteDebrisPhysics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisPhysics*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoteDebrisPhysics::Init(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity, bool forceOnlySimplePhysics) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisPhysics*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, linearVelocity, angularVelocity, forceOnlySimplePhysics);
}
inline void GlobalNamespace::NoteDebrisPhysics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisPhysics*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteDebrisPhysics* GlobalNamespace::NoteDebrisPhysics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteDebrisPhysics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteDebrisPhysics::NoteDebrisPhysics() {}
