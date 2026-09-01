#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\BinaryObjectWithMapTyped.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMapTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b58e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b58e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::*)(
    int32_t, ::StringW, int32_t, ::ArrayW<::StringW>, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>, ::ArrayW<::System::Object*>, ::ArrayW<int32_t>, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Set)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b58e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(),
                                                             { "Set",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Write)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5b58eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Read)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5b59088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(),
                                                             { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum&
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_binaryHeaderEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const&
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_binaryHeaderEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryHeaderEnum = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_objectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectId = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_numMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMembers;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_numMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMembers;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_numMembers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numMembers = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_memberNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberNames = value;
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>&
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_binaryTypeEnumA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnumA;
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> const&
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_binaryTypeEnumA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnumA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_binaryTypeEnumA(
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryTypeEnumA = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_typeInformationA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformationA;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_typeInformationA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformationA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_typeInformationA(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeInformationA = value;
}
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_memberAssemIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberAssemIds;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_memberAssemIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberAssemIds;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_memberAssemIds(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberAssemIds = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_assemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_get_assemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::__cordl_internal_set_assemId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemId = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Set(int32_t objectId, ::StringW name, int32_t numMembers, ::ArrayW<::StringW> memberNames,
                                                                                              ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA,
                                                                                              ::ArrayW<::System::Object*> typeInformationA, ::ArrayW<int32_t> memberAssemIds, int32_t assemId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(),
                                                           { "Set",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>(),
                                                               ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectId, name, numMembers, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, assemId);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(),
                                                           { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(),
                                                                                         { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>());
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>(binaryHeaderEnum));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::BinaryObjectWithMapTyped() {}
