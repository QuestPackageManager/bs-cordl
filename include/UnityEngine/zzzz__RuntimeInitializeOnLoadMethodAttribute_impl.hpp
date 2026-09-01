#pragma once
// IWYU pragma private; include "UnityEngine\RuntimeInitializeOnLoadMethodAttribute.hpp"
#include "UnityEngine/Scripting/zzzz__PreserveAttribute_impl.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_impl.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeOnLoadMethodAttribute_def.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)()>(&::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae5cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)(::UnityEngine::RuntimeInitializeLoadType)>(
    &::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae5cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RuntimeInitializeLoadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute.set_loadType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)(::UnityEngine::RuntimeInitializeLoadType)>(
    &::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae5cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(),
                                                                                           { "set_loadType", {}, { ::i2c::type_of<::UnityEngine::RuntimeInitializeLoadType>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RuntimeInitializeLoadType& UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__cordl_internal_get_m_LoadType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadType;
}
constexpr ::UnityEngine::RuntimeInitializeLoadType const& UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__cordl_internal_get_m_LoadType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadType;
}
constexpr void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__cordl_internal_set_m_LoadType(::UnityEngine::RuntimeInitializeLoadType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoadType = value;
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor(::UnityEngine::RuntimeInitializeLoadType loadType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RuntimeInitializeLoadType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadType);
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType(::UnityEngine::RuntimeInitializeLoadType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(),
                                                                                         { "set_loadType", {}, { ::i2c::type_of<::UnityEngine::RuntimeInitializeLoadType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>());
}
inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor(::UnityEngine::RuntimeInitializeLoadType loadType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(loadType));
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::RuntimeInitializeOnLoadMethodAttribute() {}
