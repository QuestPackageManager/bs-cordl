#pragma once
// IWYU pragma private; include "GlobalNamespace\PromoBannerInfoSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PromoBannerInfoSO_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PromoBannerInfoSO.get_bannerImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::PromoBannerInfoSO::*)()>(&::GlobalNamespace::PromoBannerInfoSO::get_bannerImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "get_bannerImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoBannerInfoSO.set_bannerImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PromoBannerInfoSO::*)(::UnityEngine::Sprite*)>(&::GlobalNamespace::PromoBannerInfoSO::set_bannerImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "set_bannerImage", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoBannerInfoSO.get_bannerPromoText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PromoBannerInfoSO::*)()>(&::GlobalNamespace::PromoBannerInfoSO::get_bannerPromoText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "get_bannerPromoText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoBannerInfoSO.get_bannerPromoTextPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PromoBannerInfoSO::*)()>(&::GlobalNamespace::PromoBannerInfoSO::get_bannerPromoTextPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "get_bannerPromoTextPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoBannerInfoSO.IsPromoTextHiddenOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PromoBannerInfoSO::*)(::System::DateTime)>(&::GlobalNamespace::PromoBannerInfoSO::IsPromoTextHiddenOn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x372f61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "IsPromoTextHiddenOn", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoBannerInfoSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PromoBannerInfoSO::*)()>(&::GlobalNamespace::PromoBannerInfoSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PromoBannerInfoSO::__cordl_internal_get__bannerImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PromoBannerInfoSO::__cordl_internal_get__bannerImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerImage;
}
constexpr void GlobalNamespace::PromoBannerInfoSO::__cordl_internal_set__bannerImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bannerImage = value;
}
constexpr ::StringW& GlobalNamespace::PromoBannerInfoSO::__cordl_internal_get__bannerPromoText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoText;
}
constexpr ::StringW const& GlobalNamespace::PromoBannerInfoSO::__cordl_internal_get__bannerPromoText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoText;
}
constexpr void GlobalNamespace::PromoBannerInfoSO::__cordl_internal_set__bannerPromoText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bannerPromoText = value;
}
constexpr float_t& GlobalNamespace::PromoBannerInfoSO::__cordl_internal_get__bannerPromoTextPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoTextPosition;
}
constexpr float_t const& GlobalNamespace::PromoBannerInfoSO::__cordl_internal_get__bannerPromoTextPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoTextPosition;
}
constexpr void GlobalNamespace::PromoBannerInfoSO::__cordl_internal_set__bannerPromoTextPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bannerPromoTextPosition = value;
}
constexpr ::StringW& GlobalNamespace::PromoBannerInfoSO::__cordl_internal_get__bannerPromoTextShowUntilDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoTextShowUntilDate;
}
constexpr ::StringW const& GlobalNamespace::PromoBannerInfoSO::__cordl_internal_get__bannerPromoTextShowUntilDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoTextShowUntilDate;
}
constexpr void GlobalNamespace::PromoBannerInfoSO::__cordl_internal_set__bannerPromoTextShowUntilDate(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bannerPromoTextShowUntilDate = value;
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::PromoBannerInfoSO::get_bannerImage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "get_bannerImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void GlobalNamespace::PromoBannerInfoSO::set_bannerImage(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "set_bannerImage", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PromoBannerInfoSO::get_bannerPromoText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "get_bannerPromoText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t GlobalNamespace::PromoBannerInfoSO::get_bannerPromoTextPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "get_bannerPromoTextPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PromoBannerInfoSO::IsPromoTextHiddenOn(::System::DateTime now) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { "IsPromoTextHiddenOn", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, now);
}
inline void GlobalNamespace::PromoBannerInfoSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoBannerInfoSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PromoBannerInfoSO* GlobalNamespace::PromoBannerInfoSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PromoBannerInfoSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PromoBannerInfoSO::PromoBannerInfoSO() {}
