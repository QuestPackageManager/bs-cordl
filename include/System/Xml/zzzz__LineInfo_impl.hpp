#pragma once
// IWYU pragma private; include "System/Xml/LineInfo.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::LineInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::LineInfo::*)(int32_t, int32_t)>(&::System::Xml::LineInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c87c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::LineInfo>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::LineInfo.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::LineInfo::*)(int32_t, int32_t)>(&::System::Xml::LineInfo::Set)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c87d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::LineInfo>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::LineInfo::_ctor(int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::LineInfo>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lineNo, linePos);
}
inline void System::Xml::LineInfo::Set(int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::LineInfo>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lineNo, linePos);
}
// Ctor Parameters [CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linePos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::LineInfo::LineInfo(int32_t lineNo, int32_t linePos) noexcept {
  this->lineNo = lineNo;
  this->linePos = linePos;
}
// Ctor Parameters []
constexpr ::System::Xml::LineInfo::LineInfo() {}
