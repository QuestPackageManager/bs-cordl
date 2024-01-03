#pragma once
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode::__AspectRatioFitter__AspectMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode::__AspectRatioFitter__AspectMode() {}
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode UnityEngine::UI::__AspectRatioFitter__AspectMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode UnityEngine::UI::__AspectRatioFitter__AspectMode::WidthControlsHeight{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode UnityEngine::UI::__AspectRatioFitter__AspectMode::HeightControlsWidth{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode UnityEngine::UI::__AspectRatioFitter__AspectMode::FitInParent{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode UnityEngine::UI::__AspectRatioFitter__AspectMode::EnvelopeParent{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_aspectMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__AspectRatioFitter__AspectMode (::UnityEngine::UI::AspectRatioFitter::*)()>(
    &::UnityEngine::UI::AspectRatioFitter::get_aspectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d73238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "get_aspectMode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.set_aspectMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)(::UnityEngine::UI::__AspectRatioFitter__AspectMode)>(
    &::UnityEngine::UI::AspectRatioFitter::set_aspectMode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d73240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "set_aspectMode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__AspectRatioFitter__AspectMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_aspectRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_aspectRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d732b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "get_aspectRatio",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.set_aspectRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)(float_t)>(&::UnityEngine::UI::AspectRatioFitter::set_aspectRatio)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d732c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "set_aspectRatio", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_rectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::AspectRatioFitter::*)()>(
    &::UnityEngine::UI::AspectRatioFitter::get_rectTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d73334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                               "get_rectTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d733c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d733d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d73470;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d735b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d73a1c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d73ab4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(
    &::UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d73ac8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.UpdateRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::UpdateRect)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2d73acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "UpdateRect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.GetSizeDeltaToProduceSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::AspectRatioFitter::*)(float_t, int32_t)>(
    &::UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2d73ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "GetSizeDeltaToProduceSize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.GetParentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::AspectRatioFitter::*)()>(
    &::UnityEngine::UI::AspectRatioFitter::GetParentSize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d73dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "GetParentSize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d73fd8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d73fdc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d732b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "SetDirty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.IsComponentValidOnObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2d734c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                               "IsComponentValidOnObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.IsAspectModeValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::IsAspectModeValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d7358c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                               "IsAspectModeValid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.DoesParentExists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::DoesParentExists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d73fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "DoesParentExists",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
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
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode& UnityEngine::UI::AspectRatioFitter::__get_m_AspectMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectMode;
}
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode const& UnityEngine::UI::AspectRatioFitter::__get_m_AspectMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectMode;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_AspectMode(::UnityEngine::UI::__AspectRatioFitter__AspectMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AspectMode = value;
}
constexpr float_t& UnityEngine::UI::AspectRatioFitter::__get_m_AspectRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectRatio;
}
constexpr float_t const& UnityEngine::UI::AspectRatioFitter::__get_m_AspectRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectRatio;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_AspectRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AspectRatio = value;
}
constexpr ::UnityEngine::RectTransform*& UnityEngine::UI::AspectRatioFitter::__get_m_Rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& UnityEngine::UI::AspectRatioFitter::__get_m_Rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_Rect(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Rect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UI::AspectRatioFitter::__get_m_DelayedSetDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedSetDirty;
}
constexpr bool const& UnityEngine::UI::AspectRatioFitter::__get_m_DelayedSetDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedSetDirty;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_DelayedSetDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DelayedSetDirty = value;
}
constexpr bool& UnityEngine::UI::AspectRatioFitter::__get_m_DoesParentExist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoesParentExist;
}
constexpr bool const& UnityEngine::UI::AspectRatioFitter::__get_m_DoesParentExist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoesParentExist;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_DoesParentExist(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DoesParentExist = value;
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::AspectRatioFitter::__get_m_Tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::AspectRatioFitter::__get_m_Tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tracker = value;
}
inline ::UnityEngine::UI::__AspectRatioFitter__AspectMode UnityEngine::UI::AspectRatioFitter::get_aspectMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "get_aspectMode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__AspectRatioFitter__AspectMode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::set_aspectMode(::UnityEngine::UI::__AspectRatioFitter__AspectMode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "set_aspectMode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__AspectRatioFitter__AspectMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::AspectRatioFitter::get_aspectRatio() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "get_aspectRatio",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::set_aspectRatio(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "set_aspectRatio", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::AspectRatioFitter::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "get_rectTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::AspectRatioFitter* UnityEngine::UI::AspectRatioFitter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::AspectRatioFitter*>());
}
inline void UnityEngine::UI::AspectRatioFitter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::UpdateRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "UpdateRect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize(float_t size, int32_t axis) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "GetSizeDeltaToProduceSize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, size, axis);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::AspectRatioFitter::GetParentSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "GetParentSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "SetDirty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                                                             "IsComponentValidOnObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::IsAspectModeValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "IsAspectModeValid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::DoesParentExists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(), "DoesParentExists",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::AspectRatioFitter::AspectRatioFitter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
