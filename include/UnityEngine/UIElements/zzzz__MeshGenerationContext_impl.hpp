#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__Painter2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags::MeshGenerationContext_MeshFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags::MeshGenerationContext_MeshFlags() {}
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags UnityEngine::UIElements::MeshGenerationContext_MeshFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags UnityEngine::UIElements::MeshGenerationContext_MeshFlags::UVisDisplacement{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags UnityEngine::UIElements::MeshGenerationContext_MeshFlags::SkipDynamicAtlas{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContext.get_painter2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Painter2D* (::UnityEngine::UIElements::MeshGenerationContext::*)()>(
    &::UnityEngine::UIElements::MeshGenerationContext::get_painter2D)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4a4d0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                                                                               "get_painter2D", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContext.get_hasPainter2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::MeshGenerationContext::*)()>(
    &::UnityEngine::UIElements::MeshGenerationContext::get_hasPainter2D)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a4d180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                                                                               "get_hasPainter2D", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MeshGenerationContext::*)(::UnityEngine::UIElements::IStylePainter*)>(
    &::UnityEngine::UIElements::MeshGenerationContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a4d190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IStylePainter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Painter2D*& UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_get_m_Painter2D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Painter2D;
}
constexpr ::UnityEngine::UIElements::Painter2D* const& UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_get_m_Painter2D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Painter2D;
}
constexpr void UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_set_m_Painter2D(::UnityEngine::UIElements::Painter2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Painter2D)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::IStylePainter*& UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_get_painter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___painter;
}
constexpr ::UnityEngine::UIElements::IStylePainter* const& UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_get_painter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___painter;
}
constexpr void UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_set_painter(::UnityEngine::UIElements::IStylePainter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___painter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::MeshGenerationContext::setStaticF_s_AllocateMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_AllocateMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::MeshGenerationContext::getStaticF_s_AllocateMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_AllocateMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get>();
}
inline void UnityEngine::UIElements::MeshGenerationContext::setStaticF_s_DrawVectorImageMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_DrawVectorImageMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::MeshGenerationContext::getStaticF_s_DrawVectorImageMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_DrawVectorImageMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get>();
}
inline ::UnityEngine::UIElements::Painter2D* UnityEngine::UIElements::MeshGenerationContext::get_painter2D() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                                                                             "get_painter2D", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Painter2D*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::MeshGenerationContext::get_hasPainter2D() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                                                                             "get_hasPainter2D", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MeshGenerationContext::_ctor(::UnityEngine::UIElements::IStylePainter* painter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IStylePainter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, painter);
}
inline ::UnityEngine::UIElements::MeshGenerationContext* UnityEngine::UIElements::MeshGenerationContext::New_ctor(::UnityEngine::UIElements::IStylePainter* painter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::MeshGenerationContext*>(painter));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationContext::MeshGenerationContext() {}
