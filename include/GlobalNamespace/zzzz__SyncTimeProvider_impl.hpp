#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncTimeProvider.hpp"
#include "GlobalNamespace/zzzz__ITimeProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SyncTimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncTimeProvider.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::SyncTimeProvider::*)()>(&::GlobalNamespace::SyncTimeProvider::get_time)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x39bdca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimeProvider*>::get(), "get_time",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncTimeProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SyncTimeProvider::*)()>(&::GlobalNamespace::SyncTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39bdd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimeProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::SyncTimeProvider::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& GlobalNamespace::SyncTimeProvider::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::SyncTimeProvider::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int64_t GlobalNamespace::SyncTimeProvider::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimeProvider*>::get(), "get_time",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SyncTimeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimeProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SyncTimeProvider* GlobalNamespace::SyncTimeProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SyncTimeProvider*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITimeProvider"
constexpr GlobalNamespace::SyncTimeProvider::operator ::GlobalNamespace::ITimeProvider*() noexcept {
  return static_cast<::GlobalNamespace::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITimeProvider"
constexpr ::GlobalNamespace::ITimeProvider* GlobalNamespace::SyncTimeProvider::i___GlobalNamespace__ITimeProvider() noexcept {
  return static_cast<::GlobalNamespace::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyncTimeProvider::SyncTimeProvider() {}
