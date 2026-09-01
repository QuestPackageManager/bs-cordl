#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\ObjectMap.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectMap_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SizedArray_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectMap::*)(
    ::StringW, ::System::Type*, ::ArrayW<::StringW>, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int32_t,
    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5b59cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectMap::*)(
    ::StringW, ::ArrayW<::StringW>, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>, ::ArrayW<::System::Object*>, ::ArrayW<int32_t>,
    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int32_t, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::SizedArray*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5b59ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                    ::i2c::type_of<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                    ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap.CreateObjectInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectMap::*)(::by_ref<::System::Runtime::Serialization::SerializationInfo*>, ::by_ref<::ArrayW<::System::Object*>>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectMap::CreateObjectInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b5a19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                         { "CreateObjectInfo", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Serialization::SerializationInfo*>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* (*)(::StringW, ::System::Type*, ::ArrayW<::StringW>, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int32_t,
                                                                         ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b5a1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::
                    ObjectMap* (*)(::StringW, ::ArrayW<::StringW>, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>, ::ArrayW<::System::Object*>, ::ArrayW<int32_t>,
                                   ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int32_t, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*,
                                   ::System::Runtime::Serialization::Formatters::Binary::SizedArray*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b5a27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                                                { "Create",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                    ::i2c::type_of<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                    ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectName = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectType = value;
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_binaryTypeEnumA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnumA;
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> const&
System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_binaryTypeEnumA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnumA;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_binaryTypeEnumA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryTypeEnumA = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_typeInformationA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformationA;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_typeInformationA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformationA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_typeInformationA(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeInformationA = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_memberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_memberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_memberTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberTypes = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_memberNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberNames = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfo;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectInfo = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_isInitObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitObjectInfo;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_isInitObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitObjectInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_isInitObjectInfo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInitObjectInfo = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectReader;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectReader;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectReader = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectId = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_assemblyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyInfo;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_assemblyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_assemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblyInfo = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW> memberNames,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectName, objectType, memberNames, objectReader, objectId, assemblyInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor(::StringW objectName, ::ArrayW<::StringW> memberNames,
                                                                                 ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA,
                                                                                 ::ArrayW<::System::Object*> typeInformationA, ::ArrayW<int32_t> memberAssemIds,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>(),
                              ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectName, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, objectReader, objectId, assemblyInfo,
                                                   assemIdToAssemblyTable);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
System::Runtime::Serialization::Formatters::Binary::ObjectMap::CreateObjectInfo(::by_ref<::System::Runtime::Serialization::SerializationInfo*> si, ::by_ref<::ArrayW<::System::Object*>> memberData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                          { "CreateObjectInfo", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Serialization::SerializationInfo*>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(this, ___internal_method, si, memberData);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap*
System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create(::StringW name, ::System::Type* objectType, ::ArrayW<::StringW> memberNames,
                                                                      ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                      ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(nullptr, ___internal_method, name, objectType, memberNames, objectReader, objectId,
                                                                                                               assemblyInfo);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create(
    ::StringW name, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::System::Object*> typeInformationA,
    ::ArrayW<int32_t> memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(),
                          { "Create",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>(),
                              ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(nullptr, ___internal_method, name, memberNames, binaryTypeEnumA, typeInformationA,
                                                                                                               memberAssemIds, objectReader, objectId, assemblyInfo, assemIdToAssemblyTable);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap*
System::Runtime::Serialization::Formatters::Binary::ObjectMap::New_ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW> memberNames,
                                                                        ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                        ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(objectName, objectType, memberNames, objectReader, objectId, assemblyInfo));
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* System::Runtime::Serialization::Formatters::Binary::ObjectMap::New_ctor(
    ::StringW objectName, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::System::Object*> typeInformationA,
    ::ArrayW<int32_t> memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(objectName, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds,
                                                                                                                            objectReader, objectId, assemblyInfo, assemIdToAssemblyTable));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectMap::ObjectMap() {}
