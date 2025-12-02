#pragma once
// IWYU pragma private; include "System/Resources/ResourceManager.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Resources::ResourceManager_CultureNameResourceSetPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager_CultureNameResourceSetPair::*)()>(
    &::System::Resources::ResourceManager_CultureNameResourceSetPair::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596137c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_CultureNameResourceSetPair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Resources::ResourceManager_CultureNameResourceSetPair::__cordl_internal_get_lastCultureName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCultureName;
}
constexpr ::StringW const& System::Resources::ResourceManager_CultureNameResourceSetPair::__cordl_internal_get_lastCultureName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCultureName;
}
constexpr void System::Resources::ResourceManager_CultureNameResourceSetPair::__cordl_internal_set_lastCultureName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastCultureName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Resources::ResourceSet*& System::Resources::ResourceManager_CultureNameResourceSetPair::__cordl_internal_get_lastResourceSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastResourceSet;
}
constexpr ::System::Resources::ResourceSet* const& System::Resources::ResourceManager_CultureNameResourceSetPair::__cordl_internal_get_lastResourceSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastResourceSet;
}
constexpr void System::Resources::ResourceManager_CultureNameResourceSetPair::__cordl_internal_set_lastResourceSet(::System::Resources::ResourceSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastResourceSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Resources::ResourceManager_CultureNameResourceSetPair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_CultureNameResourceSetPair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Resources::ResourceManager_CultureNameResourceSetPair* System::Resources::ResourceManager_CultureNameResourceSetPair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ResourceManager_CultureNameResourceSetPair*>());
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceManager_CultureNameResourceSetPair::ResourceManager_CultureNameResourceSetPair() {}
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager_ResourceManagerMediator::*)(::System::Resources::ResourceManager*)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5961380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_ModuleDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_ModuleDir)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595ef50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_ModuleDir",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_LocationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_LocationInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595ec70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_LocationInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_UserResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_UserResourceSet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595ef68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_UserResourceSet",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_BaseNameField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_BaseNameField)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595ec58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_BaseNameField",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_NeutralResourcesCulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_NeutralResourcesCulture)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5960598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(),
                                                 "get_NeutralResourcesCulture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.GetResourceFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceManager_ResourceManagerMediator::*)(::System::Globalization::CultureInfo*)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::GetResourceFileName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x595eb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "GetResourceFileName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_LookedForSatelliteContractVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_LookedForSatelliteContractVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5960df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(),
                                                 "get_LookedForSatelliteContractVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.set_LookedForSatelliteContractVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager_ResourceManagerMediator::*)(bool)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::set_LookedForSatelliteContractVersion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5960e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "set_LookedForSatelliteContractVersion",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_SatelliteContractVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_SatelliteContractVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5960f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(),
                                                 "get_SatelliteContractVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.set_SatelliteContractVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager_ResourceManagerMediator::*)(::System::Version*)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::set_SatelliteContractVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5960e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "set_SatelliteContractVersion",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.ObtainSatelliteContractVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (
    ::System::Resources::ResourceManager_ResourceManagerMediator::*)(::System::Reflection::Assembly*)>(&::System::Resources::ResourceManager_ResourceManagerMediator::ObtainSatelliteContractVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5960e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "ObtainSatelliteContractVersion",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_FallbackLoc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::UltimateResourceFallbackLocation (
    ::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(&::System::Resources::ResourceManager_ResourceManagerMediator::get_FallbackLoc)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595f34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_FallbackLoc",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_CallingAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeAssembly* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_CallingAssembly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5960a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_CallingAssembly",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_MainAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeAssembly* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_MainAssembly)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x595f364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_MainAssembly",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_BaseName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_BaseName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5961190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_BaseName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Resources::ResourceManager*& System::Resources::ResourceManager_ResourceManagerMediator::__cordl_internal_get__rm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rm;
}
constexpr ::System::Resources::ResourceManager* const& System::Resources::ResourceManager_ResourceManagerMediator::__cordl_internal_get__rm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rm;
}
constexpr void System::Resources::ResourceManager_ResourceManagerMediator::__cordl_internal_set__rm(::System::Resources::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Resources::ResourceManager_ResourceManagerMediator::_ctor(::System::Resources::ResourceManager* rm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rm);
}
inline ::StringW System::Resources::ResourceManager_ResourceManagerMediator::get_ModuleDir() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_ModuleDir",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* System::Resources::ResourceManager_ResourceManagerMediator::get_LocationInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_LocationInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Resources::ResourceManager_ResourceManagerMediator::get_UserResourceSet() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_UserResourceSet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager_ResourceManagerMediator::get_BaseNameField() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_BaseNameField",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Resources::ResourceManager_ResourceManagerMediator::get_NeutralResourcesCulture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(),
                                               "get_NeutralResourcesCulture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager_ResourceManagerMediator::GetResourceFileName(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "GetResourceFileName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, culture);
}
inline bool System::Resources::ResourceManager_ResourceManagerMediator::get_LookedForSatelliteContractVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(),
                                               "get_LookedForSatelliteContractVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Resources::ResourceManager_ResourceManagerMediator::set_LookedForSatelliteContractVersion(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "set_LookedForSatelliteContractVersion",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Version* System::Resources::ResourceManager_ResourceManagerMediator::get_SatelliteContractVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(),
                                               "get_SatelliteContractVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline void System::Resources::ResourceManager_ResourceManagerMediator::set_SatelliteContractVersion(::System::Version* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "set_SatelliteContractVersion",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Version* System::Resources::ResourceManager_ResourceManagerMediator::ObtainSatelliteContractVersion(::System::Reflection::Assembly* a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "ObtainSatelliteContractVersion",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method, a);
}
inline ::System::Resources::UltimateResourceFallbackLocation System::Resources::ResourceManager_ResourceManagerMediator::get_FallbackLoc() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_FallbackLoc",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::UltimateResourceFallbackLocation, false>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeAssembly* System::Resources::ResourceManager_ResourceManagerMediator::get_CallingAssembly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_CallingAssembly",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*, false>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeAssembly* System::Resources::ResourceManager_ResourceManagerMediator::get_MainAssembly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_MainAssembly",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*, false>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager_ResourceManagerMediator::get_BaseName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager_ResourceManagerMediator*>::get(), "get_BaseName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Resources::ResourceManager_ResourceManagerMediator* System::Resources::ResourceManager_ResourceManagerMediator::New_ctor(::System::Resources::ResourceManager* rm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ResourceManager_ResourceManagerMediator*>(rm));
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator::ResourceManager_ResourceManagerMediator() {}
//  Writing Method size for method: ::System::Resources::ResourceManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59611ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59612cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::StringW, ::System::Reflection::Assembly*)>(
    &::System::Resources::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x59613d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5961800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnDeserializing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnDeserialized)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5961810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnSerializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnSerializing)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5961a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnSerializing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.CommonAssemblyInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::CommonAssemblyInit)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5961694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                               "CommonAssemblyInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.get_BaseName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::get_BaseName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5961a70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.get_FallbackLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::UltimateResourceFallbackLocation (::System::Resources::ResourceManager::*)()>(
    &::System::Resources::ResourceManager::get_FallbackLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5961a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                               "get_FallbackLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.GetResourceFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceManager::*)(::System::Globalization::CultureInfo*)>(
    &::System::Resources::ResourceManager::GetResourceFileName)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5961a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.GetFirstResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (::System::Resources::ResourceManager::*)(::System::Globalization::CultureInfo*)>(
    &::System::Resources::ResourceManager::GetFirstResourceSet)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5961bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "GetFirstResourceSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.InternalGetResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (
    ::System::Resources::ResourceManager::*)(::System::Globalization::CultureInfo*, bool, bool)>(&::System::Resources::ResourceManager::InternalGetResourceSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5961f70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.InternalGetResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Resources::ResourceSet* (::System::Resources::ResourceManager::*)(::System::Globalization::CultureInfo*, bool, bool, ::ByRef<::System::Threading::StackCrawlMark>)>(
        &::System::Resources::ResourceManager::InternalGetResourceSet)> {
  constexpr static std::size_t size = 0x7b0;
  constexpr static std::size_t addrs = 0x5961f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "InternalGetResourceSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.AddResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, ::StringW,
                                                                                           ::ByRef<::System::Resources::ResourceSet*>)>(&::System::Resources::ResourceManager::AddResourceSet)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x596273c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "AddResourceSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::ResourceSet*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.GetSatelliteContractVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::System::Reflection::Assembly*)>(
    &::System::Resources::ResourceManager::GetSatelliteContractVersion)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x5962908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "GetSatelliteContractVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.CompareNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::System::Reflection::AssemblyName*)>(
    &::System::Resources::ResourceManager::CompareNames)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5960f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "CompareNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.SetAppXConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::SetAppXConfiguration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5961690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                               "SetAppXConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceManager::*)(::StringW, ::System::Globalization::CultureInfo*)>(
    &::System::Resources::ResourceManager::GetString)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5963014;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Resources::ResourceManager::__cordl_internal_get_BaseNameField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BaseNameField;
}
constexpr ::StringW const& System::Resources::ResourceManager::__cordl_internal_get_BaseNameField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BaseNameField;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_BaseNameField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BaseNameField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Resources::ResourceManager::__cordl_internal_get_ResourceSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceSets;
}
constexpr ::System::Collections::Hashtable* const& System::Resources::ResourceManager::__cordl_internal_get_ResourceSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceSets;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_ResourceSets(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ResourceSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*& System::Resources::ResourceManager::__cordl_internal_get__resourceSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceSets;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* const& System::Resources::ResourceManager::__cordl_internal_get__resourceSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceSets;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__resourceSets(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resourceSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Resources::ResourceManager::__cordl_internal_get_moduleDir() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moduleDir;
}
constexpr ::StringW const& System::Resources::ResourceManager::__cordl_internal_get_moduleDir() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moduleDir;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_moduleDir(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___moduleDir)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::Assembly*& System::Resources::ResourceManager::__cordl_internal_get_MainAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MainAssembly;
}
constexpr ::System::Reflection::Assembly* const& System::Resources::ResourceManager::__cordl_internal_get_MainAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MainAssembly;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_MainAssembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MainAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Resources::ResourceManager::__cordl_internal_get__locationInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locationInfo;
}
constexpr ::System::Type* const& System::Resources::ResourceManager::__cordl_internal_get__locationInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locationInfo;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__locationInfo(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____locationInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Resources::ResourceManager::__cordl_internal_get__userResourceSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userResourceSet;
}
constexpr ::System::Type* const& System::Resources::ResourceManager::__cordl_internal_get__userResourceSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userResourceSet;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__userResourceSet(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userResourceSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Globalization::CultureInfo*& System::Resources::ResourceManager::__cordl_internal_get__neutralResourcesCulture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neutralResourcesCulture;
}
constexpr ::System::Globalization::CultureInfo* const& System::Resources::ResourceManager::__cordl_internal_get__neutralResourcesCulture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neutralResourcesCulture;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__neutralResourcesCulture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____neutralResourcesCulture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Resources::ResourceManager_CultureNameResourceSetPair*& System::Resources::ResourceManager::__cordl_internal_get__lastUsedResourceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedResourceCache;
}
constexpr ::System::Resources::ResourceManager_CultureNameResourceSetPair* const& System::Resources::ResourceManager::__cordl_internal_get__lastUsedResourceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedResourceCache;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__lastUsedResourceCache(::System::Resources::ResourceManager_CultureNameResourceSetPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUsedResourceCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Resources::ResourceManager::__cordl_internal_get__ignoreCase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreCase;
}
constexpr bool const& System::Resources::ResourceManager::__cordl_internal_get__ignoreCase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreCase;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__ignoreCase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreCase = value;
}
constexpr bool& System::Resources::ResourceManager::__cordl_internal_get_UseManifest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseManifest;
}
constexpr bool const& System::Resources::ResourceManager::__cordl_internal_get_UseManifest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseManifest;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_UseManifest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseManifest = value;
}
constexpr bool& System::Resources::ResourceManager::__cordl_internal_get_UseSatelliteAssem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseSatelliteAssem;
}
constexpr bool const& System::Resources::ResourceManager::__cordl_internal_get_UseSatelliteAssem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseSatelliteAssem;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_UseSatelliteAssem(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseSatelliteAssem = value;
}
constexpr ::System::Resources::UltimateResourceFallbackLocation& System::Resources::ResourceManager::__cordl_internal_get__fallbackLoc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackLoc;
}
constexpr ::System::Resources::UltimateResourceFallbackLocation const& System::Resources::ResourceManager::__cordl_internal_get__fallbackLoc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackLoc;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__fallbackLoc(::System::Resources::UltimateResourceFallbackLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackLoc = value;
}
constexpr ::System::Version*& System::Resources::ResourceManager::__cordl_internal_get__satelliteContractVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____satelliteContractVersion;
}
constexpr ::System::Version* const& System::Resources::ResourceManager::__cordl_internal_get__satelliteContractVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____satelliteContractVersion;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__satelliteContractVersion(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____satelliteContractVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Resources::ResourceManager::__cordl_internal_get__lookedForSatelliteContractVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookedForSatelliteContractVersion;
}
constexpr bool const& System::Resources::ResourceManager::__cordl_internal_get__lookedForSatelliteContractVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookedForSatelliteContractVersion;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__lookedForSatelliteContractVersion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lookedForSatelliteContractVersion = value;
}
constexpr ::System::Reflection::Assembly*& System::Resources::ResourceManager::__cordl_internal_get__callingAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callingAssembly;
}
constexpr ::System::Reflection::Assembly* const& System::Resources::ResourceManager::__cordl_internal_get__callingAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callingAssembly;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__callingAssembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callingAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::RuntimeAssembly*& System::Resources::ResourceManager::__cordl_internal_get_m_callingAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_callingAssembly;
}
constexpr ::System::Reflection::RuntimeAssembly* const& System::Resources::ResourceManager::__cordl_internal_get_m_callingAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_callingAssembly;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_m_callingAssembly(::System::Reflection::RuntimeAssembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_callingAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Resources::IResourceGroveler*& System::Resources::ResourceManager::__cordl_internal_get_resourceGroveler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceGroveler;
}
constexpr ::System::Resources::IResourceGroveler* const& System::Resources::ResourceManager::__cordl_internal_get_resourceGroveler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceGroveler;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_resourceGroveler(::System::Resources::IResourceGroveler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceGroveler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Resources::ResourceManager::setStaticF_MagicNumber(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MagicNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_MagicNumber() {
  return ::cordl_internals::getStaticField<int32_t, "MagicNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_HeaderVersionNumber(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "HeaderVersionNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_HeaderVersionNumber() {
  return ::cordl_internals::getStaticField<int32_t, "HeaderVersionNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF__minResourceSet(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "_minResourceSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Resources::ResourceManager::getStaticF__minResourceSet() {
  return ::cordl_internals::getStaticField<::System::Type*, "_minResourceSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_ResReaderTypeName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ResReaderTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_ResReaderTypeName() {
  return ::cordl_internals::getStaticField<::StringW, "ResReaderTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_ResSetTypeName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ResSetTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_ResSetTypeName() {
  return ::cordl_internals::getStaticField<::StringW, "ResSetTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_MscorlibName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "MscorlibName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_MscorlibName() {
  return ::cordl_internals::getStaticField<::StringW, "MscorlibName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_DEBUG(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DEBUG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_DEBUG() {
  return ::cordl_internals::getStaticField<int32_t, "DEBUG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Resources::ResourceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Resources::ResourceManager::_ctor(::StringW baseName, ::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseName, assembly);
}
inline void System::Resources::ResourceManager::OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnDeserializing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::OnSerializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnSerializing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::CommonAssemblyInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "CommonAssemblyInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager::get_BaseName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Resources::UltimateResourceFallbackLocation System::Resources::ResourceManager::get_FallbackLocation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                             "get_FallbackLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::UltimateResourceFallbackLocation, false>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager::GetResourceFileName(::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, culture);
}
inline ::System::Resources::ResourceSet* System::Resources::ResourceManager::GetFirstResourceSet(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "GetFirstResourceSet", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*, false>(this, ___internal_method, culture);
}
inline ::System::Resources::ResourceSet* System::Resources::ResourceManager::InternalGetResourceSet(::System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*, false>(this, ___internal_method, culture, createIfNotExists, tryParents);
}
inline ::System::Resources::ResourceSet* System::Resources::ResourceManager::InternalGetResourceSet(::System::Globalization::CultureInfo* requestedCulture, bool createIfNotExists, bool tryParents,
                                                                                                    ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "InternalGetResourceSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*, false>(this, ___internal_method, requestedCulture, createIfNotExists, tryParents, stackMark);
}
inline void System::Resources::ResourceManager::AddResourceSet(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, ::StringW cultureName,
                                                               ::ByRef<::System::Resources::ResourceSet*> rs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "AddResourceSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::ResourceSet*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, localResourceSets, cultureName, rs);
}
inline ::System::Version* System::Resources::ResourceManager::GetSatelliteContractVersion(::System::Reflection::Assembly* a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "GetSatelliteContractVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method, a);
}
inline bool System::Resources::ResourceManager::CompareNames(::StringW asmTypeName1, ::StringW typeName2, ::System::Reflection::AssemblyName* asmName2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "CompareNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, asmTypeName1, typeName2, asmName2);
}
inline void System::Resources::ResourceManager::SetAppXConfiguration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                                                                             "SetAppXConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager::GetString(::StringW name, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, culture);
}
inline ::System::Resources::ResourceManager* System::Resources::ResourceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ResourceManager*>());
}
inline ::System::Resources::ResourceManager* System::Resources::ResourceManager::New_ctor(::StringW baseName, ::System::Reflection::Assembly* assembly) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ResourceManager*>(baseName, assembly));
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceManager::ResourceManager() {}
