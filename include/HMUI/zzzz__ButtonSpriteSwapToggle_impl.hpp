#pragma once
// IWYU pragma private; include "HMUI/ButtonSpriteSwapToggle.hpp"
#include "HMUI/zzzz__ButtonSpriteSwap_impl.hpp"
#include "HMUI/zzzz__ButtonSpriteSwapToggle_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.get_isToggled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::get_isToggled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f446c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), "get_isToggled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.set_isToggled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)(bool)>(&::HMUI::ButtonSpriteSwapToggle::set_isToggled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x39f4474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), "set_isToggled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x39f44b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.HandleButtonSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)(::HMUI::NoTransitionsButton_SelectionState)>(
    &::HMUI::ButtonSpriteSwapToggle::HandleButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x39f44e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39f4630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__resetToggleOnEnable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resetToggleOnEnable;
}
constexpr bool const& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__resetToggleOnEnable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resetToggleOnEnable;
}
constexpr void HMUI::ButtonSpriteSwapToggle::__cordl_internal_set__resetToggleOnEnable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resetToggleOnEnable = value;
}
constexpr bool& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__ignoreHighlight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreHighlight;
}
constexpr bool const& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__ignoreHighlight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreHighlight;
}
constexpr void HMUI::ButtonSpriteSwapToggle::__cordl_internal_set__ignoreHighlight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreHighlight = value;
}
constexpr bool& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__isToggled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isToggled;
}
constexpr bool const& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__isToggled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isToggled;
}
constexpr void HMUI::ButtonSpriteSwapToggle::__cordl_internal_set__isToggled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isToggled = value;
}
inline bool HMUI::ButtonSpriteSwapToggle::get_isToggled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), "get_isToggled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwapToggle::set_isToggled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), "set_isToggled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::ButtonSpriteSwapToggle::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwapToggle::HandleButtonSelectionStateDidChange(::HMUI::NoTransitionsButton_SelectionState state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void HMUI::ButtonSpriteSwapToggle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ButtonSpriteSwapToggle* HMUI::ButtonSpriteSwapToggle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ButtonSpriteSwapToggle*>());
}
// Ctor Parameters []
constexpr ::HMUI::ButtonSpriteSwapToggle::ButtonSpriteSwapToggle() {}
