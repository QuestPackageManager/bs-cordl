#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SceneCameraBloomPrePass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneCameraBloomPrePass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneCameraBloomPrePass::*)()>(&::GlobalNamespace::SceneCameraBloomPrePass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2109848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneCameraBloomPrePass*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassRendererSO*& GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrepassRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrepassRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRendererSO*> const& GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrepassRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrepassRenderer;
}
constexpr void GlobalNamespace::SceneCameraBloomPrePass::__set__bloomPrepassRenderer(::GlobalNamespace::BloomPrePassRendererSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrepassRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO*& GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrePassEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> const& GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrePassEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr void GlobalNamespace::SceneCameraBloomPrePass::__set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTexture*& GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrepassRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrepassRenderTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrepassRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrepassRenderTexture;
}
constexpr void GlobalNamespace::SceneCameraBloomPrePass::__set__bloomPrepassRenderTexture(::UnityEngine::RenderTexture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrepassRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SceneCameraBloomPrePass* GlobalNamespace::SceneCameraBloomPrePass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SceneCameraBloomPrePass*>());
}
inline void GlobalNamespace::SceneCameraBloomPrePass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneCameraBloomPrePass*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneCameraBloomPrePass::SceneCameraBloomPrePass() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
