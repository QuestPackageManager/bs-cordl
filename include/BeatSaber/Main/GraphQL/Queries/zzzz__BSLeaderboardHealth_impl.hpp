#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Queries/BSLeaderboardHealth.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_impl.hpp"
#include "BeatSaber/Main/GraphQL/Queries/zzzz__BSLeaderboardHealth_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth.GetVariableNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::GetVariableNames)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31ca6d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31ca744;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31ca758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth* BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::BSLeaderboardHealth() {}
