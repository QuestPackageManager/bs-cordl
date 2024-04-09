#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaWriter_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaResolver_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaWriter_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchema_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::__JsonSchemaWriter____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::__JsonSchemaWriter____c::*)()>(
    &::Newtonsoft::Json::Schema::__JsonSchemaWriter____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2953208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::__JsonSchemaWriter____c._WriteType_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Schema::__JsonSchemaWriter____c::*)(::Newtonsoft::Json::Schema::JsonSchemaType)>(
    &::Newtonsoft::Json::Schema::__JsonSchemaWriter____c::_WriteType_b__7_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2953210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>::get(), "<WriteType>b__7_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaType>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Schema::__JsonSchemaWriter____c::setStaticF___9(::Newtonsoft::Json::Schema::__JsonSchemaWriter____c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>::get>(
      std::forward<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>(value));
}
inline ::Newtonsoft::Json::Schema::__JsonSchemaWriter____c* Newtonsoft::Json::Schema::__JsonSchemaWriter____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>::get>();
}
inline void Newtonsoft::Json::Schema::__JsonSchemaWriter____c::setStaticF___9__7_0(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>*, "<>9__7_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>::get>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>* Newtonsoft::Json::Schema::__JsonSchemaWriter____c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>::get>();
}
inline ::Newtonsoft::Json::Schema::__JsonSchemaWriter____c* Newtonsoft::Json::Schema::__JsonSchemaWriter____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>());
}
inline void Newtonsoft::Json::Schema::__JsonSchemaWriter____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Schema::__JsonSchemaWriter____c::_WriteType_b__7_0(::Newtonsoft::Json::Schema::JsonSchemaType v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::__JsonSchemaWriter____c*>::get(), "<WriteType>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::__JsonSchemaWriter____c::__JsonSchemaWriter____c() {}
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*)>(&::Newtonsoft::Json::Schema::JsonSchemaWriter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29489d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.ReferenceOrWriteSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::ReferenceOrWriteSchema)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x29522dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "ReferenceOrWriteSchema", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WriteSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::WriteSchema)> {
  constexpr static std::size_t size = 0x101c;
  constexpr static std::size_t addrs = 0x2948a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WriteSchema", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WriteSchemaDictionaryIfNotNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::WriteSchemaDictionaryIfNotNull)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2952964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WriteSchemaDictionaryIfNotNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WriteItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::WriteItems)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x2952cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WriteItems", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WriteType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(
    ::StringW, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Schema::JsonSchemaType)>(&::Newtonsoft::Json::Schema::JsonSchemaWriter::WriteType)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x2952424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WriteType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WritePropertyIfNotNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::StringW, ::System::Object*)>(&::Newtonsoft::Json::Schema::JsonSchemaWriter::WritePropertyIfNotNull)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29523c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WritePropertyIfNotNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::JsonWriter*& Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonWriter*> const& Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_set__writer(::Newtonsoft::Json::JsonWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver*& Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_get__resolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolver;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchemaResolver*> const& Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_get__resolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolver;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_set__resolver(::Newtonsoft::Json::Schema::JsonSchemaResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Schema::JsonSchemaWriter* Newtonsoft::Json::Schema::JsonSchemaWriter::New_ctor(::Newtonsoft::Json::JsonWriter* writer,
                                                                                                          ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(writer, resolver));
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::_ctor(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, resolver);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::ReferenceOrWriteSchema(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "ReferenceOrWriteSchema", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WriteSchema(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WriteSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WriteSchemaDictionaryIfNotNull(::Newtonsoft::Json::JsonWriter* writer, ::StringW propertyName,
                                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WriteSchemaDictionaryIfNotNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, propertyName, properties);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WriteItems(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WriteItems", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WriteType(::StringW propertyName, ::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Schema::JsonSchemaType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WriteType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, writer, type);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WritePropertyIfNotNull(::Newtonsoft::Json::JsonWriter* writer, ::StringW propertyName, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaWriter*>::get(), "WritePropertyIfNotNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, propertyName, value);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter() {}
