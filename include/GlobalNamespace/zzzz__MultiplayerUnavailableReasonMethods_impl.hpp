#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerUnavailableReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerUnavailableReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.LocalizedKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerUnavailableReason)>(
    &::GlobalNamespace::MultiplayerUnavailableReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2362fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "LocalizedKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerUnavailableReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.ErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerUnavailableReason)>(
    &::GlobalNamespace::MultiplayerUnavailableReasonMethods::ErrorCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2363038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "ErrorCode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerUnavailableReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.TryGetMultiplayerUnavailableReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MultiplayerStatusData*, ByRef<::GlobalNamespace::MultiplayerUnavailableReason>)>(
    &::GlobalNamespace::MultiplayerUnavailableReasonMethods::TryGetMultiplayerUnavailableReason)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23630b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "TryGetMultiplayerUnavailableReason", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MultiplayerUnavailableReason>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.GetLocalizedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerStatusData*, ::Polyglot::Language)>(
    &::GlobalNamespace::MultiplayerUnavailableReasonMethods::GetLocalizedMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23633c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "GetLocalizedMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.VersionLessThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::GlobalNamespace::MultiplayerUnavailableReasonMethods::VersionLessThan)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x23631c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "VersionLessThan", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::MultiplayerUnavailableReasonMethods::LocalizedKey(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "LocalizedKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerUnavailableReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, multiplayerUnavailableReason);
}
inline ::StringW GlobalNamespace::MultiplayerUnavailableReasonMethods::ErrorCode(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "ErrorCode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerUnavailableReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, multiplayerUnavailableReason);
}
inline bool GlobalNamespace::MultiplayerUnavailableReasonMethods::TryGetMultiplayerUnavailableReason(::GlobalNamespace::MultiplayerStatusData* data,
                                                                                                     ByRef<::GlobalNamespace::MultiplayerUnavailableReason> reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "TryGetMultiplayerUnavailableReason", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MultiplayerUnavailableReason>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, data, reason);
}
inline ::StringW GlobalNamespace::MultiplayerUnavailableReasonMethods::GetLocalizedMessage(::GlobalNamespace::MultiplayerStatusData* data, ::Polyglot::Language language) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "GetLocalizedMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, data, language);
}
inline bool GlobalNamespace::MultiplayerUnavailableReasonMethods::VersionLessThan(::StringW currentVersion, ::StringW minVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>::get(), "VersionLessThan", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currentVersion, minVersion);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerUnavailableReasonMethods::MultiplayerUnavailableReasonMethods() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
