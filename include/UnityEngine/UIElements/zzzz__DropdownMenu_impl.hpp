#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DropdownMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::*)()>(
    &::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d94158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0._AppendAction_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DropdownMenuAction_Status (::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::*)(
    ::UnityEngine::UIElements::DropdownMenuAction*)>(&::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::_AppendAction_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d94830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0*>(),
                                                                                           { "<AppendAction>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::DropdownMenuAction_Status& UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::UnityEngine::UIElements::DropdownMenuAction_Status const& UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::__cordl_internal_set_status(::UnityEngine::UIElements::DropdownMenuAction_Status value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
inline void UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DropdownMenuAction_Status UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::_AppendAction_b__0(::UnityEngine::UIElements::DropdownMenuAction* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0*>(),
                                                                                         { "<AppendAction>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DropdownMenuAction_Status>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0* UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0::DropdownMenu___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::*)()>(
    &::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d943f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0._AppendSeparator_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::*)(::UnityEngine::UIElements::DropdownMenuItem*)>(
    &::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::_AppendSeparator_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6d94838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0*>(),
                                                                                           { "<AppendSeparator>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::__cordl_internal_get_subMenuPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subMenuPath;
}
constexpr ::StringW const& UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::__cordl_internal_get_subMenuPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subMenuPath;
}
constexpr void UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::__cordl_internal_set_subMenuPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subMenuPath = value;
}
inline void UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::_AppendSeparator_b__0(::UnityEngine::UIElements::DropdownMenuItem* item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0*>(),
                                                                                         { "<AppendSeparator>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0* UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0::DropdownMenu___c__DisplayClass13_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DropdownMenu::*)()>(&::UnityEngine::UIElements::DropdownMenu::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6d93ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.MenuItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* (::UnityEngine::UIElements::DropdownMenu::*)()>(
    &::UnityEngine::UIElements::DropdownMenu::MenuItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d93f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "MenuItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.AppendAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(
    ::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*,
    ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>*, ::System::Object*)>(
    &::UnityEngine::UIElements::DropdownMenu::AppendAction)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6d93f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(),
                                                { "AppendAction",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>(),
                                                    ::i2c::type_of<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>*>(),
                                                    ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.AppendAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(
    ::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*, ::UnityEngine::UIElements::DropdownMenuAction_Status)>(&::UnityEngine::UIElements::DropdownMenu::AppendAction)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6d94024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(),
                                                             { "AppendAction",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction_Status>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.AppendSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW)>(&::UnityEngine::UIElements::DropdownMenu::AppendSeparator)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6d9415c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "AppendSeparator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.InsertSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW, int32_t)>(&::UnityEngine::UIElements::DropdownMenu::InsertSeparator)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6d943f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "InsertSeparator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.PrepareForDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::DropdownMenu::PrepareForDisplay)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6d9452c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "PrepareForDisplay", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)()>(&::UnityEngine::UIElements::DropdownMenu::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d947bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_MenuItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuItems;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* const& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_MenuItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuItems;
}
constexpr void UnityEngine::UIElements::DropdownMenu::__cordl_internal_set_m_MenuItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MenuItems = value;
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_DropdownMenuEventInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DropdownMenuEventInfo;
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo* const& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_DropdownMenuEventInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DropdownMenuEventInfo;
}
constexpr void UnityEngine::UIElements::DropdownMenu::__cordl_internal_set_m_DropdownMenuEventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DropdownMenuEventInfo = value;
}
inline int32_t UnityEngine::UIElements::DropdownMenu::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* UnityEngine::UIElements::DropdownMenu::MenuItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "MenuItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::DropdownMenu::AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* action,
                                                    ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>* actionStatusCallback,
                                                    ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(),
                                              { "AppendAction",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>(),
                                                  ::i2c::type_of<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>*>(),
                                                  ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionName, action, actionStatusCallback, userData);
}
inline void UnityEngine::UIElements::DropdownMenu::AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* action,
                                                                ::UnityEngine::UIElements::DropdownMenuAction_Status status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(),
                                                           { "AppendAction",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction_Status>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionName, action, status);
}
inline void UnityEngine::UIElements::DropdownMenu::AppendSeparator(::StringW subMenuPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "AppendSeparator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subMenuPath);
}
inline void UnityEngine::UIElements::DropdownMenu::InsertSeparator(::StringW subMenuPath, int32_t atIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "InsertSeparator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subMenuPath, atIndex);
}
inline void UnityEngine::UIElements::DropdownMenu::PrepareForDisplay(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { "PrepareForDisplay", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::DropdownMenu::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenu*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DropdownMenu* UnityEngine::UIElements::DropdownMenu::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DropdownMenu*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenu::DropdownMenu() {}
