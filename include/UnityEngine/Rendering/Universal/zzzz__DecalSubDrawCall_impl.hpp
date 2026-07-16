#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalSubDrawCall.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalSubDrawCall.get_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalSubDrawCall::*)()>(&::UnityEngine::Rendering::Universal::DecalSubDrawCall::get_count)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6854864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalSubDrawCall>(), { "get_count", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::Universal::DecalSubDrawCall::get_count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalSubDrawCall>(), { "get_count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalSubDrawCall::DecalSubDrawCall(int32_t start, int32_t end) noexcept {
  this->start = start;
  this->end = end;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalSubDrawCall::DecalSubDrawCall() {}
