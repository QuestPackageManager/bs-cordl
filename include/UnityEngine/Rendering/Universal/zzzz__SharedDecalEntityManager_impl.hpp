#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SharedDecalEntityManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SharedDecalEntityManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalProjector_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DecalEntityManager* (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::Get)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x68a8300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalEntityManager*)>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::Release)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68a85c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                                                           { "Release", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::Dispose)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x68a85dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager.OnDecalAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalAdd)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68a87c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                                                           { "OnDecalAdd", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager.OnDecalRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalRemove)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68a8818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                                                           { "OnDecalRemove", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager.OnDecalPropertyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalPropertyChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68a883c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                             { "OnDecalPropertyChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager.OnAllDecalPropertyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnAllDecalPropertyChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68a889c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(), { "OnAllDecalPropertyChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager.OnDecalMaterialChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalMaterialChange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68a88b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                             { "OnDecalMaterialChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SharedDecalEntityManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::SharedDecalEntityManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68a88dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::SharedDecalEntityManager::__cordl_internal_get_m_DecalEntityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalEntityManager;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& UnityEngine::Rendering::Universal::SharedDecalEntityManager::__cordl_internal_get_m_DecalEntityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalEntityManager;
}
constexpr void UnityEngine::Rendering::Universal::SharedDecalEntityManager::__cordl_internal_set_m_DecalEntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalEntityManager = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::SharedDecalEntityManager::__cordl_internal_get_m_ReferenceCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferenceCounter;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::SharedDecalEntityManager::__cordl_internal_get_m_ReferenceCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferenceCounter;
}
constexpr void UnityEngine::Rendering::Universal::SharedDecalEntityManager::__cordl_internal_set_m_ReferenceCounter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReferenceCounter = value;
}
inline ::UnityEngine::Rendering::Universal::DecalEntityManager* UnityEngine::Rendering::Universal::SharedDecalEntityManager::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalEntityManager*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::SharedDecalEntityManager::Release(::UnityEngine::Rendering::Universal::DecalEntityManager* decalEntityManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                                                         { "Release", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decalEntityManager);
}
inline void UnityEngine::Rendering::Universal::SharedDecalEntityManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                                                         { "OnDecalAdd", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decalProjector);
}
inline void UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                                                         { "OnDecalRemove", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decalProjector);
}
inline void UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                                                         { "OnDecalPropertyChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decalProjector);
}
inline void UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnAllDecalPropertyChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(), { "OnAllDecalPropertyChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(),
                                                                                         { "OnDecalMaterialChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decalProjector);
}
inline void UnityEngine::Rendering::Universal::SharedDecalEntityManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* UnityEngine::Rendering::Universal::SharedDecalEntityManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::SharedDecalEntityManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::SharedDecalEntityManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SharedDecalEntityManager::SharedDecalEntityManager() {}
