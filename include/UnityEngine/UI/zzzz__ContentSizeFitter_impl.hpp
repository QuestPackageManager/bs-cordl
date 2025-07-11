#pragma once
// IWYU pragma private; include "UnityEngine/UI/ContentSizeFitter.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_impl.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ContentSizeFitter_FitMode (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::get_horizontalFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab881c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                               "get_horizontalFit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.set_horizontalFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(::UnityEngine::UI::ContentSizeFitter_FitMode)>(
    &::UnityEngine::UI::ContentSizeFitter::set_horizontalFit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4ab8824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "set_horizontalFit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ContentSizeFitter_FitMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_verticalFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ContentSizeFitter_FitMode (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::get_verticalFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab891c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "get_verticalFit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.set_verticalFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(::UnityEngine::UI::ContentSizeFitter_FitMode)>(
    &::UnityEngine::UI::ContentSizeFitter::set_verticalFit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4ab8924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "set_verticalFit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ContentSizeFitter_FitMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_rectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::get_rectTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4ab8998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                               "get_rectTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4ab8a34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4ab8a50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4ab8acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.HandleSelfFittingAlongAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(int32_t)>(
    &::UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4ab8ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "HandleSelfFittingAlongAxis",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4ab8bcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8bf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetDirty)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4ab8898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "SetDirty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Rect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "get_horizontalFit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ContentSizeFitter_FitMode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::set_horizontalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "set_horizontalFit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ContentSizeFitter_FitMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ContentSizeFitter_FitMode UnityEngine::UI::ContentSizeFitter::get_verticalFit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "get_verticalFit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ContentSizeFitter_FitMode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::set_verticalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "set_verticalFit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ContentSizeFitter_FitMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::ContentSizeFitter::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "get_rectTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis(int32_t axis) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "HandleSelfFittingAlongAxis",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis);
}
inline void UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "SetDirty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::ContentSizeFitter* UnityEngine::UI::ContentSizeFitter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ContentSizeFitter*>());
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
