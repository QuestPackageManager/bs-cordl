#pragma once
// IWYU pragma private; include "UnityEngine/UI/ClipperRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__ClipperRegistry_def.hpp"
#include "UnityEngine/UI/Collections/zzzz__IndexedSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__IClipper_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ClipperRegistry::*)()>(&::UnityEngine::UI::ClipperRegistry::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c17d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ClipperRegistry* (*)()>(&::UnityEngine::UI::ClipperRegistry::get_instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c167b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Cull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ClipperRegistry::*)()>(&::UnityEngine::UI::ClipperRegistry::Cull)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6c16828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "Cull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Register)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c17d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::UI::IClipper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Unregister)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c17e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "Unregister", {}, { ::i2c::type_of<::UnityEngine::UI::IClipper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Disable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c17e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "Disable", {}, { ::i2c::type_of<::UnityEngine::UI::IClipper*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>*& UnityEngine::UI::ClipperRegistry::__cordl_internal_get_m_Clippers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clippers;
}
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* const& UnityEngine::UI::ClipperRegistry::__cordl_internal_get_m_Clippers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clippers;
}
constexpr void UnityEngine::UI::ClipperRegistry::__cordl_internal_set_m_Clippers(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Clippers = value;
}
inline void UnityEngine::UI::ClipperRegistry::setStaticF_s_Instance(::UnityEngine::UI::ClipperRegistry* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::ClipperRegistry*, "s_Instance", ::UnityEngine::UI::ClipperRegistry*>(std::forward<::UnityEngine::UI::ClipperRegistry*>(value));
}
inline ::UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::ClipperRegistry*, "s_Instance", ::UnityEngine::UI::ClipperRegistry*>();
}
inline void UnityEngine::UI::ClipperRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ClipperRegistry*>(nullptr, ___internal_method);
}
inline void UnityEngine::UI::ClipperRegistry::Cull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "Cull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ClipperRegistry::Register(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::UI::IClipper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c);
}
inline void UnityEngine::UI::ClipperRegistry::Unregister(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "Unregister", {}, { ::i2c::type_of<::UnityEngine::UI::IClipper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c);
}
inline void UnityEngine::UI::ClipperRegistry::Disable(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ClipperRegistry*>(), { "Disable", {}, { ::i2c::type_of<::UnityEngine::UI::IClipper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ClipperRegistry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ClipperRegistry::ClipperRegistry() {}
