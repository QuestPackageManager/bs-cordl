#pragma once
// IWYU pragma private; include "UnityEngine\UI\ContentSizeFitter.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode::ContentSizeFitter_FitMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode::ContentSizeFitter_FitMode() {}
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode UnityEngine::UI::ContentSizeFitter_FitMode::Unconstrained{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode UnityEngine::UI::ContentSizeFitter_FitMode::MinSize{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode UnityEngine::UI::ContentSizeFitter_FitMode::PreferredSize{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_horizontalFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ContentSizeFitter_FitMode (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::get_horizontalFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df9278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "get_horizontalFit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.set_horizontalFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(::UnityEngine::UI::ContentSizeFitter_FitMode)>(
    &::UnityEngine::UI::ContentSizeFitter::set_horizontalFit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6df9280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "set_horizontalFit", {}, { ::i2c::type_of<::UnityEngine::UI::ContentSizeFitter_FitMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_verticalFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ContentSizeFitter_FitMode (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::get_verticalFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df9380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "get_verticalFit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.set_verticalFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(::UnityEngine::UI::ContentSizeFitter_FitMode)>(
    &::UnityEngine::UI::ContentSizeFitter::set_verticalFit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6df9388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "set_verticalFit", {}, { ::i2c::type_of<::UnityEngine::UI::ContentSizeFitter_FitMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::get_rectTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6df9400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df949c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df94a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnDisable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6df94a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df950c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.HandleSelfFittingAlongAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(int32_t)>(&::UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6df9510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "HandleSelfFittingAlongAxis", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df95c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df95d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetDirty)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6df92f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "SetDirty", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode& UnityEngine::UI::ContentSizeFitter::__cordl_internal_get_m_HorizontalFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalFit;
}
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode const& UnityEngine::UI::ContentSizeFitter::__cordl_internal_get_m_HorizontalFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalFit;
}
constexpr void UnityEngine::UI::ContentSizeFitter::__cordl_internal_set_m_HorizontalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalFit = value;
}
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode& UnityEngine::UI::ContentSizeFitter::__cordl_internal_get_m_VerticalFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalFit;
}
constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode const& UnityEngine::UI::ContentSizeFitter::__cordl_internal_get_m_VerticalFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalFit;
}
constexpr void UnityEngine::UI::ContentSizeFitter::__cordl_internal_set_m_VerticalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalFit = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::ContentSizeFitter::__cordl_internal_get_m_Rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::ContentSizeFitter::__cordl_internal_get_m_Rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr void UnityEngine::UI::ContentSizeFitter::__cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rect = value;
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::ContentSizeFitter::__cordl_internal_get_m_Tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::ContentSizeFitter::__cordl_internal_get_m_Tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr void UnityEngine::UI::ContentSizeFitter::__cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tracker = value;
}
inline ::UnityEngine::UI::ContentSizeFitter_FitMode UnityEngine::UI::ContentSizeFitter::get_horizontalFit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "get_horizontalFit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ContentSizeFitter_FitMode>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::set_horizontalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "set_horizontalFit", {}, { ::i2c::type_of<::UnityEngine::UI::ContentSizeFitter_FitMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ContentSizeFitter_FitMode UnityEngine::UI::ContentSizeFitter::get_verticalFit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "get_verticalFit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ContentSizeFitter_FitMode>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::set_verticalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "set_verticalFit", {}, { ::i2c::type_of<::UnityEngine::UI::ContentSizeFitter_FitMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::ContentSizeFitter::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis(int32_t axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "HandleSelfFittingAlongAxis", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis);
}
inline void UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ContentSizeFitter*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::ContentSizeFitter* UnityEngine::UI::ContentSizeFitter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ContentSizeFitter*>());
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr UnityEngine::UI::ContentSizeFitter::operator ::UnityEngine::UI::ILayoutSelfController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
constexpr ::UnityEngine::UI::ILayoutSelfController* UnityEngine::UI::ContentSizeFitter::i___UnityEngine__UI__ILayoutSelfController() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr UnityEngine::UI::ContentSizeFitter::operator ::UnityEngine::UI::ILayoutController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* UnityEngine::UI::ContentSizeFitter::i___UnityEngine__UI__ILayoutController() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ContentSizeFitter::ContentSizeFitter() {}
