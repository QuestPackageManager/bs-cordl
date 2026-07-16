#pragma once
// IWYU pragma private; include "System/Xml/Xsl/Runtime/StringConcat.hpp"
#include "System/Xml/Xsl/Runtime/zzzz__StringConcat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::System::Xml::Xsl::Runtime::StringConcat.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Xsl::Runtime::StringConcat::*)()>(&::System::Xml::Xsl::Runtime::StringConcat::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6310f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Xsl::Runtime::StringConcat>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Xsl::Runtime::StringConcat.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Xsl::Runtime::StringConcat::*)()>(&::System::Xml::Xsl::Runtime::StringConcat::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6310f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Xsl::Runtime::StringConcat>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Xsl::Runtime::StringConcat.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Xsl::Runtime::StringConcat::*)()>(&::System::Xml::Xsl::Runtime::StringConcat::GetResult)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6310f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Xsl::Runtime::StringConcat>(), { "GetResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Xsl::Runtime::StringConcat.ConcatNoDelimiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Xsl::Runtime::StringConcat::*)(::StringW)>(&::System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x631105c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Xsl::Runtime::StringConcat>(), { "ConcatNoDelimiter", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Xsl::Runtime::StringConcat::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Xsl::Runtime::StringConcat>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t System::Xml::Xsl::Runtime::StringConcat::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Xsl::Runtime::StringConcat>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Xml::Xsl::Runtime::StringConcat::GetResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Xsl::Runtime::StringConcat>(), { "GetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Xsl::Runtime::StringConcat>(), { "ConcatNoDelimiter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s);
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
