#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ChainBeatIndex_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion4::ChainBeatIndex.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion4::ChainBeatIndex::*)()>(&::BeatmapSaveDataVersion4::ChainBeatIndex::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fbd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::ChainBeatIndex*>::get(), "get_beat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion4::ChainBeatIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion4::ChainBeatIndex::*)()>(&::BeatmapSaveDataVersion4::ChainBeatIndex::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fbd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::ChainBeatIndex*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
constexpr BeatmapSaveDataVersion4::ChainBeatIndex::operator ::BeatmapSaveDataCommon::IBeat*() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
constexpr ::BeatmapSaveDataCommon::IBeat* BeatmapSaveDataVersion4::ChainBeatIndex::i___BeatmapSaveDataCommon__IBeat() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataVersion4::ChainBeatIndex::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataVersion4::ChainBeatIndex::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
constexpr float_t& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_hb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hb;
}
constexpr float_t const& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_hb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hb;
}
constexpr void BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_set_hb(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hb = value;
}
constexpr float_t& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_hr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hr;
}
constexpr float_t const& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_hr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hr;
}
constexpr void BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_set_hr(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hr = value;
}
constexpr float_t& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_tb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tb;
}
constexpr float_t const& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_tb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tb;
}
constexpr void BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_set_tb(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tb = value;
}
constexpr float_t& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_tr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tr;
}
constexpr float_t const& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_tr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tr;
}
constexpr void BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_set_tr(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tr = value;
}
constexpr int32_t& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr int32_t& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_ci() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ci;
}
constexpr int32_t const& BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_get_ci() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ci;
}
constexpr void BeatmapSaveDataVersion4::ChainBeatIndex::__cordl_internal_set_ci(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ci = value;
}
inline float_t BeatmapSaveDataVersion4::ChainBeatIndex::get_beat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::ChainBeatIndex*>::get(), "get_beat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion4::ChainBeatIndex* BeatmapSaveDataVersion4::ChainBeatIndex::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion4::ChainBeatIndex*>());
}
inline void BeatmapSaveDataVersion4::ChainBeatIndex::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::ChainBeatIndex*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::ChainBeatIndex::ChainBeatIndex() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
