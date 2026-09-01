#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelsPromoDataSO.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo.get_promotedBeatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::*)()>(
    &::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::get_promotedBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { "get_promotedBeatmapLevelPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo.get_updatedBeatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::*)()>(
    &::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::get_updatedBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { "get_updatedBeatmapLevelPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo.get_promotedBeatmapLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::*)()>(
    &::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::get_promotedBeatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { "get_promotedBeatmapLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo.get_updatedBeatmapLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::*)()>(
    &::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::get_updatedBeatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { "get_updatedBeatmapLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::*)()>(
    &::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x374e5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_get__promotedBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelPacks;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_get__promotedBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelPacks;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_set__promotedBeatmapLevelPacks(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promotedBeatmapLevelPacks = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_get__updatedBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelPacks;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_get__updatedBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelPacks;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_set__updatedBeatmapLevelPacks(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updatedBeatmapLevelPacks = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_get__promotedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevels;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_get__promotedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_set__promotedBeatmapLevels(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promotedBeatmapLevels = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_get__updatedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevels;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_get__updatedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::__cordl_internal_set__updatedBeatmapLevels(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updatedBeatmapLevels = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::get_promotedBeatmapLevelPacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { "get_promotedBeatmapLevelPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::get_updatedBeatmapLevelPacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { "get_updatedBeatmapLevelPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::get_promotedBeatmapLevels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { "get_promotedBeatmapLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::get_updatedBeatmapLevels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { "get_updatedBeatmapLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoDataSO.get_promo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* (::GlobalNamespace::BeatmapLevelsPromoDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelsPromoDataSO::get_promo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO*>(), { "get_promo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoDataSO.set_promo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsPromoDataSO::*)(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*)>(
    &::GlobalNamespace::BeatmapLevelsPromoDataSO::set_promo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO*>(),
                                                             { "set_promo", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsPromoDataSO::*)()>(&::GlobalNamespace::BeatmapLevelsPromoDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*& GlobalNamespace::BeatmapLevelsPromoDataSO::__cordl_internal_get__promo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promo;
}
constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* const& GlobalNamespace::BeatmapLevelsPromoDataSO::__cordl_internal_get__promo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promo;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoDataSO::__cordl_internal_set__promo(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promo = value;
}
inline ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* GlobalNamespace::BeatmapLevelsPromoDataSO::get_promo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO*>(), { "get_promo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsPromoDataSO::set_promo(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO*>(),
                                                                                         { "set_promo", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapLevelsPromoDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelsPromoDataSO* GlobalNamespace::BeatmapLevelsPromoDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelsPromoDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO::BeatmapLevelsPromoDataSO() {}
