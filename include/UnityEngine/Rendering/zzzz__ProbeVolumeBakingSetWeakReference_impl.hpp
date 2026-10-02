#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSetWeakReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingSetWeakReference_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingSet_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::*)(::UnityEngine::Rendering::ProbeVolumeBakingSet*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb12bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb1354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::*)(::UnityEngine::Rendering::ProbeVolumeBakingSet*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::Set)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bb12c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(),
                                                                                           { "Set", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> (::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::Get)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6bb135c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference.IsLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::IsLoaded)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6bb13c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(), { "IsLoaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::Unload)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6bb1408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(), { "Unload", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::__cordl_internal_get_m_InstanceID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceID;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::__cordl_internal_get_m_InstanceID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceID;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::__cordl_internal_set_m_InstanceID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceID = value;
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::_ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bakingSet);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::Set(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(),
                                                                                         { "Set", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bakingSet);
}
inline ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::IsLoaded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(), { "IsLoaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::Unload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(), { "Unload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference* UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::New_ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>(bakingSet));
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference* UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference::ProbeVolumeBakingSetWeakReference() {}
