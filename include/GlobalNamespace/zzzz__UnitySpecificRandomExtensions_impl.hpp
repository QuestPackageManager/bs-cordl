#pragma once
// IWYU pragma private; include "GlobalNamespace/UnitySpecificRandomExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnitySpecificRandomExtensions_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnitySpecificRandomExtensions.InsideUnitSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::System::Random*)>(&::GlobalNamespace::UnitySpecificRandomExtensions::InsideUnitSphere)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22b6654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnitySpecificRandomExtensions*>::get(), "InsideUnitSphere",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnitySpecificRandomExtensions.OnUnitSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::System::Random*)>(&::GlobalNamespace::UnitySpecificRandomExtensions::OnUnitSphere)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x22b66fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnitySpecificRandomExtensions*>::get(), "OnUnitSphere",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::UnitySpecificRandomExtensions::InsideUnitSphere(::System::Random* random) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnitySpecificRandomExtensions*>::get(), "InsideUnitSphere",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, random);
}
inline ::UnityEngine::Vector3 GlobalNamespace::UnitySpecificRandomExtensions::OnUnitSphere(::System::Random* random) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnitySpecificRandomExtensions*>::get(), "OnUnitSphere",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, random);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnitySpecificRandomExtensions::UnitySpecificRandomExtensions() {}
