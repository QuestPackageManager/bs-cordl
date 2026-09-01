#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\Events\SpaceshipMetricType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipMetricType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32655f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32655f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3265600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::__cordl_internal_set__Value_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Value_k__BackingField = value;
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Action(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Action", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Action() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Action", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Damage(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Damage", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Damage() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Damage", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Death(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Death", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Death() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Death", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Discovery(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Discovery", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Discovery() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Discovery", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Distance(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Distance", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Distance() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Distance", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Friction(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Friction", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Friction() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Friction", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Outcome(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Outcome", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Outcome() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Outcome", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Progression(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Progression", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Progression() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Progression", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Rate(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Rate", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Rate() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Rate", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Purchase(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Purchase", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Purchase() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Purchase", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_RewardCurrency(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardCurrency", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_RewardCurrency() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardCurrency", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_RewardItems(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardItems", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_RewardItems() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardItems", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_RewardPoints(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardPoints", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_RewardPoints() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardPoints", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_RewardStatus(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardStatus", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_RewardStatus() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardStatus", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Social(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Social", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Social() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Social", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Preq(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Preq", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Preq() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Preq", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Other(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Other", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Other() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Other", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>();
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::SpaceshipMetricType() {}
