#pragma once
// IWYU pragma private; include "System\Xml\Linq\XCData.hpp"
#include "System/Xml/Linq/zzzz__XText_impl.hpp"
#include "System/Xml/Linq/zzzz__XCData_def.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XCData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XCData::*)(::StringW)>(&::System::Xml::Linq::XCData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61a42b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XCData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XCData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XCData::*)(::System::Xml::Linq::XCData*)>(&::System::Xml::Linq::XCData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61a4310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XCData*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XCData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XCData.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::Linq::XCData::*)()>(&::System::Xml::Linq::XCData::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a4370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XCData*>(), { ::i2c::class_of<::System::Xml::Linq::XCData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XCData.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XCData::*)(::System::Xml::XmlWriter*)>(&::System::Xml::Linq::XCData::WriteTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61a4378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XCData*>(), { ::i2c::class_of<::System::Xml::Linq::XCData*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XCData.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XNode* (::System::Xml::Linq::XCData::*)()>(&::System::Xml::Linq::XCData::CloneNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61a43e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XCData*>(), { ::i2c::class_of<::System::Xml::Linq::XCData*>(), 10 }));
    return ___internal_method;
  }
};
inline void System::Xml::Linq::XCData::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XCData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Linq::XCData::_ctor(::System::Xml::Linq::XCData* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XCData*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XCData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Xml::XmlNodeType System::Xml::Linq::XCData::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XCData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline void System::Xml::Linq::XCData::WriteTo(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XCData*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Xml::Linq::XNode* System::Xml::Linq::XCData::CloneNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XCData*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNode*>(this, ___internal_method);
}
inline ::System::Xml::Linq::XCData* System::Xml::Linq::XCData::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XCData*>(value));
}
inline ::System::Xml::Linq::XCData* System::Xml::Linq::XCData::New_ctor(::System::Xml::Linq::XCData* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XCData*>(other));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XCData::XCData() {}
