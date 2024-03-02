#pragma once
#include "UnityEngine/UI/zzzz__BaseMeshEffect_impl.hpp"
#include "UnityEngine/UI/zzzz__PositionAsUV1_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::PositionAsUV1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::PositionAsUV1::*)()>(&::UnityEngine::UI::PositionAsUV1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9e09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::PositionAsUV1*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::PositionAsUV1.ModifyMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::PositionAsUV1::*)(::UnityEngine::UI::VertexHelper*)>(
    &::UnityEngine::UI::PositionAsUV1::ModifyMesh)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e9e0a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::PositionAsUV1*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::PositionAsUV1*>::get(), 20));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::PositionAsUV1* UnityEngine::UI::PositionAsUV1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::PositionAsUV1*>());
}
inline void UnityEngine::UI::PositionAsUV1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::PositionAsUV1*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::PositionAsUV1::ModifyMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::PositionAsUV1*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vh);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::PositionAsUV1::PositionAsUV1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
