#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/LegacyResourcesLocator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__LegacyResourcesLocator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator.Locate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::*)(
    ::System::Object*, ::System::Type*, ::ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::Locate)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x44fdc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>::get(), "Locate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (
    ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_Keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44fdec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>::get(), "get_Keys",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator.get_LocatorId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_LocatorId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x44fdecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>::get(),
                                                 "get_LocatorId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44fdf0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::Locate(
    ::System::Object* key, ::System::Type* type, ::ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>::get(), "Locate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, type, locations);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>::get(), "get_Keys",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_LocatorId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>::get(),
                                               "get_LocatorId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator* UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*>());
}
/// @brief Convert operator to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
constexpr UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*
UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::i___UnityEngine__AddressableAssets__ResourceLocators__IResourceLocator() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::LegacyResourcesLocator() {}
