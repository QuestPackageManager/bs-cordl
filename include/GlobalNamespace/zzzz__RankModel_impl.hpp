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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::RankModel_Rank)>(&::GlobalNamespace::RankModel::GetRankName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27248c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModel*>::get(), "GetRankName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RankModel_Rank>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankModel.GetRankForScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RankModel_Rank (*)(int32_t, int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::RankModel::GetRankForScore)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x272497c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModel*>::get(), "GetRankForScore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::RankModel::GetRankName(::GlobalNamespace::RankModel_Rank rank) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModel*>::get(), "GetRankName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RankModel_Rank>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, rank);
}
inline ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModel::GetRankForScore(int32_t multipliedScore, int32_t modifiedScore, int32_t maxMultipliedScore, int32_t maxModifiedScore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModel*>::get(), "GetRankForScore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankModel_Rank, false>(nullptr, ___internal_method, multipliedScore, modifiedScore, maxMultipliedScore, maxModifiedScore);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankModel::RankModel() {}
