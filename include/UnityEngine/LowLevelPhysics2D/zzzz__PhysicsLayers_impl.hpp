#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsLayers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLayers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLayers_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames.get_Names
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::get_Names)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6fd42c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "get_Names", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames.get_NameMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* (::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::get_NameMap)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fd4328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "get_NameMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fd43bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6fd43c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames.get_DefaultLayerNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::get_DefaultLayerNames)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6fd1cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "get_DefaultLayerNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fd44a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::__cordl_internal_get_m_Names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Names;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::__cordl_internal_get_m_Names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Names;
}
constexpr void UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::__cordl_internal_set_m_Names(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Names = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::__cordl_internal_get_m_NameMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NameMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::__cordl_internal_get_m_NameMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NameMap;
}
constexpr void UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::__cordl_internal_set_m_NameMap(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NameMap = value;
}
inline ::ArrayW<::StringW> UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::get_Names() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "get_Names", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::get_NameMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "get_NameMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::get_DefaultLayerNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { "get_DefaultLayerNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(nullptr, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames::PhysicsLayers_LayerNames() {}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsLayers::PhysicsLayers() {}
