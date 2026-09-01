#pragma once
// IWYU pragma private; include "System\OrdinalIgnoreCaseComparer.hpp"
#include "System/zzzz__OrdinalComparer_impl.hpp"
#include "System/zzzz__OrdinalIgnoreCaseComparer_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::OrdinalIgnoreCaseComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OrdinalIgnoreCaseComparer::*)()>(&::System::OrdinalIgnoreCaseComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5de98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalIgnoreCaseComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::OrdinalIgnoreCaseComparer::*)(::StringW, ::StringW)>(&::System::OrdinalIgnoreCaseComparer::Compare)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c5e830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), { ::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalIgnoreCaseComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::OrdinalIgnoreCaseComparer::*)(::StringW, ::StringW)>(&::System::OrdinalIgnoreCaseComparer::Equals)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c5e844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), { ::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalIgnoreCaseComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::OrdinalIgnoreCaseComparer::*)(::StringW)>(&::System::OrdinalIgnoreCaseComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5e858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), { ::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalIgnoreCaseComparer.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OrdinalIgnoreCaseComparer::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::OrdinalIgnoreCaseComparer::GetObjectData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c5e8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
inline void System::OrdinalIgnoreCaseComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::OrdinalIgnoreCaseComparer::Compare(::StringW x, ::StringW y) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline bool System::OrdinalIgnoreCaseComparer::Equals(::StringW x, ::StringW y) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::OrdinalIgnoreCaseComparer::GetHashCode(::StringW obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void System::OrdinalIgnoreCaseComparer::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::OrdinalIgnoreCaseComparer*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::OrdinalIgnoreCaseComparer* System::OrdinalIgnoreCaseComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OrdinalIgnoreCaseComparer*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::OrdinalIgnoreCaseComparer::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::OrdinalIgnoreCaseComparer::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::OrdinalIgnoreCaseComparer::OrdinalIgnoreCaseComparer() {}
