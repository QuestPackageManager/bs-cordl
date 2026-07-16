#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/ProductInfoHeaderValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__ProductInfoHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__ProductHeaderValue_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::ProductInfoHeaderValue::*)(::System::Net::Http::Headers::ProductHeaderValue*)>(
    &::System::Net::Http::Headers::ProductInfoHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60e8098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::ProductHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&::System::Net::Http::Headers::ProductInfoHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e80dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.get_Comment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&::System::Net::Http::Headers::ProductInfoHeaderValue::get_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e80e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { "get_Comment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.set_Comment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::ProductInfoHeaderValue::*)(::StringW)>(&::System::Net::Http::Headers::ProductInfoHeaderValue::set_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e80e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { "set_Comment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.get_Product
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::ProductHeaderValue* (::System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(
    &::System::Net::Http::Headers::ProductInfoHeaderValue::get_Product)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e80f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { "get_Product", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.set_Product
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::ProductInfoHeaderValue::*)(::System::Net::Http::Headers::ProductHeaderValue*)>(
    &::System::Net::Http::Headers::ProductInfoHeaderValue::set_Product)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e80f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                                                           { "set_Product", {}, { ::i2c::type_of<::System::Net::Http::Headers::ProductHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(
    &::System::Net::Http::Headers::ProductInfoHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e8100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::ProductInfoHeaderValue::*)(::System::Object*)>(
    &::System::Net::Http::Headers::ProductInfoHeaderValue::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60e8104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&::System::Net::Http::Headers::ProductInfoHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60e81c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*>)>(
    &::System::Net::Http::Headers::ProductInfoHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x60e81ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                             { "TryParse",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.TryParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::System::Net::Http::Headers::ProductInfoHeaderValue*>)>(
    &::System::Net::Http::Headers::ProductInfoHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x60e83a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                            { "TryParseElement", {}, { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::ProductInfoHeaderValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::ProductInfoHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&::System::Net::Http::Headers::ProductInfoHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e857c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::Http::Headers::ProductInfoHeaderValue::__cordl_internal_get__Comment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Comment_k__BackingField;
}
constexpr ::StringW const& System::Net::Http::Headers::ProductInfoHeaderValue::__cordl_internal_get__Comment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Comment_k__BackingField;
}
constexpr void System::Net::Http::Headers::ProductInfoHeaderValue::__cordl_internal_set__Comment_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Comment_k__BackingField = value;
}
constexpr ::System::Net::Http::Headers::ProductHeaderValue*& System::Net::Http::Headers::ProductInfoHeaderValue::__cordl_internal_get__Product_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Product_k__BackingField;
}
constexpr ::System::Net::Http::Headers::ProductHeaderValue* const& System::Net::Http::Headers::ProductInfoHeaderValue::__cordl_internal_get__Product_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Product_k__BackingField;
}
constexpr void System::Net::Http::Headers::ProductInfoHeaderValue::__cordl_internal_set__Product_k__BackingField(::System::Net::Http::Headers::ProductHeaderValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Product_k__BackingField = value;
}
inline void System::Net::Http::Headers::ProductInfoHeaderValue::_ctor(::System::Net::Http::Headers::ProductHeaderValue* product) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::ProductHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, product);
}
inline void System::Net::Http::Headers::ProductInfoHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::ProductInfoHeaderValue::get_Comment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { "get_Comment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::ProductInfoHeaderValue::set_Comment(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { "set_Comment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::ProductHeaderValue* System::Net::Http::Headers::ProductInfoHeaderValue::get_Product() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { "get_Product", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::ProductHeaderValue*>(this, ___internal_method);
}
inline void System::Net::Http::Headers::ProductInfoHeaderValue::set_Product(::System::Net::Http::Headers::ProductHeaderValue* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                                                         { "set_Product", {}, { ::i2c::type_of<::System::Net::Http::Headers::ProductHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Net::Http::Headers::ProductInfoHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::ProductInfoHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::ProductInfoHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::ProductInfoHeaderValue::TryParse(::StringW input, int32_t minimalCount,
                                                                         ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                                                           { "TryParse",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, result);
}
inline bool System::Net::Http::Headers::ProductInfoHeaderValue::TryParseElement(::System::Net::Http::Headers::Lexer* lexer,
                                                                                ::by_ref<::System::Net::Http::Headers::ProductInfoHeaderValue*> parsedValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(),
                          { "TryParseElement", {}, { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::ProductInfoHeaderValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, parsedValue);
}
inline ::StringW System::Net::Http::Headers::ProductInfoHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::ProductInfoHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::ProductInfoHeaderValue* System::Net::Http::Headers::ProductInfoHeaderValue::New_ctor(::System::Net::Http::Headers::ProductHeaderValue* product) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::ProductInfoHeaderValue*>(product));
}
inline ::System::Net::Http::Headers::ProductInfoHeaderValue* System::Net::Http::Headers::ProductInfoHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::ProductInfoHeaderValue*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::ProductInfoHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::ProductInfoHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::ProductInfoHeaderValue::ProductInfoHeaderValue() {}
