#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\InstanceAllocators.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceAllocator_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceAllocators_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceAllocator_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceAllocators::*)()>(&::UnityEngine::Rendering::InstanceAllocators::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6823920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceAllocators::*)()>(&::UnityEngine::Rendering::InstanceAllocators::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6823980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.GetInstanceAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceAllocator (::UnityEngine::Rendering::InstanceAllocators::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceAllocators::GetInstanceAllocator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68239a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(),
                                                                                           { "GetInstanceAllocator", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.GetInstanceHandlesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceAllocators::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceAllocators::GetInstanceHandlesLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6823a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(),
                                                                                           { "GetInstanceHandlesLength", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.GetInstancesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceAllocators::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceAllocators::GetInstancesLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6823a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "GetInstancesLength", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.AllocateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceHandle (::UnityEngine::Rendering::InstanceAllocators::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceAllocators::AllocateInstance)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6823a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "AllocateInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.FreeInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceAllocators::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::InstanceAllocators::FreeInstance)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6823ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "FreeInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.AllocateSharedInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SharedInstanceHandle (::UnityEngine::Rendering::InstanceAllocators::*)()>(
    &::UnityEngine::Rendering::InstanceAllocators::AllocateSharedInstance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6823b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "AllocateSharedInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceAllocators.FreeSharedInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceAllocators::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::InstanceAllocators::FreeSharedInstance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6823be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(),
                                                                                           { "FreeSharedInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceAllocators::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceAllocators::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::InstanceAllocator UnityEngine::Rendering::InstanceAllocators::GetInstanceAllocator(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "GetInstanceAllocator", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceAllocator>(*this, ___internal_method, type);
}
inline int32_t UnityEngine::Rendering::InstanceAllocators::GetInstanceHandlesLength(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(),
                                                                                         { "GetInstanceHandlesLength", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, type);
}
inline int32_t UnityEngine::Rendering::InstanceAllocators::GetInstancesLength(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "GetInstancesLength", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, type);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::InstanceAllocators::AllocateInstance(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "AllocateInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle>(*this, ___internal_method, type);
}
inline void UnityEngine::Rendering::InstanceAllocators::FreeInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "FreeInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::InstanceAllocators::AllocateSharedInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(), { "AllocateSharedInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SharedInstanceHandle>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceAllocators::FreeSharedInstance(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceAllocators>(),
                                                                                         { "FreeSharedInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
// Ctor Parameters [CppParam { name: "m_InstanceAlloc_MeshRenderer", ty: "::UnityEngine::Rendering::InstanceAllocator", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_InstanceAlloc_SpeedTree", ty: "::UnityEngine::Rendering::InstanceAllocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SharedInstanceAlloc", ty:
// "::UnityEngine::Rendering::InstanceAllocator", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceAllocators::InstanceAllocators(::UnityEngine::Rendering::InstanceAllocator m_InstanceAlloc_MeshRenderer,
                                                                           ::UnityEngine::Rendering::InstanceAllocator m_InstanceAlloc_SpeedTree,
                                                                           ::UnityEngine::Rendering::InstanceAllocator m_SharedInstanceAlloc) noexcept {
  this->m_InstanceAlloc_MeshRenderer = m_InstanceAlloc_MeshRenderer;
  this->m_InstanceAlloc_SpeedTree = m_InstanceAlloc_SpeedTree;
  this->m_SharedInstanceAlloc = m_SharedInstanceAlloc;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceAllocators::InstanceAllocators() {}
