#pragma once
// IWYU pragma private; include "System\Xml\Linq\XNode.hpp"
#include "System/Xml/Linq/zzzz__XObject_impl.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Linq/zzzz__SaveOptions_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XNode::*)()>(&::System::Xml::Linq::XNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61a4498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XNode.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XNode::*)()>(&::System::Xml::Linq::XNode::Remove)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61ab1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { "Remove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XNode.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XNode::*)()>(&::System::Xml::Linq::XNode::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61ab228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { ::i2c::class_of<::System::Xml::Linq::XNode*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XNode.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XNode::*)(::System::Xml::XmlWriter*)>(&::System::Xml::Linq::XNode::WriteTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { ::i2c::class_of<::System::Xml::Linq::XNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XNode.AppendText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XNode::*)(::System::Text::StringBuilder*)>(&::System::Xml::Linq::XNode::AppendText)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ab6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { ::i2c::class_of<::System::Xml::Linq::XNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XNode.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XNode* (::System::Xml::Linq::XNode::*)()>(&::System::Xml::Linq::XNode::CloneNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { ::i2c::class_of<::System::Xml::Linq::XNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XNode.GetXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XNode::*)(::System::Xml::Linq::SaveOptions)>(&::System::Xml::Linq::XNode::GetXmlString)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x61ab318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { "GetXmlString", {}, { ::i2c::type_of<::System::Xml::Linq::SaveOptions>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Linq::XNode*& System::Xml::Linq::XNode::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::Xml::Linq::XNode* const& System::Xml::Linq::XNode::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::Linq::XNode::__cordl_internal_set_next(::System::Xml::Linq::XNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
inline void System::Xml::Linq::XNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Linq::XNode::Remove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { "Remove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XNode::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XNode*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Linq::XNode::WriteTo(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::Linq::XNode::AppendText(::System::Text::StringBuilder* sb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline ::System::Xml::Linq::XNode* System::Xml::Linq::XNode::CloneNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNode*>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XNode::GetXmlString(::System::Xml::Linq::SaveOptions o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XNode*>(), { "GetXmlString", {}, { ::i2c::type_of<::System::Xml::Linq::SaveOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, o);
}
inline ::System::Xml::Linq::XNode* System::Xml::Linq::XNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XNode*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XNode::XNode() {}
