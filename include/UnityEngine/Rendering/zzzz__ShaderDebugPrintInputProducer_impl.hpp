#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderDebugPrintInputProducer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderDebugPrintInputProducer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderDebugPrintInput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintInputProducer.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderDebugPrintInput (*)()>(&::UnityEngine::Rendering::ShaderDebugPrintInputProducer::Get)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x676a49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintInputProducer*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ShaderDebugPrintInput UnityEngine::Rendering::ShaderDebugPrintInputProducer::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintInputProducer*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderDebugPrintInput>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderDebugPrintInputProducer::ShaderDebugPrintInputProducer() {}
