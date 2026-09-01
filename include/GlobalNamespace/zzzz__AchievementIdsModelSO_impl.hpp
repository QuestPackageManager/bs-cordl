#pragma once
// IWYU pragma private; include "GlobalNamespace\AchievementIdsModelSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AchievementIdsModelSO.get_achievementsIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AchievementSO>>* (::GlobalNamespace::AchievementIdsModelSO::*)()>(
    &::GlobalNamespace::AchievementIdsModelSO::get_achievementsIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f8c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AchievementIdsModelSO*>(), { "get_achievementsIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementIdsModelSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AchievementIdsModelSO::*)()>(&::GlobalNamespace::AchievementIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36f8c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AchievementIdsModelSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AchievementSO>>*& GlobalNamespace::AchievementIdsModelSO::__cordl_internal_get__achievementsIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsIds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AchievementSO>>* const& GlobalNamespace::AchievementIdsModelSO::__cordl_internal_get__achievementsIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsIds;
}
constexpr void GlobalNamespace::AchievementIdsModelSO::__cordl_internal_set__achievementsIds(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AchievementSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____achievementsIds = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AchievementSO>>* GlobalNamespace::AchievementIdsModelSO::get_achievementsIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AchievementIdsModelSO*>(), { "get_achievementsIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AchievementSO>>*>(this, ___internal_method);
}
inline void GlobalNamespace::AchievementIdsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AchievementIdsModelSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AchievementIdsModelSO* GlobalNamespace::AchievementIdsModelSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AchievementIdsModelSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AchievementIdsModelSO::AchievementIdsModelSO() {}
