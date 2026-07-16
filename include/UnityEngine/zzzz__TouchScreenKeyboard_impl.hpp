#pragma once
// IWYU pragma private; include "UnityEngine/TouchScreenKeyboard.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_InternalConstructorHelperArguments_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TouchScreenKeyboard_Status::TouchScreenKeyboard_Status(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TouchScreenKeyboard_Status::TouchScreenKeyboard_Status() {}
constexpr ::UnityEngine::TouchScreenKeyboard_Status UnityEngine::TouchScreenKeyboard_Status::Visible{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TouchScreenKeyboard_Status UnityEngine::TouchScreenKeyboard_Status::Done{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TouchScreenKeyboard_Status UnityEngine::TouchScreenKeyboard_Status::Canceled{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TouchScreenKeyboard_Status UnityEngine::TouchScreenKeyboard_Status::LostFocus{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance::TouchScreenKeyboard_InputFieldAppearance(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance::TouchScreenKeyboard_InputFieldAppearance() {}
constexpr ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance UnityEngine::TouchScreenKeyboard_InputFieldAppearance::Customizable{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance UnityEngine::TouchScreenKeyboard_InputFieldAppearance::AlwaysVisible{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance UnityEngine::TouchScreenKeyboard_InputFieldAppearance::AlwaysHidden{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::TouchScreenKeyboard*)>(&::UnityEngine::TouchScreenKeyboard_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aefbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::TouchScreenKeyboard*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::TouchScreenKeyboard_BindingsMarshaller::ConvertToNative(::UnityEngine::TouchScreenKeyboard* touchScreenKeyboard) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::TouchScreenKeyboard*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, touchScreenKeyboard);
}
// Ctor Parameters []
constexpr ::UnityEngine::TouchScreenKeyboard_BindingsMarshaller::TouchScreenKeyboard_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Internal_Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TouchScreenKeyboard::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aeebb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::Destroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6aeebf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "Destroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::Finalize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aeec84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { ::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(::StringW, ::UnityEngine::TouchScreenKeyboardType, bool, bool, bool, bool, ::StringW, int32_t)>(
    &::UnityEngine::TouchScreenKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6aeecc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.TouchScreenKeyboard_InternalConstructorHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>, ::StringW, ::StringW)>(
    &::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6aeedd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                            { "TouchScreenKeyboard_InternalConstructorHelper",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_isSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::TouchScreenKeyboard::get_isSupported)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6aeefe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_isSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_disableInPlaceEditing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::TouchScreenKeyboard::get_disableInPlaceEditing)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6aef0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_disableInPlaceEditing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_isInPlaceEditingAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::TouchScreenKeyboard::get_isInPlaceEditingAllowed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6aef104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_isInPlaceEditingAllowed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.IsInPlaceEditingAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::TouchScreenKeyboard::IsInPlaceEditingAllowed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aef180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "IsInPlaceEditingAllowed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchScreenKeyboard* (*)(::StringW, ::UnityEngine::TouchScreenKeyboardType, bool, bool, bool, bool, ::StringW, int32_t)>(
    &::UnityEngine::TouchScreenKeyboard::Open)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6aef1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                             { "Open",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchScreenKeyboard* (*)(::StringW, ::UnityEngine::TouchScreenKeyboardType, bool, bool, bool)>(
    &::UnityEngine::TouchScreenKeyboard::Open)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6aef264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
            { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchScreenKeyboard* (*)(::StringW, ::UnityEngine::TouchScreenKeyboardType)>(&::UnityEngine::TouchScreenKeyboard::Open)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6aef2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                                                           { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_text)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6aef370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(::StringW)>(&::UnityEngine::TouchScreenKeyboard::set_text)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6aef4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_hideInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::TouchScreenKeyboard::set_hideInput)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aef64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_hideInput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_inputFieldAppearance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchScreenKeyboard_InputFieldAppearance (*)()>(&::UnityEngine::TouchScreenKeyboard::get_inputFieldAppearance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aef688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_inputFieldAppearance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_active)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6aef6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(bool)>(&::UnityEngine::TouchScreenKeyboard::set_active)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6aef73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchScreenKeyboard_Status (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_status)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6aef7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_characterLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(int32_t)>(&::UnityEngine::TouchScreenKeyboard::set_characterLimit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6aef864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_characterLimit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_canGetSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_canGetSelection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6aef900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_canGetSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_canSetSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_canSetSelection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6aef98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_canSetSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_selection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RangeInt (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_selection)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6aefa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_selection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_selection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(::UnityEngine::RangeInt)>(&::UnityEngine::TouchScreenKeyboard::set_selection)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aefaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_selection", {}, { ::i2c::type_of<::UnityEngine::RangeInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.GetSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::TouchScreenKeyboard::GetSelection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aefa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                                                           { "GetSelection", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.SetSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::TouchScreenKeyboard::SetSelection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aefb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "SetSelection", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.TouchScreenKeyboard_InternalConstructorHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6aeef8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                         { "TouchScreenKeyboard_InternalConstructorHelper_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_text_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::TouchScreenKeyboard::get_text_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aef470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                { "get_text_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_text_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::TouchScreenKeyboard::set_text_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aef608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                { "set_text_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_active_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::TouchScreenKeyboard::get_active_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aef700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_active_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_active_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::TouchScreenKeyboard::set_active_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aef794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_active_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_status_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchScreenKeyboard_Status (*)(::System::IntPtr)>(&::UnityEngine::TouchScreenKeyboard::get_status_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aef828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_status_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_characterLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TouchScreenKeyboard::set_characterLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aef8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                                                           { "set_characterLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_canGetSelection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::TouchScreenKeyboard::get_canGetSelection_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aef950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_canGetSelection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_canSetSelection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::TouchScreenKeyboard::get_canSetSelection_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aef9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_canSetSelection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::TouchScreenKeyboard::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::TouchScreenKeyboard::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::TouchScreenKeyboard::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline void UnityEngine::TouchScreenKeyboard::setStaticF__disableInPlaceEditing_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<disableInPlaceEditing>k__BackingField", ::UnityEngine::TouchScreenKeyboard*>(std::forward<bool>(value));
}
inline bool UnityEngine::TouchScreenKeyboard::getStaticF__disableInPlaceEditing_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<disableInPlaceEditing>k__BackingField", ::UnityEngine::TouchScreenKeyboard*>();
}
inline void UnityEngine::TouchScreenKeyboard::Internal_Destroy(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::TouchScreenKeyboard::Destroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TouchScreenKeyboard::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TouchScreenKeyboard::_ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert,
                                                    ::StringW textPlaceholder, int32_t characterLimit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit);
}
inline ::System::IntPtr UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments,
                                                                                                        ::StringW text, ::StringW textPlaceholder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                          { "TouchScreenKeyboard_InternalConstructorHelper",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, arguments, text, textPlaceholder);
}
inline bool UnityEngine::TouchScreenKeyboard::get_isSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_isSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::TouchScreenKeyboard::get_disableInPlaceEditing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_disableInPlaceEditing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::TouchScreenKeyboard::get_isInPlaceEditingAllowed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_isInPlaceEditingAllowed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::TouchScreenKeyboard::IsInPlaceEditingAllowed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "IsInPlaceEditingAllowed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::TouchScreenKeyboard::Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure,
                                                                                  bool alert, ::StringW textPlaceholder, int32_t characterLimit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                           { "Open",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard*>(nullptr, ___internal_method, text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder,
                                                                                  characterLimit);
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::TouchScreenKeyboard::Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline,
                                                                                  bool secure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
          { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard*>(nullptr, ___internal_method, text, keyboardType, autocorrection, multiline, secure);
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::TouchScreenKeyboard::Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                                                         { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard*>(nullptr, ___internal_method, text, keyboardType);
}
inline ::StringW UnityEngine::TouchScreenKeyboard::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TouchScreenKeyboard::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TouchScreenKeyboard::set_hideInput(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_hideInput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance UnityEngine::TouchScreenKeyboard::get_inputFieldAppearance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_inputFieldAppearance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard_InputFieldAppearance>(nullptr, ___internal_method);
}
inline bool UnityEngine::TouchScreenKeyboard::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TouchScreenKeyboard::set_active(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TouchScreenKeyboard_Status UnityEngine::TouchScreenKeyboard::get_status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard_Status>(this, ___internal_method);
}
inline void UnityEngine::TouchScreenKeyboard::set_characterLimit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_characterLimit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TouchScreenKeyboard::get_canGetSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_canGetSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TouchScreenKeyboard::get_canSetSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_canSetSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::RangeInt UnityEngine::TouchScreenKeyboard::get_selection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_selection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RangeInt>(this, ___internal_method);
}
inline void UnityEngine::TouchScreenKeyboard::set_selection(::UnityEngine::RangeInt value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_selection", {}, { ::i2c::type_of<::UnityEngine::RangeInt>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TouchScreenKeyboard::GetSelection(::by_ref<int32_t> start, ::by_ref<int32_t> length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "GetSelection", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, length);
}
inline void UnityEngine::TouchScreenKeyboard::SetSelection(int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "SetSelection", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, length);
}
inline ::System::IntPtr
UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper_Injected(::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments,
                                                                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> text,
                                                                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> textPlaceholder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                       { "TouchScreenKeyboard_InternalConstructorHelper_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, arguments, text, textPlaceholder);
}
inline void UnityEngine::TouchScreenKeyboard::get_text_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                              { "get_text_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::TouchScreenKeyboard::set_text_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                              { "set_text_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::TouchScreenKeyboard::get_active_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_active_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TouchScreenKeyboard::set_active_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "set_active_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::TouchScreenKeyboard_Status UnityEngine::TouchScreenKeyboard::get_status_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_status_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard_Status>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TouchScreenKeyboard::set_characterLimit_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(),
                                                                                         { "set_characterLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::TouchScreenKeyboard::get_canGetSelection_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_canGetSelection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::TouchScreenKeyboard::get_canSetSelection_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TouchScreenKeyboard*>(), { "get_canSetSelection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::TouchScreenKeyboard::New_ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline,
                                                                                      bool secure, bool alert, ::StringW textPlaceholder, int32_t characterLimit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TouchScreenKeyboard*>(text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit));
}
// Ctor Parameters []
constexpr ::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard() {}
