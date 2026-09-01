#pragma once
// IWYU pragma private; include "Zenject\GuiRenderer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__GuiRenderer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__GuiRenderableManager_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::GuiRenderer.Construct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GuiRenderer::*)(::Zenject::GuiRenderableManager*)>(&::Zenject::GuiRenderer::Construct)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e91b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { "Construct", {}, { ::i2c::type_of<::Zenject::GuiRenderableManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderer.OnGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GuiRenderer::*)()>(&::Zenject::GuiRenderer::OnGUI)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e91b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { "OnGUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GuiRenderer::*)()>(&::Zenject::GuiRenderer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e91b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderer.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*>)>(&::Zenject::GuiRenderer::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e91b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderer.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::GuiRenderer::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6e91c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::GuiRenderableManager*& Zenject::GuiRenderer::__cordl_internal_get__renderableManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderableManager;
}
constexpr ::Zenject::GuiRenderableManager* const& Zenject::GuiRenderer::__cordl_internal_get__renderableManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderableManager;
}
constexpr void Zenject::GuiRenderer::__cordl_internal_set__renderableManager(::Zenject::GuiRenderableManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderableManager = value;
}
inline void Zenject::GuiRenderer::Construct(::Zenject::GuiRenderableManager* renderableManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { "Construct", {}, { ::i2c::type_of<::Zenject::GuiRenderableManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderableManager);
}
inline void Zenject::GuiRenderer::OnGUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { "OnGUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::GuiRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::GuiRenderer::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::GuiRenderer::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderer*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::GuiRenderer* Zenject::GuiRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GuiRenderer*>());
}
// Ctor Parameters []
constexpr ::Zenject::GuiRenderer::GuiRenderer() {}
