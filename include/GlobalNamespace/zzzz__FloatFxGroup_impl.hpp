#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxGroup.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroup_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup.get_isTriggerOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FloatFxGroup::*)()>(&::GlobalNamespace::FloatFxGroup::get_isTriggerOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598cca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroup*>(), { "get_isTriggerOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup.get_targets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* (::GlobalNamespace::FloatFxGroup::*)()>(
    &::GlobalNamespace::FloatFxGroup::get_targets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598ccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroup*>(), { "get_targets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroup::*)()>(&::GlobalNamespace::FloatFxGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::FloatFxGroup::__cordl_internal_get__isTriggerOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTriggerOnly;
}
constexpr bool const& GlobalNamespace::FloatFxGroup::__cordl_internal_get__isTriggerOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTriggerOnly;
}
constexpr void GlobalNamespace::FloatFxGroup::__cordl_internal_set__isTriggerOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTriggerOnly = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*& GlobalNamespace::FloatFxGroup::__cordl_internal_get__targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* const& GlobalNamespace::FloatFxGroup::__cordl_internal_get__targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targets;
}
constexpr void GlobalNamespace::FloatFxGroup::__cordl_internal_set__targets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targets = value;
}
inline bool GlobalNamespace::FloatFxGroup::get_isTriggerOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroup*>(), { "get_isTriggerOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* GlobalNamespace::FloatFxGroup::get_targets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroup*>(), { "get_targets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxGroup* GlobalNamespace::FloatFxGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroup::FloatFxGroup() {}
