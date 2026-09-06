#pragma once
// IWYU pragma private; include "System/Xml/IDtdInfo.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeListInfo_def.hpp"
#include "System/Xml/zzzz__IDtdEntityInfo_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::IDtdInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::IDtdInfo::*)()>(&::System::Xml::IDtdInfo::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdInfo*>(), { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdInfo.get_InternalDtdSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::IDtdInfo::*)()>(&::System::Xml::IDtdInfo::get_InternalDtdSubset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdInfo*>(), { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdInfo.get_HasDefaultAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdInfo::*)()>(&::System::Xml::IDtdInfo::get_HasDefaultAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdInfo*>(), { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdInfo.get_HasNonCDataAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdInfo::*)()>(&::System::Xml::IDtdInfo::get_HasNonCDataAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdInfo*>(), { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdInfo.LookupAttributeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdAttributeListInfo* (::System::Xml::IDtdInfo::*)(::StringW, ::StringW)>(&::System::Xml::IDtdInfo::LookupAttributeList)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdInfo*>(), { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdInfo.LookupEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdEntityInfo* (::System::Xml::IDtdInfo::*)(::StringW)>(&::System::Xml::IDtdInfo::LookupEntity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdInfo*>(), { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 5 }));
    return ___internal_method;
  }
};
inline ::System::Xml::XmlQualifiedName* System::Xml::IDtdInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::StringW System::Xml::IDtdInfo::get_InternalDtdSubset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::IDtdInfo::get_HasDefaultAttributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::IDtdInfo::get_HasNonCDataAttributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::IDtdAttributeListInfo* System::Xml::IDtdInfo::LookupAttributeList(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdAttributeListInfo*>(this, ___internal_method, prefix, localName);
}
inline ::System::Xml::IDtdEntityInfo* System::Xml::IDtdInfo::LookupEntity(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdEntityInfo*>(this, ___internal_method, name);
}
