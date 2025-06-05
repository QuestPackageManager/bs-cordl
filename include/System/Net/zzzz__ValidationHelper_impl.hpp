#pragma once
// IWYU pragma private; include "System/Net/ValidationHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ValidationHelper_def.hpp"
//  Writing Method size for method: ::System::Net::ValidationHelper.MakeStringNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::ValidationHelper::MakeStringNull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x449ec18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get(), "MakeStringNull", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.IsBlankString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::ValidationHelper::IsBlankString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x44a151c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get(), "IsBlankString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.ValidateTcpPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Net::ValidationHelper::ValidateTcpPort)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x44a1538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get(), "ValidateTcpPort", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::ValidationHelper::setStaticF_EmptyArray(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "EmptyArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Net::ValidationHelper::getStaticF_EmptyArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "EmptyArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get>();
}
inline void System::Net::ValidationHelper::setStaticF_InvalidMethodChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "InvalidMethodChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Net::ValidationHelper::getStaticF_InvalidMethodChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "InvalidMethodChars",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get>();
}
inline void System::Net::ValidationHelper::setStaticF_InvalidParamChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "InvalidParamChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Net::ValidationHelper::getStaticF_InvalidParamChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "InvalidParamChars",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get>();
}
inline ::StringW System::Net::ValidationHelper::MakeStringNull(::StringW stringValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get(), "MakeStringNull", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, stringValue);
}
inline bool System::Net::ValidationHelper::IsBlankString(::StringW stringValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get(), "IsBlankString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stringValue);
}
inline bool System::Net::ValidationHelper::ValidateTcpPort(int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper*>::get(), "ValidateTcpPort",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, port);
}
// Ctor Parameters []
constexpr ::System::Net::ValidationHelper::ValidationHelper() {}
