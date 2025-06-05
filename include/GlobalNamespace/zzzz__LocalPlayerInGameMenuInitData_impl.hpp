#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalPlayerInGameMenuInitData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalPlayerInGameMenuInitData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalPlayerInGameMenuInitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalPlayerInGameMenuInitData::*)(::ByRef<::GlobalNamespace::BeatmapKey>, bool)>(
    &::GlobalNamespace::LocalPlayerInGameMenuInitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3bab634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalPlayerInGameMenuInitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr bool& GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_get_hasSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr bool const& GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_get_hasSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr void GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_set_hasSong(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSong = value;
}
inline void GlobalNamespace::LocalPlayerInGameMenuInitData::_ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalPlayerInGameMenuInitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapKey, hasSong);
}
inline ::GlobalNamespace::LocalPlayerInGameMenuInitData* GlobalNamespace::LocalPlayerInGameMenuInitData::New_ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalPlayerInGameMenuInitData*>(beatmapKey, hasSong));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData::LocalPlayerInGameMenuInitData() {}
