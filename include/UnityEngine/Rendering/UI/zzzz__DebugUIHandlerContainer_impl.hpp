#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerContainer_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65e3874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0._IsDirectChild_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::*)(
    ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(&::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::_IsDirectChild_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65e387c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>::get(), "<IsDirectChild>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>& UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::__cordl_internal_get_widget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___widget;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> const& UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::__cordl_internal_get_widget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___widget;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::__cordl_internal_set_widget(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___widget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::_IsDirectChild_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>::get(), "<IsDirectChild>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0* UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::DebugUIHandlerContainer___c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer.GetFirstItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (
    ::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetFirstItem)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65e02e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(),
                                                                               "GetFirstItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer.GetLastItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (
    ::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetLastItem)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65dfff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(),
                                                                               "GetLastItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer.IsDirectChild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerContainer::IsDirectChild)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x65dfee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(), "IsDirectChild", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer.GetActiveChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>* (
    ::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetActiveChildren)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x65e3468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(),
                                                                               "GetActiveChildren", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerContainer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65e3878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::Rendering::UI::DebugUIHandlerContainer::__cordl_internal_get_contentHolder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentHolder;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::Rendering::UI::DebugUIHandlerContainer::__cordl_internal_get_contentHolder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentHolder;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerContainer::__cordl_internal_set_contentHolder(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentHolder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetFirstItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(),
                                                                             "GetFirstItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetLastItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(),
                                                                             "GetLastItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerContainer::IsDirectChild(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(), "IsDirectChild", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, widget);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>* UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetActiveChildren() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(),
                                                                             "GetActiveChildren", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerContainer* UnityEngine::Rendering::UI::DebugUIHandlerContainer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerContainer::DebugUIHandlerContainer() {}
