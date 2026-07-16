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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbesQuery_LightProbesQueryDispose::*)()>(&::UnityEngine::LightProbesQuery_LightProbesQueryDispose::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a7f8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery_LightProbesQueryDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbesQuery_LightProbesQueryDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery_LightProbesQueryDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightProbesQuery_LightProbesQueryDispose::LightProbesQuery_LightProbesQueryDispose(::System::IntPtr m_LightProbeContextWrapper) noexcept {
  this->m_LightProbeContextWrapper = m_LightProbeContextWrapper;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbesQuery_LightProbesQueryDispose::LightProbesQuery_LightProbesQueryDispose() {}
//  Writing Method size for method: ::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::*)()>(&::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a7f93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::UnityEngine::LightProbesQuery_LightProbesQueryDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::LightProbesQuery_LightProbesQueryDisposeJob(::UnityEngine::LightProbesQuery_LightProbesQueryDispose Data) noexcept {
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob::LightProbesQuery_LightProbesQueryDisposeJob() {}
//  Writing Method size for method: ::UnityEngine::LightProbesQuery._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbesQuery::*)(::Unity::Collections::Allocator)>(&::UnityEngine::LightProbesQuery::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a7f3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbesQuery::*)()>(&::UnityEngine::LightProbesQuery::Dispose)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a7f44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::LightProbesQuery::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::LightProbesQuery::Dispose)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6a7f594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::LightProbesQuery::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7f424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::LightProbesQuery::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a7f558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.CalculateInterpolatedLightAndOcclusionProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbesQuery::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>)>(&::UnityEngine::LightProbesQuery::CalculateInterpolatedLightAndOcclusionProbes)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6a7f690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(),
                                                { "CalculateInterpolatedLightAndOcclusionProbes",
                                                  {},
                                                  { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbesQuery.CalculateInterpolatedLightAndOcclusionProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t)>(
    &::UnityEngine::LightProbesQuery::CalculateInterpolatedLightAndOcclusionProbes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a7f858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "CalculateInterpolatedLightAndOcclusionProbes",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                    ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbesQuery::_ctor(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
inline void UnityEngine::LightProbesQuery::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::LightProbesQuery::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
inline ::System::IntPtr UnityEngine::LightProbesQuery::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbesQuery::Destroy(::System::IntPtr lightProbeContextWrapper) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lightProbeContextWrapper);
}
inline void UnityEngine::LightProbesQuery::CalculateInterpolatedLightAndOcclusionProbes(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions,
                                                                                        ::Unity::Collections::NativeArray_1<int32_t> tetrahedronIndices,
                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> lightProbes,
                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> occlusionProbes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(),
                                              { "CalculateInterpolatedLightAndOcclusionProbes",
                                                {},
                                                { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, positions, tetrahedronIndices, lightProbes, occlusionProbes);
}
inline void UnityEngine::LightProbesQuery::CalculateInterpolatedLightAndOcclusionProbes(::System::IntPtr lightProbeContextWrapper, ::System::IntPtr positions, ::System::IntPtr tetrahedronIndices,
                                                                                        ::System::IntPtr lightProbes, ::System::IntPtr occlusionProbes, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbesQuery>(),
                                                                                         { "CalculateInterpolatedLightAndOcclusionProbes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lightProbeContextWrapper, positions, tetrahedronIndices, lightProbes, occlusionProbes, count);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LightProbesQuery::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LightProbesQuery::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel", ty:
// "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightProbesQuery::LightProbesQuery(::System::IntPtr m_LightProbeContextWrapper, ::Unity::Collections::Allocator m_AllocatorLabel) noexcept {
  this->m_LightProbeContextWrapper = m_LightProbeContextWrapper;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbesQuery::LightProbesQuery() {}
