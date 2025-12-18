#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerButton.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerButton_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerButton.SetWidget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerButton::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerButton::SetWidget)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6647f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerButton.OnSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerButton::*)(
    bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(&::UnityEngine::Rendering::UI::DebugUIHandlerButton::OnSelection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6647fc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerButton.OnDeselection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerButton::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerButton::OnDeselection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6648000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerButton.OnAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerButton::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerButton::OnAction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x664802c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerButton._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerButton::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerButton::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6648058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerButton::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerButton::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerButton::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::DebugUI_Button*& UnityEngine::Rendering::UI::DebugUIHandlerButton::__cordl_internal_get_m_Field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr ::UnityEngine::Rendering::DebugUI_Button* const& UnityEngine::Rendering::UI::DebugUIHandlerButton::__cordl_internal_get_m_Field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerButton::__cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Field)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerButton::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widget);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerButton::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fromNext, previous);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerButton::OnDeselection() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerButton::OnAction() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerButton* UnityEngine::Rendering::UI::DebugUIHandlerButton::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::DebugUIHandlerButton*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerButton::DebugUIHandlerButton() {}
