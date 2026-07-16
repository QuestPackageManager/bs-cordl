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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::MetadataValue (::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::CreateMetadataValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x681b648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(),
                                                             { "CreateMetadataValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder.AddComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::*)(
    int32_t, bool, int32_t, bool, ::UnityEngine::Rendering::InstanceType, ::UnityEngine::Rendering::InstanceComponentGroup)>(&::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::AddComponent)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x681b664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(),
                                                             { "AddComponent",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceComponentGroup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUInstanceDataBuffer* (
    ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::*)(::by_ref<::UnityEngine::Rendering::InstanceNumInfo>)>(&::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::Build)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x681b790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(),
                                                                                           { "Build", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceNumInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::*)()>(&::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x681c01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::MetadataValue UnityEngine::Rendering::GPUInstanceDataBufferBuilder::CreateMetadataValue(int32_t nameID, int32_t gpuAddress, bool isOverridden) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(),
                                                           { "CreateMetadataValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MetadataValue>(*this, ___internal_method, nameID, gpuAddress, isOverridden);
}
template <typename T>
inline void UnityEngine::Rendering::GPUInstanceDataBufferBuilder::AddComponent(int32_t propertyID, bool isOverriden, bool isPerInstance, ::UnityEngine::Rendering::InstanceType instanceType,
                                                                               ::UnityEngine::Rendering::InstanceComponentGroup componentGroup) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(),
                                                           { "AddComponent",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::InstanceComponentGroup>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, propertyID, isOverriden, isPerInstance, instanceType, componentGroup);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferBuilder::AddComponent(int32_t propertyID, bool isOverriden, int32_t byteSize, bool isPerInstance,
                                                                               ::UnityEngine::Rendering::InstanceType instanceType, ::UnityEngine::Rendering::InstanceComponentGroup componentGroup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(),
                                                           { "AddComponent",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceComponentGroup>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, propertyID, isOverriden, byteSize, isPerInstance, instanceType, componentGroup);
}
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* UnityEngine::Rendering::GPUInstanceDataBufferBuilder::Build(::by_ref<::UnityEngine::Rendering::InstanceNumInfo> instanceNumInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(),
                                                                                         { "Build", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceNumInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(*this, ___internal_method, instanceNumInfo);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferBuilder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::GPUInstanceDataBufferBuilder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::GPUInstanceDataBufferBuilder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Components", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::GPUInstanceDataBufferBuilder(
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> m_Components) noexcept {
  this->m_Components = m_Components;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferBuilder::GPUInstanceDataBufferBuilder() {}
