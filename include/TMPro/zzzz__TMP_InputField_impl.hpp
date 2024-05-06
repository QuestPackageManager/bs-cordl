#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_InputField_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_impl.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_InputValidator_def.hpp"
#include "TMPro/zzzz__TMP_ScrollbarEventHandler_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__ContentType::__TMP_InputField__ContentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__ContentType::__TMP_InputField__ContentType() {}
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::Standard{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::Autocorrected{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::IntegerNumber{ static_cast<int32_t>(0x2) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::DecimalNumber{ static_cast<int32_t>(0x3) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::Alphanumeric{ static_cast<int32_t>(0x4) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::Name{ static_cast<int32_t>(0x5) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::EmailAddress{ static_cast<int32_t>(0x6) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::Password{ static_cast<int32_t>(0x7) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::Pin{ static_cast<int32_t>(0x8) };
constexpr ::TMPro::__TMP_InputField__ContentType TMPro::__TMP_InputField__ContentType::Custom{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__InputType::__TMP_InputField__InputType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__InputType::__TMP_InputField__InputType() {}
constexpr ::TMPro::__TMP_InputField__InputType TMPro::__TMP_InputField__InputType::Standard{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::__TMP_InputField__InputType TMPro::__TMP_InputField__InputType::AutoCorrect{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::__TMP_InputField__InputType TMPro::__TMP_InputField__InputType::Password{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__CharacterValidation::__TMP_InputField__CharacterValidation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__CharacterValidation::__TMP_InputField__CharacterValidation() {}
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::None{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::Digit{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::Integer{ static_cast<int32_t>(0x2) };
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::Decimal{ static_cast<int32_t>(0x3) };
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::Alphanumeric{ static_cast<int32_t>(0x4) };
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::Name{ static_cast<int32_t>(0x5) };
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::Regex{ static_cast<int32_t>(0x6) };
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::EmailAddress{ static_cast<int32_t>(0x7) };
constexpr ::TMPro::__TMP_InputField__CharacterValidation TMPro::__TMP_InputField__CharacterValidation::CustomValidator{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__LineType::__TMP_InputField__LineType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__LineType::__TMP_InputField__LineType() {}
constexpr ::TMPro::__TMP_InputField__LineType TMPro::__TMP_InputField__LineType::SingleLine{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::__TMP_InputField__LineType TMPro::__TMP_InputField__LineType::MultiLineSubmit{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::__TMP_InputField__LineType TMPro::__TMP_InputField__LineType::MultiLineNewline{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnValidateInput._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__OnValidateInput::*)(::System::Object*, void*)>(
    &::TMPro::__TMP_InputField__OnValidateInput::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x336e298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnValidateInput.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::__TMP_InputField__OnValidateInput::*)(::StringW, int32_t, char16_t)>(
    &::TMPro::__TMP_InputField__OnValidateInput::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x336e370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnValidateInput.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::TMPro::__TMP_InputField__OnValidateInput::*)(::StringW, int32_t, char16_t, ::System::AsyncCallback*, ::System::Object*)>(&::TMPro::__TMP_InputField__OnValidateInput::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x336e384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnValidateInput.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::__TMP_InputField__OnValidateInput::*)(::System::IAsyncResult*)>(
    &::TMPro::__TMP_InputField__OnValidateInput::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x336e444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(), 15));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__OnValidateInput* TMPro::__TMP_InputField__OnValidateInput::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_InputField__OnValidateInput*>(object, method));
}
inline void TMPro::__TMP_InputField__OnValidateInput::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline char16_t TMPro::__TMP_InputField__OnValidateInput::Invoke(::StringW text, int32_t charIndex, char16_t addedChar) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, text, charIndex, addedChar);
}
inline ::System::IAsyncResult* TMPro::__TMP_InputField__OnValidateInput::BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, ::System::AsyncCallback* callback,
                                                                                     ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, text, charIndex, addedChar, callback, object);
}
inline char16_t TMPro::__TMP_InputField__OnValidateInput::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__OnValidateInput::__TMP_InputField__OnValidateInput() {}
//  Writing Method size for method: ::TMPro::__TMP_InputField__SubmitEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__SubmitEvent::*)()>(&::TMPro::__TMP_InputField__SubmitEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x336e46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__SubmitEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__SubmitEvent* TMPro::__TMP_InputField__SubmitEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_InputField__SubmitEvent*>());
}
inline void TMPro::__TMP_InputField__SubmitEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__SubmitEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__SubmitEvent::__TMP_InputField__SubmitEvent() {}
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnChangeEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__OnChangeEvent::*)()>(&::TMPro::__TMP_InputField__OnChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x336e4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnChangeEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__OnChangeEvent* TMPro::__TMP_InputField__OnChangeEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_InputField__OnChangeEvent*>());
}
inline void TMPro::__TMP_InputField__OnChangeEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnChangeEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__OnChangeEvent::__TMP_InputField__OnChangeEvent() {}
//  Writing Method size for method: ::TMPro::__TMP_InputField__SelectionEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__SelectionEvent::*)()>(&::TMPro::__TMP_InputField__SelectionEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x336e4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__SelectionEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__SelectionEvent* TMPro::__TMP_InputField__SelectionEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_InputField__SelectionEvent*>());
}
inline void TMPro::__TMP_InputField__SelectionEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__SelectionEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__SelectionEvent::__TMP_InputField__SelectionEvent() {}
//  Writing Method size for method: ::TMPro::__TMP_InputField__TextSelectionEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__TextSelectionEvent::*)()>(&::TMPro::__TMP_InputField__TextSelectionEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x336e544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__TextSelectionEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__TextSelectionEvent* TMPro::__TMP_InputField__TextSelectionEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_InputField__TextSelectionEvent*>());
}
inline void TMPro::__TMP_InputField__TextSelectionEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__TextSelectionEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__TextSelectionEvent::__TMP_InputField__TextSelectionEvent() {}
//  Writing Method size for method: ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__TouchScreenKeyboardEvent::*)()>(
    &::TMPro::__TMP_InputField__TouchScreenKeyboardEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x336e58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* TMPro::__TMP_InputField__TouchScreenKeyboardEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>());
}
inline void TMPro::__TMP_InputField__TouchScreenKeyboardEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent::__TMP_InputField__TouchScreenKeyboardEvent() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__EditState::__TMP_InputField__EditState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField__EditState::__TMP_InputField__EditState() {}
constexpr ::TMPro::__TMP_InputField__EditState TMPro::__TMP_InputField__EditState::Continue{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::__TMP_InputField__EditState TMPro::__TMP_InputField__EditState::Finish{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___CaretBlink_d__276::*)(int32_t)>(
    &::TMPro::__TMP_InputField___CaretBlink_d__276::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x336e5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(
    &::TMPro::__TMP_InputField___CaretBlink_d__276::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336e5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(
    &::TMPro::__TMP_InputField___CaretBlink_d__276::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x336e600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(
    &::TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336e70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(
    &::TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x336e714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(), "System.Collections.IEnumerator.Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(
    &::TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336e754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr TMPro::__TMP_InputField___CaretBlink_d__276::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* TMPro::__TMP_InputField___CaretBlink_d__276::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr TMPro::__TMP_InputField___CaretBlink_d__276::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* TMPro::__TMP_InputField___CaretBlink_d__276::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr TMPro::__TMP_InputField___CaretBlink_d__276::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* TMPro::__TMP_InputField___CaretBlink_d__276::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TMP_InputField>& TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void TMPro::__TMP_InputField___CaretBlink_d__276::__cordl_internal_set___4__this(::UnityW<::TMPro::TMP_InputField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TMPro::__TMP_InputField___CaretBlink_d__276* TMPro::__TMP_InputField___CaretBlink_d__276::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_InputField___CaretBlink_d__276*>(__1__state));
}
inline void TMPro::__TMP_InputField___CaretBlink_d__276::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void TMPro::__TMP_InputField___CaretBlink_d__276::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::__TMP_InputField___CaretBlink_d__276::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(), "System.Collections.IEnumerator.Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField___CaretBlink_d__276::__TMP_InputField___CaretBlink_d__276() {}
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)(int32_t)>(
    &::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x336e75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(
    &::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336e784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(
    &::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x336e788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(
    &::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336e9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(
    &::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x336e9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(
    &::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336ea24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TMP_InputField>& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_set___4__this(::UnityW<::TMPro::TMP_InputField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_get_eventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_get_eventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventData;
}
constexpr void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__cordl_internal_set_eventData(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>(__1__state));
}
inline void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__TMP_InputField___MouseDragOutsideRect_d__294() {}
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseInput> (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_inputSystem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3346708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_inputSystem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_compositionString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_compositionString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3346818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_compositionString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_compositionLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_compositionLength)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33468ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_compositionLength",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x33468d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_mesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3346bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_mesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_shouldHideMobileInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3346ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_shouldHideMobileInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_shouldHideMobileInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3346cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_shouldHideMobileInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_shouldHideSoftKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_shouldHideSoftKeyboard)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3346d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_shouldHideSoftKeyboard",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_shouldHideSoftKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_shouldHideSoftKeyboard)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3346e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_shouldHideSoftKeyboard",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.isKeyboardUsingEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::isKeyboardUsingEvents)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3346f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "isKeyboardUsingEvents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3346f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_text",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3346f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::SetTextWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33470b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetTextWithoutNotify", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW, bool)>(&::TMPro::TMP_InputField::SetText)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3346f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_isFocused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_isFocused",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretBlinkRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretBlinkRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretBlinkRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretBlinkRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_caretBlinkRate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3347648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretBlinkRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretWidth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretWidth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3347720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretWidth", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_textViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_textViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33477ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_textViewport",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_textViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::RectTransform*)>(&::TMPro::TMP_InputField::set_textViewport)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33378d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_textViewport", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_textComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_Text> (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_textComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33477f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_textComponent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_textComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_InputField::set_textComponent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x333792c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_textComponent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_placeholder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_placeholder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33477fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_placeholder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_placeholder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::Graphic*)>(&::TMPro::TMP_InputField::set_placeholder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33379a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_placeholder", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_verticalScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Scrollbar> (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_verticalScrollbar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_verticalScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::Scrollbar*)>(&::TMPro::TMP_InputField::set_verticalScrollbar)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x334780c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_verticalScrollbar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_scrollSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_scrollSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33479c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_scrollSensitivity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_scrollSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_scrollSensitivity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x33479cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_scrollSensitivity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretColor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3347a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Color)>(&::TMPro::TMP_InputField::set_caretColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3347a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_customCaretColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_customCaretColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_customCaretColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_customCaretColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_customCaretColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3347ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_customCaretColor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3347ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Color)>(&::TMPro::TMP_InputField::set_selectionColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3347ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onEndEdit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__SubmitEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onEndEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onEndEdit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onEndEdit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__SubmitEvent*)>(
    &::TMPro::TMP_InputField::set_onEndEdit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onEndEdit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SubmitEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__SubmitEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onSubmit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onSubmit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__SubmitEvent*)>(&::TMPro::TMP_InputField::set_onSubmit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onSubmit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SubmitEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__SelectionEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onSelect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__SelectionEvent*)>(
    &::TMPro::TMP_InputField::set_onSelect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onSelect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SelectionEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__SelectionEvent* (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_onDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onDeselect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__SelectionEvent*)>(
    &::TMPro::TMP_InputField::set_onDeselect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onDeselect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SelectionEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onTextSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__TextSelectionEvent* (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_onTextSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onTextSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onTextSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__TextSelectionEvent*)>(
    &::TMPro::TMP_InputField::set_onTextSelection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onTextSelection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TextSelectionEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onEndTextSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__TextSelectionEvent* (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_onEndTextSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onEndTextSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onEndTextSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__TextSelectionEvent*)>(
    &::TMPro::TMP_InputField::set_onEndTextSelection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onEndTextSelection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TextSelectionEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__OnChangeEvent* (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onValueChanged",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__OnChangeEvent*)>(
    &::TMPro::TMP_InputField::set_onValueChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onValueChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__OnChangeEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onTouchScreenKeyboardStatusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_onTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onTouchScreenKeyboardStatusChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onTouchScreenKeyboardStatusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*)>(
    &::TMPro::TMP_InputField::set_onTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onTouchScreenKeyboardStatusChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onValidateInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__OnValidateInput* (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_onValidateInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onValidateInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onValidateInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__OnValidateInput*)>(
    &::TMPro::TMP_InputField::set_onValidateInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onValidateInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__OnValidateInput*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_characterLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_characterLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_characterLimit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_characterLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_characterLimit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3347e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_characterLimit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_pointSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_pointSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_pointSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_pointSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_pointSize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3347f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_pointSize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_fontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_fontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33480e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_fontAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_fontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_InputField::set_fontAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33379f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_fontAsset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onFocusSelectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onFocusSelectAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33481c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onFocusSelectAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onFocusSelectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_onFocusSelectAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33481d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onFocusSelectAll",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_resetOnDeActivation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_resetOnDeActivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33481dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_resetOnDeActivation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_resetOnDeActivation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_resetOnDeActivation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33481e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_resetOnDeActivation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_restoreOriginalTextOnEscape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_restoreOriginalTextOnEscape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33481f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_restoreOriginalTextOnEscape",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_restoreOriginalTextOnEscape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_restoreOriginalTextOnEscape)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33481f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_restoreOriginalTextOnEscape",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_isRichTextEditingAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_isRichTextEditingAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_isRichTextEditingAllowed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_isRichTextEditingAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_isRichTextEditingAllowed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334820c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_isRichTextEditingAllowed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_contentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__ContentType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_contentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_contentType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_contentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__ContentType)>(
    &::TMPro::TMP_InputField::set_contentType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3348220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_contentType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__ContentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_lineType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__LineType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_lineType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_lineType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__LineType)>(&::TMPro::TMP_InputField::set_lineType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3348358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_lineType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__LineType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_lineLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_lineLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_lineLimit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_lineLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_lineLimit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3348478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_lineLimit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__InputType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_inputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33484e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_inputType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_inputType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__InputType)>(&::TMPro::TMP_InputField::set_inputType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33484ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_inputType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__InputType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_keyboardType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboardType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_keyboardType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_keyboardType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_keyboardType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::TouchScreenKeyboardType)>(
    &::TMPro::TMP_InputField::set_keyboardType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3348590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_keyboardType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_characterValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__CharacterValidation (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::get_characterValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_characterValidation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_characterValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__CharacterValidation)>(
    &::TMPro::TMP_InputField::set_characterValidation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x334861c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_characterValidation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__CharacterValidation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputValidator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_InputValidator> (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_inputValidator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33486a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_inputValidator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_inputValidator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_InputValidator*)>(&::TMPro::TMP_InputField::set_inputValidator)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33486a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_inputValidator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_InputValidator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_readOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_readOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_readOnly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_readOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_readOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334874c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_readOnly", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_richText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_richText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_richText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_richText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_richText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3348760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_richText", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_multiLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_multiLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x33487f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_multiLine",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_asteriskChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_asteriskChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_asteriskChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_asteriskChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::set_asteriskChar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3348810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_asteriskChar", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_wasCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_wasCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_wasCanceled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ClampStringPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(ByRef<int32_t>)>(&::TMPro::TMP_InputField::ClampStringPos)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x334888c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ClampStringPos", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ClampCaretPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(ByRef<int32_t>)>(&::TMPro::TMP_InputField::ClampCaretPos)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33488c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ClampCaretPos", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretPositionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretPositionInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretPositionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretPositionInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3348920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretPositionInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringPositionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_stringPositionInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringPositionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3348948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_stringPositionInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretSelectPositionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretSelectPositionInternal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretSelectPositionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3348998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretSelectPositionInternal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringSelectPositionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringSelectPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33489a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_stringSelectPositionInternal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringSelectPositionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringSelectPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x33489c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_stringSelectPositionInternal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_hasSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_hasSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x33489f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_hasSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3348a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretPosition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionAnchorPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionAnchorPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionAnchorPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3348a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionAnchorPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionFocusPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionFocusPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionFocusPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3348abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionFocusPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_stringPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3348b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_stringPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionStringAnchorPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionStringAnchorPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionStringAnchorPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionStringAnchorPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionStringAnchorPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3348b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionStringAnchorPosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionStringFocusPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionStringFocusPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionStringFocusPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionStringFocusPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionStringFocusPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3348bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionStringFocusPosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnEnable)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x3348c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnDisable)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x3349878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ON_TEXT_CHANGED
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Object*)>(&::TMPro::TMP_InputField::ON_TEXT_CHANGED)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3349d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ON_TEXT_CHANGED", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CaretBlink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CaretBlink)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3349fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "CaretBlink",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetCaretVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetCaretVisible)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x334a03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetCaretVisible",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetCaretActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetCaretActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x33476c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetCaretActive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x334a074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "OnFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SelectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SelectAll)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x334a084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SelectAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveTextEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveTextEnd)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x334a0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveTextEnd", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveTextStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveTextStart)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x334a258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveTextStart", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveToEndOfLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveToEndOfLine)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x334a394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveToEndOfLine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveToStartOfLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveToStartOfLine)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x334a514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveToStartOfLine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_clipboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_InputField::get_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334a6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_clipboard",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_clipboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::TMPro::TMP_InputField::set_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334a6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_clipboard", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.InPlaceEditing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::InPlaceEditing)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x334a6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "InPlaceEditing",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateStringPositionFromKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateStringPositionFromKeyboard)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x334a778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateStringPositionFromKeyboard",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::LateUpdate)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x334a8c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MayDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_InputField::MayDrag)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x334bbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MayDrag", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnBeginDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_InputField::OnBeginDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x334bcb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_InputField::OnDrag)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x334bcd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MouseDragOutsideRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_InputField::MouseDragOutsideRect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x334bf64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MouseDragOutsideRect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnEndDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_InputField::OnEndDrag)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x334bfd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_InputField::OnPointerDown)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x334bff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.KeyPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__EditState (::TMPro::TMP_InputField::*)(::UnityEngine::Event*)>(
    &::TMPro::TMP_InputField::KeyPressed)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x334c724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "KeyPressed", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.IsValidChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::IsValidChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x334db54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ProcessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Event*)>(&::TMPro::TMP_InputField::ProcessEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334db74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ProcessEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnUpdateSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::TMPro::TMP_InputField::OnUpdateSelected)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x334db78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnScroll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_InputField::OnScroll)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x334dd74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetScrollPositionRelativeToViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GetScrollPositionRelativeToViewport)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x334df34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetScrollPositionRelativeToViewport",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetSelectedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GetSelectedString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x334d0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetSelectedString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.FindNextWordBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::FindNextWordBegin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x334e214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "FindNextWordBegin",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveRight)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x334d728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveRight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.FindPrevWordBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::FindPrevWordBegin)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x334e2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "FindPrevWordBegin",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveLeft)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x334d378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveLeft", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LineUpCharacterPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x334e3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "LineUpCharacterPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LineDownCharacterPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x334e4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "LineDownCharacterPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.PageUpCharacterPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::PageUpCharacterPosition)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x334e63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "PageUpCharacterPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.PageDownCharacterPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::PageDownCharacterPosition)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x334e848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "PageDownCharacterPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334db30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveDown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveDown)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x334ea54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334db24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveUp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveUp)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x334ec18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MovePageUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334db3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MovePageUp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MovePageUp)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x334edc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MovePageUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MovePageDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334db48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MovePageDown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MovePageDown)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x334f0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MovePageDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Delete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::Delete)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x334d1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "Delete",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DeleteKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::DeleteKey)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x334cec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "DeleteKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Backspace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::Backspace)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x334cb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "Backspace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::Append)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x334f3ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::Append)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x334f45c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::Insert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x334f698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateTouchKeyboardFromEditChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateTouchKeyboardFromEditChanges)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x334d33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateTouchKeyboardFromEditChanges",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnValueChangedAndUpdateLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnValueChangedAndUpdateLabel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x334bb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnValueChangedAndUpdateLabel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnValueChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33475dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnValueChanged",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnEndEdit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnEndEdit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x334f798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnEndEdit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnSubmit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x334dd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnSubmit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnFocus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x334f7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnFocusLost)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x334f850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnFocusLost",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnTextSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnTextSelection)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x334f8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnTextSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnEndTextSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnEndTextSelection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x334f954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnEndTextSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendTouchScreenKeyboardStatusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x334b354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendTouchScreenKeyboardStatusChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateLabel)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x33470c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateLabel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateScrollbar)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3349ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateScrollbar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnScrollbarValueChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::OnScrollbarValueChange)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x334f9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "OnScrollbarValueChange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateMaskRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateMaskRegions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3349874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateMaskRegions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AdjustTextPositionRelativeToViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::AdjustTextPositionRelativeToViewport)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x334e044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "AdjustTextPositionRelativeToViewport",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetCaretPositionFromStringIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3349e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetCaretPositionFromStringIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetMinCaretPositionFromStringIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetMinCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x334fa2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetMinCaretPositionFromStringIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetMaxCaretPositionFromStringIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetMaxCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x334faa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetMaxCaretPositionFromStringIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetStringIndexFromCaretPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetStringIndexFromCaretPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x334a1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetStringIndexFromCaretPosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ForceLabelUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ForceLabelUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334fb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ForceLabelUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MarkGeometryAsDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::MarkGeometryAsDirty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3347794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MarkGeometryAsDirty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Rebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::CanvasUpdate)>(&::TMPro::TMP_InputField::Rebuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x334fb14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LayoutComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334fbd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 70));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334fbdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 71));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateGeometry)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x334fb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateGeometry",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AssignPositioningIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::AssignPositioningIfNeeded)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x3349374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "AssignPositioningIfNeeded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnFillVBO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Mesh*)>(&::TMPro::TMP_InputField::OnFillVBO)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x334fbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "OnFillVBO", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GenerateCaret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2)>(
    &::TMPro::TMP_InputField::GenerateCaret)> {
  constexpr static std::size_t size = 0xfe4;
  constexpr static std::size_t addrs = 0x334ff38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GenerateCaret", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CreateCursorVerts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CreateCursorVerts)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x33517d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "CreateCursorVerts",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GenerateHightlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2)>(
    &::TMPro::TMP_InputField::GenerateHightlight)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x3350f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GenerateHightlight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AdjustRectTransformRelativeToViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Vector2, float_t, bool)>(
    &::TMPro::TMP_InputField::AdjustRectTransformRelativeToViewport)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x3351928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "AdjustRectTransformRelativeToViewport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::TMP_InputField::*)(::StringW, int32_t, char16_t)>(&::TMPro::TMP_InputField::Validate)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x334b3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ActivateInputField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ActivateInputField)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3351e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ActivateInputField",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ActivateInputFieldInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ActivateInputFieldInternal)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x334af28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ActivateInputFieldInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::TMPro::TMP_InputField::OnSelect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3351f6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnPointerClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_InputField::OnPointerClick)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3351f90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 72));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnControlClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnControlClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3351fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "OnControlClick",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ReleaseSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ReleaseSelection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x334b328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ReleaseSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DeactivateInputField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::DeactivateInputField)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3349ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "DeactivateInputField",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::TMPro::TMP_InputField::OnDeselect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3351fb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::TMPro::TMP_InputField::OnSubmit)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3351ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.EnforceContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::EnforceContentType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3348294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "EnforceContentType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextComponentWrapMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetTextComponentWrapMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3346b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetTextComponentWrapMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextComponentRichTextMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetTextComponentRichTextMode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x334876c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetTextComponentRichTextMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustomIfContentTypeIsNot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(
    ::ArrayW<::TMPro::__TMP_InputField__ContentType, ::Array<::TMPro::__TMP_InputField__ContentType>*>)>(&::TMPro::TMP_InputField::SetToCustomIfContentTypeIsNot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3348418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetToCustomIfContentTypeIsNot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::__TMP_InputField__ContentType, ::Array<::TMPro::__TMP_InputField__ContentType>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3348570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetToCustom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__CharacterValidation)>(
    &::TMPro::TMP_InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x334872c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetToCustom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__CharacterValidation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DoStateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(
    &::TMPro::TMP_InputField::DoStateTransition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3352044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CalculateLayoutInputHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3352070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 74));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CalculateLayoutInputVertical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3352074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_minWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3352078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 76));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_preferredWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_preferredWidth)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3352080;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 77));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_flexibleWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33521b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 78));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_minHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33521b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 79));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_preferredHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_preferredHeight)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x33521c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 80));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_flexibleHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33522f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 81));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_layoutPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33522f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 82));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetGlobalPointSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::SetGlobalPointSize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3347ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetGlobalPointSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetGlobalFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_InputField::SetGlobalFontAsset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x33480e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetGlobalFontAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::TMPro::TMP_InputField::*)()>(
    &::TMPro::TMP_InputField::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3352394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UnityEngine.UI.ICanvasElement.get_transform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr ::UnityEngine::EventSystems::IUpdateSelectedHandler* TMPro::TMP_InputField::i___UnityEngine__EventSystems__IUpdateSelectedHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* TMPro::TMP_InputField::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* TMPro::TMP_InputField::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* TMPro::TMP_InputField::i___UnityEngine__EventSystems__IDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* TMPro::TMP_InputField::i___UnityEngine__EventSystems__IEndDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* TMPro::TMP_InputField::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* TMPro::TMP_InputField::i___UnityEngine__EventSystems__ISubmitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* TMPro::TMP_InputField::i___UnityEngine__UI__ICanvasElement() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* TMPro::TMP_InputField::i___UnityEngine__UI__ILayoutElement() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
constexpr TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
constexpr ::UnityEngine::EventSystems::IScrollHandler* TMPro::TMP_InputField::i___UnityEngine__EventSystems__IScrollHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::TouchScreenKeyboard*& TMPro::TMP_InputField::__cordl_internal_get_m_SoftKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SoftKeyboard;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TouchScreenKeyboard*> const& TMPro::TMP_InputField::__cordl_internal_get_m_SoftKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SoftKeyboard;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_SoftKeyboard(::UnityEngine::TouchScreenKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SoftKeyboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& TMPro::TMP_InputField::__cordl_internal_get_m_RectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& TMPro::TMP_InputField::__cordl_internal_get_m_RectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& TMPro::TMP_InputField::__cordl_internal_get_m_TextViewport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextViewport;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& TMPro::TMP_InputField::__cordl_internal_get_m_TextViewport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextViewport;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_TextViewport(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextViewport)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::RectMask2D>& TMPro::TMP_InputField::__cordl_internal_get_m_TextComponentRectMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponentRectMask;
}
constexpr ::UnityW<::UnityEngine::UI::RectMask2D> const& TMPro::TMP_InputField::__cordl_internal_get_m_TextComponentRectMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponentRectMask;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_TextComponentRectMask(::UnityW<::UnityEngine::UI::RectMask2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextComponentRectMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::RectMask2D>& TMPro::TMP_InputField::__cordl_internal_get_m_TextViewportRectMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextViewportRectMask;
}
constexpr ::UnityW<::UnityEngine::UI::RectMask2D> const& TMPro::TMP_InputField::__cordl_internal_get_m_TextViewportRectMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextViewportRectMask;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_TextViewportRectMask(::UnityW<::UnityEngine::UI::RectMask2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextViewportRectMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& TMPro::TMP_InputField::__cordl_internal_get_m_CachedViewportRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedViewportRect;
}
constexpr ::UnityEngine::Rect const& TMPro::TMP_InputField::__cordl_internal_get_m_CachedViewportRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedViewportRect;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CachedViewportRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedViewportRect = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& TMPro::TMP_InputField::__cordl_internal_get_m_TextComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponent;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& TMPro::TMP_InputField::__cordl_internal_get_m_TextComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponent;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_TextComponent(::UnityW<::TMPro::TMP_Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextComponent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& TMPro::TMP_InputField::__cordl_internal_get_m_TextComponentRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponentRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& TMPro::TMP_InputField::__cordl_internal_get_m_TextComponentRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponentRectTransform;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_TextComponentRectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextComponentRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& TMPro::TMP_InputField::__cordl_internal_get_m_Placeholder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Placeholder;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& TMPro::TMP_InputField::__cordl_internal_get_m_Placeholder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Placeholder;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_Placeholder(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Placeholder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& TMPro::TMP_InputField::__cordl_internal_get_m_VerticalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbar;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& TMPro::TMP_InputField::__cordl_internal_get_m_VerticalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbar;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_VerticalScrollbar(::UnityW<::UnityEngine::UI::Scrollbar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VerticalScrollbar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TMP_ScrollbarEventHandler>& TMPro::TMP_InputField::__cordl_internal_get_m_VerticalScrollbarEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbarEventHandler;
}
constexpr ::UnityW<::TMPro::TMP_ScrollbarEventHandler> const& TMPro::TMP_InputField::__cordl_internal_get_m_VerticalScrollbarEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbarEventHandler;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_VerticalScrollbarEventHandler(::UnityW<::TMPro::TMP_ScrollbarEventHandler> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VerticalScrollbarEventHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_IsDrivenByLayoutComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDrivenByLayoutComponents;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_IsDrivenByLayoutComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDrivenByLayoutComponents;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_IsDrivenByLayoutComponents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDrivenByLayoutComponents = value;
}
constexpr ::UnityW<::UnityEngine::UI::LayoutGroup>& TMPro::TMP_InputField::__cordl_internal_get_m_LayoutGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutGroup;
}
constexpr ::UnityW<::UnityEngine::UI::LayoutGroup> const& TMPro::TMP_InputField::__cordl_internal_get_m_LayoutGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutGroup;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_LayoutGroup(::UnityW<::UnityEngine::UI::LayoutGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LayoutGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::EventSystems::IScrollHandler*& TMPro::TMP_InputField::__cordl_internal_get_m_IScrollHandlerParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IScrollHandlerParent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::IScrollHandler*> const& TMPro::TMP_InputField::__cordl_internal_get_m_IScrollHandlerParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IScrollHandlerParent;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_IScrollHandlerParent(::UnityEngine::EventSystems::IScrollHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IScrollHandlerParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& TMPro::TMP_InputField::__cordl_internal_get_m_ScrollPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollPosition;
}
constexpr float_t const& TMPro::TMP_InputField::__cordl_internal_get_m_ScrollPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollPosition;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ScrollPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollPosition = value;
}
constexpr float_t& TMPro::TMP_InputField::__cordl_internal_get_m_ScrollSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollSensitivity;
}
constexpr float_t const& TMPro::TMP_InputField::__cordl_internal_get_m_ScrollSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollSensitivity;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ScrollSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollSensitivity = value;
}
constexpr ::TMPro::__TMP_InputField__ContentType& TMPro::TMP_InputField::__cordl_internal_get_m_ContentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentType;
}
constexpr ::TMPro::__TMP_InputField__ContentType const& TMPro::TMP_InputField::__cordl_internal_get_m_ContentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentType;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ContentType(::TMPro::__TMP_InputField__ContentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentType = value;
}
constexpr ::TMPro::__TMP_InputField__InputType& TMPro::TMP_InputField::__cordl_internal_get_m_InputType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputType;
}
constexpr ::TMPro::__TMP_InputField__InputType const& TMPro::TMP_InputField::__cordl_internal_get_m_InputType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputType;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_InputType(::TMPro::__TMP_InputField__InputType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputType = value;
}
constexpr char16_t& TMPro::TMP_InputField::__cordl_internal_get_m_AsteriskChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsteriskChar;
}
constexpr char16_t const& TMPro::TMP_InputField::__cordl_internal_get_m_AsteriskChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsteriskChar;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_AsteriskChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AsteriskChar = value;
}
constexpr ::UnityEngine::TouchScreenKeyboardType& TMPro::TMP_InputField::__cordl_internal_get_m_KeyboardType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardType;
}
constexpr ::UnityEngine::TouchScreenKeyboardType const& TMPro::TMP_InputField::__cordl_internal_get_m_KeyboardType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardType;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardType = value;
}
constexpr ::TMPro::__TMP_InputField__LineType& TMPro::TMP_InputField::__cordl_internal_get_m_LineType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineType;
}
constexpr ::TMPro::__TMP_InputField__LineType const& TMPro::TMP_InputField::__cordl_internal_get_m_LineType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineType;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_LineType(::TMPro::__TMP_InputField__LineType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineType = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_HideMobileInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideMobileInput;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_HideMobileInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideMobileInput;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_HideMobileInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HideMobileInput = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_HideSoftKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideSoftKeyboard;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_HideSoftKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideSoftKeyboard;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_HideSoftKeyboard(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HideSoftKeyboard = value;
}
constexpr ::TMPro::__TMP_InputField__CharacterValidation& TMPro::TMP_InputField::__cordl_internal_get_m_CharacterValidation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterValidation;
}
constexpr ::TMPro::__TMP_InputField__CharacterValidation const& TMPro::TMP_InputField::__cordl_internal_get_m_CharacterValidation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterValidation;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CharacterValidation(::TMPro::__TMP_InputField__CharacterValidation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharacterValidation = value;
}
constexpr ::StringW& TMPro::TMP_InputField::__cordl_internal_get_m_RegexValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegexValue;
}
constexpr ::StringW const& TMPro::TMP_InputField::__cordl_internal_get_m_RegexValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegexValue;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_RegexValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RegexValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& TMPro::TMP_InputField::__cordl_internal_get_m_GlobalPointSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalPointSize;
}
constexpr float_t const& TMPro::TMP_InputField::__cordl_internal_get_m_GlobalPointSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalPointSize;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_GlobalPointSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlobalPointSize = value;
}
constexpr int32_t& TMPro::TMP_InputField::__cordl_internal_get_m_CharacterLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLimit;
}
constexpr int32_t const& TMPro::TMP_InputField::__cordl_internal_get_m_CharacterLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLimit;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CharacterLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharacterLimit = value;
}
constexpr ::TMPro::__TMP_InputField__SubmitEvent*& TMPro::TMP_InputField::__cordl_internal_get_m_OnEndEdit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnEndEdit;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SubmitEvent*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnEndEdit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnEndEdit;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnEndEdit(::TMPro::__TMP_InputField__SubmitEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnEndEdit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::__TMP_InputField__SubmitEvent*& TMPro::TMP_InputField::__cordl_internal_get_m_OnSubmit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSubmit;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SubmitEvent*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnSubmit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSubmit;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnSubmit(::TMPro::__TMP_InputField__SubmitEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnSubmit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::__TMP_InputField__SelectionEvent*& TMPro::TMP_InputField::__cordl_internal_get_m_OnSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSelect;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SelectionEvent*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSelect;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnSelect(::TMPro::__TMP_InputField__SelectionEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnSelect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::__TMP_InputField__SelectionEvent*& TMPro::TMP_InputField::__cordl_internal_get_m_OnDeselect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDeselect;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SelectionEvent*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnDeselect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDeselect;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnDeselect(::TMPro::__TMP_InputField__SelectionEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnDeselect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::__TMP_InputField__TextSelectionEvent*& TMPro::TMP_InputField::__cordl_internal_get_m_OnTextSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTextSelection;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TextSelectionEvent*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnTextSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTextSelection;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnTextSelection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::__TMP_InputField__TextSelectionEvent*& TMPro::TMP_InputField::__cordl_internal_get_m_OnEndTextSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnEndTextSelection;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TextSelectionEvent*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnEndTextSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnEndTextSelection;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnEndTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnEndTextSelection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::__TMP_InputField__OnChangeEvent*& TMPro::TMP_InputField::__cordl_internal_get_m_OnValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__OnChangeEvent*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnValueChanged(::TMPro::__TMP_InputField__OnChangeEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*& TMPro::TMP_InputField::__cordl_internal_get_m_OnTouchScreenKeyboardStatusChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTouchScreenKeyboardStatusChanged;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnTouchScreenKeyboardStatusChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTouchScreenKeyboardStatusChanged;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnTouchScreenKeyboardStatusChanged(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnTouchScreenKeyboardStatusChanged)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::__TMP_InputField__OnValidateInput*& TMPro::TMP_InputField::__cordl_internal_get_m_OnValidateInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValidateInput;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__OnValidateInput*> const& TMPro::TMP_InputField::__cordl_internal_get_m_OnValidateInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValidateInput;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnValidateInput(::TMPro::__TMP_InputField__OnValidateInput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnValidateInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& TMPro::TMP_InputField::__cordl_internal_get_m_CaretColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretColor;
}
constexpr ::UnityEngine::Color const& TMPro::TMP_InputField::__cordl_internal_get_m_CaretColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretColor;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CaretColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretColor = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_CustomCaretColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomCaretColor;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_CustomCaretColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomCaretColor;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CustomCaretColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CustomCaretColor = value;
}
constexpr ::UnityEngine::Color& TMPro::TMP_InputField::__cordl_internal_get_m_SelectionColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionColor;
}
constexpr ::UnityEngine::Color const& TMPro::TMP_InputField::__cordl_internal_get_m_SelectionColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionColor;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_SelectionColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectionColor = value;
}
constexpr ::StringW& TMPro::TMP_InputField::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::StringW const& TMPro::TMP_InputField::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_Text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& TMPro::TMP_InputField::__cordl_internal_get_m_CaretBlinkRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretBlinkRate;
}
constexpr float_t const& TMPro::TMP_InputField::__cordl_internal_get_m_CaretBlinkRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretBlinkRate;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CaretBlinkRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretBlinkRate = value;
}
constexpr int32_t& TMPro::TMP_InputField::__cordl_internal_get_m_CaretWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretWidth;
}
constexpr int32_t const& TMPro::TMP_InputField::__cordl_internal_get_m_CaretWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretWidth;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CaretWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretWidth = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_ReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOnly;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_ReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOnly;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadOnly = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_RichText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RichText;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_RichText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RichText;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_RichText(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RichText = value;
}
constexpr int32_t& TMPro::TMP_InputField::__cordl_internal_get_m_StringPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StringPosition;
}
constexpr int32_t const& TMPro::TMP_InputField::__cordl_internal_get_m_StringPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StringPosition;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_StringPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StringPosition = value;
}
constexpr int32_t& TMPro::TMP_InputField::__cordl_internal_get_m_StringSelectPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StringSelectPosition;
}
constexpr int32_t const& TMPro::TMP_InputField::__cordl_internal_get_m_StringSelectPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StringSelectPosition;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_StringSelectPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StringSelectPosition = value;
}
constexpr int32_t& TMPro::TMP_InputField::__cordl_internal_get_m_CaretPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretPosition;
}
constexpr int32_t const& TMPro::TMP_InputField::__cordl_internal_get_m_CaretPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretPosition;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CaretPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretPosition = value;
}
constexpr int32_t& TMPro::TMP_InputField::__cordl_internal_get_m_CaretSelectPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretSelectPosition;
}
constexpr int32_t const& TMPro::TMP_InputField::__cordl_internal_get_m_CaretSelectPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretSelectPosition;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CaretSelectPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretSelectPosition = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& TMPro::TMP_InputField::__cordl_internal_get_caretRectTrans() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caretRectTrans;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& TMPro::TMP_InputField::__cordl_internal_get_caretRectTrans() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caretRectTrans;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_caretRectTrans(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___caretRectTrans)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*>& TMPro::TMP_InputField::__cordl_internal_get_m_CursorVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorVerts;
}
constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> const& TMPro::TMP_InputField::__cordl_internal_get_m_CursorVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorVerts;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CursorVerts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::CanvasRenderer>& TMPro::TMP_InputField::__cordl_internal_get_m_CachedInputRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInputRenderer;
}
constexpr ::UnityW<::UnityEngine::CanvasRenderer> const& TMPro::TMP_InputField::__cordl_internal_get_m_CachedInputRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInputRenderer;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CachedInputRenderer(::UnityW<::UnityEngine::CanvasRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedInputRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_InputField::__cordl_internal_get_m_LastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPosition;
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_InputField::__cordl_internal_get_m_LastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPosition;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_LastPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastPosition = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& TMPro::TMP_InputField::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TMPro::TMP_InputField::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_AllowInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowInput;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_AllowInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowInput;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_AllowInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowInput = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_ShouldActivateNextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldActivateNextUpdate;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_ShouldActivateNextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldActivateNextUpdate;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ShouldActivateNextUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldActivateNextUpdate = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_UpdateDrag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateDrag;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_UpdateDrag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateDrag;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_UpdateDrag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateDrag = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_DragPositionOutOfBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragPositionOutOfBounds;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_DragPositionOutOfBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragPositionOutOfBounds;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_DragPositionOutOfBounds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragPositionOutOfBounds = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_CaretVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretVisible;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_CaretVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretVisible;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_CaretVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretVisible = value;
}
constexpr ::UnityEngine::Coroutine*& TMPro::TMP_InputField::__cordl_internal_get_m_BlinkCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlinkCoroutine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& TMPro::TMP_InputField::__cordl_internal_get_m_BlinkCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlinkCoroutine;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_BlinkCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlinkCoroutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& TMPro::TMP_InputField::__cordl_internal_get_m_BlinkStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlinkStartTime;
}
constexpr float_t const& TMPro::TMP_InputField::__cordl_internal_get_m_BlinkStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlinkStartTime;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_BlinkStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlinkStartTime = value;
}
constexpr ::UnityEngine::Coroutine*& TMPro::TMP_InputField::__cordl_internal_get_m_DragCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragCoroutine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& TMPro::TMP_InputField::__cordl_internal_get_m_DragCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragCoroutine;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_DragCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DragCoroutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& TMPro::TMP_InputField::__cordl_internal_get_m_OriginalText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalText;
}
constexpr ::StringW const& TMPro::TMP_InputField::__cordl_internal_get_m_OriginalText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalText;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OriginalText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OriginalText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_WasCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasCanceled;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_WasCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasCanceled;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_WasCanceled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WasCanceled = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_HasDoneFocusTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasDoneFocusTransition;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_HasDoneFocusTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasDoneFocusTransition;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_HasDoneFocusTransition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasDoneFocusTransition = value;
}
constexpr ::UnityEngine::WaitForSecondsRealtime*& TMPro::TMP_InputField::__cordl_internal_get_m_WaitForSecondsRealtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitForSecondsRealtime;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSecondsRealtime*> const& TMPro::TMP_InputField::__cordl_internal_get_m_WaitForSecondsRealtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitForSecondsRealtime;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WaitForSecondsRealtime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_PreventCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreventCallback;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_PreventCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreventCallback;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_PreventCallback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreventCallback = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchKeyboardAllowsInPlaceEditing;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchKeyboardAllowsInPlaceEditing;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchKeyboardAllowsInPlaceEditing = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_IsTextComponentUpdateRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTextComponentUpdateRequired;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_IsTextComponentUpdateRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTextComponentUpdateRequired;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_IsTextComponentUpdateRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsTextComponentUpdateRequired = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_isLastKeyBackspace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isLastKeyBackspace;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_isLastKeyBackspace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isLastKeyBackspace;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_isLastKeyBackspace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isLastKeyBackspace = value;
}
constexpr float_t& TMPro::TMP_InputField::__cordl_internal_get_m_PointerDownClickStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownClickStartTime;
}
constexpr float_t const& TMPro::TMP_InputField::__cordl_internal_get_m_PointerDownClickStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownClickStartTime;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_PointerDownClickStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerDownClickStartTime = value;
}
constexpr float_t& TMPro::TMP_InputField::__cordl_internal_get_m_KeyDownStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyDownStartTime;
}
constexpr float_t const& TMPro::TMP_InputField::__cordl_internal_get_m_KeyDownStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyDownStartTime;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_KeyDownStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyDownStartTime = value;
}
constexpr float_t& TMPro::TMP_InputField::__cordl_internal_get_m_DoubleClickDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoubleClickDelay;
}
constexpr float_t const& TMPro::TMP_InputField::__cordl_internal_get_m_DoubleClickDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoubleClickDelay;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_DoubleClickDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DoubleClickDelay = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_IsCompositionActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCompositionActive;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_IsCompositionActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCompositionActive;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_IsCompositionActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsCompositionActive = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_ShouldUpdateIMEWindowPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldUpdateIMEWindowPosition;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_ShouldUpdateIMEWindowPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldUpdateIMEWindowPosition;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ShouldUpdateIMEWindowPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldUpdateIMEWindowPosition = value;
}
constexpr int32_t& TMPro::TMP_InputField::__cordl_internal_get_m_PreviousIMEInsertionLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousIMEInsertionLine;
}
constexpr int32_t const& TMPro::TMP_InputField::__cordl_internal_get_m_PreviousIMEInsertionLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousIMEInsertionLine;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_PreviousIMEInsertionLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousIMEInsertionLine = value;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset>& TMPro::TMP_InputField::__cordl_internal_get_m_GlobalFontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalFontAsset;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& TMPro::TMP_InputField::__cordl_internal_get_m_GlobalFontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalFontAsset;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_GlobalFontAsset(::UnityW<::TMPro::TMP_FontAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlobalFontAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_OnFocusSelectAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnFocusSelectAll;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_OnFocusSelectAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnFocusSelectAll;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_OnFocusSelectAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnFocusSelectAll = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_isSelectAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isSelectAll;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_isSelectAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isSelectAll;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_isSelectAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isSelectAll = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_ResetOnDeActivation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetOnDeActivation;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_ResetOnDeActivation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetOnDeActivation;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ResetOnDeActivation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResetOnDeActivation = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_SelectionStillActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionStillActive;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_SelectionStillActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionStillActive;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_SelectionStillActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectionStillActive = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_ReleaseSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseSelection;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_ReleaseSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseSelection;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ReleaseSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseSelection = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& TMPro::TMP_InputField::__cordl_internal_get_m_PreviouslySelectedObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviouslySelectedObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& TMPro::TMP_InputField::__cordl_internal_get_m_PreviouslySelectedObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviouslySelectedObject;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_PreviouslySelectedObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviouslySelectedObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_RestoreOriginalTextOnEscape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestoreOriginalTextOnEscape;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_RestoreOriginalTextOnEscape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestoreOriginalTextOnEscape;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_RestoreOriginalTextOnEscape(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RestoreOriginalTextOnEscape = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_isRichTextEditingAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isRichTextEditingAllowed;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_isRichTextEditingAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isRichTextEditingAllowed;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_isRichTextEditingAllowed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isRichTextEditingAllowed = value;
}
constexpr int32_t& TMPro::TMP_InputField::__cordl_internal_get_m_LineLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineLimit;
}
constexpr int32_t const& TMPro::TMP_InputField::__cordl_internal_get_m_LineLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineLimit;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_LineLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineLimit = value;
}
constexpr ::UnityW<::TMPro::TMP_InputValidator>& TMPro::TMP_InputField::__cordl_internal_get_m_InputValidator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputValidator;
}
constexpr ::UnityW<::TMPro::TMP_InputValidator> const& TMPro::TMP_InputField::__cordl_internal_get_m_InputValidator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputValidator;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_InputValidator(::UnityW<::TMPro::TMP_InputValidator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InputValidator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_isSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isSelected;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_isSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isSelected;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_isSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isSelected = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_IsStringPositionDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsStringPositionDirty;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_IsStringPositionDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsStringPositionDirty;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_IsStringPositionDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsStringPositionDirty = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_IsCaretPositionDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCaretPositionDirty;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_IsCaretPositionDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCaretPositionDirty;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_IsCaretPositionDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsCaretPositionDirty = value;
}
constexpr bool& TMPro::TMP_InputField::__cordl_internal_get_m_forceRectTransformAdjustment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_forceRectTransformAdjustment;
}
constexpr bool const& TMPro::TMP_InputField::__cordl_internal_get_m_forceRectTransformAdjustment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_forceRectTransformAdjustment;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_forceRectTransformAdjustment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_forceRectTransformAdjustment = value;
}
constexpr ::UnityEngine::Event*& TMPro::TMP_InputField::__cordl_internal_get_m_ProcessingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessingEvent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& TMPro::TMP_InputField::__cordl_internal_get_m_ProcessingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessingEvent;
}
constexpr void TMPro::TMP_InputField::__cordl_internal_set_m_ProcessingEvent(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProcessingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_InputField::setStaticF_kSeparators(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> TMPro::TMP_InputField::getStaticF_kSeparators() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get>();
}
inline ::UnityW<::UnityEngine::EventSystems::BaseInput> TMPro::TMP_InputField::get_inputSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_inputSystem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseInput>, false>(this, ___internal_method);
}
inline ::StringW TMPro::TMP_InputField::get_compositionString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_compositionString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t TMPro::TMP_InputField::get_compositionLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_compositionLength",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::TMPro::TMP_InputField* TMPro::TMP_InputField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_InputField*>());
}
inline void TMPro::TMP_InputField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> TMPro::TMP_InputField::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_mesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline bool TMPro::TMP_InputField::get_shouldHideMobileInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_shouldHideMobileInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_shouldHideMobileInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_shouldHideMobileInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_shouldHideSoftKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_shouldHideSoftKeyboard",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_shouldHideSoftKeyboard(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_shouldHideSoftKeyboard",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::isKeyboardUsingEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "isKeyboardUsingEvents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW TMPro::TMP_InputField::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_text",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void TMPro::TMP_InputField::SetTextWithoutNotify(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetTextWithoutNotify", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
/// @param sendCallback: bool (default: true)
inline void TMPro::TMP_InputField::SetText(::StringW value, bool sendCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, sendCallback);
}
inline bool TMPro::TMP_InputField::get_isFocused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_isFocused",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_caretBlinkRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretBlinkRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretBlinkRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretBlinkRate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_caretWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretWidth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretWidth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretWidth", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> TMPro::TMP_InputField::get_textViewport() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_textViewport",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_textViewport(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_textViewport", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_Text> TMPro::TMP_InputField::get_textComponent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_textComponent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Text>, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_textComponent(::TMPro::TMP_Text* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_textComponent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Graphic> TMPro::TMP_InputField::get_placeholder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_placeholder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_placeholder(::UnityEngine::UI::Graphic* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_placeholder", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Scrollbar> TMPro::TMP_InputField::get_verticalScrollbar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_verticalScrollbar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Scrollbar>, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_verticalScrollbar(::UnityEngine::UI::Scrollbar* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_verticalScrollbar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t TMPro::TMP_InputField::get_scrollSensitivity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_scrollSensitivity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_scrollSensitivity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_scrollSensitivity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color TMPro::TMP_InputField::get_caretColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_customCaretColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_customCaretColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_customCaretColor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_customCaretColor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color TMPro::TMP_InputField::get_selectionColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__SubmitEvent* TMPro::TMP_InputField::get_onEndEdit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onEndEdit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__SubmitEvent*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onEndEdit(::TMPro::__TMP_InputField__SubmitEvent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onEndEdit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SubmitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__SubmitEvent* TMPro::TMP_InputField::get_onSubmit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onSubmit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__SubmitEvent*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onSubmit(::TMPro::__TMP_InputField__SubmitEvent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onSubmit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SubmitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__SelectionEvent* TMPro::TMP_InputField::get_onSelect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onSelect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__SelectionEvent*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onSelect(::TMPro::__TMP_InputField__SelectionEvent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onSelect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SelectionEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__SelectionEvent* TMPro::TMP_InputField::get_onDeselect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onDeselect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__SelectionEvent*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onDeselect(::TMPro::__TMP_InputField__SelectionEvent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onDeselect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SelectionEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__TextSelectionEvent* TMPro::TMP_InputField::get_onTextSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onTextSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__TextSelectionEvent*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onTextSelection", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TextSelectionEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__TextSelectionEvent* TMPro::TMP_InputField::get_onEndTextSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onEndTextSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__TextSelectionEvent*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onEndTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onEndTextSelection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TextSelectionEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__OnChangeEvent* TMPro::TMP_InputField::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onValueChanged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__OnChangeEvent*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onValueChanged(::TMPro::__TMP_InputField__OnChangeEvent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onValueChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__OnChangeEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* TMPro::TMP_InputField::get_onTouchScreenKeyboardStatusChanged() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onTouchScreenKeyboardStatusChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onTouchScreenKeyboardStatusChanged(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onTouchScreenKeyboardStatusChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__OnValidateInput* TMPro::TMP_InputField::get_onValidateInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onValidateInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__OnValidateInput*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onValidateInput(::TMPro::__TMP_InputField__OnValidateInput* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onValidateInput", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__OnValidateInput*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_characterLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_characterLimit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_characterLimit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_characterLimit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t TMPro::TMP_InputField::get_pointSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_pointSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_pointSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_pointSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_InputField::get_fontAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_fontAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_fontAsset(::TMPro::TMP_FontAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_fontAsset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_onFocusSelectAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_onFocusSelectAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onFocusSelectAll(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_onFocusSelectAll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_resetOnDeActivation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_resetOnDeActivation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_resetOnDeActivation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_resetOnDeActivation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_restoreOriginalTextOnEscape() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_restoreOriginalTextOnEscape",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_restoreOriginalTextOnEscape(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_restoreOriginalTextOnEscape",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_isRichTextEditingAllowed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_isRichTextEditingAllowed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_isRichTextEditingAllowed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_isRichTextEditingAllowed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__ContentType TMPro::TMP_InputField::get_contentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_contentType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__ContentType, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_contentType(::TMPro::__TMP_InputField__ContentType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_contentType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__ContentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__LineType TMPro::TMP_InputField::get_lineType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_lineType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__LineType, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_lineType(::TMPro::__TMP_InputField__LineType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_lineType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__LineType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_lineLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_lineLimit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_lineLimit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_lineLimit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__InputType TMPro::TMP_InputField::get_inputType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_inputType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__InputType, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_inputType(::TMPro::__TMP_InputField__InputType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_inputType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__InputType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TouchScreenKeyboardType TMPro::TMP_InputField::get_keyboardType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_keyboardType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboardType, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_keyboardType(::UnityEngine::TouchScreenKeyboardType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_keyboardType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__CharacterValidation TMPro::TMP_InputField::get_characterValidation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_characterValidation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__CharacterValidation, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_characterValidation(::TMPro::__TMP_InputField__CharacterValidation value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_characterValidation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__CharacterValidation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_InputValidator> TMPro::TMP_InputField::get_inputValidator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_inputValidator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_InputValidator>, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_inputValidator(::TMPro::TMP_InputValidator* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_inputValidator", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_InputValidator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_readOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_readOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_readOnly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_readOnly", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_richText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_richText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_richText(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_richText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_multiLine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_multiLine",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t TMPro::TMP_InputField::get_asteriskChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_asteriskChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_asteriskChar(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_asteriskChar", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_wasCanceled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_wasCanceled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::ClampStringPos(ByRef<int32_t> pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ClampStringPos", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline void TMPro::TMP_InputField::ClampCaretPos(ByRef<int32_t> pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ClampCaretPos", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline int32_t TMPro::TMP_InputField::get_caretPositionInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretPositionInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretPositionInternal(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretPositionInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_stringPositionInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_stringPositionInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_stringPositionInternal(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_stringPositionInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_caretSelectPositionInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretSelectPositionInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretSelectPositionInternal(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretSelectPositionInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_stringSelectPositionInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                             "get_stringSelectPositionInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_stringSelectPositionInternal(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_stringSelectPositionInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_hasSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_hasSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t TMPro::TMP_InputField::get_caretPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_caretPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_caretPosition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_selectionAnchorPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionAnchorPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionAnchorPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionAnchorPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_selectionFocusPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionFocusPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionFocusPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionFocusPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_stringPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_stringPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_stringPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_stringPosition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_selectionStringAnchorPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_selectionStringAnchorPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionStringAnchorPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionStringAnchorPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_selectionStringFocusPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                             "get_selectionStringFocusPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionStringFocusPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_selectionStringFocusPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void TMPro::TMP_InputField::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::ON_TEXT_CHANGED(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ON_TEXT_CHANGED", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline ::System::Collections::IEnumerator* TMPro::TMP_InputField::CaretBlink() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "CaretBlink",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetCaretVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetCaretVisible",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetCaretActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetCaretActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "OnFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SelectAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SelectAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::MoveTextEnd(bool shift) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveTextEnd", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MoveTextStart(bool shift) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveTextStart", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MoveToEndOfLine(bool shift, bool ctrl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveToEndOfLine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift, ctrl);
}
inline void TMPro::TMP_InputField::MoveToStartOfLine(bool shift, bool ctrl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveToStartOfLine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift, ctrl);
}
inline ::StringW TMPro::TMP_InputField::get_clipboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "get_clipboard",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_InputField::set_clipboard(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "set_clipboard", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::InPlaceEditing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "InPlaceEditing",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::UpdateStringPositionFromKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                             "UpdateStringPositionFromKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::LateUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::TMP_InputField::MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MayDrag", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::System::Collections::IEnumerator* TMPro::TMP_InputField::MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MouseDragOutsideRect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::TMPro::__TMP_InputField__EditState TMPro::TMP_InputField::KeyPressed(::UnityEngine::Event* evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "KeyPressed", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__EditState, false>(this, ___internal_method, evt);
}
inline bool TMPro::TMP_InputField::IsValidChar(char16_t c) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline void TMPro::TMP_InputField::ProcessEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ProcessEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void TMPro::TMP_InputField::OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline float_t TMPro::TMP_InputField::GetScrollPositionRelativeToViewport() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetScrollPositionRelativeToViewport",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::StringW TMPro::TMP_InputField::GetSelectedString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetSelectedString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t TMPro::TMP_InputField::FindNextWordBegin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "FindNextWordBegin",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::MoveRight(bool shift, bool ctrl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveRight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift, ctrl);
}
inline int32_t TMPro::TMP_InputField::FindPrevWordBegin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "FindPrevWordBegin",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::MoveLeft(bool shift, bool ctrl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveLeft", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift, ctrl);
}
inline int32_t TMPro::TMP_InputField::LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "LineUpCharacterPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, originalPos, goToFirstChar);
}
inline int32_t TMPro::TMP_InputField::LineDownCharacterPosition(int32_t originalPos, bool goToLastChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "LineDownCharacterPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, originalPos, goToLastChar);
}
inline int32_t TMPro::TMP_InputField::PageUpCharacterPosition(int32_t originalPos, bool goToFirstChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "PageUpCharacterPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, originalPos, goToFirstChar);
}
inline int32_t TMPro::TMP_InputField::PageDownCharacterPosition(int32_t originalPos, bool goToLastChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "PageDownCharacterPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, originalPos, goToLastChar);
}
inline void TMPro::TMP_InputField::MoveDown(bool shift) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveDown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MoveDown(bool shift, bool goToLastChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift, goToLastChar);
}
inline void TMPro::TMP_InputField::MoveUp(bool shift) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MoveUp(bool shift, bool goToFirstChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MoveUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift, goToFirstChar);
}
inline void TMPro::TMP_InputField::MovePageUp(bool shift) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MovePageUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MovePageUp(bool shift, bool goToFirstChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MovePageUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift, goToFirstChar);
}
inline void TMPro::TMP_InputField::MovePageDown(bool shift) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MovePageDown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MovePageDown(bool shift, bool goToLastChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MovePageDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift, goToLastChar);
}
inline void TMPro::TMP_InputField::Delete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "Delete",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::DeleteKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "DeleteKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::Backspace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "Backspace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::Append(::StringW input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void TMPro::TMP_InputField::Append(char16_t input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void TMPro::TMP_InputField::Insert(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void TMPro::TMP_InputField::UpdateTouchKeyboardFromEditChanges() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateTouchKeyboardFromEditChanges",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnValueChangedAndUpdateLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                                                             "SendOnValueChangedAndUpdateLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnValueChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnValueChanged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnEndEdit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnEndEdit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnSubmit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnSubmit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnFocusLost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnFocusLost",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnTextSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnTextSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnEndTextSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendOnEndTextSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendTouchScreenKeyboardStatusChanged() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SendTouchScreenKeyboardStatusChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::UpdateLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateLabel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::UpdateScrollbar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateScrollbar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnScrollbarValueChange(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "OnScrollbarValueChange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void TMPro::TMP_InputField::UpdateMaskRegions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateMaskRegions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::AdjustTextPositionRelativeToViewport(float_t relativePosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "AdjustTextPositionRelativeToViewport",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relativePosition);
}
inline int32_t TMPro::TMP_InputField::GetCaretPositionFromStringIndex(int32_t stringIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetCaretPositionFromStringIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stringIndex);
}
inline int32_t TMPro::TMP_InputField::GetMinCaretPositionFromStringIndex(int32_t stringIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetMinCaretPositionFromStringIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stringIndex);
}
inline int32_t TMPro::TMP_InputField::GetMaxCaretPositionFromStringIndex(int32_t stringIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetMaxCaretPositionFromStringIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stringIndex);
}
inline int32_t TMPro::TMP_InputField::GetStringIndexFromCaretPosition(int32_t caretPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GetStringIndexFromCaretPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, caretPosition);
}
inline void TMPro::TMP_InputField::ForceLabelUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ForceLabelUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::MarkGeometryAsDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "MarkGeometryAsDirty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::Rebuild(::UnityEngine::UI::CanvasUpdate update) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, update);
}
inline void TMPro::TMP_InputField::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 70)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::UpdateGeometry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UpdateGeometry",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::AssignPositioningIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "AssignPositioningIfNeeded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnFillVBO(::UnityEngine::Mesh* vbo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "OnFillVBO", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vbo);
}
inline void TMPro::TMP_InputField::GenerateCaret(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GenerateCaret", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vbo, roundingOffset);
}
inline void TMPro::TMP_InputField::CreateCursorVerts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "CreateCursorVerts",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::GenerateHightlight(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "GenerateHightlight", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vbo, roundingOffset);
}
inline void TMPro::TMP_InputField::AdjustRectTransformRelativeToViewport(::UnityEngine::Vector2 startPosition, float_t height, bool isCharVisible) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "AdjustRectTransformRelativeToViewport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startPosition, height, isCharVisible);
}
inline char16_t TMPro::TMP_InputField::Validate(::StringW text, int32_t pos, char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, text, pos, ch);
}
inline void TMPro::TMP_InputField::ActivateInputField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ActivateInputField",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::ActivateInputFieldInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ActivateInputFieldInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnControlClick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "OnControlClick",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::ReleaseSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "ReleaseSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param clearSelection: bool (default: false)
inline void TMPro::TMP_InputField::DeactivateInputField(bool clearSelection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "DeactivateInputField",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearSelection);
}
inline void TMPro::TMP_InputField::OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::EnforceContentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "EnforceContentType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetTextComponentWrapMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetTextComponentWrapMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetTextComponentRichTextMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetTextComponentRichTextMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetToCustomIfContentTypeIsNot(::ArrayW<::TMPro::__TMP_InputField__ContentType, ::Array<::TMPro::__TMP_InputField__ContentType>*> allowedContentTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetToCustomIfContentTypeIsNot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::__TMP_InputField__ContentType, ::Array<::TMPro::__TMP_InputField__ContentType>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowedContentTypes);
}
inline void TMPro::TMP_InputField::SetToCustom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetToCustom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetToCustom(::TMPro::__TMP_InputField__CharacterValidation characterValidation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetToCustom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__CharacterValidation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, characterValidation);
}
inline void TMPro::TMP_InputField::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, instant);
}
inline void TMPro::TMP_InputField::CalculateLayoutInputHorizontal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::CalculateLayoutInputVertical() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_minWidth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 76)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_preferredWidth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_flexibleWidth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 78)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_minHeight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 79)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_preferredHeight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 80)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_flexibleHeight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 81)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t TMPro::TMP_InputField::get_layoutPriority() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), 82)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetGlobalPointSize(float_t pointSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetGlobalPointSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointSize);
}
inline void TMPro::TMP_InputField::SetGlobalFontAsset(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "SetGlobalFontAsset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fontAsset);
}
inline ::UnityW<::UnityEngine::Transform> TMPro::TMP_InputField::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(), "UnityEngine.UI.ICanvasElement.get_transform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_InputField::TMP_InputField() {}
