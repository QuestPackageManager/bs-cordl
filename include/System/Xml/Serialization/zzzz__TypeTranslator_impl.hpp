#pragma once
// IWYU pragma private; include "System/Xml/Serialization/TypeTranslator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__TypeTranslator_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::TypeTranslator.GetTypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeData* (*)(::System::Type*)>(&::System::Xml::Serialization::TypeTranslator::GetTypeData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62e6c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "GetTypeData", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeTranslator.GetTypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeData* (*)(::System::Type*, ::StringW, bool)>(&::System::Xml::Serialization::TypeTranslator::GetTypeData)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0x62ebc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(),
                                                             { "GetTypeData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeTranslator.GetPrimitiveTypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeData* (*)(::StringW)>(&::System::Xml::Serialization::TypeTranslator::GetPrimitiveTypeData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62ec524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "GetPrimitiveTypeData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeTranslator.GetPrimitiveTypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeData* (*)(::StringW, bool)>(&::System::Xml::Serialization::TypeTranslator::GetPrimitiveTypeData)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x62ec580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "GetPrimitiveTypeData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeTranslator.FindPrimitiveTypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeData* (*)(::StringW)>(&::System::Xml::Serialization::TypeTranslator::FindPrimitiveTypeData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62ec790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "FindPrimitiveTypeData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeTranslator.GetArrayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Serialization::TypeTranslator::GetArrayName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x62e7a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "GetArrayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeTranslator.ParseArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::System::Xml::Serialization::TypeTranslator::ParseArrayType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x62ec858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(),
            { "ParseArrayType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::TypeTranslator::setStaticF_nameCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "nameCache", ::System::Xml::Serialization::TypeTranslator*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::TypeTranslator::getStaticF_nameCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "nameCache", ::System::Xml::Serialization::TypeTranslator*>();
}
inline void System::Xml::Serialization::TypeTranslator::setStaticF_primitiveTypes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "primitiveTypes", ::System::Xml::Serialization::TypeTranslator*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::TypeTranslator::getStaticF_primitiveTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "primitiveTypes", ::System::Xml::Serialization::TypeTranslator*>();
}
inline void System::Xml::Serialization::TypeTranslator::setStaticF_primitiveArrayTypes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "primitiveArrayTypes", ::System::Xml::Serialization::TypeTranslator*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::TypeTranslator::getStaticF_primitiveArrayTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "primitiveArrayTypes", ::System::Xml::Serialization::TypeTranslator*>();
}
inline void System::Xml::Serialization::TypeTranslator::setStaticF_nullableTypes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "nullableTypes", ::System::Xml::Serialization::TypeTranslator*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::TypeTranslator::getStaticF_nullableTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "nullableTypes", ::System::Xml::Serialization::TypeTranslator*>();
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::TypeTranslator::GetTypeData(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "GetTypeData", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeData*>(nullptr, ___internal_method, type);
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::TypeTranslator::GetTypeData(::System::Type* runtimeType, ::StringW xmlDataType, bool underlyingEnumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(),
                                                           { "GetTypeData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeData*>(nullptr, ___internal_method, runtimeType, xmlDataType, underlyingEnumType);
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::TypeTranslator::GetPrimitiveTypeData(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "GetPrimitiveTypeData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeData*>(nullptr, ___internal_method, typeName);
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::TypeTranslator::GetPrimitiveTypeData(::StringW typeName, bool nullable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "GetPrimitiveTypeData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeData*>(nullptr, ___internal_method, typeName, nullable);
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::TypeTranslator::FindPrimitiveTypeData(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "FindPrimitiveTypeData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeData*>(nullptr, ___internal_method, typeName);
}
inline ::StringW System::Xml::Serialization::TypeTranslator::GetArrayName(::StringW elemName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(), { "GetArrayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, elemName);
}
inline void System::Xml::Serialization::TypeTranslator::ParseArrayType(::StringW arrayType, ::by_ref<::StringW> type, ::by_ref<::StringW> ns, ::by_ref<::StringW> dimensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::TypeTranslator*>(),
          { "ParseArrayType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arrayType, type, ns, dimensions);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::TypeTranslator::TypeTranslator() {}
