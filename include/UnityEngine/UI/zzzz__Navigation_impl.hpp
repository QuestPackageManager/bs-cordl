#pragma once
#include "UnityEngine/UI/zzzz__Navigation_impl.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__Navigation__Mode::__Navigation__Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__Navigation__Mode::__Navigation__Mode() {}
constexpr ::UnityEngine::UI::__Navigation__Mode UnityEngine::UI::__Navigation__Mode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__Navigation__Mode UnityEngine::UI::__Navigation__Mode::Horizontal{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::__Navigation__Mode UnityEngine::UI::__Navigation__Mode::Vertical{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::__Navigation__Mode UnityEngine::UI::__Navigation__Mode::Automatic{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UI::__Navigation__Mode UnityEngine::UI::__Navigation__Mode::Explicit{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__Navigation__Mode (::UnityEngine::UI::Navigation::*)()>(
    &::UnityEngine::UI::Navigation::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_mode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::__Navigation__Mode)>(
    &::UnityEngine::UI::Navigation::set_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_mode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Navigation__Mode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_wrapAround
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_wrapAround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_wrapAround",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_wrapAround
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(bool)>(&::UnityEngine::UI::Navigation::set_wrapAround)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d9b42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_wrapAround",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Navigation::*)()>(
    &::UnityEngine::UI::Navigation::get_selectOnUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_selectOnUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(
    &::UnityEngine::UI::Navigation::set_selectOnUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_selectOnUp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Navigation::*)()>(
    &::UnityEngine::UI::Navigation::get_selectOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_selectOnDown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(
    &::UnityEngine::UI::Navigation::set_selectOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_selectOnDown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Navigation::*)()>(
    &::UnityEngine::UI::Navigation::get_selectOnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_selectOnLeft",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(
    &::UnityEngine::UI::Navigation::set_selectOnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_selectOnLeft", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Navigation::*)()>(
    &::UnityEngine::UI::Navigation::get_selectOnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_selectOnRight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(
    &::UnityEngine::UI::Navigation::set_selectOnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9b470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_selectOnRight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_defaultNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Navigation (*)()>(&::UnityEngine::UI::Navigation::get_defaultNavigation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d9b478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_defaultNavigation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Navigation)>(&::UnityEngine::UI::Navigation::Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2d9b498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Navigation>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
constexpr UnityEngine::UI::Navigation::operator ::System::IEquatable_1<::UnityEngine::UI::Navigation>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UI::Navigation>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
constexpr ::System::IEquatable_1<::UnityEngine::UI::Navigation>* UnityEngine::UI::Navigation::i___System__IEquatable_1___UnityEngine__UI__Navigation_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UI::Navigation>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::UnityEngine::UI::__Navigation__Mode UnityEngine::UI::Navigation::get_mode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_mode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__Navigation__Mode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_mode(::UnityEngine::UI::__Navigation__Mode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_mode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Navigation__Mode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Navigation::get_wrapAround() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_wrapAround",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_wrapAround(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_wrapAround", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Navigation::get_selectOnUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_selectOnUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnUp(::UnityEngine::UI::Selectable* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_selectOnUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Navigation::get_selectOnDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_selectOnDown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnDown(::UnityEngine::UI::Selectable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_selectOnDown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Navigation::get_selectOnLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_selectOnLeft",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnLeft(::UnityEngine::UI::Selectable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_selectOnLeft", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Navigation::get_selectOnRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_selectOnRight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnRight(::UnityEngine::UI::Selectable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "set_selectOnRight", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Navigation UnityEngine::UI::Navigation::get_defaultNavigation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "get_defaultNavigation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Navigation, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::UI::Navigation::Equals(::UnityEngine::UI::Navigation other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Navigation>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::UI::__Navigation__Mode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WrapAround", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_SelectOnUp", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_SelectOnDown", ty:
// "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_SelectOnLeft", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_SelectOnRight", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UI::Navigation::Navigation(::UnityEngine::UI::__Navigation__Mode m_Mode, bool m_WrapAround, ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnUp,
                                                    ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnDown, ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnLeft,
                                                    ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnRight) noexcept {
  this->m_Mode = m_Mode;
  this->m_WrapAround = m_WrapAround;
  this->m_SelectOnUp = m_SelectOnUp;
  this->m_SelectOnDown = m_SelectOnDown;
  this->m_SelectOnLeft = m_SelectOnLeft;
  this->m_SelectOnRight = m_SelectOnRight;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Navigation::Navigation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
