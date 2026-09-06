#pragma once
// IWYU pragma private; include "GlobalNamespace/ILeaderboardIdContainer.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdContainer_def.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILeaderboardIdContainer.get_leaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* (::GlobalNamespace::ILeaderboardIdContainer::*)()>(
    &::GlobalNamespace::ILeaderboardIdContainer::get_leaderboardIds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILeaderboardIdContainer*>(), { ::i2c::class_of<::GlobalNamespace::ILeaderboardIdContainer*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* GlobalNamespace::ILeaderboardIdContainer::get_leaderboardIds() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILeaderboardIdContainer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>*>(this, ___internal_method);
}
