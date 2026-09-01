#pragma once
// IWYU pragma private; include "GlobalNamespace\DlcPromoPanelDataSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PromoBannerInfoSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType::DlcPromoPanelDataSO_DlcPromoPanelType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType::DlcPromoPanelDataSO_DlcPromoPanelType() {}
constexpr ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType::Pack{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType::Store{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO.get_cutOffTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DlcPromoPanelDataSO::*)()>(&::GlobalNamespace::DlcPromoPanelDataSO::get_cutOffTest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_cutOffTest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO.get_minNumberOfNotOwnedPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DlcPromoPanelDataSO::*)()>(&::GlobalNamespace::DlcPromoPanelDataSO::get_minNumberOfNotOwnedPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_minNumberOfNotOwnedPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO.get_dlcPromoPanelType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType (::GlobalNamespace::DlcPromoPanelDataSO::*)()>(
    &::GlobalNamespace::DlcPromoPanelDataSO::get_dlcPromoPanelType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_dlcPromoPanelType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO.get_customDlcPromoBanner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PromoBannerInfoSO> (::GlobalNamespace::DlcPromoPanelDataSO::*)()>(
    &::GlobalNamespace::DlcPromoPanelDataSO::get_customDlcPromoBanner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_customDlcPromoBanner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO.get_promoId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DlcPromoPanelDataSO::*)()>(&::GlobalNamespace::DlcPromoPanelDataSO::get_promoId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_promoId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO.get_target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DlcPromoPanelDataSO::*)()>(&::GlobalNamespace::DlcPromoPanelDataSO::get_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_target", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO.get_priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DlcPromoPanelDataSO::*)()>(&::GlobalNamespace::DlcPromoPanelDataSO::get_priority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_priority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO.SetMusicPackPromo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelDataSO::*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::DlcPromoPanelDataSO::SetMusicPackPromo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x374e964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(),
                                                             { "SetMusicPackPromo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelDataSO::*)()>(&::GlobalNamespace::DlcPromoPanelDataSO::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x374e974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__cutOffTest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutOffTest;
}
constexpr int32_t const& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__cutOffTest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutOffTest;
}
constexpr void GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_set__cutOffTest(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutOffTest = value;
}
constexpr int32_t& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__minNumberOfNotOwnedPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minNumberOfNotOwnedPacks;
}
constexpr int32_t const& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__minNumberOfNotOwnedPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minNumberOfNotOwnedPacks;
}
constexpr void GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_set__minNumberOfNotOwnedPacks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minNumberOfNotOwnedPacks = value;
}
constexpr ::StringW& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__defaultPromoInfoId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPromoInfoId;
}
constexpr ::StringW const& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__defaultPromoInfoId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPromoInfoId;
}
constexpr void GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_set__defaultPromoInfoId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultPromoInfoId = value;
}
constexpr ::StringW& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr ::StringW const& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr void GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_set__target(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____target = value;
}
constexpr int32_t& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr int32_t const& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr void GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_set__priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____priority = value;
}
constexpr ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__dlcPromoPanelType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelType;
}
constexpr ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType const& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__dlcPromoPanelType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelType;
}
constexpr void GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_set__dlcPromoPanelType(::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dlcPromoPanelType = value;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__customDlcPromoBanner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customDlcPromoBanner;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_get__customDlcPromoBanner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customDlcPromoBanner;
}
constexpr void GlobalNamespace::DlcPromoPanelDataSO::__cordl_internal_set__customDlcPromoBanner(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customDlcPromoBanner = value;
}
inline int32_t GlobalNamespace::DlcPromoPanelDataSO::get_cutOffTest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_cutOffTest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::DlcPromoPanelDataSO::get_minNumberOfNotOwnedPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_minNumberOfNotOwnedPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType GlobalNamespace::DlcPromoPanelDataSO::get_dlcPromoPanelType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_dlcPromoPanelType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> GlobalNamespace::DlcPromoPanelDataSO::get_customDlcPromoBanner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_customDlcPromoBanner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoBannerInfoSO>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DlcPromoPanelDataSO::get_promoId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_promoId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DlcPromoPanelDataSO::get_target() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_target", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::DlcPromoPanelDataSO::get_priority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { "get_priority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelDataSO::SetMusicPackPromo(::StringW targetPromoInfoId, int32_t priority, int32_t cutOffTest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(),
                                                           { "SetMusicPackPromo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPromoInfoId, priority, cutOffTest);
}
inline void GlobalNamespace::DlcPromoPanelDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DlcPromoPanelDataSO* GlobalNamespace::DlcPromoPanelDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DlcPromoPanelDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelDataSO::DlcPromoPanelDataSO() {}
