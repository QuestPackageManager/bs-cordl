#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerResultsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPlayerResultsData::*)(
    ::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerPlayerResultsData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22569f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerResultsData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerResultsData.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerPlayerResultsData::*)(::System::Object*)>(
    &::GlobalNamespace::MultiplayerPlayerResultsData::CompareTo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2256a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerResultsData*>::get(), "CompareTo",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::MultiplayerPlayerResultsData::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerPlayerResultsData::__get_connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::MultiplayerPlayerResultsData::__get_connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults*& GlobalNamespace::MultiplayerPlayerResultsData::__get_multiplayerLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___multiplayerLevelCompletionResults;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelCompletionResults*> const&
GlobalNamespace::MultiplayerPlayerResultsData::__get_multiplayerLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___multiplayerLevelCompletionResults;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__set_multiplayerLevelCompletionResults(::GlobalNamespace::MultiplayerLevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___multiplayerLevelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerBadgeAwardData*& GlobalNamespace::MultiplayerPlayerResultsData::__get_badge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___badge;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgeAwardData*> const& GlobalNamespace::MultiplayerPlayerResultsData::__get_badge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___badge;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__set_badge(::GlobalNamespace::MultiplayerBadgeAwardData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___badge)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MultiplayerPlayerResultsData*
GlobalNamespace::MultiplayerPlayerResultsData::New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerPlayerResultsData*>(connectedPlayer, multiplayerLevelCompletionResults));
}
inline void GlobalNamespace::MultiplayerPlayerResultsData::_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer,
                                                                 ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerResultsData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer, multiplayerLevelCompletionResults);
}
inline int32_t GlobalNamespace::MultiplayerPlayerResultsData::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerResultsData*>::get(), "CompareTo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPlayerResultsData::MultiplayerPlayerResultsData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
