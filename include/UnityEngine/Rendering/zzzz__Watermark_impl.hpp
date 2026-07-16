#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Watermark.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Watermark_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Watermark.IsVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Watermark::IsVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b19964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Watermark*>(), { "IsVisible", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Watermark::IsVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Watermark*>(), { "IsVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Watermark::Watermark() {}
