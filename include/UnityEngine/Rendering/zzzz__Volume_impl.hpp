#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Volume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.get_isGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::get_isGlobal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c9d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "get_isGlobal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.set_isGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)(bool)>(&::UnityEngine::Rendering::Volume::set_isGlobal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c9d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "set_isGlobal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.get_profile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::get_profile)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x67c9d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "get_profile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.set_profile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)(::UnityEngine::Rendering::VolumeProfile*)>(&::UnityEngine::Rendering::Volume::set_profile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c9f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "set_profile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.get_colliders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* (::UnityEngine::Rendering::Volume::*)()>(
    &::UnityEngine::Rendering::Volume::get_colliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c9f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "get_colliders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.get_profileRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::get_profileRef)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67c9fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "get_profileRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.HasInstantiatedProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::HasInstantiatedProfile)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67ca020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "HasInstantiatedProfile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67ca084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67ca138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67ca1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.UpdateLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::UpdateLayer)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67ca1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "UpdateLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.UpdatePriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::UpdatePriority)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67ca264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "UpdatePriority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::OnValidate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67ca364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67ca378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Volume::__cordl_internal_get_m_IsGlobal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsGlobal;
}
constexpr bool const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_IsGlobal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsGlobal;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_IsGlobal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsGlobal = value;
}
constexpr float_t& UnityEngine::Rendering::Volume::__cordl_internal_get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr float_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_priority(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
constexpr float_t& UnityEngine::Rendering::Volume::__cordl_internal_get_blendDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendDistance;
}
constexpr float_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_blendDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendDistance;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_blendDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendDistance = value;
}
constexpr float_t& UnityEngine::Rendering::Volume::__cordl_internal_get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::Volume::__cordl_internal_get_sharedProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& UnityEngine::Rendering::Volume::__cordl_internal_get_sharedProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedProfile;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_sharedProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedProfile = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::Rendering::Volume::__cordl_internal_get_m_Colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_Colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colliders;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_Colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Colliders = value;
}
constexpr int32_t& UnityEngine::Rendering::Volume::__cordl_internal_get_m_PreviousLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousLayer;
}
constexpr int32_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_PreviousLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousLayer;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_PreviousLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousLayer = value;
}
constexpr float_t& UnityEngine::Rendering::Volume::__cordl_internal_get_m_PreviousPriority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPriority;
}
constexpr float_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_PreviousPriority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPriority;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_PreviousPriority(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousPriority = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::Volume::__cordl_internal_get_m_InternalProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_InternalProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalProfile;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_InternalProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalProfile = value;
}
inline bool UnityEngine::Rendering::Volume::get_isGlobal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "get_isGlobal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::set_isGlobal(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "set_isGlobal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::Volume::get_profile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "get_profile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::set_profile(::UnityEngine::Rendering::VolumeProfile* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "set_profile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::Rendering::Volume::get_colliders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "get_colliders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::Volume::get_profileRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "get_profileRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Volume::HasInstantiatedProfile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "HasInstantiatedProfile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::UpdateLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "UpdateLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::UpdatePriority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "UpdatePriority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Volume*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Volume* UnityEngine::Rendering::Volume::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Volume*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IVolume"
constexpr UnityEngine::Rendering::Volume::operator ::UnityEngine::Rendering::IVolume*() noexcept {
  return static_cast<::UnityEngine::Rendering::IVolume*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IVolume"
constexpr ::UnityEngine::Rendering::IVolume* UnityEngine::Rendering::Volume::i___UnityEngine__Rendering__IVolume() noexcept {
  return static_cast<::UnityEngine::Rendering::IVolume*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Volume::Volume() {}
