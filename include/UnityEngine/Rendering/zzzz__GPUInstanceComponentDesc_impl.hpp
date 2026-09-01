#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\GPUInstanceComponentDesc.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceComponentGroup_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceComponentGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceComponentDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceComponentDesc::*)(
    int32_t, int32_t, bool, bool, ::UnityEngine::Rendering::InstanceType, ::UnityEngine::Rendering::InstanceComponentGroup)>(&::UnityEngine::Rendering::GPUInstanceComponentDesc::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68205a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceComponentDesc>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceComponentGroup>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceComponentDesc::_ctor(int32_t inPropertyID, int32_t inByteSize, bool inIsOverriden, bool inPerInstance,
                                                                    ::UnityEngine::Rendering::InstanceType inInstanceType, ::UnityEngine::Rendering::InstanceComponentGroup inComponentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceComponentDesc>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceComponentGroup>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inPropertyID, inByteSize, inIsOverriden, inPerInstance, inInstanceType, inComponentType);
}
// Ctor Parameters [CppParam { name: "propertyID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byteSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "isOverriden", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPerInstance", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceType", ty:
// "::UnityEngine::Rendering::InstanceType", modifiers: "", def_value: Some("{}") }, CppParam { name: "componentGroup", ty: "::UnityEngine::Rendering::InstanceComponentGroup", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceComponentDesc::GPUInstanceComponentDesc(int32_t propertyID, int32_t byteSize, bool isOverriden, bool isPerInstance,
                                                                                       ::UnityEngine::Rendering::InstanceType instanceType,
                                                                                       ::UnityEngine::Rendering::InstanceComponentGroup componentGroup) noexcept {
  this->propertyID = propertyID;
  this->byteSize = byteSize;
  this->isOverriden = isOverriden;
  this->isPerInstance = isPerInstance;
  this->instanceType = instanceType;
  this->componentGroup = componentGroup;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceComponentDesc::GPUInstanceComponentDesc() {}
