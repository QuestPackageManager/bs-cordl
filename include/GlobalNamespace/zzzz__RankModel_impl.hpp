#pragma once
// IWYU pragma private; include "GlobalNamespace/RankModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RankModel_Rank::RankModel_Rank(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankModel_Rank::RankModel_Rank() {}
constexpr ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel_Rank::E{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel_Rank::D{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel_Rank::C{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel_Rank::B{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel_Rank::A{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel_Rank::S{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel_Rank::SS{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel_Rank::SSS{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::GlobalNamespace::RankModel.GetRankName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::RankModel_Rank)>(&::GlobalNamespace::RankModel::GetRankName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x377cdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RankModel*>(), { "GetRankName", {}, { ::i2c::type_of<::GlobalNamespace::RankModel_Rank>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankModel.GetRankForScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankModel_Rank (*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::RankModel::GetRankForScore)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x377ceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RankModel*>(),
                                                { "GetRankForScore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::RankModel::GetRankName(::GlobalNamespace::RankModel_Rank rank) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RankModel*>(), { "GetRankName", {}, { ::i2c::type_of<::GlobalNamespace::RankModel_Rank>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rank);
}
inline ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel::GetRankForScore(int32_t multipliedScore, int32_t modifiedScore, int32_t maxMultipliedScore, int32_t maxModifiedScore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RankModel*>(),
                                                           { "GetRankForScore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankModel_Rank>(nullptr, ___internal_method, multipliedScore, modifiedScore, maxMultipliedScore, maxModifiedScore);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankModel::RankModel() {}
