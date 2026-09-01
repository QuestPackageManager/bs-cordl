#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\BinaryArray.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryArrayTypeEnum_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryArray_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryArrayTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryArray::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryArray::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b59380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryArray::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryArray::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b59384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryArray.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryArray::*)(
    int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Object*,
    ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryArray::Set)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b5938c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(),
                                                             { "Set",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryArray.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryArray::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryArray::Write)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5b593cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryArray.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryArray::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryArray::Read)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5b596b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(),
                                                             { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_objectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_rank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rank = value;
}
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_lengthA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lengthA;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_lengthA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lengthA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_lengthA(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lengthA = value;
}
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_lowerBoundA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerBoundA;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_lowerBoundA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerBoundA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_lowerBoundA(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lowerBoundA = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_binaryTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_binaryTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_binaryTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryTypeEnum = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_typeInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformation;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_typeInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformation;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_typeInformation(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeInformation = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_assemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_assemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_assemId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemId = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_binaryHeaderEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_binaryHeaderEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryHeaderEnum = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum& System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_binaryArrayTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryArrayTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const&
System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_get_binaryArrayTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryArrayTypeEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::BinaryArray::__cordl_internal_set_binaryArrayTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryArrayTypeEnum = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryArray::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryArray::_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryArray::Set(int32_t objectId, int32_t rank, ::ArrayW<int32_t> lengthA, ::ArrayW<int32_t> lowerBoundA,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Object* typeInformation,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, int32_t assemId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(),
                                                           { "Set",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectId, rank, lengthA, lowerBoundA, binaryTypeEnum, typeInformation, binaryArrayTypeEnum, assemId);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryArray::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(),
                                                           { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryArray::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(),
                                                                                         { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* System::Runtime::Serialization::Formatters::Binary::BinaryArray::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>());
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryArray*
System::Runtime::Serialization::Formatters::Binary::BinaryArray::New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*>(binaryHeaderEnum));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArray::BinaryArray() {}
