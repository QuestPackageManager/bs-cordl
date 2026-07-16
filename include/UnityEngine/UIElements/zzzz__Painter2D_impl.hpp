#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Painter2D.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SafeHandleAccess_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Painter2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DetachedAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationCallback_def.hpp"
#include "UnityEngine/UIElements/zzzz__Painter2D_def.hpp"
// Ctor Parameters [CppParam { name: "node", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers: "", def_value: Some("{}") }, CppParam { name: "snapshotIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Painter2D_Painter2DJobData::Painter2D_Painter2DJobData(::UnityEngine::UIElements::UnsafeMeshGenerationNode node, int32_t snapshotIndex) noexcept {
  this->node = node;
  this->snapshotIndex = snapshotIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Painter2D_Painter2DJobData::Painter2D_Painter2DJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D_Painter2DJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Painter2D_Painter2DJob::*)(int32_t)>(&::UnityEngine::UIElements::Painter2D_Painter2DJob::Execute)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6dd34dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D_Painter2DJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Painter2D_Painter2DJob::Execute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D_Painter2DJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::UIElements::Painter2D_Painter2DJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::UIElements::Painter2D_Painter2DJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "painterHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "allocator", ty: "::UnityEngine::UIElements::TempMeshAllocator",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "jobParameters", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::UIElements::Painter2D_Painter2DJob::Painter2D_Painter2DJob(::System::IntPtr painterHandle, ::UnityEngine::UIElements::TempMeshAllocator allocator,
                                                                                    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData> jobParameters) noexcept {
  this->painterHandle = painterHandle;
  this->allocator = allocator;
  this->jobParameters = jobParameters;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Painter2D_Painter2DJob::Painter2D_Painter2DJob() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)(Il2CppObject*)>(&::UnityEngine::UIElements::Painter2D::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6dd1af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { ".ctor", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)()>(&::UnityEngine::UIElements::Painter2D::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6dd2f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)()>(&::UnityEngine::UIElements::Painter2D::Reset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6dd21fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)()>(&::UnityEngine::UIElements::Painter2D::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dd2380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)(bool)>(&::UnityEngine::UIElements::Painter2D::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6dd3090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.set_isPainterActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::Painter2D::set_isPainterActive)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dd3150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "set_isPainterActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.ScheduleJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)(Il2CppObject*)>(&::UnityEngine::UIElements::Painter2D::ScheduleJobs)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6dd31b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "ScheduleJobs", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.OnMeshGeneration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)(Il2CppObject*, ::System::Object*)>(&::UnityEngine::UIElements::Painter2D::OnMeshGeneration)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6dd33d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(),
                                                                                           { "OnMeshGeneration", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr Il2CppObject*& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_Ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ctx;
}
constexpr Il2CppObject* const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_Ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ctx;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_Ctx(Il2CppObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ctx = value;
}
constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator*& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_DetachedAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachedAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator* const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_DetachedAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachedAllocator;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_DetachedAllocator(::UnityEngine::UIElements::UIR::DetachedAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DetachedAllocator = value;
}
constexpr ::UnityEngine::UIElements::SafeHandleAccess& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Handle;
}
constexpr ::UnityEngine::UIElements::SafeHandleAccess const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Handle;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_Handle(::UnityEngine::UIElements::SafeHandleAccess value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Handle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>*& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_JobSnapshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobSnapshots;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>* const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_JobSnapshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobSnapshots;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_JobSnapshots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JobSnapshots = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_JobParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobParameters;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData> const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_JobParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobParameters;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_JobParameters(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JobParameters = value;
}
constexpr bool& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_Disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Disposed;
}
constexpr bool const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_Disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Disposed;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_Disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Disposed = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_OnMeshGenerationDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMeshGenerationDelegate;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_OnMeshGenerationDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMeshGenerationDelegate;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_OnMeshGenerationDelegate(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnMeshGenerationDelegate = value;
}
inline void UnityEngine::UIElements::Painter2D::setStaticF__isPainterActive_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<isPainterActive>k__BackingField", ::UnityEngine::UIElements::Painter2D*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::Painter2D::getStaticF__isPainterActive_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<isPainterActive>k__BackingField", ::UnityEngine::UIElements::Painter2D*>();
}
inline void UnityEngine::UIElements::Painter2D::setStaticF_s_StrokeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_StrokeMarker", ::UnityEngine::UIElements::Painter2D*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Painter2D::getStaticF_s_StrokeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_StrokeMarker", ::UnityEngine::UIElements::Painter2D*>();
}
inline void UnityEngine::UIElements::Painter2D::setStaticF_s_FillMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_FillMarker", ::UnityEngine::UIElements::Painter2D*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Painter2D::getStaticF_s_FillMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_FillMarker", ::UnityEngine::UIElements::Painter2D*>();
}
inline void UnityEngine::UIElements::Painter2D::_ctor(Il2CppObject* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { ".ctor", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::UIElements::Painter2D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Painter2D::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Painter2D::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Painter2D::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::Painter2D::set_isPainterActive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "set_isPainterActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::Painter2D::ScheduleJobs(Il2CppObject* mgc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(), { "ScheduleJobs", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc);
}
inline void UnityEngine::UIElements::Painter2D::OnMeshGeneration(Il2CppObject* ctx, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Painter2D*>(),
                                                                                         { "OnMeshGeneration", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, data);
}
inline ::UnityEngine::UIElements::Painter2D* UnityEngine::UIElements::Painter2D::New_ctor(Il2CppObject* ctx) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Painter2D*>(ctx));
}
inline ::UnityEngine::UIElements::Painter2D* UnityEngine::UIElements::Painter2D::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Painter2D*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Painter2D::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Painter2D::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Painter2D::Painter2D() {}
