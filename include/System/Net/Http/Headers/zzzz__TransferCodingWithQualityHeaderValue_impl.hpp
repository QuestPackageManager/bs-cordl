#pragma once
#include "System/Net/Http/Headers/zzzz__TransferCodingHeaderValue_impl.hpp"
#include "System/Net/Http/Headers/zzzz__TransferCodingWithQualityHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::*)()>(
    &::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28423e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, int32_t, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*>)>(
        &::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28423f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>::get(), "TryParse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue.TryParseElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>, ByRef<::System::Net::Http::Headers::Token>)>(
        &::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x28424a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>::get(), "TryParseElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::Lexer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Http::Headers::Token>>::get() })));
    return ___internal_method;
  }
};
inline ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue* System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>());
}
inline void System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool
System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParse(::StringW input, int32_t minimalCount,
                                                                           ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>::get(), "TryParse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, minimalCount, result);
}
inline bool System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParseElement(::System::Net::Http::Headers::Lexer* lexer,
                                                                                              ByRef<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*> parsedValue,
                                                                                              ByRef<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>::get(), "TryParseElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::Lexer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Http::Headers::Token>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lexer, parsedValue, t);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TransferCodingWithQualityHeaderValue() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
