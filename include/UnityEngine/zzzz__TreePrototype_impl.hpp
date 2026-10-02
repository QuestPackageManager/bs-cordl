#pragma once
// IWYU pragma private; include "UnityEngine/TreePrototype.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TreePrototype_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::TreePrototype.get_prefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::TreePrototype::*)()>(&::UnityEngine::TreePrototype::get_prefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7019870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { "get_prefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TreePrototype.get_bendFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TreePrototype::*)()>(&::UnityEngine::TreePrototype::get_bendFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7019878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { "get_bendFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TreePrototype.get_navMeshLod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TreePrototype::*)()>(&::UnityEngine::TreePrototype::get_navMeshLod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7019880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { "get_navMeshLod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TreePrototype._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TreePrototype::*)()>(&::UnityEngine::TreePrototype::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7019888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TreePrototype.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TreePrototype::*)(::System::Object*)>(&::UnityEngine::TreePrototype::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x701988c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { ::i2c::class_of<::UnityEngine::TreePrototype*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TreePrototype.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TreePrototype::*)()>(&::UnityEngine::TreePrototype::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x70199f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { ::i2c::class_of<::UnityEngine::TreePrototype*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TreePrototype.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TreePrototype::*)(::UnityEngine::TreePrototype*)>(&::UnityEngine::TreePrototype::Equals)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x70198fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::TreePrototype*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::TreePrototype::__cordl_internal_get_m_Prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::TreePrototype::__cordl_internal_get_m_Prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Prefab;
}
constexpr void UnityEngine::TreePrototype::__cordl_internal_set_m_Prefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Prefab = value;
}
constexpr float_t& UnityEngine::TreePrototype::__cordl_internal_get_m_BendFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BendFactor;
}
constexpr float_t const& UnityEngine::TreePrototype::__cordl_internal_get_m_BendFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BendFactor;
}
constexpr void UnityEngine::TreePrototype::__cordl_internal_set_m_BendFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BendFactor = value;
}
constexpr int32_t& UnityEngine::TreePrototype::__cordl_internal_get_m_NavMeshLod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavMeshLod;
}
constexpr int32_t const& UnityEngine::TreePrototype::__cordl_internal_get_m_NavMeshLod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavMeshLod;
}
constexpr void UnityEngine::TreePrototype::__cordl_internal_set_m_NavMeshLod(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NavMeshLod = value;
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::TreePrototype::get_prefab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { "get_prefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline float_t UnityEngine::TreePrototype::get_bendFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { "get_bendFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TreePrototype::get_navMeshLod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { "get_navMeshLod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TreePrototype::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TreePrototype::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TreePrototype*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::TreePrototype::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TreePrototype*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::TreePrototype::Equals(::UnityEngine::TreePrototype* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TreePrototype*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::TreePrototype*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::UnityEngine::TreePrototype* UnityEngine::TreePrototype::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TreePrototype*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TreePrototype::TreePrototype() {}
