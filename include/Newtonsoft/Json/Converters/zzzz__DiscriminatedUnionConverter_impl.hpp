#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\DiscriminatedUnionConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/Reflection/zzzz__PropertyInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__DiscriminatedUnionConverter_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__DiscriminatedUnionConverter_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__FSharpFunction_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::*)(
    ::Newtonsoft::Json::Utilities::FSharpFunction*, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>*)>(
    &::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d99678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::Utilities::FSharpFunction*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Utilities::FSharpFunction*& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::__cordl_internal_get_TagReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TagReader;
}
constexpr ::Newtonsoft::Json::Utilities::FSharpFunction* const& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::__cordl_internal_get_TagReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TagReader;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::__cordl_internal_set_TagReader(::Newtonsoft::Json::Utilities::FSharpFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TagReader = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>*&
Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::__cordl_internal_get_Cases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cases;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>* const&
Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::__cordl_internal_get_Cases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cases;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::__cordl_internal_set_Cases(
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Cases = value;
}
inline void
Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::_ctor(::Newtonsoft::Json::Utilities::FSharpFunction* tagReader,
                                                                       ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>* cases) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::Utilities::FSharpFunction*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagReader, cases);
}
inline ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*
Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::New_ctor(::Newtonsoft::Json::Utilities::FSharpFunction* tagReader,
                                                                          ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>* cases) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>(tagReader, cases));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union::DiscriminatedUnionConverter_Union() {}
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::*)(
    int32_t, ::StringW, ::ArrayW<::System::Reflection::PropertyInfo*>, ::Newtonsoft::Json::Utilities::FSharpFunction*, ::Newtonsoft::Json::Utilities::FSharpFunction*)>(
    &::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d99680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Reflection::PropertyInfo*>>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Utilities::FSharpFunction*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::FSharpFunction*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_Tag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tag;
}
constexpr int32_t const& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_Tag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tag;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_set_Tag(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Tag = value;
}
constexpr ::StringW& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr ::ArrayW<::System::Reflection::PropertyInfo*>& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_Fields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fields;
}
constexpr ::ArrayW<::System::Reflection::PropertyInfo*> const& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_Fields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fields;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_set_Fields(::ArrayW<::System::Reflection::PropertyInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Fields = value;
}
constexpr ::Newtonsoft::Json::Utilities::FSharpFunction*& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_FieldReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FieldReader;
}
constexpr ::Newtonsoft::Json::Utilities::FSharpFunction* const& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_FieldReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FieldReader;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_set_FieldReader(::Newtonsoft::Json::Utilities::FSharpFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FieldReader = value;
}
constexpr ::Newtonsoft::Json::Utilities::FSharpFunction*& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_Constructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Constructor;
}
constexpr ::Newtonsoft::Json::Utilities::FSharpFunction* const& Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_get_Constructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Constructor;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::__cordl_internal_set_Constructor(::Newtonsoft::Json::Utilities::FSharpFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Constructor = value;
}
inline void Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::_ctor(int32_t tag, ::StringW name, ::ArrayW<::System::Reflection::PropertyInfo*> fields,
                                                                                       ::Newtonsoft::Json::Utilities::FSharpFunction* fieldReader,
                                                                                       ::Newtonsoft::Json::Utilities::FSharpFunction* constructor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Reflection::PropertyInfo*>>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Utilities::FSharpFunction*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::FSharpFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, name, fields, fieldReader, constructor);
}
inline ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*
Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::New_ctor(int32_t tag, ::StringW name, ::ArrayW<::System::Reflection::PropertyInfo*> fields,
                                                                              ::Newtonsoft::Json::Utilities::FSharpFunction* fieldReader, ::Newtonsoft::Json::Utilities::FSharpFunction* constructor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>(tag, name, fields, fieldReader, constructor));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase::DiscriminatedUnionConverter_UnionCase() {}
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::*)()>(
    &::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d99b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0._WriteJson_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::*)(
    ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*)>(&::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::_WriteJson_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d9a61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0*>(),
                                                             { "<WriteJson>b__0", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::__cordl_internal_get_tag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tag;
}
constexpr int32_t const& Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::__cordl_internal_get_tag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tag;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::__cordl_internal_set_tag(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tag = value;
}
inline void Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::_WriteJson_b__0(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0*>(),
                                                           { "<WriteJson>b__0", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0* Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass8_0::DiscriminatedUnionConverter___c__DisplayClass8_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::*)()>(
    &::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9a208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0._ReadJson_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::*)(
    ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*)>(&::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::_ReadJson_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d9a63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0*>(),
                                                             { "<ReadJson>b__0", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::__cordl_internal_get_caseName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caseName;
}
constexpr ::StringW const& Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::__cordl_internal_get_caseName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caseName;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::__cordl_internal_set_caseName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___caseName = value;
}
constexpr ::System::Func_2<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*, bool>*&
Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::System::Func_2<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*, bool>* const&
Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::__cordl_internal_set___9__0(
    ::System::Func_2<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__0 = value;
}
inline void Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::_ReadJson_b__0(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0*>(),
                                                           { "<ReadJson>b__0", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_UnionCase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0* Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter___c__DisplayClass9_0::DiscriminatedUnionConverter___c__DisplayClass9_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter.CreateUnionTypeLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::CreateUnionTypeLookup)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5d98cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), { "CreateUnionTypeLookup", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter.CreateUnion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union* (*)(::System::Type*)>(
    &::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::CreateUnion)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x5d98ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), { "CreateUnion", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::WriteJson)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5d99690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*,
                                                                                                                                          ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::ReadJson)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x5d99b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::*)(::System::Type*)>(
    &::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::CanConvert)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5d9a20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::*)()>(&::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9a498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Converters::DiscriminatedUnionConverter::setStaticF_UnionCache(
    ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>*, "UnionCache",
                                    ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(
      std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>*>(value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>*
Newtonsoft::Json::Converters::DiscriminatedUnionConverter::getStaticF_UnionCache() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>*, "UnionCache",
                                           ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>();
}
inline void Newtonsoft::Json::Converters::DiscriminatedUnionConverter::setStaticF_UnionTypeLookupCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*, "UnionTypeLookupCache",
                                    ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(
      std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*>(value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* Newtonsoft::Json::Converters::DiscriminatedUnionConverter::getStaticF_UnionTypeLookupCache() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*, "UnionTypeLookupCache",
                                           ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>();
}
inline ::System::Type* Newtonsoft::Json::Converters::DiscriminatedUnionConverter::CreateUnionTypeLookup(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), { "CreateUnionTypeLookup", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, t);
}
inline ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union* Newtonsoft::Json::Converters::DiscriminatedUnionConverter::CreateUnion(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), { "CreateUnion", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter_Union*>(nullptr, ___internal_method, t);
}
inline void Newtonsoft::Json::Converters::DiscriminatedUnionConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline ::System::Object* Newtonsoft::Json::Converters::DiscriminatedUnionConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                             ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline bool Newtonsoft::Json::Converters::DiscriminatedUnionConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline void Newtonsoft::Json::Converters::DiscriminatedUnionConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter* Newtonsoft::Json::Converters::DiscriminatedUnionConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::DiscriminatedUnionConverter() {}
