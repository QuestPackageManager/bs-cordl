#pragma once
// IWYU pragma private; include "Utility/DateTimeExtensions.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Utility/zzzz__DateTimeExtensions_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Utility::DateTimeExtensions.GetSecondsSinceEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Utility::DateTimeExtensions::GetSecondsSinceEpoch)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d88970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utility::DateTimeExtensions*>::get(), "GetSecondsSinceEpoch",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utility::DateTimeExtensions.UnixTimestampToUniversalDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int32_t)>(&::Utility::DateTimeExtensions::UnixTimestampToUniversalDateTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d88a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utility::DateTimeExtensions*>::get(), "UnixTimestampToUniversalDateTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Utility::DateTimeExtensions::setStaticF_EPOCH(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "EPOCH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utility::DateTimeExtensions*>::get>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Utility::DateTimeExtensions::getStaticF_EPOCH() {
  return ::cordl_internals::getStaticField<::System::DateTime, "EPOCH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utility::DateTimeExtensions*>::get>();
}
inline int32_t Utility::DateTimeExtensions::GetSecondsSinceEpoch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utility::DateTimeExtensions*>::get(), "GetSecondsSinceEpoch",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::DateTime Utility::DateTimeExtensions::UnixTimestampToUniversalDateTime(int32_t unixSecondsTimestamp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utility::DateTimeExtensions*>::get(), "UnixTimestampToUniversalDateTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, unixSecondsTimestamp);
}
// Ctor Parameters []
constexpr ::Utility::DateTimeExtensions::DateTimeExtensions() {}
