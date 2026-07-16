#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/RangeHeaderValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__RangeHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__RangeItemHeaderValue_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeHeaderValue::*)()>(&::System::Net::Http::Headers::RangeHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60e8bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::RangeHeaderValue::*)(::System::Net::Http::Headers::RangeHeaderValue*)>(
    &::System::Net::Http::Headers::RangeHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x60e8c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::RangeHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue.get_Ranges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* (
    ::System::Net::Http::Headers::RangeHeaderValue::*)()>(&::System::Net::Http::Headers::RangeHeaderValue::get_Ranges)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e8df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { "get_Ranges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue.get_Unit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::RangeHeaderValue::*)()>(&::System::Net::Http::Headers::RangeHeaderValue::get_Unit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e8e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { "get_Unit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::RangeHeaderValue::*)()>(
    &::System::Net::Http::Headers::RangeHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60e8e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::RangeHeaderValue::*)(::System::Object*)>(&::System::Net::Http::Headers::RangeHeaderValue::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60e8edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::RangeHeaderValue::*)()>(&::System::Net::Http::Headers::RangeHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e8fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Net::Http::Headers::RangeHeaderValue*>)>(&::System::Net::Http::Headers::RangeHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x60e902c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(),
                                                             { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::RangeHeaderValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::RangeHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::RangeHeaderValue::*)()>(&::System::Net::Http::Headers::RangeHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x60e9550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { ::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>*& System::Net::Http::Headers::RangeHeaderValue::__cordl_internal_get_ranges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ranges;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* const& System::Net::Http::Headers::RangeHeaderValue::__cordl_internal_get_ranges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ranges;
}
constexpr void System::Net::Http::Headers::RangeHeaderValue::__cordl_internal_set_ranges(::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ranges = value;
}
constexpr ::StringW& System::Net::Http::Headers::RangeHeaderValue::__cordl_internal_get_unit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unit;
}
constexpr ::StringW const& System::Net::Http::Headers::RangeHeaderValue::__cordl_internal_get_unit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unit;
}
constexpr void System::Net::Http::Headers::RangeHeaderValue::__cordl_internal_set_unit(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unit = value;
}
inline void System::Net::Http::Headers::RangeHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::Headers::RangeHeaderValue::_ctor(::System::Net::Http::Headers::RangeHeaderValue* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::RangeHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* System::Net::Http::Headers::RangeHeaderValue::get_Ranges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { "get_Ranges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>*>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::RangeHeaderValue::get_Unit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { "get_Unit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Net::Http::Headers::RangeHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::RangeHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::RangeHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::RangeHeaderValue::TryParse(::StringW input, ::by_ref<::System::Net::Http::Headers::RangeHeaderValue*> parsedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(),
                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::RangeHeaderValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, parsedValue);
}
inline ::StringW System::Net::Http::Headers::RangeHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::RangeHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::RangeHeaderValue* System::Net::Http::Headers::RangeHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::RangeHeaderValue*>());
}
inline ::System::Net::Http::Headers::RangeHeaderValue* System::Net::Http::Headers::RangeHeaderValue::New_ctor(::System::Net::Http::Headers::RangeHeaderValue* source) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::RangeHeaderValue*>(source));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::RangeHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::RangeHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::RangeHeaderValue::RangeHeaderValue() {}
