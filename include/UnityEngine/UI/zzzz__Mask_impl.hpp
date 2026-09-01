#pragma once
// IWYU pragma private; include "UnityEngine\UI\Mask.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__Mask_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__IMaterialModifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ICanvasRaycastFilter_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Mask.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::Mask::*)()>(&::UnityEngine::UI::Mask::get_rectTransform)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dff1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.get_showMaskGraphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Mask::*)()>(&::UnityEngine::UI::Mask::get_showMaskGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dff24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { "get_showMaskGraphic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.set_showMaskGraphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Mask::*)(bool)>(&::UnityEngine::UI::Mask::set_showMaskGraphic)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6dff254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { "set_showMaskGraphic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.get_graphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::UnityEngine::UI::Mask::*)()>(&::UnityEngine::UI::Mask::get_graphic)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dff314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { "get_graphic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Mask::*)()>(&::UnityEngine::UI::Mask::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dff370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.MaskEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Mask::*)()>(&::UnityEngine::UI::Mask::MaskEnabled)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6dff37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.OnSiblingGraphicEnabledDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Mask::*)()>(&::UnityEngine::UI::Mask::OnSiblingGraphicEnabledDisabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dff410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Mask::*)()>(&::UnityEngine::UI::Mask::OnEnable)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6dff414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Mask::*)()>(&::UnityEngine::UI::Mask::OnDisable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6dff800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.IsRaycastLocationValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Mask::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&::UnityEngine::UI::Mask::IsRaycastLocationValid)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6dff9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Mask.GetModifiedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UI::Mask::*)(::UnityEngine::Material*)>(&::UnityEngine::UI::Mask::GetModifiedMaterial)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6dffa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::Mask::__cordl_internal_get_m_RectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::Mask::__cordl_internal_get_m_RectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr void UnityEngine::UI::Mask::__cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RectTransform = value;
}
constexpr bool& UnityEngine::UI::Mask::__cordl_internal_get_m_ShowMaskGraphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowMaskGraphic;
}
constexpr bool const& UnityEngine::UI::Mask::__cordl_internal_get_m_ShowMaskGraphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowMaskGraphic;
}
constexpr void UnityEngine::UI::Mask::__cordl_internal_set_m_ShowMaskGraphic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowMaskGraphic = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& UnityEngine::UI::Mask::__cordl_internal_get_m_Graphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Graphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& UnityEngine::UI::Mask::__cordl_internal_get_m_Graphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Graphic;
}
constexpr void UnityEngine::UI::Mask::__cordl_internal_set_m_Graphic(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Graphic = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UI::Mask::__cordl_internal_get_m_MaskMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UI::Mask::__cordl_internal_get_m_MaskMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskMaterial;
}
constexpr void UnityEngine::UI::Mask::__cordl_internal_set_m_MaskMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaskMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UI::Mask::__cordl_internal_get_m_UnmaskMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnmaskMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UI::Mask::__cordl_internal_get_m_UnmaskMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnmaskMaterial;
}
constexpr void UnityEngine::UI::Mask::__cordl_internal_set_m_UnmaskMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnmaskMaterial = value;
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::Mask::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline bool UnityEngine::UI::Mask::get_showMaskGraphic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { "get_showMaskGraphic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Mask::set_showMaskGraphic(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { "set_showMaskGraphic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Graphic> UnityEngine::UI::Mask::get_graphic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { "get_graphic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>>(this, ___internal_method);
}
inline void UnityEngine::UI::Mask::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Mask*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::Mask::MaskEnabled() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Mask::OnSiblingGraphicEnabledDisabled() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Mask::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Mask::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::Mask::IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sp, eventCamera);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Mask::GetModifiedMaterial(::UnityEngine::Material* baseMaterial) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Mask*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, baseMaterial);
}
inline ::UnityEngine::UI::Mask* UnityEngine::UI::Mask::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Mask*>());
}
/// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
constexpr UnityEngine::UI::Mask::operator ::UnityEngine::ICanvasRaycastFilter*() noexcept {
  return static_cast<::UnityEngine::ICanvasRaycastFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
constexpr ::UnityEngine::ICanvasRaycastFilter* UnityEngine::UI::Mask::i___UnityEngine__ICanvasRaycastFilter() noexcept {
  return static_cast<::UnityEngine::ICanvasRaycastFilter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::IMaterialModifier"
constexpr UnityEngine::UI::Mask::operator ::UnityEngine::UI::IMaterialModifier*() noexcept {
  return static_cast<::UnityEngine::UI::IMaterialModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::IMaterialModifier"
constexpr ::UnityEngine::UI::IMaterialModifier* UnityEngine::UI::Mask::i___UnityEngine__UI__IMaterialModifier() noexcept {
  return static_cast<::UnityEngine::UI::IMaterialModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Mask::Mask() {}
