#pragma once
// IWYU pragma private; include "System\Xml\Serialization\EnumMap.hpp"
#include "System/Xml/Serialization/zzzz__ObjectMap_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__EnumMap_def.hpp"
#include "System/Xml/Serialization/zzzz__EnumMap_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap_EnumMapMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::EnumMap_EnumMapMember::*)(::StringW, ::StringW, int64_t)>(
    &::System::Xml::Serialization::EnumMap_EnumMapMember::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63166f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap_EnumMapMember*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap_EnumMapMember.get_XmlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::EnumMap_EnumMapMember::*)()>(&::System::Xml::Serialization::EnumMap_EnumMapMember::get_XmlName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap_EnumMapMember*>(), { "get_XmlName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap_EnumMapMember.get_EnumName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::EnumMap_EnumMapMember::*)()>(&::System::Xml::Serialization::EnumMap_EnumMapMember::get_EnumName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap_EnumMapMember*>(), { "get_EnumName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap_EnumMapMember.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Serialization::EnumMap_EnumMapMember::*)()>(&::System::Xml::Serialization::EnumMap_EnumMapMember::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap_EnumMapMember*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_get__xmlName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlName;
}
constexpr ::StringW const& System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_get__xmlName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlName;
}
constexpr void System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_set__xmlName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlName = value;
}
constexpr ::StringW& System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_get__enumName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumName;
}
constexpr ::StringW const& System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_get__enumName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumName;
}
constexpr void System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_set__enumName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enumName = value;
}
constexpr int64_t& System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int64_t const& System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void System::Xml::Serialization::EnumMap_EnumMapMember::__cordl_internal_set__value(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
inline void System::Xml::Serialization::EnumMap_EnumMapMember::_ctor(::StringW xmlName, ::StringW enumName, int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap_EnumMapMember*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlName, enumName, value);
}
inline ::StringW System::Xml::Serialization::EnumMap_EnumMapMember::get_XmlName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap_EnumMapMember*>(), { "get_XmlName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::EnumMap_EnumMapMember::get_EnumName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap_EnumMapMember*>(), { "get_EnumName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t System::Xml::Serialization::EnumMap_EnumMapMember::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap_EnumMapMember*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::Xml::Serialization::EnumMap_EnumMapMember* System::Xml::Serialization::EnumMap_EnumMapMember::New_ctor(::StringW xmlName, ::StringW enumName, int64_t value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::EnumMap_EnumMapMember*>(xmlName, enumName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::EnumMap_EnumMapMember::EnumMap_EnumMapMember() {}
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::EnumMap::*)(::ArrayW<::System::Xml::Serialization::EnumMap_EnumMapMember*>, bool)>(
    &::System::Xml::Serialization::EnumMap::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x63162d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Serialization::EnumMap_EnumMapMember*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.get_IsFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::EnumMap::*)()>(&::System::Xml::Serialization::EnumMap::get_IsFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "get_IsFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.get_EnumNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Xml::Serialization::EnumMap::*)()>(&::System::Xml::Serialization::EnumMap::get_EnumNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "get_EnumNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.get_XmlNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Xml::Serialization::EnumMap::*)()>(&::System::Xml::Serialization::EnumMap::get_XmlNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "get_XmlNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int64_t> (::System::Xml::Serialization::EnumMap::*)()>(&::System::Xml::Serialization::EnumMap::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.GetXmlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::EnumMap::*)(::StringW, ::System::Object*)>(&::System::Xml::Serialization::EnumMap::GetXmlName)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x631084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "GetXmlName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.GetEnumName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::EnumMap::*)(::StringW, ::StringW)>(&::System::Xml::Serialization::EnumMap::GetEnumName)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6316438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "GetEnumName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::Serialization::EnumMap_EnumMapMember*>& System::Xml::Serialization::EnumMap::__cordl_internal_get__members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____members;
}
constexpr ::ArrayW<::System::Xml::Serialization::EnumMap_EnumMapMember*> const& System::Xml::Serialization::EnumMap::__cordl_internal_get__members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____members;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__members(::ArrayW<::System::Xml::Serialization::EnumMap_EnumMapMember*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____members = value;
}
constexpr bool& System::Xml::Serialization::EnumMap::__cordl_internal_get__isFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFlags;
}
constexpr bool const& System::Xml::Serialization::EnumMap::__cordl_internal_get__isFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFlags;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__isFlags(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFlags = value;
}
constexpr ::ArrayW<::StringW>& System::Xml::Serialization::EnumMap::__cordl_internal_get__enumNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumNames;
}
constexpr ::ArrayW<::StringW> const& System::Xml::Serialization::EnumMap::__cordl_internal_get__enumNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumNames;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__enumNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enumNames = value;
}
constexpr ::ArrayW<::StringW>& System::Xml::Serialization::EnumMap::__cordl_internal_get__xmlNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlNames;
}
constexpr ::ArrayW<::StringW> const& System::Xml::Serialization::EnumMap::__cordl_internal_get__xmlNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlNames;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__xmlNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlNames = value;
}
constexpr ::ArrayW<int64_t>& System::Xml::Serialization::EnumMap::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<int64_t> const& System::Xml::Serialization::EnumMap::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__values(::ArrayW<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline void System::Xml::Serialization::EnumMap::_ctor(::ArrayW<::System::Xml::Serialization::EnumMap_EnumMapMember*> members, bool isFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Serialization::EnumMap_EnumMapMember*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, members, isFlags);
}
inline bool System::Xml::Serialization::EnumMap::get_IsFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "get_IsFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Xml::Serialization::EnumMap::get_EnumNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "get_EnumNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Xml::Serialization::EnumMap::get_XmlNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "get_XmlNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int64_t> System::Xml::Serialization::EnumMap::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t>>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::EnumMap::GetXmlName(::StringW typeName, ::System::Object* enumValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "GetXmlName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, typeName, enumValue);
}
inline ::StringW System::Xml::Serialization::EnumMap::GetEnumName(::StringW typeName, ::StringW xmlName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::EnumMap*>(), { "GetEnumName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, typeName, xmlName);
}
inline ::System::Xml::Serialization::EnumMap* System::Xml::Serialization::EnumMap::New_ctor(::ArrayW<::System::Xml::Serialization::EnumMap_EnumMapMember*> members, bool isFlags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::EnumMap*>(members, isFlags));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::EnumMap::EnumMap() {}
