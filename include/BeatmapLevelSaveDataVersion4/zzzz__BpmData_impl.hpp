#pragma once
// IWYU pragma private; include "BeatmapLevelSaveDataVersion4/BpmData.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_impl.hpp"
#include "System/zzzz__IComparable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BpmData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
//  Writing Method size for method: ::BeatmapLevelSaveDataVersion4::BpmData.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapLevelSaveDataVersion4::BpmData::*)()>(&::BeatmapLevelSaveDataVersion4::BpmData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270b204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BpmData*>::get(), "get_beat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapLevelSaveDataVersion4::BpmData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapLevelSaveDataVersion4::BpmData::*)()>(&::BeatmapLevelSaveDataVersion4::BpmData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270b20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BpmData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_get_si() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___si;
}
constexpr int32_t const& BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_get_si() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___si;
}
constexpr void BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_set_si(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___si = value;
}
constexpr int32_t& BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_get_ei() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ei;
}
constexpr int32_t const& BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_get_ei() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ei;
}
constexpr void BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_set_ei(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ei = value;
}
constexpr float_t& BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_get_sb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sb;
}
constexpr float_t const& BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_get_sb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sb;
}
constexpr void BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_set_sb(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sb = value;
}
constexpr float_t& BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_get_eb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eb;
}
constexpr float_t const& BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_get_eb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eb;
}
constexpr void BeatmapLevelSaveDataVersion4::BpmData::__cordl_internal_set_eb(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eb = value;
}
inline float_t BeatmapLevelSaveDataVersion4::BpmData::get_beat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BpmData*>::get(), "get_beat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void BeatmapLevelSaveDataVersion4::BpmData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BpmData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapLevelSaveDataVersion4::BpmData* BeatmapLevelSaveDataVersion4::BpmData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapLevelSaveDataVersion4::BpmData*>());
}
/// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
constexpr BeatmapLevelSaveDataVersion4::BpmData::operator ::BeatmapSaveDataCommon::IBeat*() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
constexpr ::BeatmapSaveDataCommon::IBeat* BeatmapLevelSaveDataVersion4::BpmData::i___BeatmapSaveDataCommon__IBeat() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapLevelSaveDataVersion4::BpmData::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapLevelSaveDataVersion4::BpmData::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::BpmData::BpmData() {}
