#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JTokenReader.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenReader_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.get_CurrentToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JTokenReader::*)()>(&::Newtonsoft::Json::Linq::JTokenReader::get_CurrentToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "get_CurrentToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JTokenReader::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d85f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JToken*, ::StringW)>(
    &::Newtonsoft::Json::Linq::JTokenReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d85f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JTokenReader::*)()>(&::Newtonsoft::Json::Linq::JTokenReader::Read)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d85f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.ReadOver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JTokenReader::ReadOver)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d860d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "ReadOver", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.ReadToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JTokenReader::*)()>(&::Newtonsoft::Json::Linq::JTokenReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d86808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "ReadToEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.GetEndToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Newtonsoft::Json::JsonToken> (::Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JContainer*)>(
    &::Newtonsoft::Json::Linq::JTokenReader::GetEndToken)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d868c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "GetEndToken", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.ReadInto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JContainer*)>(&::Newtonsoft::Json::Linq::JTokenReader::ReadInto)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d8606c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "ReadInto", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.SetEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JContainer*)>(&::Newtonsoft::Json::Linq::JTokenReader::SetEnd)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d86820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "SetEnd", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.SetToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JTokenReader::SetToken)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x5d86174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "SetToken", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.SafeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JTokenReader::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JTokenReader::SafeToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d869cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "SafeToString", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.Newtonsoft_Json_IJsonLineInfo_HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JTokenReader::*)()>(&::Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d869ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "Newtonsoft.Json.IJsonLineInfo.HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.Newtonsoft_Json_IJsonLineInfo_get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JTokenReader::*)()>(&::Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d86aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "Newtonsoft.Json.IJsonLineInfo.get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.Newtonsoft_Json_IJsonLineInfo_get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JTokenReader::*)()>(
    &::Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d86b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "Newtonsoft.Json.IJsonLineInfo.get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenReader.get_Path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JTokenReader::*)()>(&::Newtonsoft::Json::Linq::JTokenReader::get_Path)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d86c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_get__root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_get__root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root;
}
constexpr void Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_set__root(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____root = value;
}
constexpr ::StringW& Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_get__initialPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialPath;
}
constexpr ::StringW const& Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_get__initialPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialPath;
}
constexpr void Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_set__initialPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialPath = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_set__parent(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void Newtonsoft::Json::Linq::JTokenReader::__cordl_internal_set__current(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JTokenReader::get_CurrentToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "get_CurrentToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenReader::_ctor(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Linq::JTokenReader::_ctor(::Newtonsoft::Json::Linq::JToken* token, ::StringW initialPath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, initialPath);
}
inline bool Newtonsoft::Json::Linq::JTokenReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JTokenReader::ReadOver(::Newtonsoft::Json::Linq::JToken* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "ReadOver", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline bool Newtonsoft::Json::Linq::JTokenReader::ReadToEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "ReadToEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::Newtonsoft::Json::JsonToken> Newtonsoft::Json::Linq::JTokenReader::GetEndToken(::Newtonsoft::Json::Linq::JContainer* c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "GetEndToken", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Newtonsoft::Json::JsonToken>>(this, ___internal_method, c);
}
inline bool Newtonsoft::Json::Linq::JTokenReader::ReadInto(::Newtonsoft::Json::Linq::JContainer* c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "ReadInto", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool Newtonsoft::Json::Linq::JTokenReader::SetEnd(::Newtonsoft::Json::Linq::JContainer* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "SetEnd", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Newtonsoft::Json::Linq::JTokenReader::SetToken(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "SetToken", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::StringW Newtonsoft::Json::Linq::JTokenReader::SafeToString(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "SafeToString", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "Newtonsoft.Json.IJsonLineInfo.HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "Newtonsoft.Json.IJsonLineInfo.get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), { "Newtonsoft.Json.IJsonLineInfo.get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JTokenReader::get_Path() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenReader*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JTokenReader* Newtonsoft::Json::Linq::JTokenReader::New_ctor(::Newtonsoft::Json::Linq::JToken* token) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JTokenReader*>(token));
}
inline ::Newtonsoft::Json::Linq::JTokenReader* Newtonsoft::Json::Linq::JTokenReader::New_ctor(::Newtonsoft::Json::Linq::JToken* token, ::StringW initialPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JTokenReader*>(token, initialPath));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr Newtonsoft::Json::Linq::JTokenReader::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::Linq::JTokenReader::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JTokenReader::JTokenReader() {}
