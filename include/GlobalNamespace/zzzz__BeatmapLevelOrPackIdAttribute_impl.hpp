#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackIdAttribute.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdFilter_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdAttribute_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdAttribute.get_allowPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelOrPackIdAttribute::*)()>(
    &::GlobalNamespace::BeatmapLevelOrPackIdAttribute::get_allowPacks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3650c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>::get(),
                                                                               "get_allowPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdAttribute.get_allowLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelOrPackIdAttribute::*)()>(
    &::GlobalNamespace::BeatmapLevelOrPackIdAttribute::get_allowLevels)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3650c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>::get(),
                                                                               "get_allowLevels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdAttribute.get_allowEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelOrPackIdAttribute::*)()>(
    &::GlobalNamespace::BeatmapLevelOrPackIdAttribute::get_allowEmpty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3650c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>::get(),
                                                                               "get_allowEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelOrPackIdAttribute::*)(::GlobalNamespace::BeatmapLevelOrPackIdFilter)>(
    &::GlobalNamespace::BeatmapLevelOrPackIdAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3650c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelOrPackIdFilter>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter& GlobalNamespace::BeatmapLevelOrPackIdAttribute::__cordl_internal_get_filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter const& GlobalNamespace::BeatmapLevelOrPackIdAttribute::__cordl_internal_get_filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr void GlobalNamespace::BeatmapLevelOrPackIdAttribute::__cordl_internal_set_filter(::GlobalNamespace::BeatmapLevelOrPackIdFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filter = value;
}
inline bool GlobalNamespace::BeatmapLevelOrPackIdAttribute::get_allowPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>::get(),
                                                                             "get_allowPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelOrPackIdAttribute::get_allowLevels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>::get(),
                                                                             "get_allowLevels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelOrPackIdAttribute::get_allowEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>::get(),
                                                                             "get_allowEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelOrPackIdAttribute::_ctor(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelOrPackIdFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter);
}
inline ::GlobalNamespace::BeatmapLevelOrPackIdAttribute* GlobalNamespace::BeatmapLevelOrPackIdAttribute::New_ctor(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelOrPackIdAttribute*>(filter));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdAttribute::BeatmapLevelOrPackIdAttribute() {}
