#pragma once
// IWYU pragma private; include "UnityEngine/Canvas.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AdditionalCanvasShaderChannels_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderMode_def.hpp"
#include "UnityEngine/zzzz__StandaloneRenderResize_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Canvas_WillRenderCanvases._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas_WillRenderCanvases::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Canvas_WillRenderCanvases::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x7285a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas_WillRenderCanvases.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas_WillRenderCanvases::*)()>(&::UnityEngine::Canvas_WillRenderCanvases::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7285ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(), { ::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Canvas_WillRenderCanvases::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Canvas_WillRenderCanvases::Invoke() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Canvas_WillRenderCanvases* UnityEngine::Canvas_WillRenderCanvases::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Canvas_WillRenderCanvases*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Canvas_WillRenderCanvases::Canvas_WillRenderCanvases() {}
//  Writing Method size for method: ::UnityEngine::Canvas.add_preWillRenderCanvases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas_WillRenderCanvases*)>(&::UnityEngine::Canvas::add_preWillRenderCanvases)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7282b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "add_preWillRenderCanvases", {}, { ::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.remove_preWillRenderCanvases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas_WillRenderCanvases*)>(&::UnityEngine::Canvas::remove_preWillRenderCanvases)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7282c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "remove_preWillRenderCanvases", {}, { ::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.add_willRenderCanvases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas_WillRenderCanvases*)>(&::UnityEngine::Canvas::add_willRenderCanvases)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x7282d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "add_willRenderCanvases", {}, { ::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.remove_willRenderCanvases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas_WillRenderCanvases*)>(&::UnityEngine::Canvas::remove_willRenderCanvases)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x7282dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "remove_willRenderCanvases", {}, { ::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderMode (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_renderMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7282ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_renderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(::UnityEngine::RenderMode)>(&::UnityEngine::Canvas::set_renderMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7282f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_renderMode", {}, { ::i2c::type_of<::UnityEngine::RenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_isRootCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_isRootCanvas)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x728304c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_isRootCanvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_pixelRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_pixelRect)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7283108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_pixelRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_scaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_scaleFactor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x72831e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_scaleFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_scaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(float_t)>(&::UnityEngine::Canvas::set_scaleFactor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x72832a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_scaleFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_referencePixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7283380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_referencePixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_referencePixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(float_t)>(&::UnityEngine::Canvas::set_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x728343c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_referencePixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_overridePixelPerfect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_overridePixelPerfect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7283518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_overridePixelPerfect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_overridePixelPerfect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(bool)>(&::UnityEngine::Canvas::set_overridePixelPerfect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x72835d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_overridePixelPerfect", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_vertexColorAlwaysGammaSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_vertexColorAlwaysGammaSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x72836a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_vertexColorAlwaysGammaSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_vertexColorAlwaysGammaSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(bool)>(&::UnityEngine::Canvas::set_vertexColorAlwaysGammaSpace)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7283764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_vertexColorAlwaysGammaSpace", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_pixelPerfect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_pixelPerfect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7283838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_pixelPerfect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_pixelPerfect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(bool)>(&::UnityEngine::Canvas::set_pixelPerfect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x72838f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_pixelPerfect", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_planeDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_planeDistance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x72839c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_planeDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_planeDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(float_t)>(&::UnityEngine::Canvas::set_planeDistance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7283a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_planeDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_renderOrder)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7283b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_overrideSorting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_overrideSorting)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7283c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_overrideSorting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_overrideSorting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(bool)>(&::UnityEngine::Canvas::set_overrideSorting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7283cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_overrideSorting", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_sortingOrder)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7283dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(int32_t)>(&::UnityEngine::Canvas::set_sortingOrder)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7283e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingOrder", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_targetDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_targetDisplay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7283f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_targetDisplay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_targetDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(int32_t)>(&::UnityEngine::Canvas::set_targetDisplay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7283ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_targetDisplay", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingLayerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_sortingLayerID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x72840cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingLayerID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingLayerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(int32_t)>(&::UnityEngine::Canvas::set_sortingLayerID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7284188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingLayerID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_cachedSortingLayerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_cachedSortingLayerValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x728425c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_cachedSortingLayerValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_additionalShaderChannels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdditionalCanvasShaderChannels (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_additionalShaderChannels)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7284318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_additionalShaderChannels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_additionalShaderChannels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(::UnityEngine::AdditionalCanvasShaderChannels)>(&::UnityEngine::Canvas::set_additionalShaderChannels)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x72843d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_additionalShaderChannels", {}, { ::i2c::type_of<::UnityEngine::AdditionalCanvasShaderChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingLayerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_sortingLayerName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x72844a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingLayerName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingLayerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(::StringW)>(&::UnityEngine::Canvas::set_sortingLayerName)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x7284620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingLayerName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_rootCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_rootCanvas)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x72847cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_rootCanvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderingDisplaySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_renderingDisplaySize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7284958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderingDisplaySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_updateRectTransformForStandalone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::StandaloneRenderResize (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_updateRectTransformForStandalone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7284a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_updateRectTransformForStandalone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_updateRectTransformForStandalone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(::UnityEngine::StandaloneRenderResize)>(&::UnityEngine::Canvas::set_updateRectTransformForStandalone)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7284af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_updateRectTransformForStandalone", {}, { ::i2c::type_of<::UnityEngine::StandaloneRenderResize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_externBeginRenderOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<int32_t>* (*)()>(&::UnityEngine::Canvas::get_externBeginRenderOverlays)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7284bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_externBeginRenderOverlays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_externBeginRenderOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<int32_t>*)>(&::UnityEngine::Canvas::set_externBeginRenderOverlays)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x7284c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_externBeginRenderOverlays", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_externRenderOverlaysBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<int32_t, int32_t>* (*)()>(&::UnityEngine::Canvas::get_externRenderOverlaysBefore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7284c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_externRenderOverlaysBefore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_externRenderOverlaysBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<int32_t, int32_t>*)>(&::UnityEngine::Canvas::set_externRenderOverlaysBefore)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x7284cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_externRenderOverlaysBefore", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_externEndRenderOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<int32_t>* (*)()>(&::UnityEngine::Canvas::get_externEndRenderOverlays)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7284cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_externEndRenderOverlays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_externEndRenderOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<int32_t>*)>(&::UnityEngine::Canvas::set_externEndRenderOverlays)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x7284d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_externEndRenderOverlays", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.SetExternalCanvasEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Canvas::SetExternalCanvasEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7284d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "SetExternalCanvasEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_worldCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_worldCamera)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x7284dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_worldCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_worldCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(::UnityEngine::Camera*)>(&::UnityEngine::Canvas::set_worldCamera)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x7284f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_worldCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_normalizedSortingGridSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_normalizedSortingGridSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7285064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_normalizedSortingGridSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_normalizedSortingGridSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(float_t)>(&::UnityEngine::Canvas::set_normalizedSortingGridSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7285120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_normalizedSortingGridSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingGridNormalizedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_sortingGridNormalizedSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x72851fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingGridNormalizedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingGridNormalizedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(int32_t)>(&::UnityEngine::Canvas::set_sortingGridNormalizedSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x72852b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingGridNormalizedSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetDefaultCanvasTextMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Canvas::GetDefaultCanvasTextMaterial)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x728538c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetDefaultCanvasTextMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetDefaultCanvasMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Canvas::GetDefaultCanvasMaterial)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x72854c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetDefaultCanvasMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetETC1SupportedCanvasMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Canvas::GetETC1SupportedCanvasMaterial)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x7285604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetETC1SupportedCanvasMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.UpdateCanvasRectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(bool)>(&::UnityEngine::Canvas::UpdateCanvasRectTransform)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7285740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "UpdateCanvasRectTransform", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.ForceUpdateCanvases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Canvas::ForceUpdateCanvases)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7285814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "ForceUpdateCanvases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.SendPreWillRenderCanvases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Canvas::SendPreWillRenderCanvases)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x7285824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "SendPreWillRenderCanvases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.SendWillRenderCanvases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Canvas::SendWillRenderCanvases)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x728588c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "SendWillRenderCanvases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.BeginRenderExtraOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Canvas::BeginRenderExtraOverlays)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x72858f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "BeginRenderExtraOverlays", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.RenderExtraOverlaysBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Canvas::RenderExtraOverlaysBefore)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x7285964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "RenderExtraOverlaysBefore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.EndRenderExtraOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Canvas::EndRenderExtraOverlays)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x72859e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "EndRenderExtraOverlays", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7285a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderMode (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_renderMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7282f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_renderMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::RenderMode)>(&::UnityEngine::Canvas::set_renderMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7283008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_isRootCanvas_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_isRootCanvas_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x72830cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_isRootCanvas_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_pixelRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Canvas::get_pixelRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x72831a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_pixelRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_scaleFactor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_scaleFactor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_scaleFactor_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_scaleFactor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Canvas::set_scaleFactor_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7283334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_scaleFactor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_referencePixelsPerUnit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_referencePixelsPerUnit_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_referencePixelsPerUnit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_referencePixelsPerUnit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Canvas::set_referencePixelsPerUnit_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x72834cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_referencePixelsPerUnit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_overridePixelPerfect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_overridePixelPerfect_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_overridePixelPerfect_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_overridePixelPerfect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Canvas::set_overridePixelPerfect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7283664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_overridePixelPerfect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_vertexColorAlwaysGammaSpace_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_vertexColorAlwaysGammaSpace_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_vertexColorAlwaysGammaSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_vertexColorAlwaysGammaSpace_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Canvas::set_vertexColorAlwaysGammaSpace_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x72837f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_vertexColorAlwaysGammaSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_pixelPerfect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_pixelPerfect_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x72838b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_pixelPerfect_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_pixelPerfect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Canvas::set_pixelPerfect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7283984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_pixelPerfect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_planeDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_planeDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_planeDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_planeDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Canvas::set_planeDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7283b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_planeDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderOrder_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_renderOrder_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderOrder_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_overrideSorting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_overrideSorting_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_overrideSorting_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_overrideSorting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Canvas::set_overrideSorting_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7283d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_overrideSorting_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingOrder_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_sortingOrder_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingOrder_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingOrder_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Canvas::set_sortingOrder_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7283ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingOrder_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_targetDisplay_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_targetDisplay_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7283fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_targetDisplay_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_targetDisplay_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Canvas::set_targetDisplay_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7284088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_targetDisplay_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingLayerID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_sortingLayerID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x728414c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingLayerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingLayerID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Canvas::set_sortingLayerID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7284218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingLayerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_cachedSortingLayerValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_cachedSortingLayerValue_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x72842dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_cachedSortingLayerValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_additionalShaderChannels_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdditionalCanvasShaderChannels (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_additionalShaderChannels_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7284398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_additionalShaderChannels_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_additionalShaderChannels_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AdditionalCanvasShaderChannels)>(&::UnityEngine::Canvas::set_additionalShaderChannels_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7284464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                         { "set_additionalShaderChannels_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AdditionalCanvasShaderChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingLayerName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Canvas::get_sortingLayerName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x72845dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                         { "get_sortingLayerName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingLayerName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Canvas::set_sortingLayerName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7284788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                         { "set_sortingLayerName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_rootCanvas_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_rootCanvas_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x728491c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_rootCanvas_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderingDisplaySize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Canvas::get_renderingDisplaySize_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x72849f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                                             { "get_renderingDisplaySize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_updateRectTransformForStandalone_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::StandaloneRenderResize (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_updateRectTransformForStandalone_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7284ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_updateRectTransformForStandalone_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_updateRectTransformForStandalone_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::StandaloneRenderResize)>(&::UnityEngine::Canvas::set_updateRectTransformForStandalone_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7284b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                         { "set_updateRectTransformForStandalone_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::StandaloneRenderResize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_worldCamera_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_worldCamera_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7284f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_worldCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_worldCamera_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Canvas::set_worldCamera_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7285020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_worldCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_normalizedSortingGridSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_normalizedSortingGridSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x72850e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_normalizedSortingGridSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_normalizedSortingGridSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Canvas::set_normalizedSortingGridSize_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x72851b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_normalizedSortingGridSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingGridNormalizedSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_sortingGridNormalizedSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x728527c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingGridNormalizedSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingGridNormalizedSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Canvas::set_sortingGridNormalizedSize_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7285348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingGridNormalizedSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetDefaultCanvasTextMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Canvas::GetDefaultCanvasTextMaterial_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x72854a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetDefaultCanvasTextMaterial_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetDefaultCanvasMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Canvas::GetDefaultCanvasMaterial_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x72855dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetDefaultCanvasMaterial_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetETC1SupportedCanvasMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Canvas::GetETC1SupportedCanvasMaterial_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x7285718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetETC1SupportedCanvasMaterial_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.UpdateCanvasRectTransform_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Canvas::UpdateCanvasRectTransform_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x72857d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "UpdateCanvasRectTransform_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Canvas::setStaticF_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Canvas_WillRenderCanvases*, "preWillRenderCanvases", ::UnityEngine::Canvas*>(std::forward<::UnityEngine::Canvas_WillRenderCanvases*>(value));
}
inline ::UnityEngine::Canvas_WillRenderCanvases* UnityEngine::Canvas::getStaticF_preWillRenderCanvases() {
  return ::cordl_internals::getStaticField<::UnityEngine::Canvas_WillRenderCanvases*, "preWillRenderCanvases", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::setStaticF_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Canvas_WillRenderCanvases*, "willRenderCanvases", ::UnityEngine::Canvas*>(std::forward<::UnityEngine::Canvas_WillRenderCanvases*>(value));
}
inline ::UnityEngine::Canvas_WillRenderCanvases* UnityEngine::Canvas::getStaticF_willRenderCanvases() {
  return ::cordl_internals::getStaticField<::UnityEngine::Canvas_WillRenderCanvases*, "willRenderCanvases", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::setStaticF__externBeginRenderOverlays_k__BackingField(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<externBeginRenderOverlays>k__BackingField", ::UnityEngine::Canvas*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* UnityEngine::Canvas::getStaticF__externBeginRenderOverlays_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<externBeginRenderOverlays>k__BackingField", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::setStaticF__externRenderOverlaysBefore_k__BackingField(::System::Action_2<int32_t, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<int32_t, int32_t>*, "<externRenderOverlaysBefore>k__BackingField", ::UnityEngine::Canvas*>(
      std::forward<::System::Action_2<int32_t, int32_t>*>(value));
}
inline ::System::Action_2<int32_t, int32_t>* UnityEngine::Canvas::getStaticF__externRenderOverlaysBefore_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Action_2<int32_t, int32_t>*, "<externRenderOverlaysBefore>k__BackingField", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::setStaticF__externEndRenderOverlays_k__BackingField(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<externEndRenderOverlays>k__BackingField", ::UnityEngine::Canvas*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* UnityEngine::Canvas::getStaticF__externEndRenderOverlays_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<externEndRenderOverlays>k__BackingField", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::add_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "add_preWillRenderCanvases", {}, { ::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Canvas::remove_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "remove_preWillRenderCanvases", {}, { ::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Canvas::add_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "add_willRenderCanvases", {}, { ::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Canvas::remove_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "remove_willRenderCanvases", {}, { ::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::RenderMode UnityEngine::Canvas::get_renderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderMode>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_renderMode(::UnityEngine::RenderMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_renderMode", {}, { ::i2c::type_of<::UnityEngine::RenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Canvas::get_isRootCanvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_isRootCanvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::Canvas::get_pixelRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_pixelRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline float_t UnityEngine::Canvas::get_scaleFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_scaleFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_scaleFactor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_scaleFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Canvas::get_referencePixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_referencePixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_referencePixelsPerUnit(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_referencePixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Canvas::get_overridePixelPerfect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_overridePixelPerfect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_overridePixelPerfect(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_overridePixelPerfect", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Canvas::get_vertexColorAlwaysGammaSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_vertexColorAlwaysGammaSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_vertexColorAlwaysGammaSpace(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_vertexColorAlwaysGammaSpace", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Canvas::get_pixelPerfect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_pixelPerfect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_pixelPerfect(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_pixelPerfect", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Canvas::get_planeDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_planeDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_planeDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_planeDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Canvas::get_renderOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Canvas::get_overrideSorting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_overrideSorting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_overrideSorting(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_overrideSorting", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Canvas::get_sortingOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_sortingOrder(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingOrder", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Canvas::get_targetDisplay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_targetDisplay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_targetDisplay(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_targetDisplay", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Canvas::get_sortingLayerID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingLayerID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_sortingLayerID(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingLayerID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Canvas::get_cachedSortingLayerValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_cachedSortingLayerValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::AdditionalCanvasShaderChannels UnityEngine::Canvas::get_additionalShaderChannels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_additionalShaderChannels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdditionalCanvasShaderChannels>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_additionalShaderChannels", {}, { ::i2c::type_of<::UnityEngine::AdditionalCanvasShaderChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Canvas::get_sortingLayerName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingLayerName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_sortingLayerName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingLayerName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Canvas> UnityEngine::Canvas::get_rootCanvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_rootCanvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Canvas::get_renderingDisplaySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderingDisplaySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::StandaloneRenderResize UnityEngine::Canvas::get_updateRectTransformForStandalone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_updateRectTransformForStandalone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::StandaloneRenderResize>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_updateRectTransformForStandalone(::UnityEngine::StandaloneRenderResize value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_updateRectTransformForStandalone", {}, { ::i2c::type_of<::UnityEngine::StandaloneRenderResize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<int32_t>* UnityEngine::Canvas::get_externBeginRenderOverlays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_externBeginRenderOverlays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<int32_t>*>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::set_externBeginRenderOverlays(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_externBeginRenderOverlays", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Action_2<int32_t, int32_t>* UnityEngine::Canvas::get_externRenderOverlaysBefore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_externRenderOverlaysBefore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t, int32_t>*>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::set_externRenderOverlaysBefore(::System::Action_2<int32_t, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_externRenderOverlaysBefore", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Action_1<int32_t>* UnityEngine::Canvas::get_externEndRenderOverlays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_externEndRenderOverlays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<int32_t>*>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::set_externEndRenderOverlays(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_externEndRenderOverlays", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Canvas::SetExternalCanvasEnabled(bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "SetExternalCanvasEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Canvas::get_worldCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_worldCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_worldCamera(::UnityEngine::Camera* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_worldCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Canvas::get_normalizedSortingGridSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_normalizedSortingGridSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_normalizedSortingGridSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_normalizedSortingGridSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Canvas::get_sortingGridNormalizedSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingGridNormalizedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_sortingGridNormalizedSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingGridNormalizedSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Canvas::GetDefaultCanvasTextMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetDefaultCanvasTextMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Canvas::GetDefaultCanvasMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetDefaultCanvasMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Canvas::GetETC1SupportedCanvasMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetETC1SupportedCanvasMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::UpdateCanvasRectTransform(bool alignWithCamera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "UpdateCanvasRectTransform", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alignWithCamera);
}
inline void UnityEngine::Canvas::ForceUpdateCanvases() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "ForceUpdateCanvases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::SendPreWillRenderCanvases() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "SendPreWillRenderCanvases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::SendWillRenderCanvases() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "SendWillRenderCanvases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::BeginRenderExtraOverlays(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "BeginRenderExtraOverlays", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::Canvas::RenderExtraOverlaysBefore(int32_t displayIndex, int32_t sortingOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "RenderExtraOverlaysBefore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex, sortingOrder);
}
inline void UnityEngine::Canvas::EndRenderExtraOverlays(int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "EndRenderExtraOverlays", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::Canvas::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RenderMode UnityEngine::Canvas::get_renderMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_renderMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::RenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Canvas::get_isRootCanvas_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_isRootCanvas_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::get_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_pixelRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline float_t UnityEngine::Canvas::get_scaleFactor_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_scaleFactor_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_scaleFactor_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_scaleFactor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Canvas::get_referencePixelsPerUnit_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_referencePixelsPerUnit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_referencePixelsPerUnit_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_referencePixelsPerUnit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Canvas::get_overridePixelPerfect_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_overridePixelPerfect_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_overridePixelPerfect_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_overridePixelPerfect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Canvas::get_vertexColorAlwaysGammaSpace_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_vertexColorAlwaysGammaSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_vertexColorAlwaysGammaSpace_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_vertexColorAlwaysGammaSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Canvas::get_pixelPerfect_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_pixelPerfect_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_pixelPerfect_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_pixelPerfect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Canvas::get_planeDistance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_planeDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_planeDistance_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_planeDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Canvas::get_renderOrder_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_renderOrder_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Canvas::get_overrideSorting_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_overrideSorting_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_overrideSorting_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_overrideSorting_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Canvas::get_sortingOrder_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingOrder_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_sortingOrder_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingOrder_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Canvas::get_targetDisplay_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_targetDisplay_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_targetDisplay_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_targetDisplay_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Canvas::get_sortingLayerID_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingLayerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_sortingLayerID_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingLayerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Canvas::get_cachedSortingLayerValue_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_cachedSortingLayerValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AdditionalCanvasShaderChannels UnityEngine::Canvas::get_additionalShaderChannels_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_additionalShaderChannels_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdditionalCanvasShaderChannels>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_additionalShaderChannels_Injected(::System::IntPtr _unity_self, ::UnityEngine::AdditionalCanvasShaderChannels value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                       { "set_additionalShaderChannels_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AdditionalCanvasShaderChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Canvas::get_sortingLayerName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                       { "get_sortingLayerName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Canvas::set_sortingLayerName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                       { "set_sortingLayerName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Canvas::get_rootCanvas_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_rootCanvas_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::get_renderingDisplaySize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                                           { "get_renderingDisplaySize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::UnityEngine::StandaloneRenderResize UnityEngine::Canvas::get_updateRectTransformForStandalone_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_updateRectTransformForStandalone_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::StandaloneRenderResize>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_updateRectTransformForStandalone_Injected(::System::IntPtr _unity_self, ::UnityEngine::StandaloneRenderResize value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(),
                                       { "set_updateRectTransformForStandalone_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::StandaloneRenderResize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Canvas::get_worldCamera_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_worldCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_worldCamera_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_worldCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Canvas::get_normalizedSortingGridSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_normalizedSortingGridSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_normalizedSortingGridSize_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_normalizedSortingGridSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Canvas::get_sortingGridNormalizedSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "get_sortingGridNormalizedSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_sortingGridNormalizedSize_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "set_sortingGridNormalizedSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Canvas::GetDefaultCanvasTextMaterial_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetDefaultCanvasTextMaterial_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Canvas::GetDefaultCanvasMaterial_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetDefaultCanvasMaterial_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Canvas::GetETC1SupportedCanvasMaterial_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "GetETC1SupportedCanvasMaterial_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::UpdateCanvasRectTransform_Injected(::System::IntPtr _unity_self, bool alignWithCamera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Canvas*>(), { "UpdateCanvasRectTransform_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, alignWithCamera);
}
inline ::UnityEngine::Canvas* UnityEngine::Canvas::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Canvas*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Canvas::Canvas() {}
