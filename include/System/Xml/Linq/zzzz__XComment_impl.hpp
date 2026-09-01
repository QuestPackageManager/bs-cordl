#pragma once
// IWYU pragma private; include "System\Xml\Linq\XComment.hpp"
#include "System/Xml/Linq/zzzz__XNode_impl.hpp"
#include "System/Xml/Linq/zzzz__XComment_def.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XComment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XComment::*)(::StringW)>(&::System::Xml::Linq::XComment::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61a4440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XComment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XComment::*)(::System::Xml::Linq::XComment*)>(&::System::Xml::Linq::XComment::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61a449c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XComment*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XComment.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::Linq::XComment::*)()>(&::System::Xml::Linq::XComment::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a44f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { ::i2c::class_of<::System::Xml::Linq::XComment*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XComment.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XComment::*)()>(&::System::Xml::Linq::XComment::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a4500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XComment.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XComment::*)(::StringW)>(&::System::Xml::Linq::XComment::set_Value)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61a4508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XComment.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XComment::*)(::System::Xml::XmlWriter*)>(&::System::Xml::Linq::XComment::WriteTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61a4608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { ::i2c::class_of<::System::Xml::Linq::XComment*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XComment.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XNode* (::System::Xml::Linq::XComment::*)()>(&::System::Xml::Linq::XComment::CloneNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61a4674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { ::i2c::class_of<::System::Xml::Linq::XComment*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Linq::XComment::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Xml::Linq::XComment::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Xml::Linq::XComment::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void System::Xml::Linq::XComment::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Linq::XComment::_ctor(::System::Xml::Linq::XComment* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XComment*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Xml::XmlNodeType System::Xml::Linq::XComment::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XComment*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XComment::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Linq::XComment::set_Value(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XComment*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Linq::XComment::WriteTo(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XComment*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Xml::Linq::XNode* System::Xml::Linq::XComment::CloneNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XComment*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNode*>(this, ___internal_method);
}
inline ::System::Xml::Linq::XComment* System::Xml::Linq::XComment::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XComment*>(value));
}
inline ::System::Xml::Linq::XComment* System::Xml::Linq::XComment::New_ctor(::System::Xml::Linq::XComment* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XComment*>(other));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XComment::XComment() {}
