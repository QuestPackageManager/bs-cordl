#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadBeatmapLevelDataResult.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType::LoadBeatmapLevelDataResult_ErrorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType::LoadBeatmapLevelDataResult_ErrorType() {}
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType::BeatmapLevelNotFoundInRepository{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType::BeatmapLevelNotOwned{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType::BeatmapLevelDataNotFound{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::LoadBeatmapLevelDataResult.get_isError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LoadBeatmapLevelDataResult::*)()>(
    &::GlobalNamespace::LoadBeatmapLevelDataResult::get_isError)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x360704c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(),
                                                                               "get_isError", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadBeatmapLevelDataResult.get_errorMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LoadBeatmapLevelDataResult::*)()>(
    &::GlobalNamespace::LoadBeatmapLevelDataResult::get_errorMessage)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3607090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(),
                                                                               "get_errorMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadBeatmapLevelDataResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LoadBeatmapLevelDataResult::*)(
    ::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType>, ::GlobalNamespace::IBeatmapLevelData*)>(&::GlobalNamespace::LoadBeatmapLevelDataResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36071ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadBeatmapLevelDataResult.Success
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LoadBeatmapLevelDataResult (*)(::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::LoadBeatmapLevelDataResult::Success)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36071f4;

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
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3607200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), "FromValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LoadBeatmapLevelDataResult::setStaticF_BeatmapLevelNotFoundInRepository(::GlobalNamespace::LoadBeatmapLevelDataResult value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LoadBeatmapLevelDataResult, "BeatmapLevelNotFoundInRepository",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get>(
      std::forward<::GlobalNamespace::LoadBeatmapLevelDataResult>(value));
}
inline ::GlobalNamespace::LoadBeatmapLevelDataResult GlobalNamespace::LoadBeatmapLevelDataResult::getStaticF_BeatmapLevelNotFoundInRepository() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LoadBeatmapLevelDataResult, "BeatmapLevelNotFoundInRepository",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get>();
}
inline void GlobalNamespace::LoadBeatmapLevelDataResult::setStaticF_BeatmapLevelNotOwned(::GlobalNamespace::LoadBeatmapLevelDataResult value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LoadBeatmapLevelDataResult, "BeatmapLevelNotOwned",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get>(
      std::forward<::GlobalNamespace::LoadBeatmapLevelDataResult>(value));
}
inline ::GlobalNamespace::LoadBeatmapLevelDataResult GlobalNamespace::LoadBeatmapLevelDataResult::getStaticF_BeatmapLevelNotOwned() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LoadBeatmapLevelDataResult, "BeatmapLevelNotOwned",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get>();
}
inline void GlobalNamespace::LoadBeatmapLevelDataResult::setStaticF_BeatmapLevelDataNotFound(::GlobalNamespace::LoadBeatmapLevelDataResult value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LoadBeatmapLevelDataResult, "BeatmapLevelDataNotFound",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get>(
      std::forward<::GlobalNamespace::LoadBeatmapLevelDataResult>(value));
}
inline ::GlobalNamespace::LoadBeatmapLevelDataResult GlobalNamespace::LoadBeatmapLevelDataResult::getStaticF_BeatmapLevelDataNotFound() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LoadBeatmapLevelDataResult, "BeatmapLevelDataNotFound",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get>();
}
inline bool GlobalNamespace::LoadBeatmapLevelDataResult::get_isError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(),
                                                                             "get_isError", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LoadBeatmapLevelDataResult::get_errorMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(),
                                                                             "get_errorMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::LoadBeatmapLevelDataResult::_ctor(::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType> errorType,
                                                               ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LoadBeatmapLevelDataResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorType, beatmapLevelData);
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
// Ctor Parameters [CppParam { name: "errorType", ty: "::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult::LoadBeatmapLevelDataResult(::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType> errorType,
                                                                                    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept {
  this->errorType = errorType;
  this->beatmapLevelData = beatmapLevelData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LoadBeatmapLevelDataResult::LoadBeatmapLevelDataResult() {}
