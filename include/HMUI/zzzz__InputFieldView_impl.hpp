#pragma once
#include "HMUI/zzzz__InputFieldView_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__InputFieldView__SelectionState::__InputFieldView__SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__InputFieldView__SelectionState::__InputFieldView__SelectionState() {}
constexpr ::HMUI::__InputFieldView__SelectionState HMUI::__InputFieldView__SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__InputFieldView__SelectionState HMUI::__InputFieldView__SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__InputFieldView__SelectionState HMUI::__InputFieldView__SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::__InputFieldView__SelectionState HMUI::__InputFieldView__SelectionState::Disabled{ static_cast<int32_t>(0x3) };
constexpr ::HMUI::__InputFieldView__SelectionState HMUI::__InputFieldView__SelectionState::Selected{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::HMUI::InputFieldView.get_selectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__InputFieldView__SelectionState (::HMUI::InputFieldView::*)()>(
    &::HMUI::InputFieldView::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_selectionState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_keyboardPositionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_keyboardPositionOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x214095c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_keyboardPositionOffset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.add_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::System::Action_1<::HMUI::__InputFieldView__SelectionState>*)>(
    &::HMUI::InputFieldView::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x214096c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "add_selectionStateDidChangeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.remove_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::System::Action_1<::HMUI::__InputFieldView__SelectionState>*)>(
    &::HMUI::InputFieldView::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2140a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "remove_selectionStateDidChangeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_onValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__InputFieldView__InputFieldChanged* (::HMUI::InputFieldView::*)()>(
    &::HMUI::InputFieldView::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_onValueChanged",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.set_onValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::__InputFieldView__InputFieldChanged*)>(
    &::HMUI::InputFieldView::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "set_onValueChanged", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__InputFieldView__InputFieldChanged*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_useGlobalKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_useGlobalKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_useGlobalKeyboard",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_text",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::StringW)>(&::HMUI::InputFieldView::set_text)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2140af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "set_text", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2140c6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2140d58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.DoStateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(
    &::HMUI::InputFieldView::DoStateTransition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2140d6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.ActivateKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::UIKeyboard*)>(&::HMUI::InputFieldView::ActivateKeyboard)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2140dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "ActivateKeyboard", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.DeactivateKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::UIKeyboard*)>(&::HMUI::InputFieldView::DeactivateKeyboard)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2141000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "DeactivateKeyboard", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.SetText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::StringW)>(&::HMUI::InputFieldView::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21411d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "SetText", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.ClearInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::ClearInput)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21411ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "ClearInput",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.KeyboardKeyPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(char16_t)>(&::HMUI::InputFieldView::KeyboardKeyPressed)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x214123c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "KeyboardKeyPressed", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.KeyboardDeletePressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::KeyboardDeletePressed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2141364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "KeyboardDeletePressed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.BlinkingCaretCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::BlinkingCaretCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2140f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "BlinkingCaretCoroutine",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdateCaretPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdateCaretPosition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2140b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdateCaretPosition",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdatePlaceholder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdatePlaceholder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2140c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdatePlaceholder",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdateClearButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdateClearButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21411a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdateClearButton",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2141468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView._Awake_b__34_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::_Awake_b__34_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21415e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "<Awake>b__34_0",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& HMUI::InputFieldView::__get__textView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textView;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& HMUI::InputFieldView::__get__textView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textView;
}
constexpr void HMUI::InputFieldView::__set__textView(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& HMUI::InputFieldView::__get__textViewCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textViewCanvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& HMUI::InputFieldView::__get__textViewCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textViewCanvasGroup;
}
constexpr void HMUI::InputFieldView::__set__textViewCanvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textViewCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ImageView*& HMUI::InputFieldView::__get__blinkingCaret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blinkingCaret;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& HMUI::InputFieldView::__get__blinkingCaret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blinkingCaret;
}
constexpr void HMUI::InputFieldView::__set__blinkingCaret(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blinkingCaret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& HMUI::InputFieldView::__get__placeholderText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____placeholderText;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HMUI::InputFieldView::__get__placeholderText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____placeholderText;
}
constexpr void HMUI::InputFieldView::__set__placeholderText(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____placeholderText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& HMUI::InputFieldView::__get__clearSearchButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearSearchButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& HMUI::InputFieldView::__get__clearSearchButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearSearchButton;
}
constexpr void HMUI::InputFieldView::__set__clearSearchButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearSearchButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::InputFieldView::__get__useGlobalKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGlobalKeyboard;
}
constexpr bool const& HMUI::InputFieldView::__get__useGlobalKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGlobalKeyboard;
}
constexpr void HMUI::InputFieldView::__set__useGlobalKeyboard(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useGlobalKeyboard = value;
}
constexpr ::UnityEngine::Vector3& HMUI::InputFieldView::__get__keyboardPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& HMUI::InputFieldView::__get__keyboardPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardPositionOffset;
}
constexpr void HMUI::InputFieldView::__set__keyboardPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboardPositionOffset = value;
}
constexpr bool& HMUI::InputFieldView::__get__useUppercase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useUppercase;
}
constexpr bool const& HMUI::InputFieldView::__get__useUppercase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useUppercase;
}
constexpr void HMUI::InputFieldView::__set__useUppercase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useUppercase = value;
}
constexpr int32_t& HMUI::InputFieldView::__get__textLengthLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textLengthLimit;
}
constexpr int32_t const& HMUI::InputFieldView::__get__textLengthLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textLengthLimit;
}
constexpr void HMUI::InputFieldView::__set__textLengthLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textLengthLimit = value;
}
constexpr float_t& HMUI::InputFieldView::__get__caretOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caretOffset;
}
constexpr float_t const& HMUI::InputFieldView::__get__caretOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caretOffset;
}
constexpr void HMUI::InputFieldView::__set__caretOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caretOffset = value;
}
constexpr ::System::Action_1<::HMUI::__InputFieldView__SelectionState>*& HMUI::InputFieldView::__get_selectionStateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*> const& HMUI::InputFieldView::__get_selectionStateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr void HMUI::InputFieldView::__set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectionStateDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__InputFieldView__SelectionState& HMUI::InputFieldView::__get__selectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr ::HMUI::__InputFieldView__SelectionState const& HMUI::InputFieldView::__get__selectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr void HMUI::InputFieldView::__set__selectionState(::HMUI::__InputFieldView__SelectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionState = value;
}
constexpr ::StringW& HMUI::InputFieldView::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& HMUI::InputFieldView::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::InputFieldView::__set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::InputFieldView::__get__hasKeyboardAssigned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKeyboardAssigned;
}
constexpr bool const& HMUI::InputFieldView::__get__hasKeyboardAssigned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKeyboardAssigned;
}
constexpr void HMUI::InputFieldView::__set__hasKeyboardAssigned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasKeyboardAssigned = value;
}
constexpr ::HMUI::ButtonBinder*& HMUI::InputFieldView::__get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& HMUI::InputFieldView::__get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void HMUI::InputFieldView::__set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__InputFieldView__InputFieldChanged*& HMUI::InputFieldView::__get__onValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onValueChanged;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__InputFieldView__InputFieldChanged*> const& HMUI::InputFieldView::__get__onValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onValueChanged;
}
constexpr void HMUI::InputFieldView::__set__onValueChanged(::HMUI::__InputFieldView__InputFieldChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::YieldInstruction*& HMUI::InputFieldView::__get__blinkWaitYieldInstruction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blinkWaitYieldInstruction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::YieldInstruction*> const& HMUI::InputFieldView::__get__blinkWaitYieldInstruction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blinkWaitYieldInstruction;
}
constexpr void HMUI::InputFieldView::__set__blinkWaitYieldInstruction(::UnityEngine::YieldInstruction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blinkWaitYieldInstruction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__InputFieldView__SelectionState HMUI::InputFieldView::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_selectionState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HMUI::__InputFieldView__SelectionState, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 HMUI::InputFieldView::get_keyboardPositionOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_keyboardPositionOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "add_selectionStateDidChangeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "remove_selectionStateDidChangeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::__InputFieldView__InputFieldChanged* HMUI::InputFieldView::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_onValueChanged",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HMUI::__InputFieldView__InputFieldChanged*, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::set_onValueChanged(::HMUI::__InputFieldView__InputFieldChanged* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "set_onValueChanged", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__InputFieldView__InputFieldChanged*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HMUI::InputFieldView::get_useGlobalKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_useGlobalKeyboard",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW HMUI::InputFieldView::get_text() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_text", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "set_text", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::Awake() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "DoStateTransition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Selectable__SelectionState>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, instant);
}
inline void HMUI::InputFieldView::ActivateKeyboard(::HMUI::UIKeyboard* keyboard) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "ActivateKeyboard", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline void HMUI::InputFieldView::DeactivateKeyboard(::HMUI::UIKeyboard* keyboard) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "DeactivateKeyboard", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline void HMUI::InputFieldView::SetText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "SetText", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::ClearInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "ClearInput",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::KeyboardKeyPressed(char16_t letter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "KeyboardKeyPressed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, letter);
}
inline void HMUI::InputFieldView::KeyboardDeletePressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "KeyboardDeletePressed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* HMUI::InputFieldView::BlinkingCaretCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "BlinkingCaretCoroutine",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdateCaretPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdateCaretPosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdatePlaceholder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdatePlaceholder",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdateClearButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdateClearButton",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::InputFieldView* HMUI::InputFieldView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::InputFieldView*>());
}
inline void HMUI::InputFieldView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::_Awake_b__34_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "<Awake>b__34_0",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldView::InputFieldView() {}
//  Writing Method size for method: ::HMUI::__InputFieldView__InputFieldChanged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__InputFieldView__InputFieldChanged::*)()>(&::HMUI::__InputFieldView__InputFieldChanged::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21415a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView__InputFieldChanged*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::HMUI::__InputFieldView__InputFieldChanged* HMUI::__InputFieldView__InputFieldChanged::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__InputFieldView__InputFieldChanged*>());
}
inline void HMUI::__InputFieldView__InputFieldChanged::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView__InputFieldChanged*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__InputFieldView__InputFieldChanged::__InputFieldView__InputFieldChanged() {}
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)(int32_t)>(
    &::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2141440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(
    &::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2141670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(
    &::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2141674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(
    &::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2141700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(
    &::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2141708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(
    &::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2141748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::InputFieldView*& HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__set___4__this(::HMUI::InputFieldView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43* HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>(__1__state));
}
inline void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__InputFieldView___BlinkingCaretCoroutine_d__43() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
