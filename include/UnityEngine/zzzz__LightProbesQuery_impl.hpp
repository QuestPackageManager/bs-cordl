#pragma once
// IWYU pragma private; include "UnityEngine/LightProbesQuery.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightProbesQuery_LightProbesQueryDispose.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LightProbesQuery_LightProbesQueryDispose::*)()>(
    &::UnityEngine::LightProbesQuery_LightProbesQueryDispose::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b8004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery_LightProbesQueryDispose>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbesQuery_LightProbesQueryDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery_LightProbesQueryDispose>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightProbesQuery_LightProbesQueryDispose::LightProbesQuery_LightProbesQueryDispose(::System::IntPtr m_LightProbeContextWrapper) noexcept {
  this->m_LightProbeContextWrapper = m_LightProbeContextWrapper;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbesQuery_LightProbesQueryDispose::LightProbesQuery_LightProbesQueryDispose() {}
//  Writing Method size for method: ::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::*)()>(
    &::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b8074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::UnityEngine::LightProbesQuery_LightProbesQueryDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::LightProbesQuery_LightProbesQueryDisposeJob(::UnityEngine::LightProbesQuery_LightProbesQueryDispose Data) noexcept {
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::LightProbesQuery_LightProbesQueryDisposeJob() {}
//  Writing Method size for method: ::UnityEngine::LightProbesQuery._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LightProbesQuery::*)(::Unity::Collections::Allocator)>(
    &::UnityEngine::LightProbesQuery::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68b7adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LightProbesQuery::*)()>(&::UnityEngine::LightProbesQuery::Dispose)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x68b7b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::LightProbesQuery::*)(::Unity::Jobs::JobHandle)>(
    &::UnityEngine::LightProbesQuery::Dispose)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x68b7ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::LightProbesQuery::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68b7b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::LightProbesQuery::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68b7c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.CalculateInterpolatedLightAndOcclusionProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LightProbesQuery::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>)>(&::UnityEngine::LightProbesQuery::CalculateInterpolatedLightAndOcclusionProbes)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x68b7dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "CalculateInterpolatedLightAndOcclusionProbes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.CalculateInterpolatedLightAndOcclusionProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t)>(
    &::UnityEngine::LightProbesQuery::CalculateInterpolatedLightAndOcclusionProbes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68b7f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "CalculateInterpolatedLightAndOcclusionProbes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbesQuery::_ctor(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocator);
}
inline void UnityEngine::LightProbesQuery::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::LightProbesQuery::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, inputDeps);
}
inline ::System::IntPtr UnityEngine::LightProbesQuery::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbesQuery::Destroy(::System::IntPtr lightProbeContextWrapper) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightProbeContextWrapper);
}
inline void UnityEngine::LightProbesQuery::CalculateInterpolatedLightAndOcclusionProbes(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions,
                                                                                        ::Unity::Collections::NativeArray_1<int32_t> tetrahedronIndices,
                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> lightProbes,
                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> occlusionProbes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "CalculateInterpolatedLightAndOcclusionProbes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, tetrahedronIndices, lightProbes, occlusionProbes);
}
inline void UnityEngine::LightProbesQuery::CalculateInterpolatedLightAndOcclusionProbes(::System::IntPtr lightProbeContextWrapper, ::System::IntPtr positions, ::System::IntPtr tetrahedronIndices,
                                                                                        ::System::IntPtr lightProbes, ::System::IntPtr occlusionProbes, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbesQuery>::get(), "CalculateInterpolatedLightAndOcclusionProbes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightProbeContextWrapper, positions, tetrahedronIndices, lightProbes, occlusionProbes, count);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LightProbesQuery::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LightProbesQuery::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel", ty:
// "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightProbesQuery::LightProbesQuery(::System::IntPtr m_LightProbeContextWrapper, ::Unity::Collections::Allocator m_AllocatorLabel) noexcept {
  this->m_LightProbeContextWrapper = m_LightProbeContextWrapper;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbesQuery::LightProbesQuery() {}
