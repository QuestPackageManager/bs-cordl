#pragma once
// IWYU pragma private; include "UnityEngine\UI\AspectRatioFitter.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode::AspectRatioFitter_AspectMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode::AspectRatioFitter_AspectMode() {}
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode UnityEngine::UI::AspectRatioFitter_AspectMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode UnityEngine::UI::AspectRatioFitter_AspectMode::WidthControlsHeight{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode UnityEngine::UI::AspectRatioFitter_AspectMode::HeightControlsWidth{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode UnityEngine::UI::AspectRatioFitter_AspectMode::FitInParent{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode UnityEngine::UI::AspectRatioFitter_AspectMode::EnvelopeParent{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_aspectMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::AspectRatioFitter_AspectMode (::UnityEngine::UI::AspectRatioFitter::*)()>(
    &::UnityEngine::UI::AspectRatioFitter::get_aspectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "get_aspectMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.set_aspectMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)(::UnityEngine::UI::AspectRatioFitter_AspectMode)>(
    &::UnityEngine::UI::AspectRatioFitter::set_aspectMode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6df7da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "set_aspectMode", {}, { ::i2c::type_of<::UnityEngine::UI::AspectRatioFitter_AspectMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_aspectRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_aspectRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "get_aspectRatio", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.set_aspectRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)(float_t)>(&::UnityEngine::UI::AspectRatioFitter::set_aspectRatio)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6df7e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "set_aspectRatio", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_rectTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6df7e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6df7f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6df7f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::Start)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6df7fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnDisable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6df8110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6df8570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6df85fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df8610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.UpdateRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::UpdateRect)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6df8614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "UpdateRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.GetSizeDeltaToProduceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::AspectRatioFitter::*)(float_t, int32_t)>(&::UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6df89d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "GetSizeDeltaToProduceSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.GetParentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::GetParentSize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6df88d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "GetParentSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df8ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df8acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df7e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "SetDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.IsComponentValidOnObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6df8014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "IsComponentValidOnObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.IsAspectModeValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::IsAspectModeValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6df80e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "IsAspectModeValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.DoesParentExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::DoesParentExists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "DoesParentExists", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_AspectMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectMode;
}
constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode const& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_AspectMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectMode;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__cordl_internal_set_m_AspectMode(::UnityEngine::UI::AspectRatioFitter_AspectMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AspectMode = value;
}
constexpr float_t& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_AspectRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectRatio;
}
constexpr float_t const& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_AspectRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectRatio;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__cordl_internal_set_m_AspectRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AspectRatio = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_Rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_Rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rect = value;
}
constexpr bool& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_DelayedSetDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedSetDirty;
}
constexpr bool const& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_DelayedSetDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedSetDirty;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__cordl_internal_set_m_DelayedSetDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DelayedSetDirty = value;
}
constexpr bool& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_DoesParentExist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoesParentExist;
}
constexpr bool const& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_DoesParentExist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoesParentExist;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__cordl_internal_set_m_DoesParentExist(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DoesParentExist = value;
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_Tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::AspectRatioFitter::__cordl_internal_get_m_Tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tracker = value;
}
inline ::UnityEngine::UI::AspectRatioFitter_AspectMode UnityEngine::UI::AspectRatioFitter::get_aspectMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "get_aspectMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::AspectRatioFitter_AspectMode>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::set_aspectMode(::UnityEngine::UI::AspectRatioFitter_AspectMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "set_aspectMode", {}, { ::i2c::type_of<::UnityEngine::UI::AspectRatioFitter_AspectMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::AspectRatioFitter::get_aspectRatio() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "get_aspectRatio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::set_aspectRatio(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "set_aspectRatio", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::AspectRatioFitter::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::UpdateRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "UpdateRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize(float_t size, int32_t axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "GetSizeDeltaToProduceSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, size, axis);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::AspectRatioFitter::GetParentSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "GetParentSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "IsComponentValidOnObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::IsAspectModeValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "IsAspectModeValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::DoesParentExists() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::AspectRatioFitter*>(), { "DoesParentExists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UI::AspectRatioFitter* UnityEngine::UI::AspectRatioFitter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::AspectRatioFitter*>());
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr UnityEngine::UI::AspectRatioFitter::operator ::UnityEngine::UI::ILayoutSelfController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
constexpr ::UnityEngine::UI::ILayoutSelfController* UnityEngine::UI::AspectRatioFitter::i___UnityEngine__UI__ILayoutSelfController() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr UnityEngine::UI::AspectRatioFitter::operator ::UnityEngine::UI::ILayoutController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* UnityEngine::UI::AspectRatioFitter::i___UnityEngine__UI__ILayoutController() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::AspectRatioFitter::AspectRatioFitter() {}
