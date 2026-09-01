#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\RangeItemHeaderValue.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__RangeItemHeaderValue_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeItemHeaderValue::*)(::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>)>(
    &::System::Net::Http::Headers::RangeItemHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x60eef40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue.get_From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::System::Net::Http::Headers::RangeItemHeaderValue::*)()>(
    &::System::Net::Http::Headers::RangeItemHeaderValue::get_From)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60ef074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "get_From", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue.set_From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeItemHeaderValue::*)(::System::Nullable_1<int64_t>)>(
    &::System::Net::Http::Headers::RangeItemHeaderValue::set_From)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "set_From", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue.get_To
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::System::Net::Http::Headers::RangeItemHeaderValue::*)()>(
    &::System::Net::Http::Headers::RangeItemHeaderValue::get_To)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60ef088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "get_To", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue.set_To
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeItemHeaderValue::*)(::System::Nullable_1<int64_t>)>(
    &::System::Net::Http::Headers::RangeItemHeaderValue::set_To)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "set_To", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::RangeItemHeaderValue::*)()>(
    &::System::Net::Http::Headers::RangeItemHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ef09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::RangeItemHeaderValue::*)(::System::Object*)>(&::System::Net::Http::Headers::RangeItemHeaderValue::Equals)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x60ef0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::RangeItemHeaderValue::*)()>(&::System::Net::Http::Headers::RangeItemHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60ef1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeItemHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::RangeItemHeaderValue::*)()>(&::System::Net::Http::Headers::RangeItemHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x60ef258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int64_t>& System::Net::Http::Headers::RangeItemHeaderValue::__cordl_internal_get__From_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____From_k__BackingField;
}
constexpr ::System::Nullable_1<int64_t> const& System::Net::Http::Headers::RangeItemHeaderValue::__cordl_internal_get__From_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____From_k__BackingField;
}
constexpr void System::Net::Http::Headers::RangeItemHeaderValue::__cordl_internal_set__From_k__BackingField(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____From_k__BackingField = value;
}
constexpr ::System::Nullable_1<int64_t>& System::Net::Http::Headers::RangeItemHeaderValue::__cordl_internal_get__To_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____To_k__BackingField;
}
constexpr ::System::Nullable_1<int64_t> const& System::Net::Http::Headers::RangeItemHeaderValue::__cordl_internal_get__To_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____To_k__BackingField;
}
constexpr void System::Net::Http::Headers::RangeItemHeaderValue::__cordl_internal_set__To_k__BackingField(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____To_k__BackingField = value;
}
inline void System::Net::Http::Headers::RangeItemHeaderValue::_ctor(::System::Nullable_1<int64_t> from, ::System::Nullable_1<int64_t> to) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline ::System::Nullable_1<int64_t> System::Net::Http::Headers::RangeItemHeaderValue::get_From() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "get_From", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::RangeItemHeaderValue::set_From(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "set_From", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> System::Net::Http::Headers::RangeItemHeaderValue::get_To() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "get_To", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::RangeItemHeaderValue::set_To(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "set_To", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Net::Http::Headers::RangeItemHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::RangeItemHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::RangeItemHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::RangeItemHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeItemHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::RangeItemHeaderValue* System::Net::Http::Headers::RangeItemHeaderValue::New_ctor(::System::Nullable_1<int64_t> from, ::System::Nullable_1<int64_t> to) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::RangeItemHeaderValue*>(from, to));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::RangeItemHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::RangeItemHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::RangeItemHeaderValue::RangeItemHeaderValue() {}
