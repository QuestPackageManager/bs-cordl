#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LeaderboardEntries_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LeaderboardEntry_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::LeaderboardEntries._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::LeaderboardEntries::*)()>(
    &::BeatSaberAPI::DataTransferObjects::LeaderboardEntries::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Array<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>*>&
BeatSaberAPI::DataTransferObjects::LeaderboardEntries::__get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Array<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>*> const&
BeatSaberAPI::DataTransferObjects::LeaderboardEntries::__get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntries::__set_entries(
    ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Array<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaberAPI::DataTransferObjects::LeaderboardEntries* BeatSaberAPI::DataTransferObjects::LeaderboardEntries::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>());
}
inline void BeatSaberAPI::DataTransferObjects::LeaderboardEntries::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::LeaderboardEntries::LeaderboardEntries() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
