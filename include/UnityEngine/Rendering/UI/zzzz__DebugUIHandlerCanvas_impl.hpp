#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerCanvas.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerCanvas_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerCanvas_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerPanel_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIPrefabBundle_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67fbc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c._Rebuild_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_Rebuild_b__12_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67fbc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(),
                                                                                           { "<Rebuild>b__12_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Widget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c._ActivatePanel_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::*)(::UnityEngine::Rendering::UI::DebugUIHandlerPanel*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_ActivatePanel_b__15_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67fbc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(),
                                                             { "<ActivatePanel>b__15_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerPanel*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::setStaticF___9(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*, "<>9", ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(
      std::forward<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(value));
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c* UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*, "<>9", ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::setStaticF___9__12_0(::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, bool>*, "<>9__12_0", ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(
      std::forward<::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, bool>* UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, bool>*, "<>9__12_0", ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::setStaticF___9__15_0(::System::Action_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>*, "<>9__15_0", ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>*, "<>9__15_0", ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_Rebuild_b__12_0(::UnityEngine::Rendering::DebugUI_Widget* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(),
                                                                                         { "<Rebuild>b__12_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Widget*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_ActivatePanel_b__15_0(::UnityEngine::Rendering::UI::DebugUIHandlerPanel* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>(),
                                                                                         { "<ActivatePanel>b__15_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c* UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::DebugUIHandlerCanvas___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67fb514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0._GetWidgetFromPath_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::_GetWidgetFromPath_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67fbcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0*>(),
                                                             { "<GetWidgetFromPath>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::__cordl_internal_get_queryPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queryPath;
}
constexpr ::StringW const& UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::__cordl_internal_get_queryPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queryPath;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::__cordl_internal_set_queryPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queryPath = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::_GetWidgetFromPath_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0*>(),
                                                           { "<GetWidgetFromPath>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, w);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0* UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0::DebugUIHandlerCanvas___c__DisplayClass14_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::OnEnable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x67f99c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Update)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x67f9b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.RequestHierarchyReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::RequestHierarchyReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67fa33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "RequestHierarchyReset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.ResetAllHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ResetAllHierarchy)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x67f9c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "ResetAllHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Rebuild)> {
  constexpr static std::size_t size = 0x9cc;
  constexpr static std::size_t addrs = 0x67fa348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "Rebuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.Traverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)(
    ::UnityEngine::Rendering::DebugUI_IContainer*, ::UnityEngine::Transform*, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::by_ref<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Traverse)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x67fad44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(),
                            { "Traverse",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.GetWidgetFromPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)(::StringW)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::GetWidgetFromPath)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67fb3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "GetWidgetFromPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.ActivatePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)(int32_t, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ActivatePanel)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x67fb1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(),
                                                             { "ActivatePanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.ChangeSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, bool)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ChangeSelection)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x67fb570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(),
                                                             { "ChangeSelection", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.SelectPreviousItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectPreviousItem)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67fb888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "SelectPreviousItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.SelectNextPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectNextPanel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67fb950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "SelectNextPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.SelectPreviousPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectPreviousPanel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67fb9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "SelectPreviousPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.SelectNextItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectNextItem)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67fb7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "SelectNextItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.ChangeSelectionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)(float_t)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ChangeSelectionValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67fba58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "ChangeSelectionValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.ActivateSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ActivateSelection)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67fbb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "ActivateSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.HandleInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::HandleInput)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x67f9f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "HandleInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas.SetScrollTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SetScrollTarget)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67fb6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(),
                                                                                           { "SetScrollTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67fbbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_DebugTreeState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugTreeState;
}
constexpr int32_t const& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_DebugTreeState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugTreeState;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_set_m_DebugTreeState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugTreeState = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Transform>>*& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_PrefabsMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrefabsMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Transform>>* const&
UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_PrefabsMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrefabsMap;
}
constexpr void
UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_set_m_PrefabsMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrefabsMap = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_panelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelPrefab;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_panelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelPrefab;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_set_panelPrefab(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panelPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>*& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_prefabs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabs;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>* const& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_prefabs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabs;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_set_prefabs(::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefabs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>*& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_UIPanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIPanels;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* const&
UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_UIPanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIPanels;
}
constexpr void
UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_set_m_UIPanels(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UIPanels = value;
}
constexpr int32_t& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_SelectedPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedPanel;
}
constexpr int32_t const& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_SelectedPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedPanel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_set_m_SelectedPanel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedPanel = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_SelectedWidget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedWidget;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> const& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_SelectedWidget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedWidget;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_set_m_SelectedWidget(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedWidget = value;
}
constexpr ::StringW& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_CurrentQueryPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentQueryPath;
}
constexpr ::StringW const& UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_get_m_CurrentQueryPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentQueryPath;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::__cordl_internal_set_m_CurrentQueryPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentQueryPath = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::RequestHierarchyReset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "RequestHierarchyReset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ResetAllHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "ResetAllHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "Rebuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Traverse(::UnityEngine::Rendering::DebugUI_IContainer* container, ::UnityEngine::Transform* parentTransform,
                                                                       ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* parentUIHandler,
                                                                       ::by_ref<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*> selectedHandler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(),
                          { "Traverse",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, parentTransform, parentUIHandler, selectedHandler);
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerCanvas::GetWidgetFromPath(::StringW queryPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "GetWidgetFromPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>(this, ___internal_method, queryPath);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ActivatePanel(int32_t index, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* selectedWidget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(),
                                                           { "ActivatePanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, selectedWidget);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, bool fromNext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(),
                                                           { "ChangeSelection", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget, fromNext);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectPreviousItem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "SelectPreviousItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectNextPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "SelectNextPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectPreviousPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "SelectPreviousPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectNextItem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "SelectNextItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ChangeSelectionValue(float_t multiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "ChangeSelectionValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplier);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ActivateSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "ActivateSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::HandleInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { "HandleInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(),
                                                                                         { "SetScrollTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerCanvas::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* UnityEngine::Rendering::UI::DebugUIHandlerCanvas::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::DebugUIHandlerCanvas() {}
