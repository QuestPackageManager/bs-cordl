#pragma once
// IWYU pragma private; include "System\Xml\Linq\XName.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XName_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Xml/Linq/zzzz__XNamespace_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XName::*)(::System::Xml::Linq::XNamespace*, ::StringW)>(&::System::Xml::Linq::XName::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x61aa608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XNamespace*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XName::*)()>(&::System::Xml::Linq::XName::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61aa6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "get_LocalName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XNamespace* (::System::Xml::Linq::XName::*)()>(&::System::Xml::Linq::XName::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61aa6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.get_NamespaceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XName::*)()>(&::System::Xml::Linq::XName::get_NamespaceName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61a3948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "get_NamespaceName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XName::*)()>(&::System::Xml::Linq::XName::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61aa6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { ::i2c::class_of<::System::Xml::Linq::XName*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XName* (*)(::StringW)>(&::System::Xml::Linq::XName::Get)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x61aa760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XName* (*)(::StringW, ::StringW)>(&::System::Xml::Linq::XName::Get)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61aad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "Get", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.op_Implicit___System__Xml__Linq__XName_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XName* (*)(::StringW)>(&::System::Xml::Linq::XName::op_Implicit___System__Xml__Linq__XName_)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61aad98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Linq::XName::*)(::System::Object*)>(&::System::Xml::Linq::XName::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61aada4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { ::i2c::class_of<::System::Xml::Linq::XName*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Linq::XName::*)()>(&::System::Xml::Linq::XName::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61aadb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { ::i2c::class_of<::System::Xml::Linq::XName*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::Linq::XName*, ::System::Xml::Linq::XName*)>(&::System::Xml::Linq::XName::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61a3280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Xml::Linq::XName*>(), ::i2c::type_of<::System::Xml::Linq::XName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.System_IEquatable_System_Xml_Linq_XName__Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Linq::XName::*)(::System::Xml::Linq::XName*)>(
    &::System::Xml::Linq::XName::System_IEquatable_System_Xml_Linq_XName__Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61aadb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "System.IEquatable<System.Xml.Linq.XName>.Equals", {}, { ::i2c::type_of<::System::Xml::Linq::XName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XName::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Xml::Linq::XName::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x61aadc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XName::*)()>(&::System::Xml::Linq::XName::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x61aadfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Linq::XNamespace*& System::Xml::Linq::XName::__cordl_internal_get__ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ns;
}
constexpr ::System::Xml::Linq::XNamespace* const& System::Xml::Linq::XName::__cordl_internal_get__ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ns;
}
constexpr void System::Xml::Linq::XName::__cordl_internal_set__ns(::System::Xml::Linq::XNamespace* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ns = value;
}
constexpr ::StringW& System::Xml::Linq::XName::__cordl_internal_get__localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localName;
}
constexpr ::StringW const& System::Xml::Linq::XName::__cordl_internal_get__localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localName;
}
constexpr void System::Xml::Linq::XName::__cordl_internal_set__localName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localName = value;
}
constexpr int32_t& System::Xml::Linq::XName::__cordl_internal_get__hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCode;
}
constexpr int32_t const& System::Xml::Linq::XName::__cordl_internal_get__hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCode;
}
constexpr void System::Xml::Linq::XName::__cordl_internal_set__hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashCode = value;
}
inline void System::Xml::Linq::XName::_ctor(::System::Xml::Linq::XNamespace* ns, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XNamespace*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ns, localName);
}
inline ::StringW System::Xml::Linq::XName::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "get_LocalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Linq::XNamespace* System::Xml::Linq::XName::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNamespace*>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XName::get_NamespaceName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "get_NamespaceName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XName::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XName*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Linq::XName* System::Xml::Linq::XName::Get(::StringW expandedName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XName*>(nullptr, ___internal_method, expandedName);
}
inline ::System::Xml::Linq::XName* System::Xml::Linq::XName::Get(::StringW localName, ::StringW namespaceName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "Get", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XName*>(nullptr, ___internal_method, localName, namespaceName);
}
inline ::System::Xml::Linq::XName* System::Xml::Linq::XName::op_Implicit___System__Xml__Linq__XName_(::StringW expandedName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XName*>(nullptr, ___internal_method, expandedName);
}
inline bool System::Xml::Linq::XName::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XName*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Xml::Linq::XName::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XName*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Linq::XName::op_Equality(::System::Xml::Linq::XName* left, ::System::Xml::Linq::XName* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Xml::Linq::XName*>(), ::i2c::type_of<::System::Xml::Linq::XName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Xml::Linq::XName::System_IEquatable_System_Xml_Linq_XName__Equals(::System::Xml::Linq::XName* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { "System.IEquatable<System.Xml.Linq.XName>.Equals", {}, { ::i2c::type_of<::System::Xml::Linq::XName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void System::Xml::Linq::XName::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                               ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Xml::Linq::XName::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XName*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Linq::XName* System::Xml::Linq::XName::New_ctor(::System::Xml::Linq::XNamespace* ns, ::StringW localName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XName*>(ns, localName));
}
inline ::System::Xml::Linq::XName* System::Xml::Linq::XName::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XName*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Xml::Linq::XName*>"
constexpr System::Xml::Linq::XName::operator ::System::IEquatable_1<::System::Xml::Linq::XName*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::Xml::Linq::XName*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::Xml::Linq::XName*>"
constexpr ::System::IEquatable_1<::System::Xml::Linq::XName*>* System::Xml::Linq::XName::i___System__IEquatable_1___System__Xml__Linq__XName__() noexcept {
  return static_cast<::System::IEquatable_1<::System::Xml::Linq::XName*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Xml::Linq::XName::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Xml::Linq::XName::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XName::XName() {}
