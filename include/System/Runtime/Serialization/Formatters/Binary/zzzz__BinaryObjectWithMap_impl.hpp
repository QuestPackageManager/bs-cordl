#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\BinaryObjectWithMap.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMap_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b58bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b58be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::*)(int32_t, ::StringW, int32_t, ::ArrayW<::StringW>, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Set)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b58be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(),
                            { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Write)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b58c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Read)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b58d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(),
                                                             { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap.Dump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b58e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(), { "Dump", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_binaryHeaderEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const&
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_binaryHeaderEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryHeaderEnum = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_set_objectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectId = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_numMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMembers;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_numMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMembers;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_set_numMembers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numMembers = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_set_memberNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberNames = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_assemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_get_assemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::__cordl_internal_set_assemId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemId = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Set(int32_t objectId, ::StringW name, int32_t numMembers, ::ArrayW<::StringW> memberNames, int32_t assemId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(),
                          { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectId, name, numMembers, memberNames, assemId);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(),
                                                           { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(),
                                                                                         { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(), { "Dump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>());
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*
System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>(binaryHeaderEnum));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::BinaryObjectWithMap() {}
