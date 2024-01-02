#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundParticleSystemRenderer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer.get_renderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2106130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2106138;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x210619c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__get__particleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__get__particleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__set__particleSystem(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Renderer*& GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__set__renderer(::UnityEngine::Renderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Renderer* GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::get_renderer() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Renderer*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer* GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::BloomPrePassBackgroundParticleSystemRenderer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
