#pragma once
#include "LIV/SDK/Unity/zzzz__SDKVector3_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPlane_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.op_Implicit___LIV__SDK__Unity__SDKPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPlane (*)(::UnityEngine::Plane)>(
    &::LIV::SDK::Unity::SDKPlane::op_Implicit___LIV__SDK__Unity__SDKPlane)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2214c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPlane (*)()>(&::LIV::SDK::Unity::SDKPlane::get_empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2214ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(), "get_empty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKPlane::*)()>(&::LIV::SDK::Unity::SDKPlane::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2214cb4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKPlane LIV::SDK::Unity::SDKPlane::op_Implicit___LIV__SDK__Unity__SDKPlane(::UnityEngine::Plane v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPlane, false>(nullptr, ___internal_method, v);
}
inline ::LIV::SDK::Unity::SDKPlane LIV::SDK::Unity::SDKPlane::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(), "get_empty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPlane, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKPlane::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "normal", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value:
// Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKPlane::SDKPlane(float_t distance, ::LIV::SDK::Unity::SDKVector3 normal) noexcept {
  this->distance = distance;
  this->normal = normal;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKPlane::SDKPlane() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
