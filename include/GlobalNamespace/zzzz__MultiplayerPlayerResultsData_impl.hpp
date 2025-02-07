#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlayerResultsData.hpp"
#include "System/zzzz__IComparable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerResultsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPlayerResultsData::*)(
    ::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerPlayerResultsData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26e3328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerResultsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerResultsData.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerPlayerResultsData::*)(::System::Object*)>(
    &::GlobalNamespace::MultiplayerPlayerResultsData::CompareTo)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x26e3354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerResultsData*>::get(), "CompareTo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults*& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_multiplayerLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerLevelCompletionResults;
}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults* const& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_multiplayerLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerLevelCompletionResults;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_set_multiplayerLevelCompletionResults(::GlobalNamespace::MultiplayerLevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___multiplayerLevelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerBadgeAwardData*& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_badge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badge;
}
constexpr ::GlobalNamespace::MultiplayerBadgeAwardData* const& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_badge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badge;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_set_badge(::GlobalNamespace::MultiplayerBadgeAwardData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___badge)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerPlayerResultsData::_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer,
                                                                 ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerResultsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer, multiplayerLevelCompletionResults);
}
inline int32_t GlobalNamespace::MultiplayerPlayerResultsData::CompareTo(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerResultsData*>::get(), "CompareTo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::MultiplayerPlayerResultsData*
GlobalNamespace::MultiplayerPlayerResultsData::New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerPlayerResultsData*>(connectedPlayer, multiplayerLevelCompletionResults));
}
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::MultiplayerPlayerResultsData::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* GlobalNamespace::MultiplayerPlayerResultsData::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPlayerResultsData::MultiplayerPlayerResultsData() {}
