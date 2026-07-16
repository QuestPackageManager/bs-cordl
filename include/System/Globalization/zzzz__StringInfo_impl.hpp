#pragma once
// IWYU pragma private; include "System/Globalization/StringInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__StringInfo_def.hpp"
#include "System/Globalization/zzzz__UnicodeCategory_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Globalization::StringInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::StringInfo::*)()>(&::System::Globalization::StringInfo::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bcb178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::StringInfo::*)(::StringW)>(&::System::Globalization::StringInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bcb1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.OnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::StringInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::StringInfo::OnDeserializing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bcb238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(),
                                                                                           { "OnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::StringInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::StringInfo::OnDeserialized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bcb250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::StringInfo::*)(::System::Object*)>(&::System::Globalization::StringInfo::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bcb274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { ::i2c::class_of<::System::Globalization::StringInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::StringInfo::*)()>(&::System::Globalization::StringInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bcb31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { ::i2c::class_of<::System::Globalization::StringInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.get_Indexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::StringInfo::*)()>(&::System::Globalization::StringInfo::get_Indexes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bcb338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "get_Indexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.get_String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::StringInfo::*)()>(&::System::Globalization::StringInfo::get_String)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcb4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "get_String", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.set_String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::StringInfo::*)(::StringW)>(&::System::Globalization::StringInfo::set_String)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bcb1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "set_String", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.get_LengthInTextElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::StringInfo::*)()>(&::System::Globalization::StringInfo::get_LengthInTextElements)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bcb4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "get_LengthInTextElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.GetCurrentTextElementLen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::by_ref<::System::Globalization::UnicodeCategory>, ::by_ref<int32_t>)>(
    &::System::Globalization::StringInfo::GetCurrentTextElementLen)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5bcb520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(),
                                                             { "GetCurrentTextElementLen",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::System::Globalization::UnicodeCategory>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::StringInfo.ParseCombiningCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::StringW)>(&::System::Globalization::StringInfo::ParseCombiningCharacters)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5bcb378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "ParseCombiningCharacters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::StringInfo::__cordl_internal_get_m_str() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_str;
}
constexpr ::StringW const& System::Globalization::StringInfo::__cordl_internal_get_m_str() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_str;
}
constexpr void System::Globalization::StringInfo::__cordl_internal_set_m_str(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_str = value;
}
constexpr ::ArrayW<int32_t>& System::Globalization::StringInfo::__cordl_internal_get_m_indexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_indexes;
}
constexpr ::ArrayW<int32_t> const& System::Globalization::StringInfo::__cordl_internal_get_m_indexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_indexes;
}
constexpr void System::Globalization::StringInfo::__cordl_internal_set_m_indexes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_indexes = value;
}
inline void System::Globalization::StringInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::StringInfo::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Globalization::StringInfo::OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "OnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Globalization::StringInfo::OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline bool System::Globalization::StringInfo::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::StringInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Globalization::StringInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::StringInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<int32_t> System::Globalization::StringInfo::get_Indexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "get_Indexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::StringW System::Globalization::StringInfo::get_String() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "get_String", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Globalization::StringInfo::set_String(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "set_String", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Globalization::StringInfo::get_LengthInTextElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "get_LengthInTextElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::StringInfo::GetCurrentTextElementLen(::StringW str, int32_t index, int32_t len, ::by_ref<::System::Globalization::UnicodeCategory> ucCurrent,
                                                                           ::by_ref<int32_t> currentCharCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "GetCurrentTextElementLen",
                                                                                     {},
                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<::by_ref<::System::Globalization::UnicodeCategory>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, index, len, ucCurrent, currentCharCount);
}
inline ::ArrayW<int32_t> System::Globalization::StringInfo::ParseCombiningCharacters(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::StringInfo*>(), { "ParseCombiningCharacters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, str);
}
inline ::System::Globalization::StringInfo* System::Globalization::StringInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::StringInfo*>());
}
inline ::System::Globalization::StringInfo* System::Globalization::StringInfo::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::StringInfo*>(value));
}
// Ctor Parameters []
constexpr ::System::Globalization::StringInfo::StringInfo() {}
