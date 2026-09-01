#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceLocations\ResourceLocationComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ResourceLocationComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6923920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>(),
                                                                                           { "Equals",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6923950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>(),
                                                             { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::*)()>(
    &::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6923a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::Equals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* x,
                                                                                                 ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>(),
                                                                                         { "Equals",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::GetHashCode(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>(),
                                                           { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer* UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
constexpr UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* UnityEngine::ResourceManagement::ResourceLocations::
    ResourceLocationComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::ResourceLocationComparer() {}
