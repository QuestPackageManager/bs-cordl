#pragma once
// IWYU pragma private; include "System\OrdinalCaseSensitiveComparer.hpp"
#include "System/zzzz__OrdinalComparer_impl.hpp"
#include "System/zzzz__OrdinalCaseSensitiveComparer_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::OrdinalCaseSensitiveComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OrdinalCaseSensitiveComparer::*)()>(&::System::OrdinalCaseSensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5de90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalCaseSensitiveComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::OrdinalCaseSensitiveComparer::*)(::StringW, ::StringW)>(&::System::OrdinalCaseSensitiveComparer::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c5e748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), { ::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalCaseSensitiveComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::OrdinalCaseSensitiveComparer::*)(::StringW, ::StringW)>(&::System::OrdinalCaseSensitiveComparer::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c5e758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), { ::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalCaseSensitiveComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::OrdinalCaseSensitiveComparer::*)(::StringW)>(&::System::OrdinalCaseSensitiveComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c5e768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), { ::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalCaseSensitiveComparer.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OrdinalCaseSensitiveComparer::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::OrdinalCaseSensitiveComparer::GetObjectData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c5e78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
inline void System::OrdinalCaseSensitiveComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::OrdinalCaseSensitiveComparer::Compare(::StringW x, ::StringW y) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline bool System::OrdinalCaseSensitiveComparer::Equals(::StringW x, ::StringW y) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::OrdinalCaseSensitiveComparer::GetHashCode(::StringW obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void System::OrdinalCaseSensitiveComparer::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::OrdinalCaseSensitiveComparer*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::OrdinalCaseSensitiveComparer* System::OrdinalCaseSensitiveComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OrdinalCaseSensitiveComparer*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::OrdinalCaseSensitiveComparer::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::OrdinalCaseSensitiveComparer::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::OrdinalCaseSensitiveComparer::OrdinalCaseSensitiveComparer() {}
