#pragma once
// IWYU pragma private; include "TrueOverdraw/TrueOverdraw.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "TrueOverdraw/zzzz__TrueOverdraw_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "TrueOverdraw/zzzz__TrueOverdraw_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType::TrueOverdraw_OverdrawType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType::TrueOverdraw_OverdrawType() {}
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw_OverdrawType::None{ static_cast<int32_t>(0x0) };
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw_OverdrawType::Transparent{ static_cast<int32_t>(0x1) };
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw_OverdrawType::Opaque{ static_cast<int32_t>(0x2) };
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw_OverdrawType::Everything{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.get_renderersLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::get_renderersLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f3bb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "get_renderersLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.get_overdrawType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TrueOverdraw::TrueOverdraw_OverdrawType (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::get_overdrawType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3bb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "get_overdrawType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.set_overdrawType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)(::TrueOverdraw::TrueOverdraw_OverdrawType)>(&::TrueOverdraw::TrueOverdraw::set_overdrawType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3bb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "set_overdrawType", {}, { ::i2c::type_of<::TrueOverdraw::TrueOverdraw_OverdrawType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)(::ArrayW<::UnityEngine::Renderer*>)>(&::TrueOverdraw::TrueOverdraw::_ctor)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5f3bb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::Enable)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5f3bf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "Enable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.ResolveRendererColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Renderer*, ::UnityEngine::Material*)>(&::TrueOverdraw::TrueOverdraw::ResolveRendererColor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5f3c2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(),
                                                             { "ResolveRendererColor", {}, { ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::Disable)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5f3c63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "Disable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f3c868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.ShowEverything
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::ShowEverything)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f3c94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "ShowEverything", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.ShowOnlyTransparent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::ShowOnlyTransparent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f3ca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "ShowOnlyTransparent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.ShowOnlyOpaque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::ShowOnlyOpaque)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f3cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "ShowOnlyOpaque", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.SetGlobalFloats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t)>(&::TrueOverdraw::TrueOverdraw::SetGlobalFloats)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f3c21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "SetGlobalFloats", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.SetOverdrawValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t)>(&::TrueOverdraw::TrueOverdraw::SetOverdrawValues)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f3c9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "SetOverdrawValues", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.SetMaterialValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Color)>(&::TrueOverdraw::TrueOverdraw::SetMaterialValues)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f3c528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "SetMaterialValues", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType& TrueOverdraw::TrueOverdraw::__cordl_internal_get__overdrawType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overdrawType_k__BackingField;
}
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType const& TrueOverdraw::TrueOverdraw::__cordl_internal_get__overdrawType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overdrawType_k__BackingField;
}
constexpr void TrueOverdraw::TrueOverdraw::__cordl_internal_set__overdrawType_k__BackingField(::TrueOverdraw::TrueOverdraw_OverdrawType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overdrawType_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& TrueOverdraw::TrueOverdraw::__cordl_internal_get__renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& TrueOverdraw::TrueOverdraw::__cordl_internal_get__renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr void TrueOverdraw::TrueOverdraw::__cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderers = value;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>& TrueOverdraw::TrueOverdraw::__cordl_internal_get__cachedSharedMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedSharedMaterials;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>> const& TrueOverdraw::TrueOverdraw::__cordl_internal_get__cachedSharedMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedSharedMaterials;
}
constexpr void TrueOverdraw::TrueOverdraw::__cordl_internal_set__cachedSharedMaterials(::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedSharedMaterials = value;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>& TrueOverdraw::TrueOverdraw::__cordl_internal_get__cachedMaterialInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedMaterialInstances;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>> const& TrueOverdraw::TrueOverdraw::__cordl_internal_get__cachedMaterialInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedMaterialInstances;
}
constexpr void TrueOverdraw::TrueOverdraw::__cordl_internal_set__cachedMaterialInstances(::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedMaterialInstances = value;
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendSrcColorFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendSrcColorFactor", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendSrcColorFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_blendSrcColorFactor", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendDstColorFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendDstColorFactor", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendDstColorFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_blendDstColorFactor", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendSrcAlphaFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendSrcAlphaFactor", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendSrcAlphaFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_blendSrcAlphaFactor", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendDstAlphaFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendDstAlphaFactor", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendDstAlphaFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_blendDstAlphaFactor", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendOperation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendOperation", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendOperation() {
  return ::cordl_internals::getStaticField<int32_t, "_blendOperation", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__trueOverdrawProperty(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_trueOverdrawProperty", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__trueOverdrawProperty() {
  return ::cordl_internals::getStaticField<int32_t, "_trueOverdrawProperty", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__transparentOverdraw(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_transparentOverdraw", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__transparentOverdraw() {
  return ::cordl_internals::getStaticField<int32_t, "_transparentOverdraw", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__opaqueOverdraw(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_opaqueOverdraw", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__opaqueOverdraw() {
  return ::cordl_internals::getStaticField<int32_t, "_opaqueOverdraw", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__overdrawColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_overdrawColor", ::TrueOverdraw::TrueOverdraw*>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__overdrawColor() {
  return ::cordl_internals::getStaticField<int32_t, "_overdrawColor", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__environmentElementsColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "_environmentElementsColor", ::TrueOverdraw::TrueOverdraw*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TrueOverdraw::TrueOverdraw::getStaticF__environmentElementsColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "_environmentElementsColor", ::TrueOverdraw::TrueOverdraw*>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__gameplayElementsColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "_gameplayElementsColor", ::TrueOverdraw::TrueOverdraw*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TrueOverdraw::TrueOverdraw::getStaticF__gameplayElementsColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "_gameplayElementsColor", ::TrueOverdraw::TrueOverdraw*>();
}
inline int32_t TrueOverdraw::TrueOverdraw::get_renderersLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "get_renderersLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw::get_overdrawType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "get_overdrawType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TrueOverdraw::TrueOverdraw_OverdrawType>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::set_overdrawType(::TrueOverdraw::TrueOverdraw_OverdrawType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "set_overdrawType", {}, { ::i2c::type_of<::TrueOverdraw::TrueOverdraw_OverdrawType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void TrueOverdraw::TrueOverdraw::_ctor(::ArrayW<::UnityEngine::Renderer*> renderers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderers);
}
inline void TrueOverdraw::TrueOverdraw::Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color TrueOverdraw::TrueOverdraw::ResolveRendererColor(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(),
                                                           { "ResolveRendererColor", {}, { ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, renderer, material);
}
inline void TrueOverdraw::TrueOverdraw::Disable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "Disable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::ShowEverything() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "ShowEverything", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::ShowOnlyTransparent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "ShowOnlyTransparent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::ShowOnlyOpaque() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "ShowOnlyOpaque", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::SetGlobalFloats(float_t trueOverdraw, float_t opaque, float_t transparent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "SetGlobalFloats", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trueOverdraw, opaque, transparent);
}
inline void TrueOverdraw::TrueOverdraw::SetOverdrawValues(float_t opaque, float_t transparent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "SetOverdrawValues", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, opaque, transparent);
}
inline void TrueOverdraw::TrueOverdraw::SetMaterialValues(::UnityEngine::Material* material, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TrueOverdraw::TrueOverdraw*>(), { "SetMaterialValues", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, color);
}
inline ::TrueOverdraw::TrueOverdraw* TrueOverdraw::TrueOverdraw::New_ctor(::ArrayW<::UnityEngine::Renderer*> renderers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TrueOverdraw::TrueOverdraw*>(renderers));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr TrueOverdraw::TrueOverdraw::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* TrueOverdraw::TrueOverdraw::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::TrueOverdraw::TrueOverdraw::TrueOverdraw() {}
