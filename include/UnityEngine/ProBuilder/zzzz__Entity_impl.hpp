#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Entity.hpp"
#include "UnityEngine/ProBuilder/zzzz__EntityType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Entity_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EntityType_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Entity.get_entityType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::EntityType (::UnityEngine::ProBuilder::Entity::*)()>(&::UnityEngine::ProBuilder::Entity::get_entityType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bc480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Entity*>(), { "get_entityType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Entity.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Entity::*)()>(&::UnityEngine::ProBuilder::Entity::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x66bc488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Entity*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Entity.SetEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Entity::*)(::UnityEngine::ProBuilder::EntityType)>(&::UnityEngine::ProBuilder::Entity::SetEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bc54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Entity*>(), { "SetEntity", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EntityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Entity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Entity::*)()>(&::UnityEngine::ProBuilder::Entity::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66bc554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Entity*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::EntityType& UnityEngine::ProBuilder::Entity::__cordl_internal_get_m_EntityType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityType;
}
constexpr ::UnityEngine::ProBuilder::EntityType const& UnityEngine::ProBuilder::Entity::__cordl_internal_get_m_EntityType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityType;
}
constexpr void UnityEngine::ProBuilder::Entity::__cordl_internal_set_m_EntityType(::UnityEngine::ProBuilder::EntityType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntityType = value;
}
inline ::UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::Entity::get_entityType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Entity*>(), { "get_entityType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::EntityType>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Entity::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Entity*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Entity::SetEntity(::UnityEngine::ProBuilder::EntityType t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Entity*>(), { "SetEntity", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EntityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void UnityEngine::ProBuilder::Entity::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Entity*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Entity* UnityEngine::ProBuilder::Entity::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Entity*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Entity::Entity() {}
