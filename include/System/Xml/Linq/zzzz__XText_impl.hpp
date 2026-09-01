#pragma once
// IWYU pragma private; include "System\Xml\Linq\XText.hpp"
#include "System/Xml/Linq/zzzz__XNode_impl.hpp"
#include "System/Xml/Linq/zzzz__XText_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XText::*)(::StringW)>(&::System::Xml::Linq::XText::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61a42b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XText::*)(::System::Xml::Linq::XText*)>(&::System::Xml::Linq::XText::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61a4314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XText*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XText.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::Linq::XText::*)()>(&::System::Xml::Linq::XText::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61abddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { ::i2c::class_of<::System::Xml::Linq::XText*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XText.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XText::*)()>(&::System::Xml::Linq::XText::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61abde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XText.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XText::*)(::StringW)>(&::System::Xml::Linq::XText::set_Value)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61a5e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XText.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XText::*)(::System::Xml::XmlWriter*)>(&::System::Xml::Linq::XText::WriteTo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x61abdec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { ::i2c::class_of<::System::Xml::Linq::XText*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XText.AppendText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XText::*)(::System::Text::StringBuilder*)>(&::System::Xml::Linq::XText::AppendText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61abee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { ::i2c::class_of<::System::Xml::Linq::XText*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XText.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XNode* (::System::Xml::Linq::XText::*)()>(&::System::Xml::Linq::XText::CloneNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61abf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { ::i2c::class_of<::System::Xml::Linq::XText*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Linq::XText::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::StringW const& System::Xml::Linq::XText::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void System::Xml::Linq::XText::__cordl_internal_set_text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___text = value;
}
inline void System::Xml::Linq::XText::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Linq::XText::_ctor(::System::Xml::Linq::XText* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XText*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Xml::XmlNodeType System::Xml::Linq::XText::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XText*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XText::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Linq::XText::set_Value(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XText*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Linq::XText::WriteTo(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XText*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::Linq::XText::AppendText(::System::Text::StringBuilder* sb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XText*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline ::System::Xml::Linq::XNode* System::Xml::Linq::XText::CloneNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XText*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNode*>(this, ___internal_method);
}
inline ::System::Xml::Linq::XText* System::Xml::Linq::XText::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XText*>(value));
}
inline ::System::Xml::Linq::XText* System::Xml::Linq::XText::New_ctor(::System::Xml::Linq::XText* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XText*>(other));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XText::XText() {}
