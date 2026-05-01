#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/IGeometry.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__IGeometry_def.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryType_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics::IGeometry.get_GeometryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LowLevelPhysics::GeometryType (::UnityEngine::LowLevelPhysics::IGeometry::*)()>(
    &::UnityEngine::LowLevelPhysics::IGeometry::get_GeometryType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevelPhysics::IGeometry*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevelPhysics::IGeometry*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::IGeometry::get_GeometryType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevelPhysics::IGeometry*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics::GeometryType, false>(this, ___internal_method);
}
