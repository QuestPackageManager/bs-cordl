#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\StringWithQualityHeaderValue.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__StringWithQualityHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)()>(&::System::Net::Http::Headers::StringWithQualityHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60efabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.get_Quality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)()>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::get_Quality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60efac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "get_Quality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.set_Quality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)(::System::Nullable_1<double_t>)>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::set_Quality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60efacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "set_Quality", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)()>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60efad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)(::StringW)>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60efadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)()>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60efae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)(::System::Object*)>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60efae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)()>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60efbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*>)>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60efc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(),
                                                { "TryParse",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.TryParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::System::Net::Http::Headers::StringWithQualityHeaderValue*>,
                                                                ::by_ref<::System::Net::Http::Headers::Token>)>(&::System::Net::Http::Headers::StringWithQualityHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x60efd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(),
                                                { "TryParseElement",
                                                  {},
                                                  { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::StringWithQualityHeaderValue*>>(),
                                                    ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::StringWithQualityHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::StringWithQualityHeaderValue::*)()>(
    &::System::Net::Http::Headers::StringWithQualityHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60eff94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<double_t>& System::Net::Http::Headers::StringWithQualityHeaderValue::__cordl_internal_get__Quality_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Quality_k__BackingField;
}
constexpr ::System::Nullable_1<double_t> const& System::Net::Http::Headers::StringWithQualityHeaderValue::__cordl_internal_get__Quality_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Quality_k__BackingField;
}
constexpr void System::Net::Http::Headers::StringWithQualityHeaderValue::__cordl_internal_set__Quality_k__BackingField(::System::Nullable_1<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Quality_k__BackingField = value;
}
constexpr ::StringW& System::Net::Http::Headers::StringWithQualityHeaderValue::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::StringW const& System::Net::Http::Headers::StringWithQualityHeaderValue::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void System::Net::Http::Headers::StringWithQualityHeaderValue::__cordl_internal_set__Value_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Value_k__BackingField = value;
}
inline void System::Net::Http::Headers::StringWithQualityHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> System::Net::Http::Headers::StringWithQualityHeaderValue::get_Quality() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "get_Quality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::StringWithQualityHeaderValue::set_Quality(::System::Nullable_1<double_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "set_Quality", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::Http::Headers::StringWithQualityHeaderValue::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::StringWithQualityHeaderValue::set_Value(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Net::Http::Headers::StringWithQualityHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::StringWithQualityHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::StringWithQualityHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::StringWithQualityHeaderValue::TryParse(::StringW input, int32_t minimalCount,
                                                                               ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(),
                                                           { "TryParse",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, result);
}
inline bool System::Net::Http::Headers::StringWithQualityHeaderValue::TryParseElement(::System::Net::Http::Headers::Lexer* lexer,
                                                                                      ::by_ref<::System::Net::Http::Headers::StringWithQualityHeaderValue*> parsedValue,
                                                                                      ::by_ref<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(),
                                              { "TryParseElement",
                                                {},
                                                { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::StringWithQualityHeaderValue*>>(),
                                                  ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, parsedValue, t);
}
inline ::StringW System::Net::Http::Headers::StringWithQualityHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::StringWithQualityHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::StringWithQualityHeaderValue* System::Net::Http::Headers::StringWithQualityHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::StringWithQualityHeaderValue*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::StringWithQualityHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::StringWithQualityHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::StringWithQualityHeaderValue::StringWithQualityHeaderValue() {}
