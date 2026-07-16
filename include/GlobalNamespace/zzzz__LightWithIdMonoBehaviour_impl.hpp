#pragma once
// IWYU pragma private; include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__ILightWithId_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.get_lightId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::get_lightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58713e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "get_lightId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.get_isRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::get_isRegistered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58713ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "get_isRegistered", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.__SetIsRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::__SetIsRegistered)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58713f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "__SetIsRegistered", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.__SetIsUnRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::__SetIsUnRegistered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5871400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "__SetIsUnRegistered", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)(::UnityEngine::Color)>(&::GlobalNamespace::LightWithIdMonoBehaviour::ColorWasSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5871408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5871494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5871498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.RegisterLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::RegisterLight)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x587140c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "RegisterLight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour.SetLightId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)(int32_t)>(&::GlobalNamespace::LightWithIdMonoBehaviour::SetLightId)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5871520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "SetLightId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdMonoBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&::GlobalNamespace::LightWithIdMonoBehaviour::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586ecfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_get__ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ID;
}
constexpr int32_t const& GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_get__ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ID;
}
constexpr void GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_set__ID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ID = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_get__lightManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_get__lightManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr void GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightManager = value;
}
constexpr bool& GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_get__isRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRegistered;
}
constexpr bool const& GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_get__isRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRegistered;
}
constexpr void GlobalNamespace::LightWithIdMonoBehaviour::__cordl_internal_set__isRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRegistered = value;
}
inline int32_t GlobalNamespace::LightWithIdMonoBehaviour::get_lightId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "get_lightId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::LightWithIdMonoBehaviour::get_isRegistered() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "get_isRegistered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::__SetIsRegistered() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "__SetIsRegistered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::__SetIsUnRegistered() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "__SetIsUnRegistered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::Start() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::RegisterLight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "RegisterLight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::SetLightId(int32_t newLightId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { "SetLightId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLightId);
}
inline void GlobalNamespace::LightWithIdMonoBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdMonoBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightWithIdMonoBehaviour* GlobalNamespace::LightWithIdMonoBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightWithIdMonoBehaviour*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILightWithId"
constexpr GlobalNamespace::LightWithIdMonoBehaviour::operator ::GlobalNamespace::ILightWithId*() noexcept {
  return static_cast<::GlobalNamespace::ILightWithId*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILightWithId"
constexpr ::GlobalNamespace::ILightWithId* GlobalNamespace::LightWithIdMonoBehaviour::i___GlobalNamespace__ILightWithId() noexcept {
  return static_cast<::GlobalNamespace::ILightWithId*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightWithIdMonoBehaviour::LightWithIdMonoBehaviour() {}
