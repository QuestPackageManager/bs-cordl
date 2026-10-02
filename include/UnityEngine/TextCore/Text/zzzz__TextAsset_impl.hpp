#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextAsset.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextAsset::*)()>(&::UnityEngine::TextCore::Text::TextAsset::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70544c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.set_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextAsset::*)(::StringW)>(&::UnityEngine::TextCore::Text::TextAsset::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70544c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "set_version", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.get_entityId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::UnityEngine::TextCore::Text::TextAsset::*)()>(&::UnityEngine::TextCore::Text::TextAsset::get_entityId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x70544d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_entityId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.get_instanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextAsset::*)()>(&::UnityEngine::TextCore::Text::TextAsset::get_instanceID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x70544f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_instanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.get_hashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextAsset::*)()>(&::UnityEngine::TextCore::Text::TextAsset::get_hashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x7054520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_hashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.set_hashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextAsset::set_hashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x705454c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "set_hashCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.get_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::TextCore::Text::TextAsset::*)()>(&::UnityEngine::TextCore::Text::TextAsset::get_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_material", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.set_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextAsset::*)(::UnityEngine::Material*)>(&::UnityEngine::TextCore::Text::TextAsset::set_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x705455c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.get_materialHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextAsset::*)()>(&::UnityEngine::TextCore::Text::TextAsset::get_materialHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7054564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_materialHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.set_materialHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextAsset::set_materialHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70545fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "set_materialHashCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextAsset::*)()>(&::UnityEngine::TextCore::Text::TextAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7054604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextAsset::*)()>(&::UnityEngine::TextCore::Text::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::TextCore::Text::TextAsset::__cordl_internal_set_m_Version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityEngine::EntityId& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_EntityId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityId;
}
constexpr ::UnityEngine::EntityId const& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_EntityId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityId;
}
constexpr void UnityEngine::TextCore::Text::TextAsset::__cordl_internal_set_m_EntityId(::UnityEngine::EntityId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntityId = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_InstanceID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceID;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_InstanceID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceID;
}
constexpr void UnityEngine::TextCore::Text::TextAsset::__cordl_internal_set_m_InstanceID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceID = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_HashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashCode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_HashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashCode;
}
constexpr void UnityEngine::TextCore::Text::TextAsset::__cordl_internal_set_m_HashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HashCode = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::TextCore::Text::TextAsset::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_MaterialHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialHashCode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextAsset::__cordl_internal_get_m_MaterialHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialHashCode;
}
constexpr void UnityEngine::TextCore::Text::TextAsset::__cordl_internal_set_m_MaterialHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaterialHashCode = value;
}
inline ::StringW UnityEngine::TextCore::Text::TextAsset::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextAsset::set_version(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "set_version", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EntityId UnityEngine::TextCore::Text::TextAsset::get_entityId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_entityId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(this, ___internal_method);
}
inline int32_t UnityEngine::TextCore::Text::TextAsset::get_instanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_instanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TextCore::Text::TextAsset::get_hashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_hashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextAsset::set_hashCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "set_hashCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::TextCore::Text::TextAsset::get_material() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_material", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextAsset::set_material(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::TextAsset::get_materialHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "get_materialHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextAsset::set_materialHashCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { "set_materialHashCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::Text::TextAsset::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextAsset* UnityEngine::TextCore::Text::TextAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextAsset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextAsset::TextAsset() {}
