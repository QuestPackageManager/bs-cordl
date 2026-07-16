#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsFence.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFenceType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__SynchronisationStageFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__SynchronisationStage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.TranslateSynchronizationStageToFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SynchronisationStageFlags (*)(::UnityEngine::Rendering::SynchronisationStage)>(
    &::UnityEngine::Rendering::GraphicsFence::TranslateSynchronizationStageToFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b0690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(),
                                                             { "TranslateSynchronizationStageToFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::SynchronisationStage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.InitPostAllocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GraphicsFence::*)()>(&::UnityEngine::Rendering::GraphicsFence::InitPostAllocation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b0691c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "InitPostAllocation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.IsFencePending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GraphicsFence::*)()>(&::UnityEngine::Rendering::GraphicsFence::IsFencePending)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b06a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "IsFencePending", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GraphicsFence::*)()>(&::UnityEngine::Rendering::GraphicsFence::Validate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b06a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "Validate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.GetPlatformNotSupportedVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GraphicsFence::*)()>(&::UnityEngine::Rendering::GraphicsFence::GetPlatformNotSupportedVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b069dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "GetPlatformNotSupportedVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.GetVersionNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Rendering::GraphicsFence::GetVersionNumber)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b069e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "GetVersionNumber", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::SynchronisationStageFlags UnityEngine::Rendering::GraphicsFence::TranslateSynchronizationStageToFlags(::UnityEngine::Rendering::SynchronisationStage s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(),
                                                           { "TranslateSynchronizationStageToFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::SynchronisationStage>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SynchronisationStageFlags>(nullptr, ___internal_method, s);
}
inline void UnityEngine::Rendering::GraphicsFence::InitPostAllocation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "InitPostAllocation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::GraphicsFence::IsFencePending() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "IsFencePending", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::GraphicsFence::Validate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "Validate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::GraphicsFence::GetPlatformNotSupportedVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "GetPlatformNotSupportedVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::GraphicsFence::GetVersionNumber(::System::IntPtr fencePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsFence>(), { "GetVersionNumber", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fencePtr);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_FenceType", ty: "::UnityEngine::Rendering::GraphicsFenceType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GraphicsFence::GraphicsFence(::System::IntPtr m_Ptr, int32_t m_Version, ::UnityEngine::Rendering::GraphicsFenceType m_FenceType) noexcept {
  this->m_Ptr = m_Ptr;
  this->m_Version = m_Version;
  this->m_FenceType = m_FenceType;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GraphicsFence::GraphicsFence() {}
