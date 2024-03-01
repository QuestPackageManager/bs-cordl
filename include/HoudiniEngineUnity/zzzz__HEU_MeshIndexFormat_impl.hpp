#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshIndexFormat_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MeshIndexFormat.CalculateIndexFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MeshIndexFormat::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_MeshIndexFormat::CalculateIndexFormat)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23320f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get(), "CalculateIndexFormat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MeshIndexFormat.SetFormatForMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MeshIndexFormat::*)(::UnityEngine::Mesh*)>(
    &::HoudiniEngineUnity::HEU_MeshIndexFormat::SetFormatForMesh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x233216c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get(), "SetFormatForMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MeshIndexFormat._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MeshIndexFormat::*)()>(&::HoudiniEngineUnity::HEU_MeshIndexFormat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2332190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::IndexFormat& HoudiniEngineUnity::HEU_MeshIndexFormat::__cordl_internal_get__indexFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexFormat;
}
constexpr ::UnityEngine::Rendering::IndexFormat const& HoudiniEngineUnity::HEU_MeshIndexFormat::__cordl_internal_get__indexFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexFormat;
}
constexpr void HoudiniEngineUnity::HEU_MeshIndexFormat::__cordl_internal_set__indexFormat(::UnityEngine::Rendering::IndexFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indexFormat = value;
}
inline void HoudiniEngineUnity::HEU_MeshIndexFormat::CalculateIndexFormat(int32_t numVertices) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get(), "CalculateIndexFormat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numVertices);
}
inline void HoudiniEngineUnity::HEU_MeshIndexFormat::SetFormatForMesh(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get(), "SetFormatForMesh",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh);
}
inline ::HoudiniEngineUnity::HEU_MeshIndexFormat* HoudiniEngineUnity::HEU_MeshIndexFormat::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_MeshIndexFormat*>());
}
inline void HoudiniEngineUnity::HEU_MeshIndexFormat::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_MeshIndexFormat::HEU_MeshIndexFormat() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
