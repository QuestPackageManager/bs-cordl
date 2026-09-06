#pragma once
// IWYU pragma private; include "System/Xml/IXmlLineInfo.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::IXmlLineInfo.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IXmlLineInfo::*)()>(&::System::Xml::IXmlLineInfo::HasLineInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IXmlLineInfo*>(), { ::i2c::class_of<::System::Xml::IXmlLineInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IXmlLineInfo.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IXmlLineInfo::*)()>(&::System::Xml::IXmlLineInfo::get_LineNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IXmlLineInfo*>(), { ::i2c::class_of<::System::Xml::IXmlLineInfo*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IXmlLineInfo.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IXmlLineInfo::*)()>(&::System::Xml::IXmlLineInfo::get_LinePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IXmlLineInfo*>(), { ::i2c::class_of<::System::Xml::IXmlLineInfo*>(), 2 }));
    return ___internal_method;
  }
};
inline bool System::Xml::IXmlLineInfo::HasLineInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IXmlLineInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::IXmlLineInfo::get_LineNumber() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IXmlLineInfo*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::IXmlLineInfo::get_LinePosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IXmlLineInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
