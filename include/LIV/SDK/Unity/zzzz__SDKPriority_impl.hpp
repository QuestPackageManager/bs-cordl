#pragma once
#include "LIV/SDK/Unity/zzzz__SDKPriority_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPriority.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPriority (*)()>(&::LIV::SDK::Unity::SDKPriority::get_empty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24f9fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(), "get_empty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPriority.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKPriority::*)()>(&::LIV::SDK::Unity::SDKPriority::ToString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x24f9ff8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKPriority LIV::SDK::Unity::SDKPriority::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(), "get_empty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPriority, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKPriority::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "pose", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipPlane", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "stage", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "feature", ty: "int8_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "nearFarAdjustment", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "groundPlane", ty: "int8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "reserved2", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKPriority::SDKPriority(int8_t pose, int8_t clipPlane, int8_t stage, int8_t resolution, int8_t feature, int8_t nearFarAdjustment, int8_t groundPlane,
                                                      int8_t reserved2) noexcept {
  this->pose = pose;
  this->clipPlane = clipPlane;
  this->stage = stage;
  this->resolution = resolution;
  this->feature = feature;
  this->nearFarAdjustment = nearFarAdjustment;
  this->groundPlane = groundPlane;
  this->reserved2 = reserved2;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKPriority::SDKPriority() {}
