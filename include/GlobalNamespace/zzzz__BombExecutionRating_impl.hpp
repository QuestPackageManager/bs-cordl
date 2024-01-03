#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BombExecutionRating__Rating::__BombExecutionRating__Rating(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BombExecutionRating__Rating::__BombExecutionRating__Rating() {}
constexpr ::GlobalNamespace::__BombExecutionRating__Rating GlobalNamespace::__BombExecutionRating__Rating::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__BombExecutionRating__Rating GlobalNamespace::__BombExecutionRating__Rating::NotGood{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::BombExecutionRating.get_rating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BombExecutionRating__Rating (::GlobalNamespace::BombExecutionRating::*)()>(
    &::GlobalNamespace::BombExecutionRating::get_rating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223bfbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExecutionRating*>::get(), "get_rating",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExecutionRating._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombExecutionRating::*)(float_t, ::GlobalNamespace::__BombExecutionRating__Rating)>(
    &::GlobalNamespace::BombExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x223bfc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExecutionRating*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BombExecutionRating__Rating>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__BombExecutionRating__Rating& GlobalNamespace::BombExecutionRating::__get__rating_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rating_k__BackingField;
}
constexpr ::GlobalNamespace::__BombExecutionRating__Rating const& GlobalNamespace::BombExecutionRating::__get__rating_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rating_k__BackingField;
}
constexpr void GlobalNamespace::BombExecutionRating::__set__rating_k__BackingField(::GlobalNamespace::__BombExecutionRating__Rating value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rating_k__BackingField = value;
}
inline ::GlobalNamespace::__BombExecutionRating__Rating GlobalNamespace::BombExecutionRating::get_rating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExecutionRating*>::get(), "get_rating",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BombExecutionRating__Rating, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BombExecutionRating* GlobalNamespace::BombExecutionRating::New_ctor(float_t time, ::GlobalNamespace::__BombExecutionRating__Rating rating) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BombExecutionRating*>(time, rating));
}
inline void GlobalNamespace::BombExecutionRating::_ctor(float_t time, ::GlobalNamespace::__BombExecutionRating__Rating rating) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExecutionRating*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BombExecutionRating__Rating>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, rating);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombExecutionRating::BombExecutionRating() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
