#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/EventBox.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBox.get_indexFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::IndexFilter* (::BeatmapSaveDataVersion3::EventBox::*)()>(
    &::BeatmapSaveDataVersion3::EventBox::get_indexFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2706380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBox*>::get(), "get_indexFilter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBox.get_beatDistributionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::EventBox::*)()>(
    &::BeatmapSaveDataVersion3::EventBox::get_beatDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2706388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBox*>::get(),
                                                                               "get_beatDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBox.get_beatDistributionParamType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::DistributionParamType (::BeatmapSaveDataVersion3::EventBox::*)()>(
    &::BeatmapSaveDataVersion3::EventBox::get_beatDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2706390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBox*>::get(),
                                                                               "get_beatDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::EventBox::*)(
    ::BeatmapSaveDataVersion3::IndexFilter*, float_t, ::BeatmapSaveDataCommon::DistributionParamType)>(&::BeatmapSaveDataVersion3::EventBox::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2706398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::IndexFilter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::DistributionParamType>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::IndexFilter*& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr ::BeatmapSaveDataVersion3::IndexFilter* const& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void BeatmapSaveDataVersion3::EventBox::__cordl_internal_set_f(::BeatmapSaveDataVersion3::IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___f)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_w() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr float_t const& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_w() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr void BeatmapSaveDataVersion3::EventBox::__cordl_internal_set_w(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w = value;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType const& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::EventBox::__cordl_internal_set_d(::BeatmapSaveDataCommon::DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline ::BeatmapSaveDataVersion3::IndexFilter* BeatmapSaveDataVersion3::EventBox::get_indexFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBox*>::get(), "get_indexFilter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::IndexFilter*, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::EventBox::get_beatDistributionParam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBox*>::get(),
                                                                             "get_beatDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::DistributionParamType BeatmapSaveDataVersion3::EventBox::get_beatDistributionParamType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBox*>::get(),
                                                                             "get_beatDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::DistributionParamType, false>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::EventBox::_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                     ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::IndexFilter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::DistributionParamType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType);
}
inline ::BeatmapSaveDataVersion3::EventBox* BeatmapSaveDataVersion3::EventBox::New_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                                        ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::EventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::EventBox::EventBox() {}
