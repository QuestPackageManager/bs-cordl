#pragma once
// IWYU pragma private; include "GlobalNamespace/HMAutoincrementedRequestId.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId.get_RequestId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::HMAutoincrementedRequestId::*)()>(&::GlobalNamespace::HMAutoincrementedRequestId::get_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5859a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), { "get_RequestId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HMAutoincrementedRequestId::*)()>(&::GlobalNamespace::HMAutoincrementedRequestId::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5859830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HMAutoincrementedRequestId::*)(::GlobalNamespace::HMAutoincrementedRequestId*)>(
    &::GlobalNamespace::HMAutoincrementedRequestId::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5859a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::HMAutoincrementedRequestId*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HMAutoincrementedRequestId::*)(::System::Object*)>(&::GlobalNamespace::HMAutoincrementedRequestId::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5859a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), { ::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HMAutoincrementedRequestId::*)()>(&::GlobalNamespace::HMAutoincrementedRequestId::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5859ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), { ::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), 2 }));
    return ___internal_method;
  }
};
constexpr uint64_t& GlobalNamespace::HMAutoincrementedRequestId::__cordl_internal_get__requestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr uint64_t const& GlobalNamespace::HMAutoincrementedRequestId::__cordl_internal_get__requestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr void GlobalNamespace::HMAutoincrementedRequestId::__cordl_internal_set__requestId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestId = value;
}
inline void GlobalNamespace::HMAutoincrementedRequestId::setStaticF__nextRequestId(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "_nextRequestId", ::GlobalNamespace::HMAutoincrementedRequestId*>(std::forward<uint64_t>(value));
}
inline uint64_t GlobalNamespace::HMAutoincrementedRequestId::getStaticF__nextRequestId() {
  return ::cordl_internals::getStaticField<uint64_t, "_nextRequestId", ::GlobalNamespace::HMAutoincrementedRequestId*>();
}
inline uint64_t GlobalNamespace::HMAutoincrementedRequestId::get_RequestId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), { "get_RequestId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void GlobalNamespace::HMAutoincrementedRequestId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HMAutoincrementedRequestId::Equals(::GlobalNamespace::HMAutoincrementedRequestId* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::HMAutoincrementedRequestId*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::HMAutoincrementedRequestId::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::HMAutoincrementedRequestId::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HMAutoincrementedRequestId*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAutoincrementedRequestId* GlobalNamespace::HMAutoincrementedRequestId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HMAutoincrementedRequestId*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>"
constexpr GlobalNamespace::HMAutoincrementedRequestId::operator ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*
GlobalNamespace::HMAutoincrementedRequestId::i___System__IEquatable_1___GlobalNamespace__HMAutoincrementedRequestId__() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HMAutoincrementedRequestId::HMAutoincrementedRequestId() {}
