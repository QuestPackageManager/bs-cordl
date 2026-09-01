#pragma once
// IWYU pragma private; include "GlobalNamespace\LightRotationGroup.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationXTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationYTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationZTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroupType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroup.get_transformGroupType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightTransformGroupType (::GlobalNamespace::LightRotationGroup::*)()>(
    &::GlobalNamespace::LightRotationGroup::get_transformGroupType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599a5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroup*>(), { ::i2c::class_of<::GlobalNamespace::LightRotationGroup*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationGroup::*)()>(&::GlobalNamespace::LightRotationGroup::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x599a5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightTransformGroupType GlobalNamespace::LightRotationGroup::get_transformGroupType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightRotationGroup*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTransformGroupType>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightRotationGroup* GlobalNamespace::LightRotationGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightRotationGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationGroup::LightRotationGroup() {}
