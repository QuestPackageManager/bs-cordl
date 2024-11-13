#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerActivePlayersTimeOffsetAverage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActivePlayersTimeOffsetAverage_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3b66f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), "get_offsetSyncTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage.get_isFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_isFailed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3b67168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), "get_isFailed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b672b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
constexpr GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::operator ::GlobalNamespace::IMultiplayerObservable*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerObservable"
constexpr ::GlobalNamespace::IMultiplayerObservable* GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::i___GlobalNamespace__IMultiplayerObservable() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerObservable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__lastReturnedOffsetSyncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReturnedOffsetSyncTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__lastReturnedOffsetSyncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReturnedOffsetSyncTime;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_set__lastReturnedOffsetSyncTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReturnedOffsetSyncTime = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__timeOfLastValidReturnedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfLastValidReturnedTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__timeOfLastValidReturnedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfLastValidReturnedTime;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_set__timeOfLastValidReturnedTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOfLastValidReturnedTime = value;
}
inline int64_t GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_offsetSyncTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), "get_offsetSyncTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_isFailed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), "get_isFailed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>());
}
inline void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::MultiplayerActivePlayersTimeOffsetAverage() {}
