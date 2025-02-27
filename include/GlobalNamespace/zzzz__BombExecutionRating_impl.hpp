#pragma once
// IWYU pragma private; include "GlobalNamespace/BombExecutionRating.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BombExecutionRating_Rating::BombExecutionRating_Rating(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombExecutionRating_Rating::BombExecutionRating_Rating() {}
constexpr ::GlobalNamespace::BombExecutionRating_Rating GlobalNamespace::BombExecutionRating_Rating::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BombExecutionRating_Rating GlobalNamespace::BombExecutionRating_Rating::NotGood{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::BombExecutionRating.get_rating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BombExecutionRating_Rating (::GlobalNamespace::BombExecutionRating::*)()>(
    &::GlobalNamespace::BombExecutionRating::get_rating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b2ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExecutionRating*>::get(), "get_rating",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExecutionRating._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombExecutionRating::*)(float_t, ::GlobalNamespace::BombExecutionRating_Rating)>(
    &::GlobalNamespace::BombExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26b2ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExecutionRating*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BombExecutionRating_Rating>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BombExecutionRating_Rating& GlobalNamespace::BombExecutionRating::__cordl_internal_get__rating_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rating_k__BackingField;
}
constexpr ::GlobalNamespace::BombExecutionRating_Rating const& GlobalNamespace::BombExecutionRating::__cordl_internal_get__rating_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rating_k__BackingField;
}
constexpr void GlobalNamespace::BombExecutionRating::__cordl_internal_set__rating_k__BackingField(::GlobalNamespace::BombExecutionRating_Rating value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rating_k__BackingField = value;
}
inline ::GlobalNamespace::BombExecutionRating_Rating GlobalNamespace::BombExecutionRating::get_rating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExecutionRating*>::get(), "get_rating",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BombExecutionRating_Rating, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombExecutionRating::_ctor(float_t time, ::GlobalNamespace::BombExecutionRating_Rating rating) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExecutionRating*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BombExecutionRating_Rating>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, rating);
}
inline ::GlobalNamespace::BombExecutionRating* GlobalNamespace::BombExecutionRating::New_ctor(float_t time, ::GlobalNamespace::BombExecutionRating_Rating rating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BombExecutionRating*>(time, rating));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombExecutionRating::BombExecutionRating() {}
