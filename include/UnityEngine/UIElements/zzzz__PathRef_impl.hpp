#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PathRef.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PathRef_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PathRef.get_path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Properties::PropertyPath> (::UnityEngine::UIElements::PathRef::*)()>(&::UnityEngine::UIElements::PathRef::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7154bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PathRef*>(), { "get_path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PathRef.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PathRef::*)()>(&::UnityEngine::UIElements::PathRef::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7154c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PathRef*>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PathRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PathRef::*)()>(&::UnityEngine::UIElements::PathRef::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7154c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PathRef*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Properties::PropertyPath& UnityEngine::UIElements::PathRef::__cordl_internal_get_m_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr ::Unity::Properties::PropertyPath const& UnityEngine::UIElements::PathRef::__cordl_internal_get_m_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr void UnityEngine::UIElements::PathRef::__cordl_internal_set_m_Path(::Unity::Properties::PropertyPath value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Path = value;
}
inline ::by_ref<::Unity::Properties::PropertyPath> UnityEngine::UIElements::PathRef::get_path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PathRef*>(), { "get_path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Properties::PropertyPath>>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PathRef::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PathRef*>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PathRef::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PathRef*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PathRef* UnityEngine::UIElements::PathRef::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PathRef*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PathRef::PathRef() {}
