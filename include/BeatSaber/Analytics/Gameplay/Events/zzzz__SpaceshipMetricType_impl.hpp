#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipMetricType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipMetricType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31d0498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get(), "get_Value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31d04a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31d04a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get(), 3));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Value_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Action(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Action",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Action() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Action",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Damage(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Damage",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Damage() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Damage",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Death(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Death",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Death() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Death",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Discovery(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Discovery",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Discovery() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Discovery",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Distance(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Distance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Distance() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Distance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Friction(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Friction",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Friction() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Friction",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Outcome(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Outcome",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Outcome() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Outcome",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Progression(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Progression",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Progression() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Progression",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Rate(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Rate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Rate() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Rate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Purchase(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Purchase",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Purchase() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Purchase",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_RewardCurrency(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardCurrency",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_RewardCurrency() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardCurrency",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_RewardItems(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardItems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_RewardItems() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardItems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_RewardPoints(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardPoints",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_RewardPoints() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardPoints",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_RewardStatus(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardStatus",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_RewardStatus() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "RewardStatus",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Social(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Social",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Social() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Social",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Preq(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Preq",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Preq() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Preq",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::setStaticF_Other(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Other",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::getStaticF_Other() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "Other",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get>();
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get(), "get_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(value));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType::SpaceshipMetricType() {}
