#pragma once
// IWYU pragma private; include "System\Xml\ReaderPositionInfo.hpp"
#include "System/Xml/zzzz__PositionInfo_impl.hpp"
#include "System/Xml/zzzz__ReaderPositionInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::ReaderPositionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ReaderPositionInfo::*)(::System::Xml::IXmlLineInfo*)>(&::System::Xml::ReaderPositionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cdde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReaderPositionInfo.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ReaderPositionInfo::*)()>(&::System::Xml::ReaderPositionInfo::HasLineInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62cddec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), { ::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReaderPositionInfo.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ReaderPositionInfo::*)()>(&::System::Xml::ReaderPositionInfo::get_LineNumber)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62cde90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), { ::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReaderPositionInfo.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ReaderPositionInfo::*)()>(&::System::Xml::ReaderPositionInfo::get_LinePosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62cdf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), { ::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::ReaderPositionInfo::__cordl_internal_get_lineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr ::System::Xml::IXmlLineInfo* const& System::Xml::ReaderPositionInfo::__cordl_internal_get_lineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr void System::Xml::ReaderPositionInfo::__cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineInfo = value;
}
inline void System::Xml::ReaderPositionInfo::_ctor(::System::Xml::IXmlLineInfo* lineInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineInfo);
}
inline bool System::Xml::ReaderPositionInfo::HasLineInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::ReaderPositionInfo::get_LineNumber() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::ReaderPositionInfo::get_LinePosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::ReaderPositionInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::ReaderPositionInfo* System::Xml::ReaderPositionInfo::New_ctor(::System::Xml::IXmlLineInfo* lineInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::ReaderPositionInfo*>(lineInfo));
}
// Ctor Parameters []
constexpr ::System::Xml::ReaderPositionInfo::ReaderPositionInfo() {}
