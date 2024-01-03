#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeUtilities_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::*)()>(
    &::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x115b73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.DateTimeToUnixMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::DateTime)>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeToUnixMs)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x115b744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get(), "DateTimeToUnixMs",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.UnixMsToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int64_t)>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::UnixMsToDateTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x115b8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get(), "UnixMsToDateTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.CurrentUnixMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::CurrentUnixMs)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x115b934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get(),
                                                                               "CurrentUnixMs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Date::DateTimeUtilities::setStaticF_UnixEpoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "UnixEpoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get>(
      std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Org::BouncyCastle::Utilities::Date::DateTimeUtilities::getStaticF_UnixEpoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "UnixEpoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get>();
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities* Org::BouncyCastle::Utilities::Date::DateTimeUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>());
}
inline void Org::BouncyCastle::Utilities::Date::DateTimeUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeToUnixMs(::System::DateTime dateTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get(), "DateTimeToUnixMs",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dateTime);
}
inline ::System::DateTime Org::BouncyCastle::Utilities::Date::DateTimeUtilities::UnixMsToDateTime(int64_t unixMs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get(), "UnixMsToDateTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, unixMs);
}
inline int64_t Org::BouncyCastle::Utilities::Date::DateTimeUtilities::CurrentUnixMs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>::get(),
                                                                             "CurrentUnixMs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
