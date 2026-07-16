#pragma once
// IWYU pragma private; include "System/Xml/Serialization/TypeMember.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__TypeMember_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::TypeMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::TypeMember::*)(::System::Type*, ::StringW)>(&::System::Xml::Serialization::TypeMember::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e9608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeMember.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::TypeMember::*)()>(&::System::Xml::Serialization::TypeMember::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62e9610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), { ::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeMember.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::TypeMember::*)(::System::Object*)>(&::System::Xml::Serialization::TypeMember::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62e9658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), { ::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeMember.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::Serialization::TypeMember*, ::System::Xml::Serialization::TypeMember*)>(
    &::System::Xml::Serialization::TypeMember::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62e96d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeMember*>(),
                                                { "Equals", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeMember*>(), ::i2c::type_of<::System::Xml::Serialization::TypeMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeMember.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::TypeMember::*)()>(&::System::Xml::Serialization::TypeMember::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62e9758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), { ::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Xml::Serialization::TypeMember::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Xml::Serialization::TypeMember::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::Serialization::TypeMember::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& System::Xml::Serialization::TypeMember::__cordl_internal_get_member() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___member;
}
constexpr ::StringW const& System::Xml::Serialization::TypeMember::__cordl_internal_get_member() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___member;
}
constexpr void System::Xml::Serialization::TypeMember::__cordl_internal_set_member(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___member = value;
}
inline void System::Xml::Serialization::TypeMember::_ctor(::System::Type* type, ::StringW member) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, member);
}
inline int32_t System::Xml::Serialization::TypeMember::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Serialization::TypeMember::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Xml::Serialization::TypeMember::Equals(::System::Xml::Serialization::TypeMember* tm1, ::System::Xml::Serialization::TypeMember* tm2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeMember*>(),
                                              { "Equals", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeMember*>(), ::i2c::type_of<::System::Xml::Serialization::TypeMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tm1, tm2);
}
inline ::StringW System::Xml::Serialization::TypeMember::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::TypeMember*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Serialization::TypeMember* System::Xml::Serialization::TypeMember::New_ctor(::System::Type* type, ::StringW member) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::TypeMember*>(type, member));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::TypeMember::TypeMember() {}
