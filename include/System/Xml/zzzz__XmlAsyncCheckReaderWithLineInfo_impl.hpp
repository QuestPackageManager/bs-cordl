#pragma once
// IWYU pragma private; include "System\Xml\XmlAsyncCheckReaderWithLineInfo.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReader_impl.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReaderWithLineInfo::*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlAsyncCheckReaderWithLineInfo::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61b3a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfo.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReaderWithLineInfo::*)()>(&::System::Xml::XmlAsyncCheckReaderWithLineInfo::HasLineInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x61b4c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), { ::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfo.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAsyncCheckReaderWithLineInfo::*)()>(&::System::Xml::XmlAsyncCheckReaderWithLineInfo::get_LineNumber)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61b4cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), { ::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), 79 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfo.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAsyncCheckReaderWithLineInfo::*)()>(&::System::Xml::XmlAsyncCheckReaderWithLineInfo::get_LinePosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61b4d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), { ::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), 80 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::XmlAsyncCheckReaderWithLineInfo::__cordl_internal_get_readerAsIXmlLineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAsIXmlLineInfo;
}
constexpr ::System::Xml::IXmlLineInfo* const& System::Xml::XmlAsyncCheckReaderWithLineInfo::__cordl_internal_get_readerAsIXmlLineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAsIXmlLineInfo;
}
constexpr void System::Xml::XmlAsyncCheckReaderWithLineInfo::__cordl_internal_set_readerAsIXmlLineInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readerAsIXmlLineInfo = value;
}
inline void System::Xml::XmlAsyncCheckReaderWithLineInfo::_ctor(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool System::Xml::XmlAsyncCheckReaderWithLineInfo::HasLineInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlAsyncCheckReaderWithLineInfo::get_LineNumber() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), 79 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlAsyncCheckReaderWithLineInfo::get_LinePosition() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::XmlAsyncCheckReaderWithLineInfo* System::Xml::XmlAsyncCheckReaderWithLineInfo::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(reader));
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Xml::XmlAsyncCheckReaderWithLineInfo::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Xml::XmlAsyncCheckReaderWithLineInfo::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAsyncCheckReaderWithLineInfo::XmlAsyncCheckReaderWithLineInfo() {}
