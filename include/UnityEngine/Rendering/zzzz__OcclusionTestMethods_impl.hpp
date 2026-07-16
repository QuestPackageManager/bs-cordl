#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionTestMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTestMethods_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionTestMethods.GetBatchLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Rendering::OcclusionTest)>(&::UnityEngine::Rendering::OcclusionTestMethods::GetBatchLayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6810de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OcclusionTestMethods*>(),
                                                                                           { "GetBatchLayerMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::OcclusionTest>() } })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::OcclusionTestMethods::GetBatchLayerMask(::UnityEngine::Rendering::OcclusionTest occlusionTest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OcclusionTestMethods*>(),
                                                                                         { "GetBatchLayerMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::OcclusionTest>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, occlusionTest);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionTestMethods::OcclusionTestMethods() {}
