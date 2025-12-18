#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderPathCompatibleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPathCompatibility_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPathCompatibleAttribute_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPathCompatibility_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::*)(
    ::UnityEngine::Rendering::Universal::RenderPathCompatibility)>(&::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x671ffe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPathCompatibility>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility& UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::__cordl_internal_get_renderPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderPath;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility const& UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::__cordl_internal_get_renderPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderPath;
}
constexpr void UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::__cordl_internal_set_renderPath(::UnityEngine::Rendering::Universal::RenderPathCompatibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderPath = value;
}
inline void UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::_ctor(::UnityEngine::Rendering::Universal::RenderPathCompatibility renderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPathCompatibility>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderPath);
}
inline ::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*
UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::New_ctor(::UnityEngine::Rendering::Universal::RenderPathCompatibility renderPath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*>(renderPath));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::RenderPathCompatibleAttribute() {}
