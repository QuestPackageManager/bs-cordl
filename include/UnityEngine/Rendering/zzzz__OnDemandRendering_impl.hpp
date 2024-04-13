#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OnDemandRendering_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.get_renderFrameInterval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::OnDemandRendering::get_renderFrameInterval)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32228d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering*>::get(),
                                                                               "get_renderFrameInterval", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.GetRenderFrameInterval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>)>(&::UnityEngine::Rendering::OnDemandRendering::GetRenderFrameInterval)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3222928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering*>::get(), "GetRenderFrameInterval",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OnDemandRendering::setStaticF_m_RenderFrameInterval(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_RenderFrameInterval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OnDemandRendering::getStaticF_m_RenderFrameInterval() {
  return ::cordl_internals::getStaticField<int32_t, "m_RenderFrameInterval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering*>::get>();
}
inline int32_t UnityEngine::Rendering::OnDemandRendering::get_renderFrameInterval() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering*>::get(),
                                                                             "get_renderFrameInterval", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::OnDemandRendering::GetRenderFrameInterval(ByRef<int32_t> frameInterval) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering*>::get(), "GetRenderFrameInterval",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frameInterval);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OnDemandRendering::OnDemandRendering() {}
