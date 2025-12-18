#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerObject.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerObject_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObject.SetWidget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObject::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObject::SetWidget)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x664d614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObject.OnSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerObject::*)(
    bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(&::UnityEngine::Rendering::UI::DebugUIHandlerObject::OnSelection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x664d6ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObject.OnDeselection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObject::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObject::OnDeselection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x664d744;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObject::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObject::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x664d794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_get_valueLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_get_valueLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObject::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widget);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerObject::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fromNext, previous);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObject::OnDeselection() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerObject* UnityEngine::Rendering::UI::DebugUIHandlerObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerObject::DebugUIHandlerObject() {}
