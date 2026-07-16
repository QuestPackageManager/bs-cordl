#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HeaderInfo.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_CollectionHeaderTypeInfo_2_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseDelegate_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseListDelegate_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HeaderInfo::*)(::StringW, ::System::Net::Http::Headers::HttpHeaderKind)>(
    &::System::Net::Http::Headers::HeaderInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e1798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Http::Headers::HttpHeaderKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo.CreateCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::HeaderInfo::*)(::System::Net::Http::Headers::HttpHeaders*)>(
    &::System::Net::Http::Headers::HeaderInfo::CreateCollection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60e17a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { "CreateCollection", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpHeaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo.get_CustomToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::System::Object*, ::StringW>* (::System::Net::Http::Headers::HeaderInfo::*)()>(
    &::System::Net::Http::Headers::HeaderInfo::get_CustomToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e17b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { "get_CustomToString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo.set_CustomToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HeaderInfo::*)(::System::Func_2<::System::Object*, ::StringW>*)>(
    &::System::Net::Http::Headers::HeaderInfo::set_CustomToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e17bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(),
                                                                                           { "set_CustomToString", {}, { ::i2c::type_of<::System::Func_2<::System::Object*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo.get_Separator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::HeaderInfo::*)()>(&::System::Net::Http::Headers::HeaderInfo::get_Separator)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60e17c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo.AddToCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HeaderInfo::*)(::System::Object*, ::System::Object*)>(
    &::System::Net::Http::Headers::HeaderInfo::AddToCollection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo.CreateCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Net::Http::Headers::HeaderInfo::*)(::System::Net::Http::Headers::HttpHeaders*, ::System::Net::Http::Headers::HeaderInfo*)>(&::System::Net::Http::Headers::HeaderInfo::CreateCollection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo.ToStringCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::System::Net::Http::Headers::HeaderInfo::*)(::System::Object*)>(
    &::System::Net::Http::Headers::HeaderInfo::ToStringCollection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HeaderInfo.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HeaderInfo::*)(::StringW, ::by_ref<::System::Object*>)>(
    &::System::Net::Http::Headers::HeaderInfo::TryParse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 8 }));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Http::Headers::HeaderInfo::__cordl_internal_get_AllowsMany() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllowsMany;
}
constexpr bool const& System::Net::Http::Headers::HeaderInfo::__cordl_internal_get_AllowsMany() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllowsMany;
}
constexpr void System::Net::Http::Headers::HeaderInfo::__cordl_internal_set_AllowsMany(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AllowsMany = value;
}
constexpr ::System::Net::Http::Headers::HttpHeaderKind& System::Net::Http::Headers::HeaderInfo::__cordl_internal_get_HeaderKind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderKind;
}
constexpr ::System::Net::Http::Headers::HttpHeaderKind const& System::Net::Http::Headers::HeaderInfo::__cordl_internal_get_HeaderKind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderKind;
}
constexpr void System::Net::Http::Headers::HeaderInfo::__cordl_internal_set_HeaderKind(::System::Net::Http::Headers::HttpHeaderKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HeaderKind = value;
}
constexpr ::StringW& System::Net::Http::Headers::HeaderInfo::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& System::Net::Http::Headers::HeaderInfo::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void System::Net::Http::Headers::HeaderInfo::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr ::System::Func_2<::System::Object*, ::StringW>*& System::Net::Http::Headers::HeaderInfo::__cordl_internal_get__CustomToString_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CustomToString_k__BackingField;
}
constexpr ::System::Func_2<::System::Object*, ::StringW>* const& System::Net::Http::Headers::HeaderInfo::__cordl_internal_get__CustomToString_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CustomToString_k__BackingField;
}
constexpr void System::Net::Http::Headers::HeaderInfo::__cordl_internal_set__CustomToString_k__BackingField(::System::Func_2<::System::Object*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CustomToString_k__BackingField = value;
}
inline void System::Net::Http::Headers::HeaderInfo::_ctor(::StringW name, ::System::Net::Http::Headers::HttpHeaderKind headerKind) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Http::Headers::HttpHeaderKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, headerKind);
}
template <typename T>
inline ::System::Net::Http::Headers::HeaderInfo* System::Net::Http::Headers::HeaderInfo::CreateSingle(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser,
                                                                                                      ::System::Net::Http::Headers::HttpHeaderKind headerKind,
                                                                                                      ::System::Func_2<::System::Object*, ::StringW>* toString) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(),
                                                           { "CreateSingle",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Http::Headers::TryParseDelegate_1<T>*>(),
                                                               ::i2c::type_of<::System::Net::Http::Headers::HttpHeaderKind>(), ::i2c::type_of<::System::Func_2<::System::Object*, ::StringW>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HeaderInfo*>(nullptr, ___internal_method, name, parser, headerKind, toString);
}
template <typename T>
inline ::System::Net::Http::Headers::HeaderInfo* System::Net::Http::Headers::HeaderInfo::CreateMulti(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* elementParser,
                                                                                                     ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount,
                                                                                                     ::StringW separator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(),
                                                           { "CreateMulti",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Http::Headers::TryParseListDelegate_1<T>*>(),
                                                               ::i2c::type_of<::System::Net::Http::Headers::HttpHeaderKind>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HeaderInfo*>(nullptr, ___internal_method, name, elementParser, headerKind, minimalCount, separator);
}
inline ::System::Object* System::Net::Http::Headers::HeaderInfo::CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { "CreateCollection", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpHeaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, headers);
}
inline ::System::Func_2<::System::Object*, ::StringW>* System::Net::Http::Headers::HeaderInfo::get_CustomToString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), { "get_CustomToString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::System::Object*, ::StringW>*>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HeaderInfo::set_CustomToString(::System::Func_2<::System::Object*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(),
                                                                                         { "set_CustomToString", {}, { ::i2c::type_of<::System::Func_2<::System::Object*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::Http::Headers::HeaderInfo::get_Separator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HeaderInfo::AddToCollection(::System::Object* collection, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, value);
}
inline ::System::Object* System::Net::Http::Headers::HeaderInfo::CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers, ::System::Net::Http::Headers::HeaderInfo* headerInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, headers, headerInfo);
}
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::HeaderInfo::ToStringCollection(::System::Object* collection) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, collection);
}
inline bool System::Net::Http::Headers::HeaderInfo::TryParse(::StringW value, ::by_ref<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::HeaderInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, result);
}
inline ::System::Net::Http::Headers::HeaderInfo* System::Net::Http::Headers::HeaderInfo::New_ctor(::StringW name, ::System::Net::Http::Headers::HttpHeaderKind headerKind) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HeaderInfo*>(name, headerKind));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HeaderInfo::HeaderInfo() {}
