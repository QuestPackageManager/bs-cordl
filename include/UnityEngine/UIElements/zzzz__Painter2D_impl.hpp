#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Painter2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SafeHandleAccess_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Painter2D_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DetachedAllocator_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)(::UnityEngine::UIElements::MeshGenerationContext*)>(
    &::UnityEngine::UIElements::Painter2D::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x49e5d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)()>(&::UnityEngine::UIElements::Painter2D::Reset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x49e5ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)()>(&::UnityEngine::UIElements::Painter2D::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x49e5eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Painter2D::*)(bool)>(&::UnityEngine::UIElements::Painter2D::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x49e5f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Painter2D.set_isPainterActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::Painter2D::set_isPainterActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x49e5fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), "set_isPainterActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Painter2D::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Painter2D::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::MeshGenerationContext*& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_Ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ctx;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::MeshGenerationContext*> const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_Ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ctx;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_Ctx(::UnityEngine::UIElements::MeshGenerationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Ctx)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator*& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_DetachedAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachedAllocator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::DetachedAllocator*> const& UnityEngine::UIElements::Painter2D::__cordl_internal_get_m_DetachedAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachedAllocator;
}
constexpr void UnityEngine::UIElements::Painter2D::__cordl_internal_set_m_DetachedAllocator(::UnityEngine::UIElements::UIR::DetachedAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DetachedAllocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void UnityEngine::UIElements::Painter2D::setStaticF__isPainterActive_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<isPainterActive>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::Painter2D::getStaticF__isPainterActive_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<isPainterActive>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get>();
}
inline void UnityEngine::UIElements::Painter2D::setStaticF_s_MaxArcRadius(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_MaxArcRadius", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::Painter2D::getStaticF_s_MaxArcRadius() {
  return ::cordl_internals::getStaticField<float_t, "s_MaxArcRadius", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get>();
}
inline void UnityEngine::UIElements::Painter2D::setStaticF_s_StrokeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_StrokeMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Painter2D::getStaticF_s_StrokeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_StrokeMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get>();
}
inline void UnityEngine::UIElements::Painter2D::setStaticF_s_FillMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_FillMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Painter2D::getStaticF_s_FillMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_FillMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get>();
}
inline ::UnityEngine::UIElements::Painter2D* UnityEngine::UIElements::Painter2D::New_ctor(::UnityEngine::UIElements::MeshGenerationContext* ctx) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Painter2D*>(ctx));
}
inline void UnityEngine::UIElements::Painter2D::_ctor(::UnityEngine::UIElements::MeshGenerationContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void UnityEngine::UIElements::Painter2D::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Painter2D::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Painter2D::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::Painter2D::set_isPainterActive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Painter2D*>::get(), "set_isPainterActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Painter2D::Painter2D() {}
