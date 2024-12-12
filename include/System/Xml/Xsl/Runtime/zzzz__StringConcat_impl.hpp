#pragma once
// IWYU pragma private; include "System/Xml/Xsl/Runtime/StringConcat.hpp"
#include "System/Xml/Xsl/Runtime/zzzz__StringConcat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::System::Xml::Xsl::Runtime::StringConcat.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Xsl::Runtime::StringConcat::*)()>(&::System::Xml::Xsl::Runtime::StringConcat::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4392240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Xsl::Runtime::StringConcat>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Xsl::Runtime::StringConcat.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Xsl::Runtime::StringConcat::*)()>(&::System::Xml::Xsl::Runtime::StringConcat::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x439224c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Xsl::Runtime::StringConcat>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Xsl::Runtime::StringConcat.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Xsl::Runtime::StringConcat::*)()>(&::System::Xml::Xsl::Runtime::StringConcat::GetResult)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4392254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Xsl::Runtime::StringConcat>::get(), "GetResult",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Xsl::Runtime::StringConcat.ConcatNoDelimiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Xsl::Runtime::StringConcat::*)(::StringW)>(
    &::System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x4392348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Xsl::Runtime::StringConcat>::get(), "ConcatNoDelimiter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Xsl::Runtime::StringConcat::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Xsl::Runtime::StringConcat>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::Xsl::Runtime::StringConcat::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Xsl::Runtime::StringConcat>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Xsl::Runtime::StringConcat::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Xsl::Runtime::StringConcat>::get(), "GetResult",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Xsl::Runtime::StringConcat>::get(), "ConcatNoDelimiter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters [CppParam { name: "s1", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "s3", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "s4", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "delimiter", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "strList", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "idxStr", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Xsl::Runtime::StringConcat::StringConcat(::StringW s1, ::StringW s2, ::StringW s3, ::StringW s4, ::StringW delimiter,
                                                                  ::System::Collections::Generic::List_1<::StringW>* strList, int32_t idxStr) noexcept {
  this->s1 = s1;
  this->s2 = s2;
  this->s3 = s3;
  this->s4 = s4;
  this->delimiter = delimiter;
  this->strList = strList;
  this->idxStr = idxStr;
}
// Ctor Parameters []
constexpr ::System::Xml::Xsl::Runtime::StringConcat::StringConcat() {}
