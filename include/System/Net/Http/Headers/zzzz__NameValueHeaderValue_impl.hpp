#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\NameValueHeaderValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::NameValueHeaderValue::*)(::StringW, ::StringW)>(
    &::System::Net::Http::Headers::NameValueHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60e0128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::NameValueHeaderValue::*)(::System::Net::Http::Headers::NameValueHeaderValue*)>(
    &::System::Net::Http::Headers::NameValueHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60e5220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::NameValueHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::NameValueHeaderValue::*)()>(&::System::Net::Http::Headers::NameValueHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ec074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::NameValueHeaderValue::*)()>(&::System::Net::Http::Headers::NameValueHeaderValue::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ec078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::NameValueHeaderValue::*)(::StringW)>(&::System::Net::Http::Headers::NameValueHeaderValue::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ec080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::NameValueHeaderValue::*)()>(&::System::Net::Http::Headers::NameValueHeaderValue::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ec088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::NameValueHeaderValue::*)(::StringW)>(&::System::Net::Http::Headers::NameValueHeaderValue::set_Value)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x60e4c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::NameValueHeaderValue* (*)(::StringW, ::StringW)>(&::System::Net::Http::Headers::NameValueHeaderValue::Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60e4328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::NameValueHeaderValue::*)()>(
    &::System::Net::Http::Headers::NameValueHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ec090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::NameValueHeaderValue::*)()>(&::System::Net::Http::Headers::NameValueHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60ec0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::NameValueHeaderValue::*)(::System::Object*)>(&::System::Net::Http::Headers::NameValueHeaderValue::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x60ec158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.TryParsePragma
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>)>(
    &::System::Net::Http::Headers::NameValueHeaderValue::TryParsePragma)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60ec238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(),
                                                             { "TryParsePragma",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.TryParseParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::System::Net::Http::Headers::Lexer*, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>, ::by_ref<::System::Net::Http::Headers::Token>)>(
    &::System::Net::Http::Headers::NameValueHeaderValue::TryParseParameters)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x60e5c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(),
                                                             { "TryParseParameters",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::NameValueHeaderValue::*)()>(&::System::Net::Http::Headers::NameValueHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60ec2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueHeaderValue.TryParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::System::Net::Http::Headers::NameValueHeaderValue*>,
                                                                ::by_ref<::System::Net::Http::Headers::Token>)>(&::System::Net::Http::Headers::NameValueHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x60ec35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(),
                                                { "TryParseElement",
                                                  {},
                                                  { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::NameValueHeaderValue*>>(),
                                                    ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::Http::Headers::NameValueHeaderValue::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Net::Http::Headers::NameValueHeaderValue::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Net::Http::Headers::NameValueHeaderValue::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr ::StringW& System::Net::Http::Headers::NameValueHeaderValue::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Net::Http::Headers::NameValueHeaderValue::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Net::Http::Headers::NameValueHeaderValue::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
inline void System::Net::Http::Headers::NameValueHeaderValue::_ctor(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Net::Http::Headers::NameValueHeaderValue::_ctor(::System::Net::Http::Headers::NameValueHeaderValue* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::NameValueHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void System::Net::Http::Headers::NameValueHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::NameValueHeaderValue::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::NameValueHeaderValue::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::Http::Headers::NameValueHeaderValue::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::NameValueHeaderValue::set_Value(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::NameValueHeaderValue* System::Net::Http::Headers::NameValueHeaderValue::Create(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::NameValueHeaderValue*>(nullptr, ___internal_method, name, value);
}
inline ::System::Object* System::Net::Http::Headers::NameValueHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Net::Http::Headers::NameValueHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::NameValueHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Net::Http::Headers::NameValueHeaderValue::TryParsePragma(::StringW input, int32_t minimalCount,
                                                                             ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(),
                                                           { "TryParsePragma",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, result);
}
inline bool System::Net::Http::Headers::NameValueHeaderValue::TryParseParameters(::System::Net::Http::Headers::Lexer* lexer,
                                                                                 ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> result,
                                                                                 ::by_ref<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(),
                                                           { "TryParseParameters",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, result, t);
}
inline ::StringW System::Net::Http::Headers::NameValueHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::NameValueHeaderValue::TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::by_ref<::System::Net::Http::Headers::NameValueHeaderValue*> parsedValue,
                                                                              ::by_ref<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueHeaderValue*>(),
                                                           { "TryParseElement",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::NameValueHeaderValue*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, parsedValue, t);
}
inline ::System::Net::Http::Headers::NameValueHeaderValue* System::Net::Http::Headers::NameValueHeaderValue::New_ctor(::StringW name, ::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::NameValueHeaderValue*>(name, value));
}
inline ::System::Net::Http::Headers::NameValueHeaderValue* System::Net::Http::Headers::NameValueHeaderValue::New_ctor(::System::Net::Http::Headers::NameValueHeaderValue* source) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::NameValueHeaderValue*>(source));
}
inline ::System::Net::Http::Headers::NameValueHeaderValue* System::Net::Http::Headers::NameValueHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::NameValueHeaderValue*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::NameValueHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::NameValueHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::NameValueHeaderValue::NameValueHeaderValue() {}
