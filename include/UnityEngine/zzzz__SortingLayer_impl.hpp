#pragma once
// IWYU pragma private; include "UnityEngine/SortingLayer.hpp"
#include "UnityEngine/zzzz__SortingLayer_def.hpp"
//  Writing Method size for method: ::UnityEngine::SortingLayer.GetLayerValueFromID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::SortingLayer::GetLayerValueFromID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x47e99b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SortingLayer>::get(), "GetLayerValueFromID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::SortingLayer::GetLayerValueFromID(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SortingLayer>::get(), "GetLayerValueFromID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, id);
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SortingLayer::SortingLayer(int32_t m_Id) noexcept {
  this->m_Id = m_Id;
}
// Ctor Parameters []
constexpr ::UnityEngine::SortingLayer::SortingLayer() {}
