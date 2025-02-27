#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadBeatmapLevelDataResult.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LoadBeatmapLevelDataResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LoadBeatmapLevelDataResult::*)(bool, ::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::LoadBeatmapLevelDataResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d9a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadBeatmapLevelDataResult.Success
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LoadBeatmapLevelDataResult (*)(::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::LoadBeatmapLevelDataResult::Success)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26d9a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), "Success", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadBeatmapLevelDataResult.FromValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LoadBeatmapLevelDataResult (*)(::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::LoadBeatmapLevelDataResult::FromValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d9a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), "FromValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LoadBeatmapLevelDataResult::setStaticF_Error(::GlobalNamespace::LoadBeatmapLevelDataResult value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LoadBeatmapLevelDataResult, "Error", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get>(
      std::forward<::GlobalNamespace::LoadBeatmapLevelDataResult>(value));
}
inline ::GlobalNamespace::LoadBeatmapLevelDataResult GlobalNamespace::LoadBeatmapLevelDataResult::getStaticF_Error() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LoadBeatmapLevelDataResult, "Error",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get>();
}
inline void GlobalNamespace::LoadBeatmapLevelDataResult::_ctor(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isError, beatmapLevelData);
}
inline ::GlobalNamespace::LoadBeatmapLevelDataResult GlobalNamespace::LoadBeatmapLevelDataResult::Success(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), "Success", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LoadBeatmapLevelDataResult, false>(nullptr, ___internal_method, beatmapLevelData);
}
inline ::GlobalNamespace::LoadBeatmapLevelDataResult GlobalNamespace::LoadBeatmapLevelDataResult::FromValue(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), "FromValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LoadBeatmapLevelDataResult, false>(nullptr, ___internal_method, beatmapLevelData);
}
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult::LoadBeatmapLevelDataResult(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept {
  this->isError = isError;
  this->beatmapLevelData = beatmapLevelData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult::LoadBeatmapLevelDataResult() {}
