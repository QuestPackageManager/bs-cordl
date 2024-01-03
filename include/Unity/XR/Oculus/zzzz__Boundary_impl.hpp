#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/Oculus/zzzz__Boundary_def.hpp"
#include "Unity/XR/Oculus/zzzz__Boundary_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__Boundary__BoundaryType::__Boundary__BoundaryType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::__Boundary__BoundaryType::__Boundary__BoundaryType() {}
constexpr ::Unity::XR::Oculus::__Boundary__BoundaryType Unity::XR::Oculus::__Boundary__BoundaryType::OuterBoundary{ static_cast<int32_t>(0x0) };
constexpr ::Unity::XR::Oculus::__Boundary__BoundaryType Unity::XR::Oculus::__Boundary__BoundaryType::PlayArea{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Unity::XR::Oculus::Boundary.GetBoundaryConfigured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Boundary::GetBoundaryConfigured)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c77640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(), "GetBoundaryConfigured",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Boundary.GetBoundaryDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::__Boundary__BoundaryType, ByRef<::UnityEngine::Vector3>)>(
    &::Unity::XR::Oculus::Boundary::GetBoundaryDimensions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c77648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(), "GetBoundaryDimensions", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__Boundary__BoundaryType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Boundary.GetBoundaryVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Boundary::GetBoundaryVisible)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c77650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(), "GetBoundaryVisible",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Boundary.SetBoundaryVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::Boundary::SetBoundaryVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c77658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(), "SetBoundaryVisible", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline bool Unity::XR::Oculus::Boundary::GetBoundaryConfigured() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(), "GetBoundaryConfigured",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::Boundary::GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(), "GetBoundaryDimensions", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__Boundary__BoundaryType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryType, dimensions);
}
inline bool Unity::XR::Oculus::Boundary::GetBoundaryVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(), "GetBoundaryVisible",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Boundary::SetBoundaryVisible(bool boundaryVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(), "SetBoundaryVisible", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boundaryVisible);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Boundary::Boundary() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
