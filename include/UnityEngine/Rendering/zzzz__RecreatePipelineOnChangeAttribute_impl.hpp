#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RecreatePipelineOnChangeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RecreatePipelineOnChangeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::*)()>(&::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b08250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute* UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::RecreatePipelineOnChangeAttribute() {}
