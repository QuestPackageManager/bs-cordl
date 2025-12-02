#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PackedMatrix.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PackedMatrix_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PackedMatrix.FromMatrix4x4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::PackedMatrix (*)(::ByRef<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::PackedMatrix::FromMatrix4x4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6608f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PackedMatrix>::get(), "FromMatrix4x4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PackedMatrix.FromFloat4x4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::PackedMatrix (*)(::ByRef<::Unity::Mathematics::float4x4>)>(
    &::UnityEngine::Rendering::PackedMatrix::FromFloat4x4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6608fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PackedMatrix>::get(), "FromFloat4x4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float4x4>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::PackedMatrix UnityEngine::Rendering::PackedMatrix::FromMatrix4x4(::ByRef<::UnityEngine::Matrix4x4> m) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PackedMatrix>::get(), "FromMatrix4x4", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PackedMatrix, false>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Rendering::PackedMatrix UnityEngine::Rendering::PackedMatrix::FromFloat4x4(::ByRef<::Unity::Mathematics::float4x4> m) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PackedMatrix>::get(), "FromFloat4x4", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PackedMatrix, false>(nullptr, ___internal_method, m);
}
// Ctor Parameters [CppParam { name: "packed0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "packed1", ty: "::Unity::Mathematics::float4", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "packed2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PackedMatrix::PackedMatrix(::Unity::Mathematics::float4 packed0, ::Unity::Mathematics::float4 packed1, ::Unity::Mathematics::float4 packed2) noexcept {
  this->packed0 = packed0;
  this->packed1 = packed1;
  this->packed2 = packed2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PackedMatrix::PackedMatrix() {}
