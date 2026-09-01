#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlatformAdditionalContentModelInitialDataSO.hpp"
#include "GlobalNamespace/zzzz__MockPlatformEntitlement_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformEntitlement_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO.get_levelsEntitlements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* (
    ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::*)()>(&::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::get_levelsEntitlements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36fd6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { "get_levelsEntitlements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO.get_levelPacksEntitlements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* (
    ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::*)()>(&::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::get_levelPacksEntitlements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36fd6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { "get_levelPacksEntitlements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO.get_packBetterBuyThanLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::*)()>(
    &::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::get_packBetterBuyThanLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36fd6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { "get_packBetterBuyThanLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO.get_useCustomEntitlement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::*)()>(
    &::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::get_useCustomEntitlement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36fd6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { "get_useCustomEntitlement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::*)()>(
    &::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36fd6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_get__useCustomEntitlement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useCustomEntitlement;
}
constexpr bool const& GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_get__useCustomEntitlement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useCustomEntitlement;
}
constexpr void GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_set__useCustomEntitlement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useCustomEntitlement = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*>& GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_get__levelsEntitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsEntitlements;
}
constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*> const& GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_get__levelsEntitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsEntitlements;
}
constexpr void GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_set__levelsEntitlements(::ArrayW<::GlobalNamespace::MockPlatformEntitlement*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelsEntitlements = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*>& GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_get__levelPacksEntitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPacksEntitlements;
}
constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*> const& GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_get__levelPacksEntitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPacksEntitlements;
}
constexpr void GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_set__levelPacksEntitlements(::ArrayW<::GlobalNamespace::MockPlatformEntitlement*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelPacksEntitlements = value;
}
constexpr bool& GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_get__packBetterBuyThanLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packBetterBuyThanLevel;
}
constexpr bool const& GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_get__packBetterBuyThanLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packBetterBuyThanLevel;
}
constexpr void GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::__cordl_internal_set__packBetterBuyThanLevel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packBetterBuyThanLevel = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::get_levelsEntitlements() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { "get_levelsEntitlements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::get_levelPacksEntitlements() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { "get_levelPacksEntitlements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>*>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::get_packBetterBuyThanLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { "get_packBetterBuyThanLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::get_useCustomEntitlement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { "get_useCustomEntitlement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO::MockPlatformAdditionalContentModelInitialDataSO() {}
