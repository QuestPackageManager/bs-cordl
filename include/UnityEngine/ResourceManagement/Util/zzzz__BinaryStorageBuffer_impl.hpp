#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\BinaryStorageBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BinaryStorageBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BinaryStorageBuffer_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
// Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "separator", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap(
    uint32_t stringId, char16_t separator) noexcept {
  this->stringId = stringId;
  this->separator = separator;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::*)()>(
    &::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6912cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0._FindBestSeparator_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::*)(char16_t)>(
    &::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::_FindBestSeparator_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x691308c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>(),
                                                             { "<FindBestSeparator>b__0", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
constexpr char16_t& UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr char16_t const& UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::__cordl_internal_set_s(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
inline void UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::_FindBestSeparator_b__0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>(),
                                                           { "<FindBestSeparator>b__0", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*
UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer.get_Dependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691274c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(), { "get_Dependencies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*, ::System::Type*, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6912754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(),
            { "Deserialize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer.FindBestSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)(::StringW, ::ArrayW<char16_t>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::FindBestSeparator)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6912af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(),
                                                                                           { "FindBestSeparator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::Serialize)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6912cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(),
                                                { "Serialize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6913088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::get_Dependencies() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(), { "get_Dependencies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader,
                                                                                                                        ::System::Type* t, uint32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(),
          { "Deserialize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, t, offset);
}
inline char16_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::FindBestSeparator(::StringW str, ::ArrayW<char16_t> seps) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(),
                                                                                         { "FindBestSeparator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, str, seps);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer,
                                                                                                             ::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(),
                                              { "Serialize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, writer, val);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    int32_t>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_int32_t_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    bool>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_bool_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    int64_t>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_int64_t_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    ::StringW>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___StringW_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    ::UnityEngine::Hash128>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>* UnityEngine::ResourceManagement::Util::
    BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___UnityEngine__Hash128_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::BinaryStorageBuffer_BuiltinTypesSerializer() {}
// Ctor Parameters [CppParam { name: "assemblyId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "classId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data::TypeSerializer_BinaryStorageBuffer_Data(uint32_t assemblyId, uint32_t classId) noexcept {
  this->assemblyId = assemblyId;
  this->classId = classId;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data::TypeSerializer_BinaryStorageBuffer_Data() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer.get_Dependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::*)()>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691309c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>(), { "get_Dependencies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*, ::System::Type*, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x69130a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>(),
            { "Deserialize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::*)(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::Serialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6913244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>(),
                                                { "Serialize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6913364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::get_Dependencies() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>(), { "get_Dependencies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader,
                                                                                                                ::System::Type* type, uint32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>(),
          { "Deserialize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, type, offset);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer,
                                                                                                     ::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>(),
                                              { "Serialize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, writer, val);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    ::System::Type*>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___System__Type__() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::BinaryStorageBuffer_TypeSerializer() {}
// Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nextId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString::BinaryStorageBuffer_DynamicString(uint32_t stringId, uint32_t nextId) noexcept {
  this->stringId = stringId;
  this->nextId = nextId;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString::BinaryStorageBuffer_DynamicString() {}
// Ctor Parameters [CppParam { name: "typeId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData::BinaryStorageBuffer_ObjectTypeData(uint32_t typeId, uint32_t objectId) noexcept {
  this->typeId = typeId;
  this->objectId = objectId;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData::BinaryStorageBuffer_ObjectTypeData() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter.get_Dependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::*)()>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::get_Dependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::*)(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*, ::System::Type*, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::get_Dependencies() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(this,
                                                                                                                                                                                  ___internal_method);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer,
                                                                                                            ::System::Object* val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, writer, val);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader,
                                                                                                                       ::System::Type* t, uint32_t offset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, t, offset);
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
template <typename T>
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    T>::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
template <typename T>
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<T>::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sep", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::Reader_BinaryStorageBuffer_StringCreationState::Reader_BinaryStorageBuffer_StringCreationState(uint32_t id, char16_t sep, int32_t length) noexcept {
  this->id = id;
  this->sep = sep;
  this->length = length;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::Reader_BinaryStorageBuffer_StringCreationState::Reader_BinaryStorageBuffer_StringCreationState() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.GetCacheStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetCacheStats)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6913368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                           { "GetCacheStats", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::ArrayW<uint8_t>, int32_t, ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::Init)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x691337c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.AddSerializationAdapter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::AddSerializationAdapter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6913568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                { "AddSerializationAdapter", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::ArrayW<uint8_t>, int32_t, ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6913574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6913578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), { "GetBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::System::IO::Stream*, uint32_t, int32_t, ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6913580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadObjectArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, bool, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6913660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                           { "ReadObjectArray", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadObjectArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(::System::Type*, uint32_t, bool, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x69138bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                { "ReadObjectArray", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69137fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                           { "ReadObject", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(::System::Type*, uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6913a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                             { "ReadObject", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, char16_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6912a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                           { "ReadString", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadStringInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, ::System::Text::Encoding*, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadStringInternal)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6913e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                             { "ReadStringInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadAutoEncodedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadAutoEncodedString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6913c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                           { "ReadAutoEncodedString", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ComputeStringLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, char16_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ComputeStringLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6914084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                           { "ComputeStringLength", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.GetDynamicStringLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, char16_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetDynamicStringLength)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69140ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                           { "GetDynamicStringLength", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.GetAutoEncodedStringLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetAutoEncodedStringLength)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x69140a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                           { "GetAutoEncodedStringLength", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.GetStringLengthInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, ::System::Text::Encoding*)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetStringLengthInternal)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x69141a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                             { "GetStringLengthInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadDynamicString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, char16_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadDynamicString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6913cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                             { "ReadDynamicString", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader._ReadDynamicString_b__29_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::System::Span_1<char16_t>, ::UnityEngine::ResourceManagement::Util::Reader_BinaryStorageBuffer_StringCreationState)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ReadDynamicString_b__29_0)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6914340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                            { "<ReadDynamicString>b__29_0",
                              {},
                              { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::UnityEngine::ResourceManagement::Util::Reader_BinaryStorageBuffer_StringCreationState>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t> const& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_set_m_Buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Buffer = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Adapters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Adapters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Adapters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Adapters;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_set_m_Adapters(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Adapters = value;
}
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*>& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cache;
}
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cache;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_set_m_Cache(::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cache = value;
}
constexpr ::System::Text::StringBuilder*& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stringBuilder = value;
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetCacheStats(::by_ref<int32_t> reqCount, ::by_ref<int32_t> reqHits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                         { "GetCacheStats", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reqCount, reqHits);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::Init(::ArrayW<uint8_t> data, int32_t maxCachedObjects,
                                                                                    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, maxCachedObjects, adapters);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::AddSerializationAdapter(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* a) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                              { "AddSerializationAdapter", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ctor(::ArrayW<uint8_t> data, int32_t maxCachedObjects,
                                                                                     ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, maxCachedObjects, adapters);
}
inline ::ArrayW<uint8_t> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), { "GetBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ctor(::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
                                                                                     ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream, bufferSize, maxCachedObjects, adapters);
}
template <typename T> inline bool UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::TryGetCachedValue(uint32_t offset, ::by_ref<T> val) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { "TryGetCachedValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset, val);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadValueArray(uint32_t id, bool cacheValue) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                              { "ReadValueArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, id, cacheValue);
}
template <typename T, typename C>
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ProcessObjectArray(uint32_t id, C context, ::System::Action_2<T, C>* procFunc, bool cacheValues) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { "ProcessObjectArray",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<C>() },
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<C>(), ::i2c::type_of<::System::Action_2<T, C>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<C>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, id, context, procFunc, cacheValues);
}
template <typename T>
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray(::by_ref<::System::Collections::Generic::List_1<T>*> results, uint32_t id, bool cacheValues) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
          { "ReadObjectArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, results, id, cacheValues);
}
inline ::ArrayW<::System::Object*> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray(uint32_t id, bool cacheValues, bool cacheFullArray) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                         { "ReadObjectArray", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, id, cacheValues, cacheFullArray);
}
inline ::ArrayW<::System::Object*> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray(::System::Type* t, uint32_t id, bool cacheValues, bool cacheFullArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                              { "ReadObjectArray", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, t, id, cacheValues, cacheFullArray);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray(uint32_t id, bool cacheValues, bool cacheFullArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { "ReadObjectArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, id, cacheValues, cacheFullArray);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject(uint32_t id, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                         { "ReadObject", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, id, cacheValue);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject(uint32_t offset, bool cacheValue) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                              { "ReadObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, offset, cacheValue);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject(::System::Type* t, uint32_t id, bool cacheValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { "ReadObject", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, t, id, cacheValue);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadValue(uint32_t id) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                              { "ReadValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, id);
}
inline ::StringW UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadString(uint32_t id, char16_t sep, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                         { "ReadString", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id, sep, cacheValue);
}
inline ::StringW UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadStringInternal(uint32_t offset, ::System::Text::Encoding* enc, bool cacheValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { "ReadStringInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, offset, enc, cacheValue);
}
inline ::StringW UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadAutoEncodedString(uint32_t id, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                         { "ReadAutoEncodedString", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id, cacheValue);
}
inline int32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ComputeStringLength(uint32_t id, char16_t sep) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                         { "ComputeStringLength", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id, sep);
}
inline int32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetDynamicStringLength(uint32_t id, char16_t sep) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                                                         { "GetDynamicStringLength", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id, sep);
}
inline int32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetAutoEncodedStringLength(uint32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), { "GetAutoEncodedStringLength", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline int32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetStringLengthInternal(uint32_t offset, ::System::Text::Encoding* enc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { "GetStringLengthInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, enc);
}
inline ::StringW UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadDynamicString(uint32_t id, char16_t sep, bool cacheValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                                                           { "ReadDynamicString", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id, sep, cacheValue);
}
inline void
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ReadDynamicString_b__29_0(::System::Span_1<char16_t> chars,
                                                                                              ::UnityEngine::ResourceManagement::Util::Reader_BinaryStorageBuffer_StringCreationState state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(),
                          { "<ReadDynamicString>b__29_0",
                            {},
                            { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::UnityEngine::ResourceManagement::Util::Reader_BinaryStorageBuffer_StringCreationState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, state);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::New_ctor(::ArrayW<uint8_t> data, int32_t maxCachedObjects,
                                                                            ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(data, maxCachedObjects, adapters));
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::New_ctor(::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
                                                                            ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(inputStream, bufferSize, maxCachedObjects, adapters));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::BinaryStorageBuffer_Reader() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::*)()>(
    &::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691479c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_set_position(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::ArrayW<uint8_t>& UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t> const& UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_set_data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk* UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::Writer_BinaryStorageBuffer_Chunk() {}
// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "isUnicode", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts::Writer_BinaryStorageBuffer_StringParts(::StringW str, uint32_t dataSize, bool isUnicode) noexcept {
  this->str = str;
  this->dataSize = dataSize;
  this->isUnicode = isUnicode;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts::Writer_BinaryStorageBuffer_StringParts() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69144d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(
    int32_t, ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x69144e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.FindChunkWithSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(uint32_t)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::FindChunkWithSpace)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x69147a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "FindChunkWithSpace", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(void*, uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteInternal)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6914938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                           { "WriteInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.ReserveInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::ReserveInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6914b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                           { "ReserveInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(uint32_t, void*, uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteInternal)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6914bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                             { "WriteInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::System::Object*, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteObject)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6914e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                           { "WriteObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW, char16_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x691306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                           { "WriteString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteStringInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW, ::System::Text::Encoding*)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteStringInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69151a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                             { "WriteStringInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.SerializeToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::SerializeToByteArray)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6915200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "SerializeToByteArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.SerializeToStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::System::IO::Stream*)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::SerializeToStream)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x69153fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                           { "SerializeToStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.IsUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::IsUnicode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6915538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "IsUnicode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteAutoEncodedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteAutoEncodedString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69150f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "WriteAutoEncodedString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteUnicodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteUnicodeString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69155a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "WriteUnicodeString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.ComputeStringSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW, ::by_ref<bool>)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::ComputeStringSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69155dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                           { "ComputeStringSize", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteDynamicString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW, char16_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteDynamicString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6914f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                           { "WriteDynamicString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.RecurseDynamicStringParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(
    ::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts>, int32_t, char16_t, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::RecurseDynamicStringParts)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6915630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                             { "RecurseDynamicStringParts",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<char16_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_totalBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBytes;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_totalBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBytes;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_totalBytes(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalBytes = value;
}
constexpr uint32_t& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_defaulChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaulChunkSize;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_defaulChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaulChunkSize;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_defaulChunkSize(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaulChunkSize = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>*&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>* const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_chunks(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>*& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_existingValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___existingValues;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_existingValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___existingValues;
}
constexpr void
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_existingValues(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___existingValues = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_serializationAdapters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationAdapters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_serializationAdapters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationAdapters;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_serializationAdapters(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializationAdapters = value;
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::get_Length() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::_ctor(int32_t chunkSize,
                                                                                     ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkSize, adapters);
}
inline ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::FindChunkWithSpace(uint32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "FindChunkWithSpace", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>(this, ___internal_method, length);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteInternal(void* pData, uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                         { "WriteInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pData, dataSize, prefixSize);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::ReserveInternal(uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                         { "ReserveInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, dataSize, prefixSize);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteInternal(uint32_t id, void* pData, uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                           { "WriteInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, pData, dataSize, prefixSize);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Reserve() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "Reserve", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(::by_ref<T> val) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                              { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(T val) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(uint32_t offset, ::by_ref<T> val) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                              { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, offset, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(uint32_t offset, T val) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                              { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, offset, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Reserve(uint32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                              { "Reserve", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, count);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(::ArrayW<T> values, bool hashElements) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                              { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, values, hashElements);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(uint32_t offset, ::ArrayW<T> values, bool hashElements) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                           { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, offset, values, hashElements);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteObjects(::System::Collections::Generic::IEnumerable_1<T>* objs, bool serizalizeTypeData) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                              { "WriteObjects", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, objs, serizalizeTypeData);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteObject(::System::Object* obj, bool serializeTypeData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                         { "WriteObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, obj, serializeTypeData);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteString(::StringW str, char16_t sep) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                         { "WriteString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, str, sep);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteStringInternal(::StringW val, ::System::Text::Encoding* enc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                         { "WriteStringInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, val, enc);
}
inline ::ArrayW<uint8_t> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::SerializeToByteArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "SerializeToByteArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::SerializeToStream(::System::IO::Stream* str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                         { "SerializeToStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, str);
}
inline bool UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::IsUnicode(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "IsUnicode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteAutoEncodedString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "WriteAutoEncodedString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteUnicodeString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), { "WriteUnicodeString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::ComputeStringSize(::StringW str, ::by_ref<bool> isUnicode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                         { "ComputeStringSize", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, str, isUnicode);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteDynamicString(::StringW str, char16_t sep) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                                                         { "WriteDynamicString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, str, sep);
}
inline uint32_t
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::RecurseDynamicStringParts(::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts> parts,
                                                                                             int32_t index, char16_t sep, uint32_t minSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(),
                                                           { "RecurseDynamicStringParts",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<char16_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, parts, index, sep, minSize);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::New_ctor(int32_t chunkSize, ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(chunkSize, adapters));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::BinaryStorageBuffer_Writer() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint64_t, ::UnityEngine::Hash128*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ComputeHash)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6911eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>(),
                                                             { "ComputeHash", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Hash128*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer.AddSerializationAdapter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*,
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::AddSerializationAdapter)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x6911ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>(),
                            { "AddSerializationAdapter",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer.GetSerializationAdapter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*, ::System::Type*,
    ::by_ref<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::GetSerializationAdapter)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x691251c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>(),
                            { "GetSerializationAdapter",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(),
                                ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6912748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ComputeHash(void* pData, uint64_t size, ::UnityEngine::Hash128* hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>(),
                                                           { "ComputeHash", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Hash128*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pData, size, hash);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::AddSerializationAdapter(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* serializationAdapters,
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* adapter, bool forceOverride) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>(),
                          { "AddSerializationAdapter",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, serializationAdapters, adapter, forceOverride);
}
inline bool UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::GetSerializationAdapter(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* serializationAdapters, ::System::Type* t,
    ::by_ref<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>(),
                          { "GetSerializationAdapter",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(),
                              ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, serializationAdapters, t, adapter);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BinaryStorageBuffer() {}
