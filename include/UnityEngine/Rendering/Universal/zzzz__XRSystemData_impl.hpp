#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRSystemData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystemData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystemData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::*)()>(
    &::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66bbe54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::__cordl_internal_get_xrOcclusionMeshPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrOcclusionMeshPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::__cordl_internal_get_xrOcclusionMeshPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrOcclusionMeshPS;
}
constexpr void UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::__cordl_internal_set_xrOcclusionMeshPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xrOcclusionMeshPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::__cordl_internal_get_xrMirrorViewPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMirrorViewPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::__cordl_internal_get_xrMirrorViewPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMirrorViewPS;
}
constexpr void UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::__cordl_internal_set_xrMirrorViewPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xrMirrorViewPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources* UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources::XRSystemData_ShaderResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystemData::*)()>(
    &::UnityEngine::Rendering::Universal::XRSystemData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bbe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources*& UnityEngine::Rendering::Universal::XRSystemData::__cordl_internal_get_shaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaders;
}
constexpr ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources* const& UnityEngine::Rendering::Universal::XRSystemData::__cordl_internal_get_shaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaders;
}
constexpr void UnityEngine::Rendering::Universal::XRSystemData::__cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::XRSystemData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XRSystemData* UnityEngine::Rendering::Universal::XRSystemData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XRSystemData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRSystemData::XRSystemData() {}
