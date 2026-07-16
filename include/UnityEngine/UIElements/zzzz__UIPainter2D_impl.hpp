#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIPainter2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIPainter2D_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteDataInterface_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIPainter2D.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool)>(&::UnityEngine::UIElements::UIPainter2D::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6db341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(), { "Create", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIPainter2D.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::UIElements::UIPainter2D::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6db3458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIPainter2D.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::UIElements::UIPainter2D::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6db3494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(), { "Reset", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIPainter2D.ClearSnapshots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::UIElements::UIPainter2D::ClearSnapshots)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6db34d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(), { "ClearSnapshots", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIPainter2D.ExecuteSnapshotFromJob
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::System::IntPtr, int32_t)>(
    &::UnityEngine::UIElements::UIPainter2D::ExecuteSnapshotFromJob)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6db350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(),
                                                                                           { "ExecuteSnapshotFromJob", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIPainter2D.ExecuteSnapshotFromJob_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(
    &::UnityEngine::UIElements::UIPainter2D::ExecuteSnapshotFromJob_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6db357c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(),
                                                { "ExecuteSnapshotFromJob_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::UIElements::UIPainter2D::Create(bool computeBBox) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(), { "Create", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, computeBBox);
}
inline void UnityEngine::UIElements::UIPainter2D::Destroy(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::UIElements::UIPainter2D::Reset(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(), { "Reset", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::UIElements::UIPainter2D::ClearSnapshots(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(), { "ClearSnapshots", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::UIPainter2D::ExecuteSnapshotFromJob(::System::IntPtr painterHandle, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(),
                                                                                         { "ExecuteSnapshotFromJob", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, painterHandle, i);
}
inline void UnityEngine::UIElements::UIPainter2D::ExecuteSnapshotFromJob_Injected(::System::IntPtr painterHandle, int32_t i, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIPainter2D*>(),
                                              { "ExecuteSnapshotFromJob_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, painterHandle, i, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIPainter2D::UIPainter2D() {}
