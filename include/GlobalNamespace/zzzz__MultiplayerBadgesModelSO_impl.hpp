#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerBadgesModelSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO.get_positiveBadges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>* (
    ::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::get_positiveBadges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesModelSO*>(), { "get_positiveBadges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO.get_negativeBadges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>* (
    ::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::get_negativeBadges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesModelSO*>(), { "get_negativeBadges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesModelSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>*& GlobalNamespace::MultiplayerBadgesModelSO::__cordl_internal_get__positiveBadges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positiveBadges;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>* const& GlobalNamespace::MultiplayerBadgesModelSO::__cordl_internal_get__positiveBadges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positiveBadges;
}
constexpr void GlobalNamespace::MultiplayerBadgesModelSO::__cordl_internal_set__positiveBadges(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positiveBadges = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>*& GlobalNamespace::MultiplayerBadgesModelSO::__cordl_internal_get__negativeBadges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____negativeBadges;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>* const& GlobalNamespace::MultiplayerBadgesModelSO::__cordl_internal_get__negativeBadges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____negativeBadges;
}
constexpr void GlobalNamespace::MultiplayerBadgesModelSO::__cordl_internal_set__negativeBadges(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____negativeBadges = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>* GlobalNamespace::MultiplayerBadgesModelSO::get_positiveBadges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesModelSO*>(), { "get_positiveBadges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>* GlobalNamespace::MultiplayerBadgesModelSO::get_negativeBadges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesModelSO*>(), { "get_negativeBadges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerBadgesModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesModelSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgesModelSO* GlobalNamespace::MultiplayerBadgesModelSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgesModelSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgesModelSO::MultiplayerBadgesModelSO() {}
