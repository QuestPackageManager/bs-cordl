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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::*)()>(
    &::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c6b498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem_MeshTransformList.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c6b4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList>::get(), "Dispose",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRMeshSubsystem_MeshTransformList::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::XRMeshSubsystem_MeshTransformList::Dispose(::System::IntPtr self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList>::get(), "Dispose",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::XR::XRMeshSubsystem_MeshTransformList::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::XRMeshSubsystem_MeshTransformList::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Self", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::XRMeshSubsystem_MeshTransformList(::System::IntPtr m_Self) noexcept {
  this->m_Self = m_Self;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRMeshSubsystem_MeshTransformList::XRMeshSubsystem_MeshTransformList() {}
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem.InvokeMeshReadyDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem::*)(
    ::UnityEngine::XR::MeshGenerationResult, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*)>(&::UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c6b420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem*>::get(), "InvokeMeshReadyDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::MeshGenerationResult>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem::*)()>(&::UnityEngine::XR::XRMeshSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c6b45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult result,
                                                                      ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem*>::get(), "InvokeMeshReadyDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::MeshGenerationResult>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, onMeshGenerationComplete);
}
inline void UnityEngine::XR::XRMeshSubsystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRMeshSubsystem* UnityEngine::XR::XRMeshSubsystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::XRMeshSubsystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRMeshSubsystem::XRMeshSubsystem() {}
