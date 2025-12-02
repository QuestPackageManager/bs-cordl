#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/GraphQLErrorCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__GraphQLErrorCode_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::GraphQLErrorCode.IsBeatGamesErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::BeatSaber::Main::Leaderboards::GraphQLErrorCode::IsBeatGamesErrorCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a0b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::GraphQLErrorCode*>::get(), "IsBeatGamesErrorCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::GraphQLErrorCode.IsBeatGamesErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::BeatSaber::Main::Leaderboards::GraphQLErrorCode::IsBeatGamesErrorCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x319f274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::GraphQLErrorCode*>::get(), "IsBeatGamesErrorCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool BeatSaber::Main::Leaderboards::GraphQLErrorCode::IsBeatGamesErrorCode(::StringW code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::GraphQLErrorCode*>::get(), "IsBeatGamesErrorCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, code);
}
inline bool BeatSaber::Main::Leaderboards::GraphQLErrorCode::IsBeatGamesErrorCode(int32_t code) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::GraphQLErrorCode*>::get(), "IsBeatGamesErrorCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, code);
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::GraphQLErrorCode::GraphQLErrorCode() {}
