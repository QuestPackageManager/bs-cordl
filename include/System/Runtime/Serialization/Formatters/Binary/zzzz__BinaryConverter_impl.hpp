#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\BinaryConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryConverter_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectWriter_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__WriteObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryConverter.GetBinaryTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum (*)(
    ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::StringW, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*,
    ::by_ref<::System::Object*>, ::by_ref<int32_t>)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5b56524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                             { "GetBinaryTypeInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryConverter.GetParserBinaryTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum (*)(::System::Type*, ::by_ref<::System::Object*>)>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5b56ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                             { "GetParserBinaryTypeInfo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryConverter.WriteTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Object*, int32_t, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(
        &::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5b56dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                             { "WriteTypeInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryConverter.ReadTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::by_ref<int32_t>)>(
        &::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5b5704c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                             { "ReadTypeInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryConverter.TypeFromInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*,
                         ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::by_ref<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>,
                         ::by_ref<::StringW>, ::by_ref<::System::Type*>, ::by_ref<bool>)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5b57240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                             { "TypeFromInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>>(),
                                                                 ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum
System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                       ::StringW typeName, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                                                                                       ::by_ref<::System::Object*> typeInformation, ::by_ref<int32_t> assemId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                           { "GetBinaryTypeInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(),
                                                               ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(nullptr, ___internal_method, type, objectInfo, typeName, objectWriter,
                                                                                                                   typeInformation, assemId);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum
System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo(::System::Type* type, ::by_ref<::System::Object*> typeInformation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                           { "GetParserBinaryTypeInfo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(nullptr, ___internal_method, type, typeInformation);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum,
                                                                                               ::System::Object* typeInformation, int32_t assemId,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                           { "WriteTypeInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binaryTypeEnum, typeInformation, assemId, sout);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum,
                                                                                                           ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input,
                                                                                                           ::by_ref<int32_t> assemId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                           { "ReadTypeInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, binaryTypeEnum, input, assemId);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum,
                                                                                              ::System::Object* typeInformation,
                                                                                              ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader,
                                                                                              ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
                                                                                              ::by_ref<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE> primitiveTypeEnum,
                                                                                              ::by_ref<::StringW> typeString, ::by_ref<::System::Type*> type, ::by_ref<bool> isVariant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*>(),
                                                           { "TypeFromInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(),
                                                               ::i2c::type_of<::by_ref<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>>(),
                                                               ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binaryTypeEnum, typeInformation, objectReader, assemblyInfo, primitiveTypeEnum, typeString, type, isVariant);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::BinaryConverter() {}
