#pragma once
// IWYU pragma private; include "HMUI/CurvedCanvasSettingsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedCanvasSettingsHelper::*)()>(&::HMUI::CurvedCanvasSettingsHelper::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x39ec968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.GetCurvedCanvasSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::CurvedCanvasSettings> (::HMUI::CurvedCanvasSettingsHelper::*)(::UnityEngine::Canvas*)>(
    &::HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x39ec97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "GetCurvedCanvasSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.GetCurvedCanvasSettingsForCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::CurvedCanvasSettings> (*)(::UnityEngine::Canvas*)>(
    &::HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x39ecb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "GetCurvedCanvasSettingsForCanvas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedCanvasSettingsHelper::*)()>(&::HMUI::CurvedCanvasSettingsHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ecca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedCanvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curvedCanvasSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>* HMUI::CurvedCanvasSettingsHelper::getStaticF__curvedCanvasCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>*, "_curvedCanvasCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get>();
}
inline void HMUI::CurvedCanvasSettingsHelper::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::CurvedCanvasSettings> HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings(::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "GetCurvedCanvasSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::CurvedCanvasSettings>, false>(this, ___internal_method, canvas);
}
inline ::UnityW<::HMUI::CurvedCanvasSettings> HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas(::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "GetCurvedCanvasSettingsForCanvas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::CurvedCanvasSettings>, false>(nullptr, ___internal_method, canvas);
}
inline void HMUI::CurvedCanvasSettingsHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::CurvedCanvasSettingsHelper* HMUI::CurvedCanvasSettingsHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::CurvedCanvasSettingsHelper*>());
}
// Ctor Parameters []
constexpr ::HMUI::CurvedCanvasSettingsHelper::CurvedCanvasSettingsHelper() {}
