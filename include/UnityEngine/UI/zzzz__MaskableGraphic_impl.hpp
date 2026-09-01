#pragma once
// IWYU pragma private; include "UnityEngine\UI\MaskableGraphic.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "UnityEngine/UI/zzzz__IClippable_def.hpp"
#include "UnityEngine/UI/zzzz__IMaskable_def.hpp"
#include "UnityEngine/UI/zzzz__IMaterialModifier_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent::*)()>(&::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e00f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::MaskableGraphic_CullStateChangedEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* UnityEngine::UI::MaskableGraphic_CullStateChangedEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent::MaskableGraphic_CullStateChangedEvent() {}
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.get_onCullStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* (::UnityEngine::UI::MaskableGraphic::*)()>(
    &::UnityEngine::UI::MaskableGraphic::get_onCullStateChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e00190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "get_onCullStateChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.set_onCullStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*)>(
    &::UnityEngine::UI::MaskableGraphic::set_onCullStateChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e00198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(),
                                                             { "set_onCullStateChanged", {}, { ::i2c::type_of<::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.get_maskable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::get_maskable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e001a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "get_maskable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.set_maskable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)(bool)>(&::UnityEngine::UI::MaskableGraphic::set_maskable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e001a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "set_maskable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.get_isMaskingGraphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::get_isMaskingGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e001d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "get_isMaskingGraphic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.set_isMaskingGraphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)(bool)>(&::UnityEngine::UI::MaskableGraphic::set_isMaskingGraphic)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6dff56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "set_isMaskingGraphic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.GetModifiedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UI::MaskableGraphic::*)(::UnityEngine::Material*)>(
    &::UnityEngine::UI::MaskableGraphic::GetModifiedMaterial)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e001e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.Cull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)(::UnityEngine::Rect, bool)>(&::UnityEngine::UI::MaskableGraphic::Cull)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e002ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.UpdateCull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)(bool)>(&::UnityEngine::UI::MaskableGraphic::UpdateCull)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e0054c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "UpdateCull", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.SetClipRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)(::UnityEngine::Rect, bool)>(&::UnityEngine::UI::MaskableGraphic::SetClipRect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e00640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.SetClipSoftness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::MaskableGraphic::SetClipSoftness)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e006b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e006e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e00890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e00940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.ParentMaskStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::ParentMaskStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e00990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.OnCanvasHierarchyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::OnCanvasHierarchyChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e00994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.get_rootCanvasRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::get_rootCanvasRect)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6e003b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "get_rootCanvasRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.UpdateClipParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::UpdateClipParent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6e00738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "UpdateClipParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.RecalculateClipping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::RecalculateClipping)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e00e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.RecalculateMasking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::RecalculateMasking)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e00e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskableGraphic::*)()>(&::UnityEngine::UI::MaskableGraphic::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e00ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskableGraphic.UnityEngine_UI_IClippable_get_gameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UI::MaskableGraphic::*)()>(
    &::UnityEngine::UI::MaskableGraphic::UnityEngine_UI_IClippable_get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e00fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "UnityEngine.UI.IClippable.get_gameObject", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_ShouldRecalculateStencil() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldRecalculateStencil;
}
constexpr bool const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_ShouldRecalculateStencil() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldRecalculateStencil;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_ShouldRecalculateStencil(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldRecalculateStencil = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_MaskMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_MaskMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskMaterial;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_MaskMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaskMaterial = value;
}
constexpr ::UnityW<::UnityEngine::UI::RectMask2D>& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_ParentMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentMask;
}
constexpr ::UnityW<::UnityEngine::UI::RectMask2D> const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_ParentMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentMask;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_ParentMask(::UnityW<::UnityEngine::UI::RectMask2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentMask = value;
}
constexpr bool& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_Maskable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Maskable;
}
constexpr bool const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_Maskable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Maskable;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_Maskable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Maskable = value;
}
constexpr bool& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_IsMaskingGraphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMaskingGraphic;
}
constexpr bool const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_IsMaskingGraphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMaskingGraphic;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_IsMaskingGraphic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMaskingGraphic = value;
}
constexpr bool& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_IncludeForMasking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeForMasking;
}
constexpr bool const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_IncludeForMasking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeForMasking;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_IncludeForMasking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IncludeForMasking = value;
}
constexpr ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_OnCullStateChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCullStateChanged;
}
constexpr ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_OnCullStateChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCullStateChanged;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_OnCullStateChanged(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnCullStateChanged = value;
}
constexpr bool& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_ShouldRecalculate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldRecalculate;
}
constexpr bool const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_ShouldRecalculate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldRecalculate;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_ShouldRecalculate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldRecalculate = value;
}
constexpr int32_t& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_StencilValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilValue;
}
constexpr int32_t const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_StencilValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilValue;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_StencilValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilValue = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_Corners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Corners;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::UI::MaskableGraphic::__cordl_internal_get_m_Corners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Corners;
}
constexpr void UnityEngine::UI::MaskableGraphic::__cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Corners = value;
}
inline ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* UnityEngine::UI::MaskableGraphic::get_onCullStateChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "get_onCullStateChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::set_onCullStateChanged(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "set_onCullStateChanged", {}, { ::i2c::type_of<::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::MaskableGraphic::get_maskable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "get_maskable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::set_maskable(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "set_maskable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::MaskableGraphic::get_isMaskingGraphic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "get_isMaskingGraphic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::set_isMaskingGraphic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "set_isMaskingGraphic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::MaskableGraphic::GetModifiedMaterial(::UnityEngine::Material* baseMaterial) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, baseMaterial);
}
inline void UnityEngine::UI::MaskableGraphic::Cull(::UnityEngine::Rect clipRect, bool validRect) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipRect, validRect);
}
inline void UnityEngine::UI::MaskableGraphic::UpdateCull(bool cull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "UpdateCull", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cull);
}
inline void UnityEngine::UI::MaskableGraphic::SetClipRect(::UnityEngine::Rect clipRect, bool validRect) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipRect, validRect);
}
inline void UnityEngine::UI::MaskableGraphic::SetClipSoftness(::UnityEngine::Vector2 clipSoftness) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipSoftness);
}
inline void UnityEngine::UI::MaskableGraphic::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::OnTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::ParentMaskStateChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::OnCanvasHierarchyChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UI::MaskableGraphic::get_rootCanvasRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "get_rootCanvasRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::UpdateClipParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "UpdateClipParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::RecalculateClipping() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::RecalculateMasking() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::MaskableGraphic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::MaskableGraphic::UnityEngine_UI_IClippable_get_gameObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskableGraphic*>(), { "UnityEngine.UI.IClippable.get_gameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityEngine::UI::MaskableGraphic* UnityEngine::UI::MaskableGraphic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::MaskableGraphic*>());
}
/// @brief Convert operator to "::UnityEngine::UI::IClippable"
constexpr UnityEngine::UI::MaskableGraphic::operator ::UnityEngine::UI::IClippable*() noexcept {
  return static_cast<::UnityEngine::UI::IClippable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::IClippable"
constexpr ::UnityEngine::UI::IClippable* UnityEngine::UI::MaskableGraphic::i___UnityEngine__UI__IClippable() noexcept {
  return static_cast<::UnityEngine::UI::IClippable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::IMaskable"
constexpr UnityEngine::UI::MaskableGraphic::operator ::UnityEngine::UI::IMaskable*() noexcept {
  return static_cast<::UnityEngine::UI::IMaskable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::IMaskable"
constexpr ::UnityEngine::UI::IMaskable* UnityEngine::UI::MaskableGraphic::i___UnityEngine__UI__IMaskable() noexcept {
  return static_cast<::UnityEngine::UI::IMaskable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::IMaterialModifier"
constexpr UnityEngine::UI::MaskableGraphic::operator ::UnityEngine::UI::IMaterialModifier*() noexcept {
  return static_cast<::UnityEngine::UI::IMaterialModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::IMaterialModifier"
constexpr ::UnityEngine::UI::IMaterialModifier* UnityEngine::UI::MaskableGraphic::i___UnityEngine__UI__IMaterialModifier() noexcept {
  return static_cast<::UnityEngine::UI::IMaterialModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::MaskableGraphic::MaskableGraphic() {}
