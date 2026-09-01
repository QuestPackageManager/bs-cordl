#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UI\DebugUIHandlerContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerContainer_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6802568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0._IsDirectChild_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::_IsDirectChild_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6802570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>(),
                                                                                           { "<IsDirectChild>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
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
  this->___widget = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::_IsDirectChild_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>(),
                                                                                         { "<IsDirectChild>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0* UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerContainer___c__DisplayClass3_0::DebugUIHandlerContainer___c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer.GetFirstItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetFirstItem)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x67fefdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(), { "GetFirstItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer.GetLastItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetLastItem)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x67fece4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(), { "GetLastItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer.IsDirectChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerContainer::IsDirectChild)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67febdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(),
                                                                                           { "IsDirectChild", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer.GetActiveChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>* (
    ::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetActiveChildren)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x680215c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(), { "GetActiveChildren", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerContainer::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerContainer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x680256c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(), { ".ctor", {}, {} })));
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
  this->___contentHolder = value;
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetFirstItem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(), { "GetFirstItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetLastItem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(), { "GetLastItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerContainer::IsDirectChild(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(),
                                                                                         { "IsDirectChild", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, widget);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>* UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetActiveChildren() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(), { "GetActiveChildren", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerContainer* UnityEngine::Rendering::UI::DebugUIHandlerContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerContainer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerContainer::DebugUIHandlerContainer() {}
