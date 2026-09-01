#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\MediaTypeHeaderValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue___c::*)()>(&::System::Net::Http::Headers::MediaTypeHeaderValue___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ebde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue___c._get_CharSet_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::MediaTypeHeaderValue___c::*)(::System::Net::Http::Headers::NameValueHeaderValue*)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue___c::_get_CharSet_b__6_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ebde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue___c*>(),
                                                                                           { "<get_CharSet>b__6_0", {}, { ::i2c::type_of<::System::Net::Http::Headers::NameValueHeaderValue*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::MediaTypeHeaderValue___c::setStaticF___9(::System::Net::Http::Headers::MediaTypeHeaderValue___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::Headers::MediaTypeHeaderValue___c*, "<>9", ::System::Net::Http::Headers::MediaTypeHeaderValue___c*>(
      std::forward<::System::Net::Http::Headers::MediaTypeHeaderValue___c*>(value));
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue___c* System::Net::Http::Headers::MediaTypeHeaderValue___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::Headers::MediaTypeHeaderValue___c*, "<>9", ::System::Net::Http::Headers::MediaTypeHeaderValue___c*>();
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue___c::setStaticF___9__6_0(::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, "<>9__6_0", ::System::Net::Http::Headers::MediaTypeHeaderValue___c*>(
      std::forward<::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>(value));
}
inline ::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* System::Net::Http::Headers::MediaTypeHeaderValue___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, "<>9__6_0", ::System::Net::Http::Headers::MediaTypeHeaderValue___c*>();
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::MediaTypeHeaderValue___c::_get_CharSet_b__6_0(::System::Net::Http::Headers::NameValueHeaderValue* l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue___c*>(),
                                                                                         { "<get_CharSet>b__6_0", {}, { ::i2c::type_of<::System::Net::Http::Headers::NameValueHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue___c* System::Net::Http::Headers::MediaTypeHeaderValue___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::MediaTypeHeaderValue___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::MediaTypeHeaderValue___c::MediaTypeHeaderValue___c() {}
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::StringW)>(&::System::Net::Http::Headers::MediaTypeHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60db3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::System::Net::Http::Headers::MediaTypeHeaderValue*)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x60eb5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(&::System::Net::Http::Headers::MediaTypeHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60eb808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.get_CharSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(&::System::Net::Http::Headers::MediaTypeHeaderValue::get_CharSet)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x60deb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "get_CharSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.set_CharSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::StringW)>(&::System::Net::Http::Headers::MediaTypeHeaderValue::set_CharSet)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60e225c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "set_CharSet", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.set_MediaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::StringW)>(&::System::Net::Http::Headers::MediaTypeHeaderValue::set_MediaType)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x60eb490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "set_MediaType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.get_Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* (
    ::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(&::System::Net::Http::Headers::MediaTypeHeaderValue::get_Parameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e00a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "get_Parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60eb994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::System::Object*)>(&::System::Net::Http::Headers::MediaTypeHeaderValue::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60eb9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(&::System::Net::Http::Headers::MediaTypeHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60ebac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::MediaTypeHeaderValue* (*)(::StringW)>(&::System::Net::Http::Headers::MediaTypeHeaderValue::Parse)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60ebb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(&::System::Net::Http::Headers::MediaTypeHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60ebd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Net::Http::Headers::MediaTypeHeaderValue*>)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x60ebba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(),
                                                             { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::MediaTypeHeaderValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.TryParseMediaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Net::Http::Headers::Token> (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::StringW>)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::TryParseMediaType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x60eb80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(),
                                                             { "TryParseMediaType", {}, { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* const&
System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
constexpr ::StringW& System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_get_media_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___media_type;
}
constexpr ::StringW const& System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_get_media_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___media_type;
}
constexpr void System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_set_media_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___media_type = value;
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::_ctor(::StringW mediaType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mediaType);
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::_ctor(::System::Net::Http::Headers::MediaTypeHeaderValue* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::MediaTypeHeaderValue::get_CharSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "get_CharSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::set_CharSet(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "set_CharSet", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::set_MediaType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "set_MediaType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* System::Net::Http::Headers::MediaTypeHeaderValue::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "get_Parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>(this, ___internal_method);
}
inline ::System::Object* System::Net::Http::Headers::MediaTypeHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::MediaTypeHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::MediaTypeHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::Parse(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::MediaTypeHeaderValue*>(nullptr, ___internal_method, input);
}
inline ::StringW System::Net::Http::Headers::MediaTypeHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::MediaTypeHeaderValue::TryParse(::StringW input, ::by_ref<::System::Net::Http::Headers::MediaTypeHeaderValue*> parsedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(),
                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::MediaTypeHeaderValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, parsedValue);
}
inline ::System::Nullable_1<::System::Net::Http::Headers::Token> System::Net::Http::Headers::MediaTypeHeaderValue::TryParseMediaType(::System::Net::Http::Headers::Lexer* lexer,
                                                                                                                                     ::by_ref<::StringW> media) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>(),
                                                           { "TryParseMediaType", {}, { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Net::Http::Headers::Token>>(nullptr, ___internal_method, lexer, media);
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::New_ctor(::StringW mediaType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::MediaTypeHeaderValue*>(mediaType));
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::New_ctor(::System::Net::Http::Headers::MediaTypeHeaderValue* source) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::MediaTypeHeaderValue*>(source));
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::MediaTypeHeaderValue*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::MediaTypeHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::MediaTypeHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::MediaTypeHeaderValue::MediaTypeHeaderValue() {}
