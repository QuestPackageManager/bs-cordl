#pragma once
// IWYU pragma private; include "HMUI/AnimatedSwitchView.hpp"
#include "HMUI/zzzz__AnimatedSwitchView_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__AnimatedSwitchView_def.hpp"
#include "HMUI/zzzz__AnimatedSwitchView_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView__ColorBlock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__AnimatedSwitchView__ColorBlock::*)()>(&::HMUI::__AnimatedSwitchView__ColorBlock::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25401a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__ColorBlock*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_knobColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knobColor;
}
constexpr ::UnityEngine::Color const& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_knobColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knobColor;
}
constexpr void HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_set_knobColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knobColor = value;
}
constexpr ::UnityEngine::Color& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_knobColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knobColor0;
}
constexpr ::UnityEngine::Color const& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_knobColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knobColor0;
}
constexpr void HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_set_knobColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knobColor0 = value;
}
constexpr ::UnityEngine::Color& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_knobColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knobColor1;
}
constexpr ::UnityEngine::Color const& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_knobColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knobColor1;
}
constexpr void HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_set_knobColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knobColor1 = value;
}
constexpr ::UnityEngine::Color& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_backgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor;
}
constexpr ::UnityEngine::Color const& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_backgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor;
}
constexpr void HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_set_backgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundColor = value;
}
constexpr ::UnityEngine::Color& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_backgroundColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor0;
}
constexpr ::UnityEngine::Color const& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_backgroundColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor0;
}
constexpr void HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_set_backgroundColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundColor0 = value;
}
constexpr ::UnityEngine::Color& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_backgroundColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor1;
}
constexpr ::UnityEngine::Color const& HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_get_backgroundColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor1;
}
constexpr void HMUI::__AnimatedSwitchView__ColorBlock::__cordl_internal_set_backgroundColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundColor1 = value;
}
inline ::HMUI::__AnimatedSwitchView__ColorBlock* HMUI::__AnimatedSwitchView__ColorBlock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__AnimatedSwitchView__ColorBlock*>());
}
inline void HMUI::__AnimatedSwitchView__ColorBlock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__ColorBlock*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__AnimatedSwitchView__ColorBlock::__AnimatedSwitchView__ColorBlock() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__AnimatedSwitchView__AnimationState::__AnimatedSwitchView__AnimationState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__AnimatedSwitchView__AnimationState::__AnimatedSwitchView__AnimationState() {}
constexpr ::HMUI::__AnimatedSwitchView__AnimationState HMUI::__AnimatedSwitchView__AnimationState::Idle{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__AnimatedSwitchView__AnimationState HMUI::__AnimatedSwitchView__AnimationState::SwitchingOn{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__AnimatedSwitchView__AnimationState HMUI::__AnimatedSwitchView__AnimationState::SwitchingOff{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::__AnimatedSwitchView__AnimationState HMUI::__AnimatedSwitchView__AnimationState::HighlightingOn{ static_cast<int32_t>(0x4) };
constexpr ::HMUI::__AnimatedSwitchView__AnimationState HMUI::__AnimatedSwitchView__AnimationState::HighlightingOff{ static_cast<int32_t>(0x8) };
constexpr ::HMUI::__AnimatedSwitchView__AnimationState HMUI::__AnimatedSwitchView__AnimationState::DisablingOn{ static_cast<int32_t>(0x10) };
constexpr ::HMUI::__AnimatedSwitchView__AnimationState HMUI::__AnimatedSwitchView__AnimationState::DisablingOff{ static_cast<int32_t>(0x20) };
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView__GetColorDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__AnimatedSwitchView__GetColorDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::HMUI::__AnimatedSwitchView__GetColorDelegate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x253fde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView__GetColorDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::__AnimatedSwitchView__GetColorDelegate::*)(::HMUI::__AnimatedSwitchView__ColorBlock*)>(
    &::HMUI::__AnimatedSwitchView__GetColorDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25401bc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView__GetColorDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::HMUI::__AnimatedSwitchView__GetColorDelegate::*)(::HMUI::__AnimatedSwitchView__ColorBlock*, ::System::AsyncCallback*, ::System::Object*)>(
        &::HMUI::__AnimatedSwitchView__GetColorDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25401d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView__GetColorDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::__AnimatedSwitchView__GetColorDelegate::*)(::System::IAsyncResult*)>(
    &::HMUI::__AnimatedSwitchView__GetColorDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25401f0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* HMUI::__AnimatedSwitchView__GetColorDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__AnimatedSwitchView__GetColorDelegate*>(object, method));
}
inline void HMUI::__AnimatedSwitchView__GetColorDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Color HMUI::__AnimatedSwitchView__GetColorDelegate::Invoke(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorBlock);
}
inline ::System::IAsyncResult* HMUI::__AnimatedSwitchView__GetColorDelegate::BeginInvoke(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock, ::System::AsyncCallback* callback,
                                                                                         ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, colorBlock, callback, object);
}
inline ::UnityEngine::Color HMUI::__AnimatedSwitchView__GetColorDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::HMUI::__AnimatedSwitchView__GetColorDelegate::__AnimatedSwitchView__GetColorDelegate() {}
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__AnimatedSwitchView____c::*)()>(&::HMUI::__AnimatedSwitchView____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2540280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView____c._LerpColors_b__31_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::__AnimatedSwitchView____c::*)(::HMUI::__AnimatedSwitchView__ColorBlock*)>(
    &::HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2540288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView____c._LerpColors_b__31_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::__AnimatedSwitchView____c::*)(::HMUI::__AnimatedSwitchView__ColorBlock*)>(
    &::HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25402a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView____c._LerpColors_b__31_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::__AnimatedSwitchView____c::*)(::HMUI::__AnimatedSwitchView__ColorBlock*)>(
    &::HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25402c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView____c._LerpColors_b__31_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::__AnimatedSwitchView____c::*)(::HMUI::__AnimatedSwitchView__ColorBlock*)>(
    &::HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25402dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView____c._LerpColors_b__31_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::__AnimatedSwitchView____c::*)(::HMUI::__AnimatedSwitchView__ColorBlock*)>(
    &::HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_4)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25402f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__AnimatedSwitchView____c._LerpColors_b__31_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::__AnimatedSwitchView____c::*)(::HMUI::__AnimatedSwitchView__ColorBlock*)>(
    &::HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_5)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2540314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_5", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
    return ___internal_method;
  }
};
inline void HMUI::__AnimatedSwitchView____c::setStaticF___9(::HMUI::__AnimatedSwitchView____c* value) {
  ::cordl_internals::setStaticField<::HMUI::__AnimatedSwitchView____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>(
      std::forward<::HMUI::__AnimatedSwitchView____c*>(value));
}
inline ::HMUI::__AnimatedSwitchView____c* HMUI::__AnimatedSwitchView____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HMUI::__AnimatedSwitchView____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>();
}
inline void HMUI::__AnimatedSwitchView____c::setStaticF___9__31_0(::HMUI::__AnimatedSwitchView__GetColorDelegate* value) {
  ::cordl_internals::setStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>(
      std::forward<::HMUI::__AnimatedSwitchView__GetColorDelegate*>(value));
}
inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* HMUI::__AnimatedSwitchView____c::getStaticF___9__31_0() {
  return ::cordl_internals::getStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>();
}
inline void HMUI::__AnimatedSwitchView____c::setStaticF___9__31_1(::HMUI::__AnimatedSwitchView__GetColorDelegate* value) {
  ::cordl_internals::setStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>(
      std::forward<::HMUI::__AnimatedSwitchView__GetColorDelegate*>(value));
}
inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* HMUI::__AnimatedSwitchView____c::getStaticF___9__31_1() {
  return ::cordl_internals::getStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>();
}
inline void HMUI::__AnimatedSwitchView____c::setStaticF___9__31_2(::HMUI::__AnimatedSwitchView__GetColorDelegate* value) {
  ::cordl_internals::setStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>(
      std::forward<::HMUI::__AnimatedSwitchView__GetColorDelegate*>(value));
}
inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* HMUI::__AnimatedSwitchView____c::getStaticF___9__31_2() {
  return ::cordl_internals::getStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>();
}
inline void HMUI::__AnimatedSwitchView____c::setStaticF___9__31_3(::HMUI::__AnimatedSwitchView__GetColorDelegate* value) {
  ::cordl_internals::setStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>(
      std::forward<::HMUI::__AnimatedSwitchView__GetColorDelegate*>(value));
}
inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* HMUI::__AnimatedSwitchView____c::getStaticF___9__31_3() {
  return ::cordl_internals::getStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>();
}
inline void HMUI::__AnimatedSwitchView____c::setStaticF___9__31_4(::HMUI::__AnimatedSwitchView__GetColorDelegate* value) {
  ::cordl_internals::setStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>(
      std::forward<::HMUI::__AnimatedSwitchView__GetColorDelegate*>(value));
}
inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* HMUI::__AnimatedSwitchView____c::getStaticF___9__31_4() {
  return ::cordl_internals::getStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>();
}
inline void HMUI::__AnimatedSwitchView____c::setStaticF___9__31_5(::HMUI::__AnimatedSwitchView__GetColorDelegate* value) {
  ::cordl_internals::setStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>(
      std::forward<::HMUI::__AnimatedSwitchView__GetColorDelegate*>(value));
}
inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* HMUI::__AnimatedSwitchView____c::getStaticF___9__31_5() {
  return ::cordl_internals::getStaticField<::HMUI::__AnimatedSwitchView__GetColorDelegate*, "<>9__31_5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get>();
}
inline ::HMUI::__AnimatedSwitchView____c* HMUI::__AnimatedSwitchView____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__AnimatedSwitchView____c*>());
}
inline void HMUI::__AnimatedSwitchView____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Color HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_0(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorBlock);
}
inline ::UnityEngine::Color HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_1(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorBlock);
}
inline ::UnityEngine::Color HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_2(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorBlock);
}
inline ::UnityEngine::Color HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_3(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_3", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorBlock);
}
inline ::UnityEngine::Color HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_4(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_4", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorBlock);
}
inline ::UnityEngine::Color HMUI::__AnimatedSwitchView____c::_LerpColors_b__31_5(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__AnimatedSwitchView____c*>::get(), "<LerpColors>b__31_5", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__ColorBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorBlock);
}
// Ctor Parameters []
constexpr ::HMUI::__AnimatedSwitchView____c::__AnimatedSwitchView____c() {}
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)()>(&::HMUI::AnimatedSwitchView::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x253f234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)()>(&::HMUI::AnimatedSwitchView::Start)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x253f284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)()>(&::HMUI::AnimatedSwitchView::OnDestroy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x253f97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)()>(&::HMUI::AnimatedSwitchView::Update)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x253facc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.LerpPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)(float_t)>(&::HMUI::AnimatedSwitchView::LerpPosition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x253f918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "LerpPosition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.LerpStretch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)(float_t)>(&::HMUI::AnimatedSwitchView::LerpStretch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x253fd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "LerpStretch", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.LerpColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)(float_t, float_t, float_t)>(&::HMUI::AnimatedSwitchView::LerpColors)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x253f424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "LerpColors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.LerpColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Color (::HMUI::AnimatedSwitchView::*)(float_t, float_t, float_t, ::HMUI::__AnimatedSwitchView__GetColorDelegate*)>(&::HMUI::AnimatedSwitchView::LerpColor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x253ff10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "LerpColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.HandleOnValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)(bool)>(&::HMUI::AnimatedSwitchView::HandleOnValueChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25400fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "HandleOnValueChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView.HandleStateDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)(::HMUI::__ToggleWithCallbacks__SelectionState)>(
    &::HMUI::AnimatedSwitchView::HandleStateDidChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2540124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "HandleStateDidChange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ToggleWithCallbacks__SelectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::AnimatedSwitchView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::AnimatedSwitchView::*)()>(&::HMUI::AnimatedSwitchView::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2540184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::AnimatedSwitchView::__cordl_internal_get__knobRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____knobRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::AnimatedSwitchView::__cordl_internal_get__knobRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____knobRectTransform;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__knobRectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____knobRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ImageView>& HMUI::AnimatedSwitchView::__cordl_internal_get__backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& HMUI::AnimatedSwitchView::__cordl_internal_get__backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__backgroundImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ImageView>& HMUI::AnimatedSwitchView::__cordl_internal_get__knobImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____knobImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& HMUI::AnimatedSwitchView::__cordl_internal_get__knobImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____knobImage;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__knobImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____knobImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::AnimatedSwitchView::__cordl_internal_get__onText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::AnimatedSwitchView::__cordl_internal_get__onText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onText;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__onText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::AnimatedSwitchView::__cordl_internal_get__offText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::AnimatedSwitchView::__cordl_internal_get__offText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offText;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__offText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____offText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__switchAnimationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switchAnimationSmooth;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__switchAnimationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switchAnimationSmooth;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__switchAnimationSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____switchAnimationSmooth = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__disableAnimationDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableAnimationDuration;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__disableAnimationDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableAnimationDuration;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__disableAnimationDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableAnimationDuration = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__highlightAnimationDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightAnimationDuration;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__highlightAnimationDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightAnimationDuration;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__highlightAnimationDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightAnimationDuration = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__horizontalStretchAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____horizontalStretchAmount;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__horizontalStretchAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____horizontalStretchAmount;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__horizontalStretchAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____horizontalStretchAmount = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__verticalStretchAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalStretchAmount;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__verticalStretchAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalStretchAmount;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__verticalStretchAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalStretchAmount = value;
}
constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& HMUI::AnimatedSwitchView::__cordl_internal_get__onColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColors;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& HMUI::AnimatedSwitchView::__cordl_internal_get__onColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColors;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__onColors(::HMUI::__AnimatedSwitchView__ColorBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& HMUI::AnimatedSwitchView::__cordl_internal_get__offColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offColors;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& HMUI::AnimatedSwitchView::__cordl_internal_get__offColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offColors;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__offColors(::HMUI::__AnimatedSwitchView__ColorBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____offColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& HMUI::AnimatedSwitchView::__cordl_internal_get__onHighlightedColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onHighlightedColors;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& HMUI::AnimatedSwitchView::__cordl_internal_get__onHighlightedColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onHighlightedColors;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__onHighlightedColors(::HMUI::__AnimatedSwitchView__ColorBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onHighlightedColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& HMUI::AnimatedSwitchView::__cordl_internal_get__offHighlightedColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offHighlightedColors;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& HMUI::AnimatedSwitchView::__cordl_internal_get__offHighlightedColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offHighlightedColors;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__offHighlightedColors(::HMUI::__AnimatedSwitchView__ColorBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____offHighlightedColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& HMUI::AnimatedSwitchView::__cordl_internal_get__disabledColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledColors;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& HMUI::AnimatedSwitchView::__cordl_internal_get__disabledColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledColors;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__disabledColors(::HMUI::__AnimatedSwitchView__ColorBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__AnimatedSwitchView__AnimationState& HMUI::AnimatedSwitchView::__cordl_internal_get__animationState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationState;
}
constexpr ::HMUI::__AnimatedSwitchView__AnimationState const& HMUI::AnimatedSwitchView::__cordl_internal_get__animationState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationState;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__animationState(::HMUI::__AnimatedSwitchView__AnimationState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationState = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__switchAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switchAmount;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__switchAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switchAmount;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__switchAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____switchAmount = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__highlightAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightAmount;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__highlightAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightAmount;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__highlightAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightAmount = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__disabledAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAmount;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__disabledAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAmount;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__disabledAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledAmount = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__originalKnobWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalKnobWidth;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__originalKnobWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalKnobWidth;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__originalKnobWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalKnobWidth = value;
}
constexpr float_t& HMUI::AnimatedSwitchView::__cordl_internal_get__originalKnobHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalKnobHeight;
}
constexpr float_t const& HMUI::AnimatedSwitchView::__cordl_internal_get__originalKnobHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalKnobHeight;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__originalKnobHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalKnobHeight = value;
}
constexpr ::UnityW<::HMUI::ToggleWithCallbacks>& HMUI::AnimatedSwitchView::__cordl_internal_get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr ::UnityW<::HMUI::ToggleWithCallbacks> const& HMUI::AnimatedSwitchView::__cordl_internal_get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr void HMUI::AnimatedSwitchView::__cordl_internal_set__toggle(::UnityW<::HMUI::ToggleWithCallbacks> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::AnimatedSwitchView::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::AnimatedSwitchView::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::AnimatedSwitchView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::AnimatedSwitchView::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::AnimatedSwitchView::LerpPosition(float_t switchAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "LerpPosition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, switchAmount);
}
inline void HMUI::AnimatedSwitchView::LerpStretch(float_t switchAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "LerpStretch", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, switchAmount);
}
inline void HMUI::AnimatedSwitchView::LerpColors(float_t switchAmount, float_t highlightAmount, float_t disabledAmount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "LerpColors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, switchAmount, highlightAmount, disabledAmount);
}
inline ::UnityEngine::Color HMUI::AnimatedSwitchView::LerpColor(float_t switchAmount, float_t highlightAmount, float_t disabledAmount,
                                                                ::HMUI::__AnimatedSwitchView__GetColorDelegate* getColorDelegate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "LerpColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__AnimatedSwitchView__GetColorDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, switchAmount, highlightAmount, disabledAmount, getColorDelegate);
}
inline void HMUI::AnimatedSwitchView::HandleOnValueChanged(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "HandleOnValueChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::AnimatedSwitchView::HandleStateDidChange(::HMUI::__ToggleWithCallbacks__SelectionState selectionState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), "HandleStateDidChange", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ToggleWithCallbacks__SelectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectionState);
}
inline ::HMUI::AnimatedSwitchView* HMUI::AnimatedSwitchView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::AnimatedSwitchView*>());
}
inline void HMUI::AnimatedSwitchView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::AnimatedSwitchView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::AnimatedSwitchView::AnimatedSwitchView() {}
