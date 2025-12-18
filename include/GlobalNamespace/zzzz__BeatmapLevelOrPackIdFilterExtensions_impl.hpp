#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackIdFilterExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdFilterExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions.ShouldAllowPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelOrPackIdFilter)>(
    &::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3650c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>::get(), "ShouldAllowPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelOrPackIdFilter>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions.ShouldAllowLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelOrPackIdFilter)>(
    &::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3650c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>::get(), "ShouldAllowLevels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelOrPackIdFilter>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions.ShouldAllowEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelOrPackIdFilter)>(
    &::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowEmpty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3650c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>::get(), "ShouldAllowEmpty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelOrPackIdFilter>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowPacks(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>::get(), "ShouldAllowPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelOrPackIdFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filter);
}
inline bool GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowLevels(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>::get(), "ShouldAllowLevels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelOrPackIdFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filter);
}
inline bool GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowEmpty(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>::get(), "ShouldAllowEmpty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelOrPackIdFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filter);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::BeatmapLevelOrPackIdFilterExtensions() {}
