#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActivePlayersTimeOffsetAverage_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x21037f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), "get_offsetSyncTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage.get_isFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_isFailed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2103a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), "get_isFailed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2103b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
constexpr GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::operator ::GlobalNamespace::IMultiplayerObservable*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerObservable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__lastReturnedOffsetSyncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReturnedOffsetSyncTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__lastReturnedOffsetSyncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReturnedOffsetSyncTime;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__set__lastReturnedOffsetSyncTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReturnedOffsetSyncTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__timeOfLastValidReturnedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfLastValidReturnedTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__timeOfLastValidReturnedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfLastValidReturnedTime;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__set__timeOfLastValidReturnedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOfLastValidReturnedTime = value;
}
inline float_t GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_offsetSyncTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), "get_offsetSyncTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_isFailed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), "get_isFailed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>());
}
inline void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::MultiplayerActivePlayersTimeOffsetAverage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
