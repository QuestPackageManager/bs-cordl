#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/WarningHeaderValue.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__WarningHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::WarningHeaderValue::*)()>(&::System::Net::Http::Headers::WarningHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60eb760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.get_Agent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::WarningHeaderValue::*)()>(&::System::Net::Http::Headers::WarningHeaderValue::get_Agent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eb764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "get_Agent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.set_Agent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::WarningHeaderValue::*)(::StringW)>(&::System::Net::Http::Headers::WarningHeaderValue::set_Agent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eb76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "set_Agent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.get_Code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::WarningHeaderValue::*)()>(&::System::Net::Http::Headers::WarningHeaderValue::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eb774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "get_Code", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.set_Code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::WarningHeaderValue::*)(int32_t)>(&::System::Net::Http::Headers::WarningHeaderValue::set_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eb77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "set_Code", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.get_Date
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::System::Net::Http::Headers::WarningHeaderValue::*)()>(
    &::System::Net::Http::Headers::WarningHeaderValue::get_Date)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60eb784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "get_Date", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.set_Date
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::WarningHeaderValue::*)(::System::Nullable_1<::System::DateTimeOffset>)>(
    &::System::Net::Http::Headers::WarningHeaderValue::set_Date)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60eb798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(),
                                                                                           { "set_Date", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.get_Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::WarningHeaderValue::*)()>(&::System::Net::Http::Headers::WarningHeaderValue::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eb7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "get_Text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.set_Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::WarningHeaderValue::*)(::StringW)>(&::System::Net::Http::Headers::WarningHeaderValue::set_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eb7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "set_Text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.IsCodeValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Net::Http::Headers::WarningHeaderValue::IsCodeValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60eb7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "IsCodeValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::WarningHeaderValue::*)()>(
    &::System::Net::Http::Headers::WarningHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60eb7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::WarningHeaderValue::*)(::System::Object*)>(&::System::Net::Http::Headers::WarningHeaderValue::Equals)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x60eb7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::WarningHeaderValue::*)()>(&::System::Net::Http::Headers::WarningHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60eb92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*>)>(
    &::System::Net::Http::Headers::WarningHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60eb9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(),
                                                             { "TryParse",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.TryParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::System::Net::Http::Headers::WarningHeaderValue*>,
                                                                ::by_ref<::System::Net::Http::Headers::Token>)>(&::System::Net::Http::Headers::WarningHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x60ebaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(),
                                                             { "TryParseElement",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::WarningHeaderValue*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::WarningHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::WarningHeaderValue::*)()>(&::System::Net::Http::Headers::WarningHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x60ebd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_get__Agent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Agent_k__BackingField;
}
constexpr ::StringW const& System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_get__Agent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Agent_k__BackingField;
}
constexpr void System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_set__Agent_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Agent_k__BackingField = value;
}
constexpr int32_t& System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_get__Code_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Code_k__BackingField;
}
constexpr int32_t const& System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_get__Code_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Code_k__BackingField;
}
constexpr void System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_set__Code_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Code_k__BackingField = value;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset>& System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_get__Date_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Date_k__BackingField;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset> const& System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_get__Date_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Date_k__BackingField;
}
constexpr void System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Date_k__BackingField = value;
}
constexpr ::StringW& System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_get__Text_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Text_k__BackingField;
}
constexpr ::StringW const& System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_get__Text_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Text_k__BackingField;
}
constexpr void System::Net::Http::Headers::WarningHeaderValue::__cordl_internal_set__Text_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Text_k__BackingField = value;
}
inline void System::Net::Http::Headers::WarningHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::WarningHeaderValue::get_Agent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "get_Agent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::WarningHeaderValue::set_Agent(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "set_Agent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::Http::Headers::WarningHeaderValue::get_Code() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "get_Code", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Http::Headers::WarningHeaderValue::set_Code(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "set_Code", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> System::Net::Http::Headers::WarningHeaderValue::get_Date() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "get_Date", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::WarningHeaderValue::set_Date(::System::Nullable_1<::System::DateTimeOffset> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(),
                                                                                         { "set_Date", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::Http::Headers::WarningHeaderValue::get_Text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "get_Text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::WarningHeaderValue::set_Text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "set_Text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::Headers::WarningHeaderValue::IsCodeValid(int32_t code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "IsCodeValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, code);
}
inline ::System::Object* System::Net::Http::Headers::WarningHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::WarningHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::WarningHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::WarningHeaderValue::TryParse(::StringW input, int32_t minimalCount,
                                                                     ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(),
                                                           { "TryParse",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, result);
}
inline bool System::Net::Http::Headers::WarningHeaderValue::TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::by_ref<::System::Net::Http::Headers::WarningHeaderValue*> parsedValue,
                                                                            ::by_ref<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(),
                                                           { "TryParseElement",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::WarningHeaderValue*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, parsedValue, t);
}
inline ::StringW System::Net::Http::Headers::WarningHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::WarningHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::WarningHeaderValue* System::Net::Http::Headers::WarningHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::WarningHeaderValue*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::WarningHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::WarningHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::WarningHeaderValue::WarningHeaderValue() {}
