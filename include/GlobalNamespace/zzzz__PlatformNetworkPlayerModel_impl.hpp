#pragma once
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig::*)()>(
    &::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2225308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>"
constexpr GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>*>(static_cast<void*>(this));
}
inline ::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig* GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig*>());
}
inline void GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig::__PlatformNetworkPlayerModel__CreatePartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformNetworkPlayerModel.get_friends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::PlatformNetworkPlayerModel::*)()>(&::GlobalNamespace::PlatformNetworkPlayerModel::get_friends)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22252f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformNetworkPlayerModel*>::get(),
                                                                               "get_friends", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformNetworkPlayerModel.DestroyPartyConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformNetworkPlayerModel::*)()>(
    &::GlobalNamespace::PlatformNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2221b40;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformNetworkPlayerModel*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformNetworkPlayerModel::*)()>(&::GlobalNamespace::PlatformNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2222110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformNetworkPlayerModel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::PlatformNetworkPlayerModel::get_friends() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformNetworkPlayerModel*>::get(),
                                                                             "get_friends", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformNetworkPlayerModel::DestroyPartyConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformNetworkPlayerModel*>::get(),
                                                                             "DestroyPartyConnection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformNetworkPlayerModel* GlobalNamespace::PlatformNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlatformNetworkPlayerModel*>());
}
inline void GlobalNamespace::PlatformNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformNetworkPlayerModel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformNetworkPlayerModel::PlatformNetworkPlayerModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
