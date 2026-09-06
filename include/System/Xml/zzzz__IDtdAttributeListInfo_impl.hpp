#pragma once
// IWYU pragma private; include "System/Xml/IDtdAttributeListInfo.hpp"
#include "System/Xml/zzzz__IDtdAttributeListInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.get_HasNonCDataAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdAttributeListInfo::*)()>(&::System::Xml::IDtdAttributeListInfo::get_HasNonCDataAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), { ::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.LookupAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdAttributeInfo* (::System::Xml::IDtdAttributeListInfo::*)(::StringW, ::StringW)>(
    &::System::Xml::IDtdAttributeListInfo::LookupAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), { ::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.LookupDefaultAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* (::System::Xml::IDtdAttributeListInfo::*)()>(
    &::System::Xml::IDtdAttributeListInfo::LookupDefaultAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), { ::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), 2 }));
    return ___internal_method;
  }
};
inline bool System::Xml::IDtdAttributeListInfo::get_HasNonCDataAttributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::IDtdAttributeInfo* System::Xml::IDtdAttributeListInfo::LookupAttribute(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdAttributeInfo*>(this, ___internal_method, prefix, localName);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* System::Xml::IDtdAttributeListInfo::LookupDefaultAttributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdAttributeListInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>*>(this, ___internal_method);
}
