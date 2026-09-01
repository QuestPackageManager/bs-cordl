#pragma once
// IWYU pragma private; include "GlobalNamespace\PackPromoInfoSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PromoBannerInfoSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode::LevelPromoInfo_PackPromoInfoSO_PromoMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode::LevelPromoInfo_PackPromoInfoSO_PromoMode() {}
constexpr ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode::Included{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode::Excluded{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.get_levelID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(&::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(), { "get_levelID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.get_promoBannerInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PromoBannerInfoSO> (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(
    &::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(), { "get_promoBannerInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.set_promoBannerInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)(::GlobalNamespace::PromoBannerInfoSO*)>(
    &::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::set_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(),
                                                                                           { "set_promoBannerInfo", {}, { ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.get_promoMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(
    &::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_promoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(), { "get_promoMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.get_isExcluded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(&::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_isExcluded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x372f5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(), { "get_isExcluded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)(::StringW, ::GlobalNamespace::PromoBannerInfoSO*)>(
    &::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr ::StringW const& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_set__levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelID = value;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__promoBannerInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerInfo;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__promoBannerInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promoBannerInfo = value;
}
constexpr ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__promoMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoMode;
}
constexpr ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode const& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__promoMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoMode;
}
constexpr void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_set__promoMode(::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promoMode = value;
}
inline ::StringW GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_levelID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(), { "get_levelID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_promoBannerInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(), { "get_promoBannerInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoBannerInfoSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::set_promoBannerInfo(::GlobalNamespace::PromoBannerInfoSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(),
                                                                                         { "set_promoBannerInfo", {}, { ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_promoMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(), { "get_promoMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode>(this, ___internal_method);
}
inline bool GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_isExcluded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(), { "get_isExcluded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::_ctor(::StringW levelID, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelID, promoBannerInfo);
}
inline ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::New_ctor(::StringW levelID, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(levelID, promoBannerInfo));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::PackPromoInfoSO_LevelPromoInfo() {}
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_promoBannerInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PromoBannerInfoSO> (::GlobalNamespace::PackPromoInfoSO::*)()>(
    &::GlobalNamespace::PackPromoInfoSO::get_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "get_promoBannerInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.set_promoBannerInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackPromoInfoSO::*)(::GlobalNamespace::PromoBannerInfoSO*)>(&::GlobalNamespace::PackPromoInfoSO::set_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "set_promoBannerInfo", {}, { ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_levelPromoInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> (::GlobalNamespace::PackPromoInfoSO::*)()>(
    &::GlobalNamespace::PackPromoInfoSO::get_levelPromoInfos)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x372f400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "get_levelPromoInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_hasLevelPromos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackPromoInfoSO::*)()>(&::GlobalNamespace::PackPromoInfoSO::get_hasLevelPromos)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x372f4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "get_hasLevelPromos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.AddLevelPromoInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackPromoInfoSO::*)(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*)>(
    &::GlobalNamespace::PackPromoInfoSO::AddLevelPromoInfo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x372f4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(),
                                                                                           { "AddLevelPromoInfo", {}, { ::i2c::type_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackPromoInfoSO::*)()>(&::GlobalNamespace::PackPromoInfoSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__promoBannerInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerInfo;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__promoBannerInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO::__cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promoBannerInfo = value;
}
constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__levelsPromoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsPromoInfo;
}
constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> const& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__levelsPromoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsPromoInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO::__cordl_internal_set__levelsPromoInfo(::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelsPromoInfo = value;
}
inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> GlobalNamespace::PackPromoInfoSO::get_promoBannerInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "get_promoBannerInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoBannerInfoSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO::set_promoBannerInfo(::GlobalNamespace::PromoBannerInfoSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "set_promoBannerInfo", {}, { ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> GlobalNamespace::PackPromoInfoSO::get_levelPromoInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "get_levelPromoInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>>(this, ___internal_method);
}
inline bool GlobalNamespace::PackPromoInfoSO::get_hasLevelPromos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "get_hasLevelPromos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO::AddLevelPromoInfo(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* levelPromoInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { "AddLevelPromoInfo", {}, { ::i2c::type_of<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelPromoInfo);
}
inline void GlobalNamespace::PackPromoInfoSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackPromoInfoSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PackPromoInfoSO* GlobalNamespace::PackPromoInfoSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackPromoInfoSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackPromoInfoSO::PackPromoInfoSO() {}
