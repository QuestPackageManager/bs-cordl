#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode::__DefaultEventSystem__UpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode::__DefaultEventSystem__UpdateMode() {}
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode UnityEngine::UIElements::__DefaultEventSystem__UpdateMode::Always{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode UnityEngine::UIElements::__DefaultEventSystem__UpdateMode::IgnoreIfAppNotFocused{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetButtonDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)(::StringW)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetAxisRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)(::StringW)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_touchCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_touchCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)(int32_t)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetTouch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_mousePresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_mousePresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 4));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::__DefaultEventSystem__IInput::GetButtonDown(::StringW button) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__IInput::GetAxisRaw(::StringW axis) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, axis);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__IInput::get_touchCount() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::__DefaultEventSystem__IInput::GetTouch(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__IInput::get_mousePresent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetButtonDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)(::StringW)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__Input::GetButtonDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x354bb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(), "GetButtonDown",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetAxisRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)(::StringW)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__Input::GetAxisRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x354bba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(), "GetAxisRaw",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_touchCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem__Input::get_touchCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354bbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                                                                               "get_touchCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)(int32_t)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__Input::GetTouch)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x354bbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(), "GetTouch",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_mousePresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem__Input::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354bbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                                                                               "get_mousePresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem__Input::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354a474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
constexpr UnityEngine::UIElements::__DefaultEventSystem__Input::operator ::UnityEngine::UIElements::__DefaultEventSystem__IInput*() noexcept {
  return static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput* UnityEngine::UIElements::__DefaultEventSystem__Input::i___UnityEngine__UIElements____DefaultEventSystem__IInput() noexcept {
  return static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>(static_cast<void*>(this));
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__Input::GetButtonDown(::StringW button) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(), "GetButtonDown",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__Input::GetAxisRaw(::StringW axis) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(), "GetAxisRaw",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, axis);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__Input::get_touchCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                                                                             "get_touchCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::__DefaultEventSystem__Input::GetTouch(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(), "GetTouch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__Input::get_mousePresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                                                                             "get_mousePresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__Input* UnityEngine::UIElements::__DefaultEventSystem__Input::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DefaultEventSystem__Input*>());
}
inline void UnityEngine::UIElements::__DefaultEventSystem__Input::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__Input::__DefaultEventSystem__Input() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetButtonDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)(::StringW)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354bbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(), "GetButtonDown",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetAxisRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)(::StringW)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354bc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(), "GetAxisRaw",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_touchCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_touchCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354bc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                                                                               "get_touchCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)(int32_t)>(
    &::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetTouch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x354bc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(), "GetTouch",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_mousePresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354bc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                                                                               "get_mousePresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem__NoInput::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354a47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
