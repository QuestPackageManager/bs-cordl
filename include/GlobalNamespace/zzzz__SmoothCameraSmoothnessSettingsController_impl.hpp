#pragma once
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCameraSmoothnessSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSmoothnessSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::GlobalNamespace::SmoothCameraSmoothnessSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x22abff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSmoothnessSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(int32_t)>(
    &::GlobalNamespace::SmoothCameraSmoothnessSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22ac108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSmoothnessSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(int32_t)>(
    &::GlobalNamespace::SmoothCameraSmoothnessSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22ac1b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSmoothnessSettingsController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)()>(
    &::GlobalNamespace::SmoothCameraSmoothnessSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ac280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::SmoothCameraSmoothnessSettingsController::__get__smoothCameraPositionSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothCameraPositionSmooth;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::SmoothCameraSmoothnessSettingsController::__get__smoothCameraPositionSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothCameraPositionSmooth;
}
constexpr void GlobalNamespace::SmoothCameraSmoothnessSettingsController::__set__smoothCameraPositionSmooth(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smoothCameraPositionSmooth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::SmoothCameraSmoothnessSettingsController::__get__smoothCameraRotationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothCameraRotationSmooth;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::SmoothCameraSmoothnessSettingsController::__get__smoothCameraRotationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothCameraRotationSmooth;
}
constexpr void GlobalNamespace::SmoothCameraSmoothnessSettingsController::__set__smoothCameraRotationSmooth(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smoothCameraRotationSmooth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::SmoothCameraSmoothnessSettingsController::__get__smoothnesses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothnesses;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::SmoothCameraSmoothnessSettingsController::__get__smoothnesses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothnesses;
}
constexpr void GlobalNamespace::SmoothCameraSmoothnessSettingsController::__set__smoothnesses(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smoothnesses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::SmoothCameraSmoothnessSettingsController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(), "GetInitValues", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::SmoothCameraSmoothnessSettingsController::ApplyValue(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(), "ApplyValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::SmoothCameraSmoothnessSettingsController::TextForValue(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(), "TextForValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::SmoothCameraSmoothnessSettingsController* GlobalNamespace::SmoothCameraSmoothnessSettingsController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>());
}
inline void GlobalNamespace::SmoothCameraSmoothnessSettingsController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothCameraSmoothnessSettingsController::SmoothCameraSmoothnessSettingsController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
