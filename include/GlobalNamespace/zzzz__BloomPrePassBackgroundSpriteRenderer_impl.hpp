#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundSpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer.get_renderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Renderer> (::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e8ccc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24e8cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::__cordl_internal_get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::__cordl_internal_get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::__cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Renderer> GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::get_renderer() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer* GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::BloomPrePassBackgroundSpriteRenderer() {}
