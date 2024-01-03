#pragma once
#include "UnityEngine/UIElements/zzzz__TwoPaneSplitViewOrientation_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TwoPaneSplitView_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__TwoPaneSplitViewOrientation_def.hpp"
#include "UnityEngine/UIElements/zzzz__TwoPaneSplitViewResizer_def.hpp"
#include "UnityEngine/UIElements/zzzz__TwoPaneSplitView_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2e3f730;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2e3f89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__get_m_FixedPaneIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneIndex;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__get_m_FixedPaneIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneIndex;
}
constexpr void UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__set_m_FixedPaneIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FixedPaneIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__get_m_FixedPaneInitialDimension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneInitialDimension;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const&
UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__get_m_FixedPaneInitialDimension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneInitialDimension;
}
constexpr void UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__set_m_FixedPaneInitialDimension(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FixedPaneInitialDimension)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>*&
UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__get_m_Orientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Orientation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>*> const&
UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__get_m_Orientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Orientation;
}
constexpr void
UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__set_m_Orientation(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Orientation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                          ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits* UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits::__TwoPaneSplitView__UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.get_fixedPane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(
    &::UnityEngine::UIElements::TwoPaneSplitView::get_fixedPane)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3d718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                               "get_fixedPane", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.get_flexedPane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(
    &::UnityEngine::UIElements::TwoPaneSplitView::get_flexedPane)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3d720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                               "get_flexedPane", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.get_fixedPaneIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(
    &::UnityEngine::UIElements::TwoPaneSplitView::get_fixedPaneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3d728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                               "get_fixedPaneIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.get_fixedPaneDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(
    &::UnityEngine::UIElements::TwoPaneSplitView::get_fixedPaneDimension)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e3d730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                               "get_fixedPaneDimension", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.set_fixedPaneDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)(float_t)>(
    &::UnityEngine::UIElements::TwoPaneSplitView::set_fixedPaneDimension)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e3d764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "set_fixedPaneDimension",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(&::UnityEngine::UIElements::TwoPaneSplitView::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2e3d780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)(int32_t, float_t, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation)>(&::UnityEngine::UIElements::TwoPaneSplitView::Init)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2e3d990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.OnPostDisplaySetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::TwoPaneSplitView::OnPostDisplaySetup)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2e3ebdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "OnPostDisplaySetup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.PostDisplaySetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(
    &::UnityEngine::UIElements::TwoPaneSplitView::PostDisplaySetup)> {
  constexpr static std::size_t size = 0xf70;
  constexpr static std::size_t addrs = 0x2e3dc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                               "PostDisplaySetup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.OnSizeChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::TwoPaneSplitView::OnSizeChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e3ece4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "OnSizeChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.OnSizeChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(
    &::UnityEngine::UIElements::TwoPaneSplitView::OnSizeChange)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x2e3ece8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                               "OnSizeChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(
    &::UnityEngine::UIElements::TwoPaneSplitView::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3f508;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), 95));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.OnViewDataReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)()>(
    &::UnityEngine::UIElements::TwoPaneSplitView::OnViewDataReady)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2e3f510;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.SetDragLineOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)(float_t)>(
    &::UnityEngine::UIElements::TwoPaneSplitView::SetDragLineOffset)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2e3f2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "SetDragLineOffset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TwoPaneSplitView.SetFixedPaneDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TwoPaneSplitView::*)(float_t)>(
    &::UnityEngine::UIElements::TwoPaneSplitView::SetFixedPaneDimension)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2e3f3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "SetFixedPaneDimension",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TwoPaneSplitView::__get_m_LeftPane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftPane;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_LeftPane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftPane;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_LeftPane(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LeftPane)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TwoPaneSplitView::__get_m_RightPane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightPane;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_RightPane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightPane;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_RightPane(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RightPane)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FixedPane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPane;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FixedPane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPane;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_FixedPane(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FixedPane)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FlexedPane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlexedPane;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FlexedPane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlexedPane;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_FlexedPane(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FlexedPane)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FixedPaneDimension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneDimension;
}
constexpr float_t const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FixedPaneDimension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneDimension;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_FixedPaneDimension(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FixedPaneDimension = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TwoPaneSplitView::__get_m_DragLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragLine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_DragLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragLine;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_DragLine(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DragLine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TwoPaneSplitView::__get_m_DragLineAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragLineAnchor;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_DragLineAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragLineAnchor;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_DragLineAnchor(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DragLineAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::TwoPaneSplitView::__get_m_CollapseMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollapseMode;
}
constexpr bool const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_CollapseMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollapseMode;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_CollapseMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CollapseMode = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TwoPaneSplitView::__get_m_Content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_Content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_Content(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation& UnityEngine::UIElements::TwoPaneSplitView::__get_m_Orientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Orientation;
}
constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_Orientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Orientation;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_Orientation(::UnityEngine::UIElements::TwoPaneSplitViewOrientation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Orientation = value;
}
constexpr int32_t& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FixedPaneIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneIndex;
}
constexpr int32_t const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FixedPaneIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneIndex;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_FixedPaneIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FixedPaneIndex = value;
}
constexpr float_t& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FixedPaneInitialDimension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneInitialDimension;
}
constexpr float_t const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_FixedPaneInitialDimension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedPaneInitialDimension;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_FixedPaneInitialDimension(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FixedPaneInitialDimension = value;
}
constexpr ::UnityEngine::UIElements::TwoPaneSplitViewResizer*& UnityEngine::UIElements::TwoPaneSplitView::__get_m_Resizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resizer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TwoPaneSplitViewResizer*> const& UnityEngine::UIElements::TwoPaneSplitView::__get_m_Resizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resizer;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitView::__set_m_Resizer(::UnityEngine::UIElements::TwoPaneSplitViewResizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Resizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_UssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_UssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_UssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_UssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_ContentContainerClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_ContentContainerClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_ContentContainerClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_ContentContainerClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_HandleDragLineClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_HandleDragLineClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_HandleDragLineClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_HandleDragLineClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_HandleDragLineVerticalClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_HandleDragLineVerticalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_HandleDragLineVerticalClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_HandleDragLineVerticalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_HandleDragLineHorizontalClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_HandleDragLineHorizontalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_HandleDragLineHorizontalClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_HandleDragLineHorizontalClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_HandleDragLineAnchorClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_HandleDragLineAnchorClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_HandleDragLineAnchorClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_HandleDragLineAnchorClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_HandleDragLineAnchorVerticalClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_HandleDragLineAnchorVerticalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_HandleDragLineAnchorVerticalClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_HandleDragLineAnchorVerticalClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_HandleDragLineAnchorHorizontalClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_HandleDragLineAnchorHorizontalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_HandleDragLineAnchorHorizontalClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_HandleDragLineAnchorHorizontalClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_VerticalClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_VerticalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_VerticalClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_VerticalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline void UnityEngine::UIElements::TwoPaneSplitView::setStaticF_s_HorizontalClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_HorizontalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TwoPaneSplitView::getStaticF_s_HorizontalClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_HorizontalClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TwoPaneSplitView::get_fixedPane() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                             "get_fixedPane", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TwoPaneSplitView::get_flexedPane() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                             "get_flexedPane", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::TwoPaneSplitView::get_fixedPaneIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                             "get_fixedPaneIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::TwoPaneSplitView::get_fixedPaneDimension() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                             "get_fixedPaneDimension", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::set_fixedPaneDimension(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "set_fixedPaneDimension",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TwoPaneSplitView* UnityEngine::UIElements::TwoPaneSplitView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TwoPaneSplitView*>());
}
inline void UnityEngine::UIElements::TwoPaneSplitView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::Init(int32_t fixedPaneIndex, float_t fixedPaneInitialDimension, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fixedPaneIndex, fixedPaneInitialDimension, orientation);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::OnPostDisplaySetup(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "OnPostDisplaySetup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::PostDisplaySetup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                             "PostDisplaySetup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::OnSizeChange(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "OnSizeChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::OnSizeChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(),
                                                                             "OnSizeChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TwoPaneSplitView::get_contentContainer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), 95)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::SetDragLineOffset(float_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "SetDragLineOffset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
inline void UnityEngine::UIElements::TwoPaneSplitView::SetFixedPaneDimension(float_t dimension) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TwoPaneSplitView*>::get(), "SetFixedPaneDimension",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dimension);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TwoPaneSplitView::TwoPaneSplitView() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e3f6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory* UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory::__TwoPaneSplitView__UxmlFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
