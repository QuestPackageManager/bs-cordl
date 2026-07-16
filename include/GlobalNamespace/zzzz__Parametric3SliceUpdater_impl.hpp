#pragma once
// IWYU pragma private; include "GlobalNamespace/Parametric3SliceUpdater.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceUpdater_def.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceSpriteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Parametric3SliceUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Parametric3SliceUpdater::*)()>(&::GlobalNamespace::Parametric3SliceUpdater::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x586957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Parametric3SliceUpdater*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Parametric3SliceUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Parametric3SliceUpdater::*)()>(&::GlobalNamespace::Parametric3SliceUpdater::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5869590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Parametric3SliceUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>& GlobalNamespace::Parametric3SliceUpdater::__cordl_internal_get__parametric3SliceSpriteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parametric3SliceSpriteController;
}
constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> const& GlobalNamespace::Parametric3SliceUpdater::__cordl_internal_get__parametric3SliceSpriteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parametric3SliceSpriteController;
}
constexpr void GlobalNamespace::Parametric3SliceUpdater::__cordl_internal_set__parametric3SliceSpriteController(::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parametric3SliceSpriteController = value;
}
inline void GlobalNamespace::Parametric3SliceUpdater::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Parametric3SliceUpdater*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Parametric3SliceUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Parametric3SliceUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Parametric3SliceUpdater* GlobalNamespace::Parametric3SliceUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Parametric3SliceUpdater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Parametric3SliceUpdater::Parametric3SliceUpdater() {}
