#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__RectangularVertexClipper_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::RectangularVertexClipper.GetCanvasRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::UI::RectangularVertexClipper::*)(
    ::UnityEngine::RectTransform*, ::UnityEngine::Canvas*)>(&::UnityEngine::UI::RectangularVertexClipper::GetCanvasRect)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2e5e0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectangularVertexClipper*>::get(), "GetCanvasRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectangularVertexClipper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectangularVertexClipper::*)()>(&::UnityEngine::UI::RectangularVertexClipper::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e5e238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectangularVertexClipper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::UI::RectangularVertexClipper::__cordl_internal_get_m_WorldCorners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldCorners;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::UI::RectangularVertexClipper::__cordl_internal_get_m_WorldCorners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldCorners;
}
constexpr void UnityEngine::UI::RectangularVertexClipper::__cordl_internal_set_m_WorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WorldCorners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::UI::RectangularVertexClipper::__cordl_internal_get_m_CanvasCorners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasCorners;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::UI::RectangularVertexClipper::__cordl_internal_get_m_CanvasCorners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasCorners;
}
constexpr void UnityEngine::UI::RectangularVertexClipper::__cordl_internal_set_m_CanvasCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CanvasCorners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rect UnityEngine::UI::RectangularVertexClipper::GetCanvasRect(::UnityEngine::RectTransform* t, ::UnityEngine::Canvas* c) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectangularVertexClipper*>::get(), "GetCanvasRect", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method, t, c);
}
inline ::UnityEngine::UI::RectangularVertexClipper* UnityEngine::UI::RectangularVertexClipper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::RectangularVertexClipper*>());
}
inline void UnityEngine::UI::RectangularVertexClipper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectangularVertexClipper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::RectangularVertexClipper::RectangularVertexClipper() {}
