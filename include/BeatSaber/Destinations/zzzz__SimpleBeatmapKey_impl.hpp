#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/SimpleBeatmapKey.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__SimpleBeatmapKey_def.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::SimpleBeatmapKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::SimpleBeatmapKey::*)(
    ::BeatSaber::Destinations::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty, ::StringW)>(&::BeatSaber::Destinations::SimpleBeatmapKey::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31b15bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SimpleBeatmapKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::BeatmapCharacteristic>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SimpleBeatmapKey.ToStruct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKey (::BeatSaber::Destinations::SimpleBeatmapKey::*)(
    ::GlobalNamespace::BeatmapCharacteristicCollection*)>(&::BeatSaber::Destinations::SimpleBeatmapKey::ToStruct)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x31b15c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SimpleBeatmapKey*>::get(), "ToStruct", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic& BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic const& BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_set_characteristic(::BeatSaber::Destinations::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristic = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr ::StringW& BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void BeatSaber::Destinations::SimpleBeatmapKey::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Destinations::SimpleBeatmapKey::_ctor(::BeatSaber::Destinations::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SimpleBeatmapKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::BeatmapCharacteristic>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, characteristic, difficulty, levelId);
}
inline ::GlobalNamespace::BeatmapKey BeatSaber::Destinations::SimpleBeatmapKey::ToStruct(::GlobalNamespace::BeatmapCharacteristicCollection* characteristicCollection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::SimpleBeatmapKey*>::get(), "ToStruct", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(this, ___internal_method, characteristicCollection);
}
inline ::BeatSaber::Destinations::SimpleBeatmapKey* BeatSaber::Destinations::SimpleBeatmapKey::New_ctor(::BeatSaber::Destinations::BeatmapCharacteristic characteristic,
                                                                                                        ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::SimpleBeatmapKey*>(characteristic, difficulty, levelId));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::SimpleBeatmapKey::SimpleBeatmapKey() {}
