#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupSO.get_groupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LightGroupSO::*)()>(&::GlobalNamespace::LightGroupSO::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586e754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_groupName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSO.get_groupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupSO::*)()>(&::GlobalNamespace::LightGroupSO::get_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586e75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_groupId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSO.get_startLightId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupSO::*)()>(&::GlobalNamespace::LightGroupSO::get_startLightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586e764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_startLightId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSO.get_numberOfElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupSO::*)()>(&::GlobalNamespace::LightGroupSO::get_numberOfElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586e76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_numberOfElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSO.get_sameIdElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupSO::*)()>(&::GlobalNamespace::LightGroupSO::get_sameIdElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586e774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_sameIdElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSO.get_ignoreLightGroupEffectManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LightGroupSO::*)()>(&::GlobalNamespace::LightGroupSO::get_ignoreLightGroupEffectManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586e77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_ignoreLightGroupEffectManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupSO::*)()>(&::GlobalNamespace::LightGroupSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586e784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LightGroupSO::__cordl_internal_get__groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName;
}
constexpr ::StringW const& GlobalNamespace::LightGroupSO::__cordl_internal_get__groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName;
}
constexpr void GlobalNamespace::LightGroupSO::__cordl_internal_set__groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupName = value;
}
constexpr ::StringW& GlobalNamespace::LightGroupSO::__cordl_internal_get__groupDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupDescription;
}
constexpr ::StringW const& GlobalNamespace::LightGroupSO::__cordl_internal_get__groupDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupDescription;
}
constexpr void GlobalNamespace::LightGroupSO::__cordl_internal_set__groupDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupDescription = value;
}
constexpr int32_t& GlobalNamespace::LightGroupSO::__cordl_internal_get__groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId;
}
constexpr int32_t const& GlobalNamespace::LightGroupSO::__cordl_internal_get__groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId;
}
constexpr void GlobalNamespace::LightGroupSO::__cordl_internal_set__groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupId = value;
}
constexpr int32_t& GlobalNamespace::LightGroupSO::__cordl_internal_get__startLightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startLightId;
}
constexpr int32_t const& GlobalNamespace::LightGroupSO::__cordl_internal_get__startLightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startLightId;
}
constexpr void GlobalNamespace::LightGroupSO::__cordl_internal_set__startLightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startLightId = value;
}
constexpr int32_t& GlobalNamespace::LightGroupSO::__cordl_internal_get__numberOfElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElements;
}
constexpr int32_t const& GlobalNamespace::LightGroupSO::__cordl_internal_get__numberOfElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElements;
}
constexpr void GlobalNamespace::LightGroupSO::__cordl_internal_set__numberOfElements(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfElements = value;
}
constexpr int32_t& GlobalNamespace::LightGroupSO::__cordl_internal_get__sameIdElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sameIdElements;
}
constexpr int32_t const& GlobalNamespace::LightGroupSO::__cordl_internal_get__sameIdElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sameIdElements;
}
constexpr void GlobalNamespace::LightGroupSO::__cordl_internal_set__sameIdElements(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sameIdElements = value;
}
constexpr bool& GlobalNamespace::LightGroupSO::__cordl_internal_get__ignoreLightGroupEffectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreLightGroupEffectManager;
}
constexpr bool const& GlobalNamespace::LightGroupSO::__cordl_internal_get__ignoreLightGroupEffectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreLightGroupEffectManager;
}
constexpr void GlobalNamespace::LightGroupSO::__cordl_internal_set__ignoreLightGroupEffectManager(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreLightGroupEffectManager = value;
}
inline ::StringW GlobalNamespace::LightGroupSO::get_groupName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_groupName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightGroupSO::get_groupId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_groupId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightGroupSO::get_startLightId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_startLightId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightGroupSO::get_numberOfElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_numberOfElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightGroupSO::get_sameIdElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_sameIdElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::LightGroupSO::get_ignoreLightGroupEffectManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { "get_ignoreLightGroupEffectManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LightGroupSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupSO* GlobalNamespace::LightGroupSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupSO*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILightGroup"
constexpr GlobalNamespace::LightGroupSO::operator ::GlobalNamespace::ILightGroup*() noexcept {
  return static_cast<::GlobalNamespace::ILightGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILightGroup"
constexpr ::GlobalNamespace::ILightGroup* GlobalNamespace::LightGroupSO::i___GlobalNamespace__ILightGroup() noexcept {
  return static_cast<::GlobalNamespace::ILightGroup*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupSO::LightGroupSO() {}
