#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/APVDefinitions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/zzzz__APVDefinitions_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::APVDefinitions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::APVDefinitions::*)()>(&::UnityEngine::Rendering::APVDefinitions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x657a650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::APVDefinitions::setStaticF_probeIndexChunkSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "probeIndexChunkSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::APVDefinitions::getStaticF_probeIndexChunkSize() {
  return ::cordl_internals::getStaticField<int32_t, "probeIndexChunkSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get>();
}
inline void UnityEngine::Rendering::APVDefinitions::setStaticF_probeMaxRegionCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "probeMaxRegionCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::APVDefinitions::getStaticF_probeMaxRegionCount() {
  return ::cordl_internals::getStaticField<int32_t, "probeMaxRegionCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get>();
}
inline void UnityEngine::Rendering::APVDefinitions::setStaticF_layerMaskColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, "layerMaskColors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get>(
      std::forward<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>(value));
}
inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> UnityEngine::Rendering::APVDefinitions::getStaticF_layerMaskColors() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, "layerMaskColors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get>();
}
inline void UnityEngine::Rendering::APVDefinitions::setStaticF_debugEmptyColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "debugEmptyColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::APVDefinitions::getStaticF_debugEmptyColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "debugEmptyColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get>();
}
inline void UnityEngine::Rendering::APVDefinitions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVDefinitions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::APVDefinitions* UnityEngine::Rendering::APVDefinitions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::APVDefinitions*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::APVDefinitions::APVDefinitions() {}
