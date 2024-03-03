#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion4::BeatIndex.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion4::BeatIndex::*)()>(&::BeatmapSaveDataVersion4::BeatIndex::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fbcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::BeatIndex*>::get(), "get_beat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion4::BeatIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion4::BeatIndex::*)()>(&::BeatmapSaveDataVersion4::BeatIndex::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fbcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::BeatIndex*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
constexpr BeatmapSaveDataVersion4::BeatIndex::operator ::BeatmapSaveDataCommon::IBeat*() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
constexpr ::BeatmapSaveDataCommon::IBeat* BeatmapSaveDataVersion4::BeatIndex::i___BeatmapSaveDataCommon__IBeat() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataVersion4::BeatIndex::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataVersion4::BeatIndex::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
constexpr float_t& BeatmapSaveDataVersion4::BeatIndex::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion4::BeatIndex::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion4::BeatIndex::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion4::BeatIndex::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& BeatmapSaveDataVersion4::BeatIndex::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion4::BeatIndex::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
inline float_t BeatmapSaveDataVersion4::BeatIndex::get_beat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::BeatIndex*>::get(), "get_beat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion4::BeatIndex* BeatmapSaveDataVersion4::BeatIndex::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion4::BeatIndex*>());
}
inline void BeatmapSaveDataVersion4::BeatIndex::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::BeatIndex*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::BeatIndex::BeatIndex() {}
