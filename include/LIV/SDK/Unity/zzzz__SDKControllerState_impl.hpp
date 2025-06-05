#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKControllerState.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKControllerState_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKControllerState.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKControllerState (*)()>(&::LIV::SDK::Unity::SDKControllerState::get_empty)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3ac8adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(), "get_empty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKControllerState.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKControllerState::*)()>(&::LIV::SDK::Unity::SDKControllerState::ToString)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x3ac8b28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKControllerState LIV::SDK::Unity::SDKControllerState::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(), "get_empty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKControllerState, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKControllerState::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "hmdposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "hmdrotation", ty: "::LIV::SDK::Unity::SDKQuaternion",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "calibrationcameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "calibrationcamerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "camerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftposition", ty:
// "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "rightposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "",
// def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKControllerState::SDKControllerState(::LIV::SDK::Unity::SDKVector3 hmdposition, ::LIV::SDK::Unity::SDKQuaternion hmdrotation,
                                                                    ::LIV::SDK::Unity::SDKVector3 calibrationcameraposition, ::LIV::SDK::Unity::SDKQuaternion calibrationcamerarotation,
                                                                    ::LIV::SDK::Unity::SDKVector3 cameraposition, ::LIV::SDK::Unity::SDKQuaternion camerarotation,
                                                                    ::LIV::SDK::Unity::SDKVector3 leftposition, ::LIV::SDK::Unity::SDKQuaternion leftrotation,
                                                                    ::LIV::SDK::Unity::SDKVector3 rightposition, ::LIV::SDK::Unity::SDKQuaternion rightrotation) noexcept {
  this->hmdposition = hmdposition;
  this->hmdrotation = hmdrotation;
  this->calibrationcameraposition = calibrationcameraposition;
  this->calibrationcamerarotation = calibrationcamerarotation;
  this->cameraposition = cameraposition;
  this->camerarotation = camerarotation;
  this->leftposition = leftposition;
  this->leftrotation = leftrotation;
  this->rightposition = rightposition;
  this->rightrotation = rightrotation;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKControllerState::SDKControllerState() {}
