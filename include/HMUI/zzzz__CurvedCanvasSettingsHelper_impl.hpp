#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedCanvasSettingsHelper::*)()>(&::HMUI::CurvedCanvasSettingsHelper::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x211b4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.GetCurvedCanvasSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::CurvedCanvasSettings* (::HMUI::CurvedCanvasSettingsHelper::*)(::UnityEngine::Canvas*)>(
    &::HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x211b4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "GetCurvedCanvasSettings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper.GetCurvedCanvasSettingsForCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::CurvedCanvasSettings* (*)(::UnityEngine::Canvas*)>(
    &::HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x211b6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "GetCurvedCanvasSettingsForCanvas", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettingsHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedCanvasSettingsHelper::*)()>(&::HMUI::CurvedCanvasSettingsHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211b7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Canvas*& HMUI::CurvedCanvasSettingsHelper::__get__cachedCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCanvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& HMUI::CurvedCanvasSettingsHelper::__get__cachedCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCanvas;
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__set__cachedCanvas(::UnityEngine::Canvas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedCanvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::CurvedCanvasSettingsHelper::__get__cachedCanvasIsRootCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCanvasIsRootCanvas;
}
constexpr bool const& HMUI::CurvedCanvasSettingsHelper::__get__cachedCanvasIsRootCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCanvasIsRootCanvas;
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__set__cachedCanvasIsRootCanvas(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedCanvasIsRootCanvas = value;
}
constexpr ::HMUI::CurvedCanvasSettings*& HMUI::CurvedCanvasSettingsHelper::__get__curvedCanvasSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettings;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettings*> const& HMUI::CurvedCanvasSettingsHelper::__get__curvedCanvasSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettings;
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__set__curvedCanvasSettings(::HMUI::CurvedCanvasSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curvedCanvasSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::CurvedCanvasSettingsHelper::__get__hasCachedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasCachedData;
}
constexpr bool const& HMUI::CurvedCanvasSettingsHelper::__get__hasCachedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasCachedData;
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__set__hasCachedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasCachedData = value;
}
inline void HMUI::CurvedCanvasSettingsHelper::setStaticF__curvedCanvasCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::HMUI::CurvedCanvasSettings*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::HMUI::CurvedCanvasSettings*>*, "_curvedCanvasCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::HMUI::CurvedCanvasSettings*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::HMUI::CurvedCanvasSettings*>* HMUI::CurvedCanvasSettingsHelper::getStaticF__curvedCanvasCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::HMUI::CurvedCanvasSettings*>*, "_curvedCanvasCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get>();
}
inline void HMUI::CurvedCanvasSettingsHelper::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::CurvedCanvasSettings* HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings(::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "GetCurvedCanvasSettings",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::CurvedCanvasSettings*, false>(this, ___internal_method, canvas);
}
inline ::HMUI::CurvedCanvasSettings* HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas(::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), "GetCurvedCanvasSettingsForCanvas",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::CurvedCanvasSettings*, false>(nullptr, ___internal_method, canvas);
}
inline ::HMUI::CurvedCanvasSettingsHelper* HMUI::CurvedCanvasSettingsHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::CurvedCanvasSettingsHelper*>());
}
inline void HMUI::CurvedCanvasSettingsHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedCanvasSettingsHelper*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::CurvedCanvasSettingsHelper::CurvedCanvasSettingsHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
