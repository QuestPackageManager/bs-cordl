#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Gizmo\GizmoRenderer.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoRenderer_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer.SetUpGizmo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::*)(::Meta::XR::ImmersiveDebugger::DebugGizmoType, ::UnityEngine::Color)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::SetUpGizmo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a6f460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(),
                                                             { "SetUpGizmo", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer.UpdateDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::*)(::System::Object*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::UpdateDataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6f470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(), { "UpdateDataSource", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a6f478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a6f4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6f6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_get__gizmoType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmoType;
}
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_get__gizmoType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmoType;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_set__gizmoType(::Meta::XR::ImmersiveDebugger::DebugGizmoType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gizmoType = value;
}
constexpr ::UnityEngine::Color& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_get__gizmoColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmoColor;
}
constexpr ::UnityEngine::Color const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_get__gizmoColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmoColor;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_set__gizmoColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gizmoColor = value;
}
constexpr ::System::Object*& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::System::Object* const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::__cordl_internal_set__dataSource(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSource = value;
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::SetUpGizmo(::Meta::XR::ImmersiveDebugger::DebugGizmoType gizmoType, ::UnityEngine::Color gizmoColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(),
                                                           { "SetUpGizmo", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmoType, gizmoColor);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::UpdateDataSource(::System::Object* dataSource) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(), { "UpdateDataSource", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer* Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer::GizmoRenderer() {}
