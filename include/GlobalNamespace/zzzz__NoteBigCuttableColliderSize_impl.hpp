#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteBigCuttableColliderSize.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteBigCuttableColliderSize_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58d306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBigCuttableColliderSize*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58d3140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBigCuttableColliderSize*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.HandleNoteControllerDidInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)(::GlobalNamespace::NoteControllerBase*)>(
    &::GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58d324c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBigCuttableColliderSize*>(),
                                                                                           { "HandleNoteControllerDidInit", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d32c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBigCuttableColliderSize*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NoteController>& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__noteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr ::UnityW<::GlobalNamespace::NoteController> const& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__noteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteController = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__boxCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__boxCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxCollider;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_set__boxCollider(::UnityW<::UnityEngine::BoxCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boxCollider = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__defaultColliderSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColliderSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__defaultColliderSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColliderSize;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_set__defaultColliderSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultColliderSize = value;
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBigCuttableColliderSize*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBigCuttableColliderSize*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBigCuttableColliderSize*>(),
                                                                                         { "HandleNoteControllerDidInit", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBigCuttableColliderSize*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteBigCuttableColliderSize* GlobalNamespace::NoteBigCuttableColliderSize::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteBigCuttableColliderSize*>());
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr GlobalNamespace::NoteBigCuttableColliderSize::operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr ::GlobalNamespace::INoteControllerDidInitEvent* GlobalNamespace::NoteBigCuttableColliderSize::i___GlobalNamespace__INoteControllerDidInitEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteBigCuttableColliderSize::NoteBigCuttableColliderSize() {}
