#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/Utils.hpp"
#include "System/zzzz__IComparable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__Utils_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::Utils.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Rendering::UnifiedRayTracing::Utils::Destroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e08b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::Utils*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::Utils.CheckArgIsNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::UnityEngine::Rendering::UnifiedRayTracing::Utils::CheckArgIsNotNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e08bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::Utils*>(),
                                                                                           { "CheckArgIsNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::Utils.CheckArg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::UnityEngine::Rendering::UnifiedRayTracing::Utils::CheckArg)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e08c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::Utils*>(), { "CheckArg", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::Utils::Destroy(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::Utils*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::Utils::CheckArgIsNotNull(::System::Object* obj, ::StringW argName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::Utils*>(),
                                                                                         { "CheckArgIsNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, argName);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::Utils::CheckArg(bool condition, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::Utils*>(), { "CheckArg", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::System::IComparable*>)
inline void UnityEngine::Rendering::UnifiedRayTracing::Utils::CheckArgRange(T value, T minIncluded, T maxExcluded, ::StringW argName) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::Utils*>(),
                                              { "CheckArgRange", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, minIncluded, maxExcluded, argName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::Utils::Utils() {}
