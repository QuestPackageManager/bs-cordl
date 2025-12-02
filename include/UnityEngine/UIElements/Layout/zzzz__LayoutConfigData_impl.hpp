#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutConfigData.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfigData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfigData.get_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Layout::LayoutConfigData (*)()>(
    &::UnityEngine::UIElements::Layout::LayoutConfigData::get_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aca8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutConfigData>::get(),
                                                                               "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Layout::LayoutConfigData UnityEngine::UIElements::Layout::LayoutConfigData::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutConfigData>::get(),
                                                                             "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutConfigData, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "PointScaleFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShouldLog", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutConfigData::LayoutConfigData(float_t PointScaleFactor, bool ShouldLog) noexcept {
  this->PointScaleFactor = PointScaleFactor;
  this->ShouldLog = ShouldLog;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutConfigData::LayoutConfigData() {}
