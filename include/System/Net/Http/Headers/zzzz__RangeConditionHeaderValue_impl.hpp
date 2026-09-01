#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\RangeConditionHeaderValue.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__RangeConditionHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__EntityTagHeaderValue_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeConditionHeaderValue::*)(::System::DateTimeOffset)>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60eddb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeConditionHeaderValue::*)(::System::Net::Http::Headers::EntityTagHeaderValue*)>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60ede18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::EntityTagHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.get_Date
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::get_Date)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60ede70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), { "get_Date", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.set_Date
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeConditionHeaderValue::*)(::System::Nullable_1<::System::DateTimeOffset>)>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::set_Date)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60ede84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                           { "set_Date", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.get_EntityTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::EntityTagHeaderValue* (::System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::get_EntityTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ede98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), { "get_EntityTag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.set_EntityTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeConditionHeaderValue::*)(::System::Net::Http::Headers::EntityTagHeaderValue*)>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::set_EntityTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60edea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                           { "set_EntityTag", {}, { ::i2c::type_of<::System::Net::Http::Headers::EntityTagHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60edea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::RangeConditionHeaderValue::*)(::System::Object*)>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::Equals)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x60edeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(&::System::Net::Http::Headers::RangeConditionHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60edff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Net::Http::Headers::RangeConditionHeaderValue*>)>(
    &::System::Net::Http::Headers::RangeConditionHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x60ee080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::RangeConditionHeaderValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeConditionHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(&::System::Net::Http::Headers::RangeConditionHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60ee2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::DateTimeOffset>& System::Net::Http::Headers::RangeConditionHeaderValue::__cordl_internal_get__Date_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Date_k__BackingField;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset> const& System::Net::Http::Headers::RangeConditionHeaderValue::__cordl_internal_get__Date_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Date_k__BackingField;
}
constexpr void System::Net::Http::Headers::RangeConditionHeaderValue::__cordl_internal_set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Date_k__BackingField = value;
}
constexpr ::System::Net::Http::Headers::EntityTagHeaderValue*& System::Net::Http::Headers::RangeConditionHeaderValue::__cordl_internal_get__EntityTag_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EntityTag_k__BackingField;
}
constexpr ::System::Net::Http::Headers::EntityTagHeaderValue* const& System::Net::Http::Headers::RangeConditionHeaderValue::__cordl_internal_get__EntityTag_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EntityTag_k__BackingField;
}
constexpr void System::Net::Http::Headers::RangeConditionHeaderValue::__cordl_internal_set__EntityTag_k__BackingField(::System::Net::Http::Headers::EntityTagHeaderValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EntityTag_k__BackingField = value;
}
inline void System::Net::Http::Headers::RangeConditionHeaderValue::_ctor(::System::DateTimeOffset date) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, date);
}
inline void System::Net::Http::Headers::RangeConditionHeaderValue::_ctor(::System::Net::Http::Headers::EntityTagHeaderValue* entityTag) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::EntityTagHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityTag);
}
inline ::System::Nullable_1<::System::DateTimeOffset> System::Net::Http::Headers::RangeConditionHeaderValue::get_Date() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), { "get_Date", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::RangeConditionHeaderValue::set_Date(::System::Nullable_1<::System::DateTimeOffset> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                         { "set_Date", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::EntityTagHeaderValue* System::Net::Http::Headers::RangeConditionHeaderValue::get_EntityTag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), { "get_EntityTag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::EntityTagHeaderValue*>(this, ___internal_method);
}
inline void System::Net::Http::Headers::RangeConditionHeaderValue::set_EntityTag(::System::Net::Http::Headers::EntityTagHeaderValue* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                                                         { "set_EntityTag", {}, { ::i2c::type_of<::System::Net::Http::Headers::EntityTagHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Net::Http::Headers::RangeConditionHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::RangeConditionHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::RangeConditionHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::RangeConditionHeaderValue::TryParse(::StringW input, ::by_ref<::System::Net::Http::Headers::RangeConditionHeaderValue*> parsedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(),
                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::RangeConditionHeaderValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, parsedValue);
}
inline ::StringW System::Net::Http::Headers::RangeConditionHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeConditionHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::RangeConditionHeaderValue* System::Net::Http::Headers::RangeConditionHeaderValue::New_ctor(::System::DateTimeOffset date) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::RangeConditionHeaderValue*>(date));
}
inline ::System::Net::Http::Headers::RangeConditionHeaderValue* System::Net::Http::Headers::RangeConditionHeaderValue::New_ctor(::System::Net::Http::Headers::EntityTagHeaderValue* entityTag) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::RangeConditionHeaderValue*>(entityTag));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::RangeConditionHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::RangeConditionHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::RangeConditionHeaderValue::RangeConditionHeaderValue() {}
