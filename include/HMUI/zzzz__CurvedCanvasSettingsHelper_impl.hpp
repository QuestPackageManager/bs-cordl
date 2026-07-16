#pragma once
// IWYU pragma private; include "HMUI/CurvedCanvasSettingsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedCanvasSettingsHelper::*)()>(&::HMUI::CurvedCanvasSettingsHelper::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x587af74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettingsHelper*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.GetCurvedCanvasSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::CurvedCanvasSettings> (::HMUI::CurvedCanvasSettingsHelper::*)(::UnityEngine::Canvas*)>(
    &::HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x587af88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettingsHelper*>(), { "GetCurvedCanvasSettings", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.GetCurvedCanvasSettingsForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::CurvedCanvasSettings> (*)(::UnityEngine::Canvas*)>(&::HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x587b184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettingsHelper*>(), { "GetCurvedCanvasSettingsForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedCanvasSettingsHelper::*)()>(&::HMUI::CurvedCanvasSettingsHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587b304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettingsHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Canvas>& HMUI::CurvedCanvasSettingsHelper::__cordl_internal_get__cachedCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCanvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& HMUI::CurvedCanvasSettingsHelper::__cordl_internal_get__cachedCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCanvas;
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__cordl_internal_set__cachedCanvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedCanvas = value;
}
constexpr bool& HMUI::CurvedCanvasSettingsHelper::__cordl_internal_get__cachedCanvasIsRootCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCanvasIsRootCanvas;
}
constexpr bool const& HMUI::CurvedCanvasSettingsHelper::__cordl_internal_get__cachedCanvasIsRootCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCanvasIsRootCanvas;
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__cordl_internal_set__cachedCanvasIsRootCanvas(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedCanvasIsRootCanvas = value;
}
constexpr ::UnityW<::HMUI::CurvedCanvasSettings>& HMUI::CurvedCanvasSettingsHelper::__cordl_internal_get__curvedCanvasSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettings;
}
constexpr ::UnityW<::HMUI::CurvedCanvasSettings> const& HMUI::CurvedCanvasSettingsHelper::__cordl_internal_get__curvedCanvasSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettings;
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__cordl_internal_set__curvedCanvasSettings(::UnityW<::HMUI::CurvedCanvasSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curvedCanvasSettings = value;
}
constexpr bool& HMUI::CurvedCanvasSettingsHelper::__cordl_internal_get__hasCachedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasCachedData;
}
constexpr bool const& HMUI::CurvedCanvasSettingsHelper::__cordl_internal_get__hasCachedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasCachedData;
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__cordl_internal_set__hasCachedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasCachedData = value;
}
inline void
HMUI::CurvedCanvasSettingsHelper::setStaticF__curvedCanvasCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>*, "_curvedCanvasCache",
                                    ::HMUI::CurvedCanvasSettingsHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>* HMUI::CurvedCanvasSettingsHelper::getStaticF__curvedCanvasCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>*, "_curvedCanvasCache",
                                           ::HMUI::CurvedCanvasSettingsHelper*>();
}
inline void HMUI::CurvedCanvasSettingsHelper::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettingsHelper*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::HMUI::CurvedCanvasSettings> HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings(::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettingsHelper*>(), { "GetCurvedCanvasSettings", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::CurvedCanvasSettings>>(this, ___internal_method, canvas);
}
inline ::UnityW<::HMUI::CurvedCanvasSettings> HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas(::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettingsHelper*>(), { "GetCurvedCanvasSettingsForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::CurvedCanvasSettings>>(nullptr, ___internal_method, canvas);
}
inline void HMUI::CurvedCanvasSettingsHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettingsHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::CurvedCanvasSettingsHelper* HMUI::CurvedCanvasSettingsHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::CurvedCanvasSettingsHelper*>());
}
// Ctor Parameters []
constexpr ::HMUI::CurvedCanvasSettingsHelper::CurvedCanvasSettingsHelper() {}
