#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\LocationCacheKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LocationCacheKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*)>(&::UnityEngine::ResourceManagement::Util::LocationCacheKey::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x690dff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)()>(
    &::UnityEngine::ResourceManagement::Util::LocationCacheKey::GetHashCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6916d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)(::System::Object*)>(
    &::UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6916dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(
    &::UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6916eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)(::UnityEngine::ResourceManagement::Util::LocationCacheKey*)>(
    &::UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6916e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::ResourceManagement::Util::LocationCacheKey::__cordl_internal_get_m_Location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Location;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& UnityEngine::ResourceManagement::Util::LocationCacheKey::__cordl_internal_get_m_Location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Location;
}
constexpr void UnityEngine::ResourceManagement::Util::LocationCacheKey::__cordl_internal_set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Location = value;
}
constexpr ::System::Type*& UnityEngine::ResourceManagement::Util::LocationCacheKey::__cordl_internal_get_m_DesiredType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DesiredType;
}
constexpr ::System::Type* const& UnityEngine::ResourceManagement::Util::LocationCacheKey::__cordl_internal_get_m_DesiredType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DesiredType;
}
constexpr void UnityEngine::ResourceManagement::Util::LocationCacheKey::__cordl_internal_set_m_DesiredType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DesiredType = value;
}
inline void UnityEngine::ResourceManagement::Util::LocationCacheKey::_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, desiredType);
}
inline int32_t UnityEngine::ResourceManagement::Util::LocationCacheKey::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals(::UnityEngine::ResourceManagement::Util::LocationCacheKey* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::UnityEngine::ResourceManagement::Util::LocationCacheKey*
UnityEngine::ResourceManagement::Util::LocationCacheKey::New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(location, desiredType));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
constexpr UnityEngine::ResourceManagement::Util::LocationCacheKey::operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*
UnityEngine::ResourceManagement::Util::LocationCacheKey::i___UnityEngine__ResourceManagement__Util__IOperationCacheKey() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
constexpr UnityEngine::ResourceManagement::Util::LocationCacheKey::operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*
UnityEngine::ResourceManagement::Util::LocationCacheKey::i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__IOperationCacheKey__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::LocationCacheKey::LocationCacheKey() {}
