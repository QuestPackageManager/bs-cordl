#pragma once
// IWYU pragma private; include "HMUI/ScreenModeController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScreenModeController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettings_def.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenModeController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScreenModeController::*)()>(&::HMUI::ScreenModeController::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x228b7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeController*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeController.SetMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScreenModeController::*)(::HMUI::ScreenModeData*)>(&::HMUI::ScreenModeController::SetMode)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x228b9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeController*>::get(), "SetMode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ScreenModeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeController.SetDefaultMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScreenModeController::*)()>(&::HMUI::ScreenModeController::SetDefaultMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228bbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeController*>::get(), "SetDefaultMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScreenModeController::*)()>(&::HMUI::ScreenModeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228bbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>, ::Array<::UnityW<::HMUI::CurvedCanvasSettings>>*>& HMUI::ScreenModeController::__cordl_internal_get__curvedCanvases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvases;
}
constexpr ::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>, ::Array<::UnityW<::HMUI::CurvedCanvasSettings>>*> const& HMUI::ScreenModeController::__cordl_internal_get__curvedCanvases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvases;
}
constexpr void HMUI::ScreenModeController::__cordl_internal_set__curvedCanvases(::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>, ::Array<::UnityW<::HMUI::CurvedCanvasSettings>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curvedCanvases)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& HMUI::ScreenModeController::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& HMUI::ScreenModeController::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void HMUI::ScreenModeController::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ScreenModeData*& HMUI::ScreenModeController::__cordl_internal_get__defaultModeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultModeData;
}
constexpr ::HMUI::ScreenModeData* const& HMUI::ScreenModeController::__cordl_internal_get__defaultModeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultModeData;
}
constexpr void HMUI::ScreenModeController::__cordl_internal_set__defaultModeData(::HMUI::ScreenModeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultModeData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& HMUI::ScreenModeController::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& HMUI::ScreenModeController::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void HMUI::ScreenModeController::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ScreenModeController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeController*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScreenModeController::SetMode(::HMUI::ScreenModeData* screenModeData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeController*>::get(), "SetMode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ScreenModeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screenModeData);
}
inline void HMUI::ScreenModeController::SetDefaultMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeController*>::get(), "SetDefaultMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScreenModeController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ScreenModeController* HMUI::ScreenModeController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ScreenModeController*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScreenModeController::ScreenModeController() {}
