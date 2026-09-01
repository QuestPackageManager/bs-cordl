#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BaseRuntimePanel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel___c::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dbb584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel___c.__cctor_b__52_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::BaseRuntimePanel___c::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseRuntimePanel___c::__cctor_b__52_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dbb588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel___c*>(), { "<.cctor>b__52_0", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BaseRuntimePanel___c::setStaticF___9(::UnityEngine::UIElements::BaseRuntimePanel___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BaseRuntimePanel___c*, "<>9", ::UnityEngine::UIElements::BaseRuntimePanel___c*>(
      std::forward<::UnityEngine::UIElements::BaseRuntimePanel___c*>(value));
}
inline ::UnityEngine::UIElements::BaseRuntimePanel___c* UnityEngine::UIElements::BaseRuntimePanel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BaseRuntimePanel___c*, "<>9", ::UnityEngine::UIElements::BaseRuntimePanel___c*>();
}
inline void UnityEngine::UIElements::BaseRuntimePanel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::BaseRuntimePanel___c::__cctor_b__52_0(::UnityEngine::Vector2 p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel___c*>(), { "<.cctor>b__52_0", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, p);
}
inline ::UnityEngine::UIElements::BaseRuntimePanel___c* UnityEngine::UIElements::BaseRuntimePanel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseRuntimePanel___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseRuntimePanel___c::BaseRuntimePanel___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_selectableGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_selectableGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dba80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_selectableGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_selectableGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::set_selectableGameObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6dba814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_selectableGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_sortingPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::get_sortingPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbab94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_sortingPriority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_sortingPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(float_t)>(&::UnityEngine::UIElements::BaseRuntimePanel::set_sortingPriority)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6dad9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_sortingPriority", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.add_destroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::System::Action*)>(&::UnityEngine::UIElements::BaseRuntimePanel::add_destroyed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6dbab9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "add_destroyed", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.remove_destroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::System::Action*)>(&::UnityEngine::UIElements::BaseRuntimePanel::remove_destroyed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6dbac48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "remove_destroyed", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::UnityEngine::ScriptableObject*, ::UnityEngine::UIElements::EventDispatcher*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6dadf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<::UnityEngine::UIElements::EventDispatcher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(bool)>(&::UnityEngine::UIElements::BaseRuntimePanel::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6dbacf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.add_drawsInCamerasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::add_drawsInCamerasChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6dbad40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "add_drawsInCamerasChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.remove_drawsInCamerasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::remove_drawsInCamerasChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6dbadec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "remove_drawsInCamerasChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.InvokeDrawsInCamerasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::InvokeDrawsInCamerasChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6dbae98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "InvokeDrawsInCamerasChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_drawsInCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::get_drawsInCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6daf998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_drawsInCameras", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_drawsInCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(bool)>(&::UnityEngine::UIElements::BaseRuntimePanel::set_drawsInCameras)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6dad024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_drawsInCameras", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_pixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::get_pixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dafe20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_pixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_pixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(float_t)>(&::UnityEngine::UIElements::BaseRuntimePanel::set_pixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dad054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_pixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_targetDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::get_targetDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbaeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_targetDisplay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_targetDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(int32_t)>(&::UnityEngine::UIElements::BaseRuntimePanel::set_targetDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbaebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_targetDisplay", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_screenRenderingWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::get_screenRenderingWidth)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dbaec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_screenRenderingWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_screenRenderingHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::get_screenRenderingHeight)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dbaf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_screenRenderingHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6dae100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.getScreenRenderingHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::UIElements::BaseRuntimePanel::getScreenRenderingHeight)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6dad22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "getScreenRenderingHeight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.getScreenRenderingWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::UIElements::BaseRuntimePanel::getScreenRenderingWidth)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6dad150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "getScreenRenderingWidth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(&::UnityEngine::UIElements::BaseRuntimePanel::Render)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6dbaf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_screenToPanelSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_screenToPanelSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbb19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_screenToPanelSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_screenToPanelSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::set_screenToPanelSpace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6dad0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                             { "set_screenToPanelSpace", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.ScreenToPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::BaseRuntimePanel::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::ScreenToPanel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6dbb1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "ScreenToPanel", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.ScreenToPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseRuntimePanel::*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, bool)>(&::UnityEngine::UIElements::BaseRuntimePanel::ScreenToPanel)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6dbb1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                             { "ScreenToPanel",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.AssignPanelToComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::AssignPanelToComponents)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6dba8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                                                           { "AssignPanelToComponents", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.PointerLeavesPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::PointerLeavesPanel)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6dbb2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                                                           { "PointerLeavesPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.PointerEntersPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::PointerEntersPanel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6dbb3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                                                           { "PointerEntersPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_SelectableGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectableGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_SelectableGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectableGameObject;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_SelectableGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectableGameObject = value;
}
constexpr int32_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_RuntimePanelCreationIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimePanelCreationIndex;
}
constexpr int32_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_RuntimePanelCreationIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimePanelCreationIndex;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_RuntimePanelCreationIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RuntimePanelCreationIndex = value;
}
constexpr float_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_SortingPriority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingPriority;
}
constexpr float_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_SortingPriority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingPriority;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_SortingPriority(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortingPriority = value;
}
constexpr int32_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_resolvedSortingIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolvedSortingIndex;
}
constexpr int32_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_resolvedSortingIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolvedSortingIndex;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_resolvedSortingIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resolvedSortingIndex = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_destroyed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destroyed;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_destroyed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destroyed;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_destroyed(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destroyed = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_drawsInCamerasChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawsInCamerasChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_drawsInCamerasChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawsInCamerasChanged;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_drawsInCamerasChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawsInCamerasChanged = value;
}
constexpr bool& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_DrawsInCameras() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawsInCameras;
}
constexpr bool const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_DrawsInCameras() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawsInCameras;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_DrawsInCameras(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawsInCameras = value;
}
constexpr float_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_PixelsPerUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PixelsPerUnit;
}
constexpr float_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_PixelsPerUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PixelsPerUnit;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_PixelsPerUnit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PixelsPerUnit = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_targetTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_targetTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTexture;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_targetTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetTexture = value;
}
constexpr int32_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_worldSpaceLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceLayer;
}
constexpr int32_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_worldSpaceLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceLayer;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_worldSpaceLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldSpaceLayer = value;
}
constexpr int32_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get__targetDisplay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetDisplay_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get__targetDisplay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetDisplay_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set__targetDisplay_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetDisplay_k__BackingField = value;
}
constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_ScreenToPanelSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToPanelSpace;
}
constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_ScreenToPanelSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToPanelSpace;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_ScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenToPanelSpace = value;
}
inline void UnityEngine::UIElements::BaseRuntimePanel::setStaticF_s_CurrentRuntimePanelCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CurrentRuntimePanelCounter", ::UnityEngine::UIElements::BaseRuntimePanel*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::getStaticF_s_CurrentRuntimePanelCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_CurrentRuntimePanelCounter", ::UnityEngine::UIElements::BaseRuntimePanel*>();
}
inline void UnityEngine::UIElements::BaseRuntimePanel::setStaticF_DefaultScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*, "DefaultScreenToPanelSpace", ::UnityEngine::UIElements::BaseRuntimePanel*>(
      std::forward<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* UnityEngine::UIElements::BaseRuntimePanel::getStaticF_DefaultScreenToPanelSpace() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*, "DefaultScreenToPanelSpace", ::UnityEngine::UIElements::BaseRuntimePanel*>();
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UIElements::BaseRuntimePanel::get_selectableGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_selectableGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_selectableGameObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_selectableGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseRuntimePanel::get_sortingPriority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_sortingPriority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_sortingPriority(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_sortingPriority", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::add_destroyed(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "add_destroyed", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::remove_destroyed(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "remove_destroyed", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<::UnityEngine::UIElements::EventDispatcher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownerObject, dispatcher);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::add_drawsInCamerasChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "add_drawsInCamerasChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::remove_drawsInCamerasChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "remove_drawsInCamerasChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::InvokeDrawsInCamerasChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "InvokeDrawsInCamerasChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseRuntimePanel::get_drawsInCameras() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_drawsInCameras", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_drawsInCameras(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_drawsInCameras", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseRuntimePanel::get_pixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_pixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_pixelsPerUnit(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_pixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::get_targetDisplay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_targetDisplay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_targetDisplay(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "set_targetDisplay", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::get_screenRenderingWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_screenRenderingWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::get_screenRenderingHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_screenRenderingHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::getScreenRenderingHeight(int32_t display) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "getScreenRenderingHeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, display);
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::getScreenRenderingWidth(int32_t display) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "getScreenRenderingWidth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, display);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::Render() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* UnityEngine::UIElements::BaseRuntimePanel::get_screenToPanelSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "get_screenToPanelSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_screenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                           { "set_screenToPanelSpace", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::BaseRuntimePanel::ScreenToPanel(::UnityEngine::Vector2 screen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), { "ScreenToPanel", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, screen);
}
inline bool UnityEngine::UIElements::BaseRuntimePanel::ScreenToPanel(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Vector2 screenDelta, ::by_ref<::UnityEngine::Vector2> panelPosition,
                                                                     ::by_ref<::UnityEngine::Vector2> panelDelta, bool allowOutside) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                           { "ScreenToPanel",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, screenPosition, screenDelta, panelPosition, panelDelta, allowOutside);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::AssignPanelToComponents(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                                                         { "AssignPanelToComponents", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::PointerLeavesPanel(int32_t pointerId, ::UnityEngine::Vector2 position) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                                                         { "PointerLeavesPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerId, position);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::PointerEntersPanel(int32_t pointerId, ::UnityEngine::Vector2 position) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseRuntimePanel*>(),
                                                                                         { "PointerEntersPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerId, position);
}
inline ::UnityEngine::UIElements::BaseRuntimePanel* UnityEngine::UIElements::BaseRuntimePanel::New_ctor(::UnityEngine::ScriptableObject* ownerObject,
                                                                                                        ::UnityEngine::UIElements::EventDispatcher* dispatcher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseRuntimePanel*>(ownerObject, dispatcher));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseRuntimePanel::BaseRuntimePanel() {}
