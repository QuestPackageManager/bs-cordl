#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferBuilder.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceComponentGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder.CreateMetadataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::MetadataValue (::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::*)(
    int32_t, int32_t, bool)>(&::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::CreateMetadataValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x660216c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(), "CreateMetadataValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder.AddComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::*)(
    int32_t, bool, int32_t, bool, ::UnityEngine::Rendering::InstanceType, ::UnityEngine::Rendering::InstanceComponentGroup)>(&::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::AddComponent)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6602188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(), "AddComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceComponentGroup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUInstanceDataBuffer* (
    ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::*)(::ByRef<::UnityEngine::Rendering::InstanceNumInfo>)>(&::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::Build)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x66022b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceNumInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::*)()>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6602b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::MetadataValue UnityEngine::Rendering::GPUInstanceDataBufferBuilder::CreateMetadataValue(int32_t nameID, int32_t gpuAddress, bool isOverridden) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(), "CreateMetadataValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MetadataValue, false>(this, ___internal_method, nameID, gpuAddress, isOverridden);
}
template <typename T>
inline void UnityEngine::Rendering::GPUInstanceDataBufferBuilder::AddComponent(int32_t propertyID, bool isOverriden, bool isPerInstance, ::UnityEngine::Rendering::InstanceType instanceType,
                                                                               ::UnityEngine::Rendering::InstanceComponentGroup componentGroup) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(), "AddComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceComponentGroup>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyID, isOverriden, isPerInstance, instanceType, componentGroup);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferBuilder::AddComponent(int32_t propertyID, bool isOverriden, int32_t byteSize, bool isPerInstance,
                                                                               ::UnityEngine::Rendering::InstanceType instanceType, ::UnityEngine::Rendering::InstanceComponentGroup componentGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(), "AddComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceComponentGroup>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyID, isOverriden, byteSize, isPerInstance, instanceType, componentGroup);
}
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* UnityEngine::Rendering::GPUInstanceDataBufferBuilder::Build(::ByRef<::UnityEngine::Rendering::InstanceNumInfo> instanceNumInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceNumInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceDataBuffer*, false>(this, ___internal_method, instanceNumInfo);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferBuilder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::GPUInstanceDataBufferBuilder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::GPUInstanceDataBufferBuilder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Components", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::GPUInstanceDataBufferBuilder(
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> m_Components) noexcept {
  this->m_Components = m_Components;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::GPUInstanceDataBufferBuilder() {}
