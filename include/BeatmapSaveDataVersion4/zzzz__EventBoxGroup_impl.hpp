#pragma once
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroupType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroup_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBox_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion4::EventBoxGroup.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion4::EventBoxGroup::*)()>(&::BeatmapSaveDataVersion4::EventBoxGroup::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fbd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::EventBoxGroup*>::get(), "get_beat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion4::EventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion4::EventBoxGroup::*)()>(&::BeatmapSaveDataVersion4::EventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fbd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::EventBoxGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
constexpr BeatmapSaveDataVersion4::EventBoxGroup::operator ::BeatmapSaveDataCommon::IBeat*() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
constexpr ::BeatmapSaveDataCommon::IBeat* BeatmapSaveDataVersion4::EventBoxGroup::i___BeatmapSaveDataCommon__IBeat() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataVersion4::EventBoxGroup::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataVersion4::EventBoxGroup::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType const& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_set_t(::BeatmapSaveDataVersion4::EventBoxGroupType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr int32_t& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr int32_t const& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_set_g(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr float_t& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBox, ::Array<::BeatmapSaveDataVersion4::EventBox>*>& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBox, ::Array<::BeatmapSaveDataVersion4::EventBox>*> const& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_set_e(::ArrayW<::BeatmapSaveDataVersion4::EventBox, ::Array<::BeatmapSaveDataVersion4::EventBox>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t BeatmapSaveDataVersion4::EventBoxGroup::get_beat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::EventBoxGroup*>::get(), "get_beat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion4::EventBoxGroup* BeatmapSaveDataVersion4::EventBoxGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion4::EventBoxGroup*>());
}
inline void BeatmapSaveDataVersion4::EventBoxGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::EventBoxGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::EventBoxGroup::EventBoxGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
