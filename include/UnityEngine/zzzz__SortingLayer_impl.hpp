#pragma once
// IWYU pragma private; include "UnityEngine\SortingLayer.hpp"
#include "UnityEngine/zzzz__SortingLayer_def.hpp"
//  Writing Method size for method: ::UnityEngine::SortingLayer.GetLayerValueFromID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::SortingLayer::GetLayerValueFromID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a65824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SortingLayer>(), { "GetLayerValueFromID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::SortingLayer::GetLayerValueFromID(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SortingLayer>(), { "GetLayerValueFromID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, id);
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SortingLayer::SortingLayer(int32_t m_Id) noexcept {
  this->m_Id = m_Id;
}
// Ctor Parameters []
constexpr ::UnityEngine::SortingLayer::SortingLayer() {}
