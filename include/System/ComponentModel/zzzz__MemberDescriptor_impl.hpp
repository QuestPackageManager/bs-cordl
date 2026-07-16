#pragma once
// IWYU pragma private; include "System/ComponentModel/MemberDescriptor.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MemberDescriptor::*)(::StringW, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::MemberDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x63c8b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MemberDescriptor::*)(::System::ComponentModel::MemberDescriptor*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::MemberDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x63c8cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.get_AttributeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (::System::ComponentModel::MemberDescriptor::*)()>(
    &::System::ComponentModel::MemberDescriptor::get_AttributeArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63c9100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.set_AttributeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MemberDescriptor::*)(::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::MemberDescriptor::set_AttributeArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63c9930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::MemberDescriptor::*)()>(
    &::System::ComponentModel::MemberDescriptor::get_Attributes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x63c99f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::MemberDescriptor::*)()>(&::System::ComponentModel::MemberDescriptor::get_Name)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x63c9ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.get_NameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::MemberDescriptor::*)()>(&::System::ComponentModel::MemberDescriptor::get_NameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c9b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::MemberDescriptor::*)()>(&::System::ComponentModel::MemberDescriptor::get_DisplayName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x63c9b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.CheckAttributesValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MemberDescriptor::*)()>(&::System::ComponentModel::MemberDescriptor::CheckAttributesValid)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x63c9120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { "CheckAttributesValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.CreateAttributeCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::MemberDescriptor::*)()>(
    &::System::ComponentModel::MemberDescriptor::CreateAttributeCollection)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x63c9c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::MemberDescriptor::*)(::System::Object*)>(&::System::ComponentModel::MemberDescriptor::Equals)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x63c9cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.FillAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MemberDescriptor::*)(::System::Collections::IList*)>(
    &::System::ComponentModel::MemberDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x63c9f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.FilterAttributesIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MemberDescriptor::*)()>(&::System::ComponentModel::MemberDescriptor::FilterAttributesIfNeeded)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x63c91dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { "FilterAttributesIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.FindMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>, ::System::Type*)>(
    &::System::ComponentModel::MemberDescriptor::FindMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ca030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(),
                            { "FindMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.FindMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>, ::System::Type*, bool)>(
    &::System::ComponentModel::MemberDescriptor::FindMethod)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63ca038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(),
                                                             { "FindMethod",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::MemberDescriptor::*)()>(&::System::ComponentModel::MemberDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ca0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.GetInvocationTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::MemberDescriptor::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::MemberDescriptor::GetInvocationTarget)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63ca0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MemberDescriptor.GetSite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISite* (*)(::System::Object*)>(&::System::ComponentModel::MemberDescriptor::GetSite)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x63ca84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { "GetSite", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::MemberDescriptor::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::ComponentModel::MemberDescriptor::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayName = value;
}
constexpr int32_t& System::ComponentModel::MemberDescriptor::__cordl_internal_get_nameHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameHash;
}
constexpr int32_t const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_nameHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameHash;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_nameHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameHash = value;
}
constexpr ::System::ComponentModel::AttributeCollection*& System::ComponentModel::MemberDescriptor::__cordl_internal_get_attributeCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCollection;
}
constexpr ::System::ComponentModel::AttributeCollection* const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_attributeCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCollection;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_attributeCollection(::System::ComponentModel::AttributeCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCollection = value;
}
constexpr ::ArrayW<::System::Attribute*>& System::ComponentModel::MemberDescriptor::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::ArrayW<::System::Attribute*> const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_attributes(::ArrayW<::System::Attribute*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
constexpr ::ArrayW<::System::Attribute*>& System::ComponentModel::MemberDescriptor::__cordl_internal_get_originalAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalAttributes;
}
constexpr ::ArrayW<::System::Attribute*> const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_originalAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalAttributes;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_originalAttributes(::ArrayW<::System::Attribute*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalAttributes = value;
}
constexpr bool& System::ComponentModel::MemberDescriptor::__cordl_internal_get_attributesFiltered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributesFiltered;
}
constexpr bool const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_attributesFiltered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributesFiltered;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_attributesFiltered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributesFiltered = value;
}
constexpr bool& System::ComponentModel::MemberDescriptor::__cordl_internal_get_attributesFilled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributesFilled;
}
constexpr bool const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_attributesFilled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributesFilled;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_attributesFilled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributesFilled = value;
}
constexpr int32_t& System::ComponentModel::MemberDescriptor::__cordl_internal_get_metadataVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metadataVersion;
}
constexpr int32_t const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_metadataVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metadataVersion;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_metadataVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___metadataVersion = value;
}
constexpr ::StringW& System::ComponentModel::MemberDescriptor::__cordl_internal_get_category() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr ::StringW const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_category() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_category(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___category = value;
}
constexpr ::StringW& System::ComponentModel::MemberDescriptor::__cordl_internal_get_description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr ::StringW const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___description = value;
}
constexpr ::System::Object*& System::ComponentModel::MemberDescriptor::__cordl_internal_get_lockCookie() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockCookie;
}
constexpr ::System::Object* const& System::ComponentModel::MemberDescriptor::__cordl_internal_get_lockCookie() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockCookie;
}
constexpr void System::ComponentModel::MemberDescriptor::__cordl_internal_set_lockCookie(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lockCookie = value;
}
inline void System::ComponentModel::MemberDescriptor::_ctor(::StringW name, ::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attributes);
}
inline void System::ComponentModel::MemberDescriptor::_ctor(::System::ComponentModel::MemberDescriptor* oldMemberDescriptor, ::ArrayW<::System::Attribute*> newAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldMemberDescriptor, newAttributes);
}
inline ::ArrayW<::System::Attribute*> System::ComponentModel::MemberDescriptor::get_AttributeArray() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(this, ___internal_method);
}
inline void System::ComponentModel::MemberDescriptor::set_AttributeArray(::ArrayW<::System::Attribute*> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::MemberDescriptor::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::MemberDescriptor::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::ComponentModel::MemberDescriptor::get_NameHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::MemberDescriptor::get_DisplayName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::MemberDescriptor::CheckAttributesValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { "CheckAttributesValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::MemberDescriptor::CreateAttributeCollection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline bool System::ComponentModel::MemberDescriptor::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void System::ComponentModel::MemberDescriptor::FillAttributes(::System::Collections::IList* attributeList) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeList);
}
inline void System::ComponentModel::MemberDescriptor::FilterAttributesIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { "FilterAttributesIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::ComponentModel::MemberDescriptor::FindMethod(::System::Type* componentClass, ::StringW name, ::ArrayW<::System::Type*> args,
                                                                                              ::System::Type* returnType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(),
                          { "FindMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, componentClass, name, args, returnType);
}
inline ::System::Reflection::MethodInfo* System::ComponentModel::MemberDescriptor::FindMethod(::System::Type* componentClass, ::StringW name, ::ArrayW<::System::Type*> args,
                                                                                              ::System::Type* returnType, bool publicOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(),
                                                           { "FindMethod",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, componentClass, name, args, returnType, publicOnly);
}
inline int32_t System::ComponentModel::MemberDescriptor::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::MemberDescriptor::GetInvocationTarget(::System::Type* type, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, instance);
}
inline ::System::ComponentModel::ISite* System::ComponentModel::MemberDescriptor::GetSite(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::MemberDescriptor*>(), { "GetSite", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::MemberDescriptor* System::ComponentModel::MemberDescriptor::New_ctor(::StringW name, ::ArrayW<::System::Attribute*> attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::MemberDescriptor*>(name, attributes));
}
inline ::System::ComponentModel::MemberDescriptor* System::ComponentModel::MemberDescriptor::New_ctor(::System::ComponentModel::MemberDescriptor* oldMemberDescriptor,
                                                                                                      ::ArrayW<::System::Attribute*> newAttributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::MemberDescriptor*>(oldMemberDescriptor, newAttributes));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::MemberDescriptor::MemberDescriptor() {}
