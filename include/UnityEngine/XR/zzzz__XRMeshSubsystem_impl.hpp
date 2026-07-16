#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRMeshSubsystem.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/XR/zzzz__MeshGenerationResult_def.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem_MeshTransformList.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::*)()>(&::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e368d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem_MeshTransformList.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e36910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList>(), { "Dispose", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRMeshSubsystem_MeshTransformList::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::XR::XRMeshSubsystem_MeshTransformList::Dispose(::System::IntPtr self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList>(), { "Dispose", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::XR::XRMeshSubsystem_MeshTransformList::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::XRMeshSubsystem_MeshTransformList::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Self", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::XRMeshSubsystem_MeshTransformList(::System::IntPtr m_Self) noexcept {
  this->m_Self = m_Self;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::XRMeshSubsystem_MeshTransformList() {}
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem.InvokeMeshReadyDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem::*)(
    ::UnityEngine::XR::MeshGenerationResult, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*)>(&::UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e3685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem*>(),
            { "InvokeMeshReadyDelegate", {}, { ::i2c::type_of<::UnityEngine::XR::MeshGenerationResult>(), ::i2c::type_of<::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem::*)()>(&::UnityEngine::XR::XRMeshSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e36898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult result,
                                                                      ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem*>(),
          { "InvokeMeshReadyDelegate", {}, { ::i2c::type_of<::UnityEngine::XR::MeshGenerationResult>(), ::i2c::type_of<::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, onMeshGenerationComplete);
}
inline void UnityEngine::XR::XRMeshSubsystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRMeshSubsystem* UnityEngine::XR::XRMeshSubsystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::XRMeshSubsystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRMeshSubsystem::XRMeshSubsystem() {}
