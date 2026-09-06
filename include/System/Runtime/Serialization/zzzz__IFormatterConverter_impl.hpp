#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IFormatterConverter.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IFormatterConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::IFormatterConverter::*)(::System::Object*, ::System::Type*)>(
    &::System::Runtime::Serialization::IFormatterConverter::Convert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IFormatterConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::IFormatterConverter::*)(::System::Object*)>(
    &::System::Runtime::Serialization::IFormatterConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IFormatterConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::IFormatterConverter::*)(::System::Object*)>(
    &::System::Runtime::Serialization::IFormatterConverter::ToInt32)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IFormatterConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Serialization::IFormatterConverter::*)(::System::Object*)>(
    &::System::Runtime::Serialization::IFormatterConverter::ToInt64)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IFormatterConverter.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Runtime::Serialization::IFormatterConverter::*)(::System::Object*)>(
    &::System::Runtime::Serialization::IFormatterConverter::ToSingle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IFormatterConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::IFormatterConverter::*)(::System::Object*)>(
    &::System::Runtime::Serialization::IFormatterConverter::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 5 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::Runtime::Serialization::IFormatterConverter::Convert(::System::Object* value, ::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, type);
}
inline bool System::Runtime::Serialization::IFormatterConverter::ToBoolean(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Runtime::Serialization::IFormatterConverter::ToInt32(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int64_t System::Runtime::Serialization::IFormatterConverter::ToInt64(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline float_t System::Runtime::Serialization::IFormatterConverter::ToSingle(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::IFormatterConverter::ToString(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IFormatterConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
