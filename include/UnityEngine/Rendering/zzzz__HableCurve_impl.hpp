#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HableCurve.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HableCurve_def.hpp"
#include "UnityEngine/Rendering/zzzz__HableCurve_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Segment.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::HableCurve_Segment::*)(float_t)>(
    &::UnityEngine::Rendering::HableCurve_Segment::Eval)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65a5fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Segment*>::get(), "Eval", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Segment._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve_Segment::*)()>(&::UnityEngine::Rendering::HableCurve_Segment::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a5f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Segment*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_offsetX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetX;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_offsetX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetX;
}
constexpr void UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_set_offsetX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetX = value;
}
constexpr float_t& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_offsetY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetY;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_offsetY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetY;
}
constexpr void UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_set_offsetY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetY = value;
}
constexpr float_t& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_scaleX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleX;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_scaleX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleX;
}
constexpr void UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_set_scaleX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleX = value;
}
constexpr float_t& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_scaleY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleY;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_scaleY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleY;
}
constexpr void UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_set_scaleY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleY = value;
}
constexpr float_t& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_lnA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lnA;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_lnA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lnA;
}
constexpr void UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_set_lnA(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lnA = value;
}
constexpr float_t& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_B() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___B;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_get_B() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___B;
}
constexpr void UnityEngine::Rendering::HableCurve_Segment::__cordl_internal_set_B(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___B = value;
}
inline float_t UnityEngine::Rendering::HableCurve_Segment::Eval(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Segment*>::get(), "Eval",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, x);
}
inline void UnityEngine::Rendering::HableCurve_Segment::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Segment*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::HableCurve_Segment* UnityEngine::Rendering::HableCurve_Segment::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::HableCurve_Segment*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HableCurve_Segment::HableCurve_Segment() {}
// Ctor Parameters [CppParam { name: "x0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "x1",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "W", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "overshootX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overshootY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "gamma", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::HableCurve_DirectParams::HableCurve_DirectParams(float_t x0, float_t y0, float_t x1, float_t y1, float_t W, float_t overshootX, float_t overshootY,
                                                                                     float_t gamma) noexcept {
  this->x0 = x0;
  this->y0 = y0;
  this->x1 = x1;
  this->y1 = y1;
  this->W = W;
  this->overshootX = overshootX;
  this->overshootY = overshootY;
  this->gamma = gamma;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HableCurve_DirectParams::HableCurve_DirectParams() {}
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Uniforms._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve_Uniforms::*)(::UnityEngine::Rendering::HableCurve*)>(
    &::UnityEngine::Rendering::HableCurve_Uniforms::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HableCurve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Uniforms.get_curve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::HableCurve_Uniforms::*)()>(
    &::UnityEngine::Rendering::HableCurve_Uniforms::get_curve)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65a64d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                               "get_curve", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Uniforms.get_toeSegmentA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::HableCurve_Uniforms::*)()>(
    &::UnityEngine::Rendering::HableCurve_Uniforms::get_toeSegmentA)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65a64f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                               "get_toeSegmentA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Uniforms.get_toeSegmentB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::HableCurve_Uniforms::*)()>(
    &::UnityEngine::Rendering::HableCurve_Uniforms::get_toeSegmentB)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65a6534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                               "get_toeSegmentB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Uniforms.get_midSegmentA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::HableCurve_Uniforms::*)()>(
    &::UnityEngine::Rendering::HableCurve_Uniforms::get_midSegmentA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65a6574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                               "get_midSegmentA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Uniforms.get_midSegmentB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::HableCurve_Uniforms::*)()>(
    &::UnityEngine::Rendering::HableCurve_Uniforms::get_midSegmentB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65a65b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                               "get_midSegmentB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Uniforms.get_shoSegmentA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::HableCurve_Uniforms::*)()>(
    &::UnityEngine::Rendering::HableCurve_Uniforms::get_shoSegmentA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65a65f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                               "get_shoSegmentA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve_Uniforms.get_shoSegmentB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::HableCurve_Uniforms::*)()>(
    &::UnityEngine::Rendering::HableCurve_Uniforms::get_shoSegmentB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65a6638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                               "get_shoSegmentB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::HableCurve*& UnityEngine::Rendering::HableCurve_Uniforms::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::UnityEngine::Rendering::HableCurve* const& UnityEngine::Rendering::HableCurve_Uniforms::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void UnityEngine::Rendering::HableCurve_Uniforms::__cordl_internal_set_parent(::UnityEngine::Rendering::HableCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::HableCurve_Uniforms::_ctor(::UnityEngine::Rendering::HableCurve* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HableCurve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::HableCurve_Uniforms::get_curve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(), "get_curve",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::HableCurve_Uniforms::get_toeSegmentA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                             "get_toeSegmentA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::HableCurve_Uniforms::get_toeSegmentB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                             "get_toeSegmentB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::HableCurve_Uniforms::get_midSegmentA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                             "get_midSegmentA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::HableCurve_Uniforms::get_midSegmentB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                             "get_midSegmentB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::HableCurve_Uniforms::get_shoSegmentA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                             "get_shoSegmentA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::HableCurve_Uniforms::get_shoSegmentB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve_Uniforms*>::get(),
                                                                             "get_shoSegmentB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::HableCurve_Uniforms* UnityEngine::Rendering::HableCurve_Uniforms::New_ctor(::UnityEngine::Rendering::HableCurve* parent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::HableCurve_Uniforms*>(parent));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HableCurve_Uniforms::HableCurve_Uniforms() {}
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.get_whitePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::HableCurve::*)()>(&::UnityEngine::Rendering::HableCurve::get_whitePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "get_whitePoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.set_whitePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::HableCurve::set_whitePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "set_whitePoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.get_inverseWhitePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::HableCurve::*)()>(&::UnityEngine::Rendering::HableCurve::get_inverseWhitePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(),
                                                                               "get_inverseWhitePoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.set_inverseWhitePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve::*)(float_t)>(
    &::UnityEngine::Rendering::HableCurve::set_inverseWhitePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "set_inverseWhitePoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.get_x0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::HableCurve::*)()>(&::UnityEngine::Rendering::HableCurve::get_x0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "get_x0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.set_x0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::HableCurve::set_x0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "set_x0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.get_x1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::HableCurve::*)()>(&::UnityEngine::Rendering::HableCurve::get_x1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "get_x1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.set_x1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::HableCurve::set_x1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "set_x1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve::*)()>(&::UnityEngine::Rendering::HableCurve::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65a5df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::HableCurve::*)(float_t)>(&::UnityEngine::Rendering::HableCurve::Eval)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65a5f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "Eval", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve::*)(float_t, float_t, float_t, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::HableCurve::Init)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x65a6028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.InitSegments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve::*)(::UnityEngine::Rendering::HableCurve_DirectParams)>(
    &::UnityEngine::Rendering::HableCurve::InitSegments)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x65a6164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "InitSegments", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HableCurve_DirectParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.SolveAB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HableCurve::*)(::ByRef<float_t>, ::ByRef<float_t>, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::HableCurve::SolveAB)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65a6488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "SolveAB", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.AsSlopeIntercept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::HableCurve::*)(::ByRef<float_t>, ::ByRef<float_t>, float_t, float_t, float_t, float_t)>(&::UnityEngine::Rendering::HableCurve::AsSlopeIntercept)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x65a6420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "AsSlopeIntercept", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HableCurve.EvalDerivativeLinearGamma
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::HableCurve::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::HableCurve::EvalDerivativeLinearGamma)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65a644c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "EvalDerivativeLinearGamma", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::HableCurve::__cordl_internal_get__whitePoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whitePoint_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve::__cordl_internal_get__whitePoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whitePoint_k__BackingField;
}
constexpr void UnityEngine::Rendering::HableCurve::__cordl_internal_set__whitePoint_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____whitePoint_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::HableCurve::__cordl_internal_get__inverseWhitePoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseWhitePoint_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve::__cordl_internal_get__inverseWhitePoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseWhitePoint_k__BackingField;
}
constexpr void UnityEngine::Rendering::HableCurve::__cordl_internal_set__inverseWhitePoint_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inverseWhitePoint_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::HableCurve::__cordl_internal_get__x0_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x0_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve::__cordl_internal_get__x0_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x0_k__BackingField;
}
constexpr void UnityEngine::Rendering::HableCurve::__cordl_internal_set__x0_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____x0_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::HableCurve::__cordl_internal_get__x1_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x1_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::HableCurve::__cordl_internal_get__x1_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x1_k__BackingField;
}
constexpr void UnityEngine::Rendering::HableCurve::__cordl_internal_set__x1_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____x1_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::HableCurve_Segment*, ::Array<::UnityEngine::Rendering::HableCurve_Segment*>*>& UnityEngine::Rendering::HableCurve::__cordl_internal_get_segments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___segments;
}
constexpr ::ArrayW<::UnityEngine::Rendering::HableCurve_Segment*, ::Array<::UnityEngine::Rendering::HableCurve_Segment*>*> const&
UnityEngine::Rendering::HableCurve::__cordl_internal_get_segments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___segments;
}
constexpr void
UnityEngine::Rendering::HableCurve::__cordl_internal_set_segments(::ArrayW<::UnityEngine::Rendering::HableCurve_Segment*, ::Array<::UnityEngine::Rendering::HableCurve_Segment*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___segments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::HableCurve_Uniforms*& UnityEngine::Rendering::HableCurve::__cordl_internal_get_uniforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uniforms;
}
constexpr ::UnityEngine::Rendering::HableCurve_Uniforms* const& UnityEngine::Rendering::HableCurve::__cordl_internal_get_uniforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uniforms;
}
constexpr void UnityEngine::Rendering::HableCurve::__cordl_internal_set_uniforms(::UnityEngine::Rendering::HableCurve_Uniforms* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uniforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t UnityEngine::Rendering::HableCurve::get_whitePoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "get_whitePoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::HableCurve::set_whitePoint(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "set_whitePoint",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::HableCurve::get_inverseWhitePoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(),
                                                                             "get_inverseWhitePoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::HableCurve::set_inverseWhitePoint(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "set_inverseWhitePoint",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::HableCurve::get_x0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "get_x0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::HableCurve::set_x0(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "set_x0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::HableCurve::get_x1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "get_x1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::HableCurve::set_x1(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "set_x1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::HableCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::HableCurve::Eval(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "Eval", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, x);
}
inline void UnityEngine::Rendering::HableCurve::Init(float_t toeStrength, float_t toeLength, float_t shoulderStrength, float_t shoulderLength, float_t shoulderAngle, float_t gamma) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toeStrength, toeLength, shoulderStrength, shoulderLength, shoulderAngle, gamma);
}
inline void UnityEngine::Rendering::HableCurve::InitSegments(::UnityEngine::Rendering::HableCurve_DirectParams srcParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "InitSegments", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HableCurve_DirectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcParams);
}
inline void UnityEngine::Rendering::HableCurve::SolveAB(::ByRef<float_t> lnA, ::ByRef<float_t> B, float_t x0, float_t y0, float_t m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "SolveAB", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lnA, B, x0, y0, m);
}
inline void UnityEngine::Rendering::HableCurve::AsSlopeIntercept(::ByRef<float_t> m, ::ByRef<float_t> b, float_t x0, float_t x1, float_t y0, float_t y1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "AsSlopeIntercept", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m, b, x0, x1, y0, y1);
}
inline float_t UnityEngine::Rendering::HableCurve::EvalDerivativeLinearGamma(float_t m, float_t b, float_t g, float_t x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HableCurve*>::get(), "EvalDerivativeLinearGamma", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, m, b, g, x);
}
inline ::UnityEngine::Rendering::HableCurve* UnityEngine::Rendering::HableCurve::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::HableCurve*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HableCurve::HableCurve() {}
