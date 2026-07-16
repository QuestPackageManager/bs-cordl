#pragma once
// IWYU pragma private; include "System/Xml/Linq/XDocumentType.hpp"
#include "System/Xml/Linq/zzzz__XNode_impl.hpp"
#include "System/Xml/Linq/zzzz__XDocumentType_def.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocumentType::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::Linq::XDocumentType::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x61a217c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocumentType::*)(::System::Xml::Linq::XDocumentType*)>(&::System::Xml::Linq::XDocumentType::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61a2fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XDocumentType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType.get_InternalSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XDocumentType::*)()>(&::System::Xml::Linq::XDocumentType::get_InternalSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a3038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { "get_InternalSubset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XDocumentType::*)()>(&::System::Xml::Linq::XDocumentType::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a3040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::Linq::XDocumentType::*)()>(&::System::Xml::Linq::XDocumentType::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a3048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { ::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType.get_PublicId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XDocumentType::*)()>(&::System::Xml::Linq::XDocumentType::get_PublicId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a3050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { "get_PublicId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType.get_SystemId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XDocumentType::*)()>(&::System::Xml::Linq::XDocumentType::get_SystemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a3058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { "get_SystemId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocumentType::*)(::System::Xml::XmlWriter*)>(&::System::Xml::Linq::XDocumentType::WriteTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61a3060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { ::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocumentType.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XNode* (::System::Xml::Linq::XDocumentType::*)()>(&::System::Xml::Linq::XDocumentType::CloneNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61a30cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { ::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Linq::XDocumentType::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Xml::Linq::XDocumentType::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Xml::Linq::XDocumentType::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::StringW& System::Xml::Linq::XDocumentType::__cordl_internal_get__publicId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicId;
}
constexpr ::StringW const& System::Xml::Linq::XDocumentType::__cordl_internal_get__publicId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicId;
}
constexpr void System::Xml::Linq::XDocumentType::__cordl_internal_set__publicId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____publicId = value;
}
constexpr ::StringW& System::Xml::Linq::XDocumentType::__cordl_internal_get__systemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemId;
}
constexpr ::StringW const& System::Xml::Linq::XDocumentType::__cordl_internal_get__systemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemId;
}
constexpr void System::Xml::Linq::XDocumentType::__cordl_internal_set__systemId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____systemId = value;
}
constexpr ::StringW& System::Xml::Linq::XDocumentType::__cordl_internal_get__internalSubset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalSubset;
}
constexpr ::StringW const& System::Xml::Linq::XDocumentType::__cordl_internal_get__internalSubset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalSubset;
}
constexpr void System::Xml::Linq::XDocumentType::__cordl_internal_set__internalSubset(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____internalSubset = value;
}
inline void System::Xml::Linq::XDocumentType::_ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, publicId, systemId, internalSubset);
}
inline void System::Xml::Linq::XDocumentType::_ctor(::System::Xml::Linq::XDocumentType* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XDocumentType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::StringW System::Xml::Linq::XDocumentType::get_InternalSubset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { "get_InternalSubset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XDocumentType::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::Linq::XDocumentType::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XDocumentType::get_PublicId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { "get_PublicId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XDocumentType::get_SystemId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), { "get_SystemId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Linq::XDocumentType::WriteTo(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Xml::Linq::XNode* System::Xml::Linq::XDocumentType::CloneNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocumentType*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNode*>(this, ___internal_method);
}
inline ::System::Xml::Linq::XDocumentType* System::Xml::Linq::XDocumentType::New_ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XDocumentType*>(name, publicId, systemId, internalSubset));
}
inline ::System::Xml::Linq::XDocumentType* System::Xml::Linq::XDocumentType::New_ctor(::System::Xml::Linq::XDocumentType* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XDocumentType*>(other));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XDocumentType::XDocumentType() {}
