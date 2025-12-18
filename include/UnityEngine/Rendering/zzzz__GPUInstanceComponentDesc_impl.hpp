#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceComponentDesc.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceComponentGroup_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceComponentGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceComponentDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUInstanceComponentDesc::*)(
    int32_t, int32_t, bool, bool, ::UnityEngine::Rendering::InstanceType, ::UnityEngine::Rendering::InstanceComponentGroup)>(&::UnityEngine::Rendering::GPUInstanceComponentDesc::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceComponentDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceComponentGroup>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceComponentDesc::_ctor(int32_t inPropertyID, int32_t inByteSize, bool inIsOverriden, bool inPerInstance,
                                                                    ::UnityEngine::Rendering::InstanceType inInstanceType, ::UnityEngine::Rendering::InstanceComponentGroup inComponentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceComponentDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceComponentGroup>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inPropertyID, inByteSize, inIsOverriden, inPerInstance, inInstanceType, inComponentType);
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
