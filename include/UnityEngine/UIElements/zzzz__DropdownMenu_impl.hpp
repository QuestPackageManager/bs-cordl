#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.MenuItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* (
    ::UnityEngine::UIElements::DropdownMenu::*)()>(&::UnityEngine::UIElements::DropdownMenu::MenuItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e259ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(), "MenuItems",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.AppendAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(
    ::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*,
    ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>*, ::System::Object*)>(
    &::UnityEngine::UIElements::DropdownMenu::AppendAction)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2e259f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(), "AppendAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.InsertSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW, int32_t)>(
    &::UnityEngine::UIElements::DropdownMenu::InsertSeparator)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2e25af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(), "InsertSeparator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.PrepareForDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::DropdownMenu::PrepareForDisplay)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2e25c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(), "PrepareForDisplay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_MenuItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*> const&
UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_MenuItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuItems;
}
constexpr void UnityEngine::UIElements::DropdownMenu::__cordl_internal_set_m_MenuItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MenuItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_DropdownMenuEventInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DropdownMenuEventInfo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownMenuEventInfo*> const& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_DropdownMenuEventInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DropdownMenuEventInfo;
}
constexpr void UnityEngine::UIElements::DropdownMenu::__cordl_internal_set_m_DropdownMenuEventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DropdownMenuEventInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* UnityEngine::UIElements::DropdownMenu::MenuItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(), "MenuItems",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*, false>(this, ___internal_method);
}
/// @param userData: ::System::Object* (default: nullptr)
inline void
UnityEngine::UIElements::DropdownMenu::AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* action,
                                                    ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>* actionStatusCallback,
                                                    ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(), "AppendAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionName, action, actionStatusCallback, userData);
}
inline void UnityEngine::UIElements::DropdownMenu::InsertSeparator(::StringW subMenuPath, int32_t atIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(), "InsertSeparator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subMenuPath, atIndex);
}
inline void UnityEngine::UIElements::DropdownMenu::PrepareForDisplay(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(), "PrepareForDisplay", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenu::DropdownMenu() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
