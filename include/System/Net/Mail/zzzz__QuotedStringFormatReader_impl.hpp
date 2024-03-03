#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__QuotedStringFormatReader_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::QuotedStringFormatReader.ReadReverseQuoted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, bool)>(&::System::Net::Mail::QuotedStringFormatReader::ReadReverseQuoted)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x29ec88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::QuotedStringFormatReader*>::get(), "ReadReverseQuoted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::QuotedStringFormatReader.ReadReverseUnQuoted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, bool, bool)>(&::System::Net::Mail::QuotedStringFormatReader::ReadReverseUnQuoted)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x29eca58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::QuotedStringFormatReader*>::get(), "ReadReverseUnQuoted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::QuotedStringFormatReader.IsValidQtext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, char16_t)>(&::System::Net::Mail::QuotedStringFormatReader::IsValidQtext)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29ecc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::QuotedStringFormatReader*>::get(), "IsValidQtext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t System::Net::Mail::QuotedStringFormatReader::ReadReverseQuoted(::StringW data, int32_t index, bool permitUnicode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::QuotedStringFormatReader*>::get(), "ReadReverseQuoted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, index, permitUnicode);
}
inline int32_t System::Net::Mail::QuotedStringFormatReader::ReadReverseUnQuoted(::StringW data, int32_t index, bool permitUnicode, bool expectCommaDelimiter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::QuotedStringFormatReader*>::get(), "ReadReverseUnQuoted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, index, permitUnicode, expectCommaDelimiter);
}
inline bool System::Net::Mail::QuotedStringFormatReader::IsValidQtext(bool allowUnicode, char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::QuotedStringFormatReader*>::get(), "IsValidQtext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, allowUnicode, ch);
}
// Ctor Parameters []
constexpr ::System::Net::Mail::QuotedStringFormatReader::QuotedStringFormatReader() {}