constexpr UnityEngine::UIElements::__DefaultEventSystem__NoInput::operator ::UnityEngine::UIElements::__DefaultEventSystem__IInput*() noexcept {
  return static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput* UnityEngine::UIElements::__DefaultEventSystem__NoInput::i___UnityEngine__UIElements____DefaultEventSystem__IInput() noexcept {
  return static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>(static_cast<void*>(this));
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetButtonDown(::StringW button) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(), "GetButtonDown",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetAxisRaw(::StringW axis) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(), "GetAxisRaw",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, axis);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_touchCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                                                                             "get_touchCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetTouch(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(), "GetTouch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_mousePresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                                                                             "get_mousePresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__NoInput* UnityEngine::UIElements::__DefaultEventSystem__NoInput::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>());
}
inline void UnityEngine::UIElements::__DefaultEventSystem__NoInput::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__NoInput::__DefaultEventSystem__NoInput() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem____c::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354bc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendIMGUIEvents_b__23_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__23_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x354bc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendIMGUIEvents>b__23_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendIMGUIEvents_b__23_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*)>(
    &::UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__23_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x354bd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendIMGUIEvents>b__23_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendIMGUIEvents_b__23_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*)>(
    &::UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__23_2)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x354bd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendIMGUIEvents>b__23_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendInputEvents_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__24_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x354be40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendInputEvents>b__24_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendInputEvents_b__24_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__24_1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x354be60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendInputEvents>b__24_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendInputEvents_b__24_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__24_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x354bec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendInputEvents>b__24_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ProcessTouchEvents_b__30_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch)>(
        &::UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessTouchEvents_b__30_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x354bf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<ProcessTouchEvents>b__30_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c.__cctor_b__41_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem____c::*)()>(
    &::UnityEngine::UIElements::__DefaultEventSystem____c::__cctor_b__41_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354bff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                                                                               "<.cctor>b__41_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9(::UnityEngine::UIElements::__DefaultEventSystem____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__DefaultEventSystem____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(
      std::forward<::UnityEngine::UIElements::__DefaultEventSystem____c*>(value));
}
inline ::UnityEngine::UIElements::__DefaultEventSystem____c* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__DefaultEventSystem____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__23_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*, "<>9__23_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*, "<>9__23_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__23_1(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*,
                                           "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__23_2(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__23_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__23_2() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*,
                                           "<>9__23_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__24_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*, "<>9__24_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*, "<>9__24_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__24_1(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*, "<>9__24_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__24_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*, "<>9__24_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__24_2(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*, "<>9__24_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__24_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>*, "<>9__24_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__30_0(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>*, "<>9__30_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__30_0() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>*, "<>9__30_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline ::UnityEngine::UIElements::__DefaultEventSystem____c* UnityEngine::UIElements::__DefaultEventSystem____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DefaultEventSystem____c*>());
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__23_0(::UnityEngine::UIElements::DefaultEventSystem* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendIMGUIEvents>b__23_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__23_1(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                                                                          ::UnityEngine::UIElements::DefaultEventSystem* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendIMGUIEvents>b__23_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__23_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                                                                          ::UnityEngine::UIElements::DefaultEventSystem* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendIMGUIEvents>b__23_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__24_0(::UnityEngine::UIElements::DefaultEventSystem* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendInputEvents>b__24_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__24_1(::UnityEngine::UIElements::DefaultEventSystem* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendInputEvents>b__24_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__24_2(::UnityEngine::UIElements::DefaultEventSystem* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<SendInputEvents>b__24_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessTouchEvents_b__30_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                                                                             ::UnityEngine::Touch _touch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(), "<ProcessTouchEvents>b__30_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, _touch);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem____c::__cctor_b__41_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                                                                             "<.cctor>b__41_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem____c::__DefaultEventSystem____c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_isAppFocused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::get_isAppFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354a2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "get_isAppFocused", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_input
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::get_input)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x354a2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "get_input", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetDefaultInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::GetDefaultInput)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x354a2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "GetDefaultInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ShouldIgnoreEventsOnAppNotFocused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::ShouldIgnoreEventsOnAppNotFocused)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x354a484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "ShouldIgnoreEventsOnAppNotFocused",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_focusedPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseRuntimePanel* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::get_focusedPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354a4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "get_focusedPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.set_focusedPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::UIElements::DefaultEventSystem::set_focusedPanel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x354a4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "set_focusedPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode)>(
    &::UnityEngine::UIElements::DefaultEventSystem::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x354a57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.SendIMGUIEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::SendIMGUIEvents)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x354aa38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "SendIMGUIEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.SendInputEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::SendInputEvents)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x354aef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "SendInputEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.UpdateFocusedPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::UIElements::DefaultEventSystem::UpdateFocusedPanel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x354b528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "UpdateFocusedPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.MakeTouchEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::Touch, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::DefaultEventSystem::MakeTouchEvent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x354b59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "MakeTouchEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ProcessTouchEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::ProcessTouchEvents)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x354a5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "ProcessTouchEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetRawMoveVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::GetRawMoveVector)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x354b72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "GetRawMoveVector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ShouldSendMoveFromInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::ShouldSendMoveFromInput)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x354b270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                               "ShouldSendMoveFromInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetLocalScreenPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Event*, ByRef<::System::Nullable_1<int32_t>>)>(
    &::UnityEngine::UIElements::DefaultEventSystem::GetLocalScreenPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x354b254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "GetLocalScreenPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x354b9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Input;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__DefaultEventSystem__IInput*> const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Input;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_Input(::UnityEngine::UIElements::__DefaultEventSystem__IInput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_HorizontalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalAxis;
}
constexpr ::StringW const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_HorizontalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalAxis;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_HorizontalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HorizontalAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_VerticalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalAxis;
}
constexpr ::StringW const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_VerticalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalAxis;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_VerticalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VerticalAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SubmitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitButton;
}
constexpr ::StringW const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SubmitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitButton;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_SubmitButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SubmitButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_CancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelButton;
}
constexpr ::StringW const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_CancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelButton;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_CancelButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CancelButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_InputActionsPerSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionsPerSecond;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_InputActionsPerSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionsPerSecond;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_InputActionsPerSecond(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputActionsPerSecond = value;
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_RepeatDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepeatDelay;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_RepeatDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepeatDelay;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_RepeatDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RepeatDelay = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SendingTouchEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SendingTouchEvents;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SendingTouchEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SendingTouchEvents;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_SendingTouchEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SendingTouchEvents = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_Event(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_FocusedPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusedPanel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_FocusedPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusedPanel;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_FocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FocusedPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_ConsecutiveMoveCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_ConsecutiveMoveCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_ConsecutiveMoveCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConsecutiveMoveCount = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMoveVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMoveVector;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMoveVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMoveVector;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMoveVector = value;
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PrevActionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevActionTime;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PrevActionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevActionTime;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_PrevActionTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevActionTime = value;
}
inline void UnityEngine::UIElements::DefaultEventSystem::setStaticF_IsEditorRemoteConnected(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "IsEditorRemoteConnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::UIElements::DefaultEventSystem::getStaticF_IsEditorRemoteConnected() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "IsEditorRemoteConnected",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get>();
}
inline bool UnityEngine::UIElements::DefaultEventSystem::get_isAppFocused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                             "get_isAppFocused", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__IInput* UnityEngine::UIElements::DefaultEventSystem::get_input() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "get_input",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DefaultEventSystem__IInput*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__IInput* UnityEngine::UIElements::DefaultEventSystem::GetDefaultInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                             "GetDefaultInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DefaultEventSystem__IInput*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem::ShouldIgnoreEventsOnAppNotFocused() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "ShouldIgnoreEventsOnAppNotFocused",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseRuntimePanel* UnityEngine::UIElements::DefaultEventSystem::get_focusedPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                             "get_focusedPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseRuntimePanel*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::set_focusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "set_focusedPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param updateMode: ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode (default: static_cast<int32_t>(0x0))
inline void UnityEngine::UIElements::DefaultEventSystem::Update(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode updateMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateMode);
}
inline void UnityEngine::UIElements::DefaultEventSystem::SendIMGUIEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                             "SendIMGUIEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::SendInputEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                             "SendInputEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TArg> inline void UnityEngine::UIElements::DefaultEventSystem::SendFocusBasedEvent(::System::Func_2<TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "SendFocusBasedEvent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TArg, ::UnityEngine::UIElements::EventBase*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evtFactory, arg);
}
/// @param deselectIfNoTarget: bool (default: false)
template <typename TArg>
inline void
UnityEngine::UIElements::DefaultEventSystem::SendPositionBasedEvent(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 delta, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay,
                                                                    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg,
                                                                    bool deselectIfNoTarget) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "SendPositionBasedEvent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get() },
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mousePosition, delta, pointerId, targetDisplay, evtFactory, arg, deselectIfNoTarget);
}
inline void UnityEngine::UIElements::DefaultEventSystem::UpdateFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* runtimePanel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "UpdateFocusedPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runtimePanel);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::DefaultEventSystem::MakeTouchEvent(::UnityEngine::Touch touch, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "MakeTouchEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(nullptr, ___internal_method, touch, modifiers);
}
inline bool UnityEngine::UIElements::DefaultEventSystem::ProcessTouchEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                             "ProcessTouchEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::DefaultEventSystem::GetRawMoveVector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                             "GetRawMoveVector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem::ShouldSendMoveFromInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                                                                             "ShouldSendMoveFromInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::DefaultEventSystem::GetLocalScreenPosition(::UnityEngine::Event* evt, ByRef<::System::Nullable_1<int32_t>> targetDisplay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), "GetLocalScreenPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, evt, targetDisplay);
}
inline ::UnityEngine::UIElements::DefaultEventSystem* UnityEngine::UIElements::DefaultEventSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DefaultEventSystem*>());
}
inline void UnityEngine::UIElements::DefaultEventSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultEventSystem::DefaultEventSystem() {}
