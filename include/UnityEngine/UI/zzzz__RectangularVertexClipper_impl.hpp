#pragma once
// IWYU pragma private; include "UnityEngine\UI\RectangularVertexClipper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UI/zzzz__RectangularVertexClipper_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::RectangularVertexClipper.GetCanvasRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UI::RectangularVertexClipper::*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*)>(
    &::UnityEngine::UI::RectangularVertexClipper::GetCanvasRect)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6c1b60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RectangularVertexClipper*>(),
                                                             { "GetCanvasRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Canvas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectangularVertexClipper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::RectangularVertexClipper::*)()>(&::UnityEngine::UI::RectangularVertexClipper::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c1b76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RectangularVertexClipper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::UI::RectangularVertexClipper::__cordl_internal_get_m_WorldCorners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldCorners;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::UI::RectangularVertexClipper::__cordl_internal_get_m_WorldCorners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldCorners;
}
constexpr void UnityEngine::UI::RectangularVertexClipper::__cordl_internal_set_m_WorldCorners(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldCorners = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::UI::RectangularVertexClipper::__cordl_internal_get_m_CanvasCorners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasCorners;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::UI::RectangularVertexClipper::__cordl_internal_get_m_CanvasCorners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasCorners;
}
constexpr void UnityEngine::UI::RectangularVertexClipper::__cordl_internal_set_m_CanvasCorners(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CanvasCorners = value;
}
inline ::UnityEngine::Rect UnityEngine::UI::RectangularVertexClipper::GetCanvasRect(::UnityEngine::RectTransform* t, ::UnityEngine::Canvas* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RectangularVertexClipper*>(),
                                                           { "GetCanvasRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Canvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, t, c);
}
inline void UnityEngine::UI::RectangularVertexClipper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RectangularVertexClipper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::RectangularVertexClipper* UnityEngine::UI::RectangularVertexClipper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::RectangularVertexClipper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::RectangularVertexClipper::RectangularVertexClipper() {}
