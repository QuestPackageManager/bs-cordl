#pragma once
// IWYU pragma private; include "GlobalNamespace\Mirror.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Mirror_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Mirror.get_activeMirrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::Mirror>>* (*)()>(&::GlobalNamespace::Mirror::get_activeMirrors)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f46800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_activeMirrors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.get_canReflect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::get_canReflect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f4685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_canReflect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.get_mirrorMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::get_mirrorMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_mirrorMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.get_noMirrorMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::get_noMirrorMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_noMirrorMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.get_reflectionPlaneTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::get_reflectionPlaneTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_reflectionPlaneTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.get_isEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::get_isEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_isEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.set_isEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mirror::*)(bool)>(&::GlobalNamespace::Mirror::set_isEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "set_isEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.add_mirrorDidChangeEnabledStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mirror::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::Mirror::add_mirrorDidChangeEnabledStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f46958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "add_mirrorDidChangeEnabledStateEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.remove_mirrorDidChangeEnabledStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mirror::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::Mirror::remove_mirrorDidChangeEnabledStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f46a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "remove_mirrorDidChangeEnabledStateEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f46ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::OnDisable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f46bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::Update)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f46d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.ChangeMirrorEnabledState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mirror::*)(bool)>(&::GlobalNamespace::Mirror::ChangeMirrorEnabledState)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f46c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "ChangeMirrorEnabledState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror.ResolveActiveMirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Mirror> (*)()>(&::GlobalNamespace::Mirror::ResolveActiveMirror)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5f46dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "ResolveActiveMirror", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mirror._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mirror::*)()>(&::GlobalNamespace::Mirror::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f46fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& GlobalNamespace::Mirror::__cordl_internal_get__mirrorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& GlobalNamespace::Mirror::__cordl_internal_get__mirrorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr void GlobalNamespace::Mirror::__cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::Mirror::__cordl_internal_get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::Mirror::__cordl_internal_get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::Mirror::__cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::Mirror::__cordl_internal_get__mirrorMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::Mirror::__cordl_internal_get__mirrorMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorMaterial;
}
constexpr void GlobalNamespace::Mirror::__cordl_internal_set__mirrorMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::Mirror::__cordl_internal_get__noMirrorMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noMirrorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::Mirror::__cordl_internal_get__noMirrorMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noMirrorMaterial;
}
constexpr void GlobalNamespace::Mirror::__cordl_internal_set__noMirrorMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noMirrorMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Mirror::__cordl_internal_get__reflectionPlaneTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionPlaneTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Mirror::__cordl_internal_get__reflectionPlaneTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionPlaneTransform;
}
constexpr void GlobalNamespace::Mirror::__cordl_internal_set__reflectionPlaneTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionPlaneTransform = value;
}
constexpr bool& GlobalNamespace::Mirror::__cordl_internal_get__isEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isEnabled_k__BackingField;
}
constexpr bool const& GlobalNamespace::Mirror::__cordl_internal_get__isEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isEnabled_k__BackingField;
}
constexpr void GlobalNamespace::Mirror::__cordl_internal_set__isEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isEnabled_k__BackingField = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::Mirror::__cordl_internal_get_mirrorDidChangeEnabledStateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorDidChangeEnabledStateEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::Mirror::__cordl_internal_get_mirrorDidChangeEnabledStateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorDidChangeEnabledStateEvent;
}
constexpr void GlobalNamespace::Mirror::__cordl_internal_set_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorDidChangeEnabledStateEvent = value;
}
inline void GlobalNamespace::Mirror::setStaticF__activeMirrors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Mirror>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Mirror>>*, "_activeMirrors", ::GlobalNamespace::Mirror*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Mirror>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Mirror>>* GlobalNamespace::Mirror::getStaticF__activeMirrors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Mirror>>*, "_activeMirrors", ::GlobalNamespace::Mirror*>();
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::Mirror>>* GlobalNamespace::Mirror::get_activeMirrors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_activeMirrors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::Mirror>>*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::Mirror::get_canReflect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_canReflect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::Mirror::get_mirrorMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_mirrorMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::Mirror::get_noMirrorMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_noMirrorMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::Mirror::get_reflectionPlaneTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_reflectionPlaneTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool GlobalNamespace::Mirror::get_isEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "get_isEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Mirror::set_isEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "set_isEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Mirror::add_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "add_mirrorDidChangeEnabledStateEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Mirror::remove_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "remove_mirrorDidChangeEnabledStateEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Mirror::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Mirror::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Mirror::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Mirror::ChangeMirrorEnabledState(bool newIsEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "ChangeMirrorEnabledState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIsEnabled);
}
inline ::UnityW<::GlobalNamespace::Mirror> GlobalNamespace::Mirror::ResolveActiveMirror() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { "ResolveActiveMirror", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Mirror>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Mirror::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Mirror*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Mirror* GlobalNamespace::Mirror::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Mirror*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Mirror::Mirror() {}
