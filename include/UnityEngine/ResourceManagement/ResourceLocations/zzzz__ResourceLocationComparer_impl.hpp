#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceLocations/ResourceLocationComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ResourceLocationComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x676b3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>::get(), "Equals",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x676b410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>::get(), "GetHashCode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::*)()>(
    &::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676b53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::Equals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* x,
                                                                                                 ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>::get(), "Equals",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::GetHashCode(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>::get(), "GetHashCode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer* UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
constexpr UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* UnityEngine::ResourceManagement::ResourceLocations::
    ResourceLocationComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer::ResourceLocationComparer() {}
