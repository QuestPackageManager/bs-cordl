#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/SerializableBeatmapKey.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__SerializableBeatmapKey_def.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::SerializableBeatmapKey.get_characteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Destinations::BeatmapCharacteristic (::BeatSaber::Destinations::SerializableBeatmapKey::*)()>(
    &::BeatSaber::Destinations::SerializableBeatmapKey::get_characteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3181730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(),
                                                                               "get_characteristic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SerializableBeatmapKey.get_difficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::BeatSaber::Destinations::SerializableBeatmapKey::*)()>(
    &::BeatSaber::Destinations::SerializableBeatmapKey::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3181738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(),
                                                                               "get_difficulty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SerializableBeatmapKey.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Destinations::SerializableBeatmapKey::*)()>(
    &::BeatSaber::Destinations::SerializableBeatmapKey::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3181740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(),
                                                                               "get_levelId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SerializableBeatmapKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::SerializableBeatmapKey::*)(
    ::BeatSaber::Destinations::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty, ::StringW)>(&::BeatSaber::Destinations::SerializableBeatmapKey::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3181748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::BeatmapCharacteristic>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SerializableBeatmapKey.ToStruct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKey (::BeatSaber::Destinations::SerializableBeatmapKey::*)(
    ::GlobalNamespace::BeatmapCharacteristicCollection*)>(&::BeatSaber::Destinations::SerializableBeatmapKey::ToStruct)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3181754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(), "ToStruct", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic& BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_get__characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic const& BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_get__characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr void BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_set__characteristic(::BeatSaber::Destinations::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characteristic = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr ::StringW& BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void BeatSaber::Destinations::SerializableBeatmapKey::__cordl_internal_set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::SerializableBeatmapKey::get_characteristic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(),
                                                                             "get_characteristic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::BeatmapCharacteristic, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficulty BeatSaber::Destinations::SerializableBeatmapKey::get_difficulty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(),
                                                                             "get_difficulty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::Destinations::SerializableBeatmapKey::get_levelId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(),
                                                                             "get_levelId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BeatSaber::Destinations::SerializableBeatmapKey::_ctor(::BeatSaber::Destinations::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                   ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::BeatmapCharacteristic>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, characteristic, difficulty, levelId);
}
inline ::GlobalNamespace::BeatmapKey BeatSaber::Destinations::SerializableBeatmapKey::ToStruct(::GlobalNamespace::BeatmapCharacteristicCollection* characteristicCollection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SerializableBeatmapKey*>::get(), "ToStruct", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(this, ___internal_method, characteristicCollection);
}
inline ::BeatSaber::Destinations::SerializableBeatmapKey* BeatSaber::Destinations::SerializableBeatmapKey::New_ctor(::BeatSaber::Destinations::BeatmapCharacteristic characteristic,
                                                                                                                    ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::SerializableBeatmapKey*>(characteristic, difficulty, levelId));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::SerializableBeatmapKey::SerializableBeatmapKey() {}
