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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager_CultureNameResourceSetPair::*)()>(
    &::System::Resources::ResourceManager_CultureNameResourceSetPair::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b75988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_CultureNameResourceSetPair*>(), { ".ctor", {}, {} })));
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
  this->___lastCultureName = value;
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
  this->___lastResourceSet = value;
}
inline void System::Resources::ResourceManager_CultureNameResourceSetPair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_CultureNameResourceSetPair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Resources::ResourceManager_CultureNameResourceSetPair* System::Resources::ResourceManager_CultureNameResourceSetPair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ResourceManager_CultureNameResourceSetPair*>());
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceManager_CultureNameResourceSetPair::ResourceManager_CultureNameResourceSetPair() {}
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager_ResourceManagerMediator::*)(::System::Resources::ResourceManager*)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b7598c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Resources::ResourceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_ModuleDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_ModuleDir)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b7355c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_ModuleDir", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_LocationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_LocationInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b7327c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_LocationInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_UserResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_UserResourceSet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b73574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_UserResourceSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_BaseNameField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_BaseNameField)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b73264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_BaseNameField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_NeutralResourcesCulture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_NeutralResourcesCulture)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b74ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_NeutralResourcesCulture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.GetResourceFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceManager_ResourceManagerMediator::*)(::System::Globalization::CultureInfo*)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::GetResourceFileName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b73194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                           { "GetResourceFileName", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_LookedForSatelliteContractVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_LookedForSatelliteContractVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b75400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_LookedForSatelliteContractVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.set_LookedForSatelliteContractVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager_ResourceManagerMediator::*)(bool)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::set_LookedForSatelliteContractVersion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b75488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                           { "set_LookedForSatelliteContractVersion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_SatelliteContractVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_SatelliteContractVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b75520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_SatelliteContractVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.set_SatelliteContractVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager_ResourceManagerMediator::*)(::System::Version*)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::set_SatelliteContractVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b75470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                           { "set_SatelliteContractVersion", {}, { ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.ObtainSatelliteContractVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Resources::ResourceManager_ResourceManagerMediator::*)(::System::Reflection::Assembly*)>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::ObtainSatelliteContractVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b75418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                           { "ObtainSatelliteContractVersion", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_FallbackLoc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::UltimateResourceFallbackLocation (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_FallbackLoc)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b73958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_FallbackLoc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_CallingAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeAssembly* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_CallingAssembly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b75090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_CallingAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_MainAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeAssembly* (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_MainAssembly)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b73970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_MainAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager_ResourceManagerMediator.get_BaseName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceManager_ResourceManagerMediator::*)()>(
    &::System::Resources::ResourceManager_ResourceManagerMediator::get_BaseName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b7579c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_BaseName", {}, {} })));
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
  this->____rm = value;
}
inline void System::Resources::ResourceManager_ResourceManagerMediator::_ctor(::System::Resources::ResourceManager* rm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Resources::ResourceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rm);
}
inline ::StringW System::Resources::ResourceManager_ResourceManagerMediator::get_ModuleDir() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_ModuleDir", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Resources::ResourceManager_ResourceManagerMediator::get_LocationInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_LocationInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Resources::ResourceManager_ResourceManagerMediator::get_UserResourceSet() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_UserResourceSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager_ResourceManagerMediator::get_BaseNameField() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_BaseNameField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Resources::ResourceManager_ResourceManagerMediator::get_NeutralResourcesCulture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_NeutralResourcesCulture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager_ResourceManagerMediator::GetResourceFileName(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                         { "GetResourceFileName", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, culture);
}
inline bool System::Resources::ResourceManager_ResourceManagerMediator::get_LookedForSatelliteContractVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_LookedForSatelliteContractVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Resources::ResourceManager_ResourceManagerMediator::set_LookedForSatelliteContractVersion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "set_LookedForSatelliteContractVersion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Version* System::Resources::ResourceManager_ResourceManagerMediator::get_SatelliteContractVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_SatelliteContractVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Resources::ResourceManager_ResourceManagerMediator::set_SatelliteContractVersion(::System::Version* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                         { "set_SatelliteContractVersion", {}, { ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Version* System::Resources::ResourceManager_ResourceManagerMediator::ObtainSatelliteContractVersion(::System::Reflection::Assembly* a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(),
                                                                                         { "ObtainSatelliteContractVersion", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method, a);
}
inline ::System::Resources::UltimateResourceFallbackLocation System::Resources::ResourceManager_ResourceManagerMediator::get_FallbackLoc() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_FallbackLoc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::UltimateResourceFallbackLocation>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeAssembly* System::Resources::ResourceManager_ResourceManagerMediator::get_CallingAssembly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_CallingAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeAssembly* System::Resources::ResourceManager_ResourceManagerMediator::get_MainAssembly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_MainAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager_ResourceManagerMediator::get_BaseName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager_ResourceManagerMediator*>(), { "get_BaseName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Resources::ResourceManager_ResourceManagerMediator* System::Resources::ResourceManager_ResourceManagerMediator::New_ctor(::System::Resources::ResourceManager* rm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ResourceManager_ResourceManagerMediator*>(rm));
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator::ResourceManager_ResourceManagerMediator() {}
//  Writing Method size for method: ::System::Resources::ResourceManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b757b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b758d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager::*)(::StringW, ::System::Reflection::Assembly*)>(&::System::Resources::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5b759e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b75e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(),
                                                                                           { "OnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnDeserialized)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b75e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(),
                                                                                           { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnSerializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnSerializing)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b7600c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "OnSerializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.CommonAssemblyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::CommonAssemblyInit)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b75ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "CommonAssemblyInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.get_BaseName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::get_BaseName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7607c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { ::i2c::class_of<::System::Resources::ResourceManager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.get_FallbackLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::UltimateResourceFallbackLocation (::System::Resources::ResourceManager::*)()>(
    &::System::Resources::ResourceManager::get_FallbackLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b76084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "get_FallbackLocation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.GetResourceFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceManager::*)(::System::Globalization::CultureInfo*)>(
    &::System::Resources::ResourceManager::GetResourceFileName)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b7608c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { ::i2c::class_of<::System::Resources::ResourceManager*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.GetFirstResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::ResourceSet* (::System::Resources::ResourceManager::*)(::System::Globalization::CultureInfo*)>(
    &::System::Resources::ResourceManager::GetFirstResourceSet)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5b761d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "GetFirstResourceSet", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.InternalGetResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::ResourceSet* (::System::Resources::ResourceManager::*)(::System::Globalization::CultureInfo*, bool, bool)>(
    &::System::Resources::ResourceManager::InternalGetResourceSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b7657c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { ::i2c::class_of<::System::Resources::ResourceManager*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.InternalGetResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Resources::ResourceSet* (::System::Resources::ResourceManager::*)(::System::Globalization::CultureInfo*, bool, bool, ::by_ref<::System::Threading::StackCrawlMark>)>(
        &::System::Resources::ResourceManager::InternalGetResourceSet)> {
  constexpr static std::size_t size = 0x7b0;
  constexpr static std::size_t addrs = 0x5b76598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "InternalGetResourceSet",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<bool>(),
                                                                                                       ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.AddResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, ::StringW,
                                                                ::by_ref<::System::Resources::ResourceSet*>)>(&::System::Resources::ResourceManager::AddResourceSet)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b76d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "AddResourceSet",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>(),
                                                                                          ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceSet*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.GetSatelliteContractVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)(::System::Reflection::Assembly*)>(&::System::Resources::ResourceManager::GetSatelliteContractVersion)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x5b76f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "GetSatelliteContractVersion", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.CompareNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Reflection::AssemblyName*)>(&::System::Resources::ResourceManager::CompareNames)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5b75538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(),
                                                { "CompareNames", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::AssemblyName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.SetAppXConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::SetAppXConfiguration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b75c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "SetAppXConfiguration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceManager::*)(::StringW, ::System::Globalization::CultureInfo*)>(
    &::System::Resources::ResourceManager::GetString)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5b77620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { ::i2c::class_of<::System::Resources::ResourceManager*>(), 7 }));
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
  this->___BaseNameField = value;
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
  this->___ResourceSets = value;
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
  this->____resourceSets = value;
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
  this->___moduleDir = value;
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
  this->___MainAssembly = value;
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
  this->____locationInfo = value;
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
  this->____userResourceSet = value;
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
  this->____neutralResourcesCulture = value;
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
  this->____lastUsedResourceCache = value;
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
  this->____satelliteContractVersion = value;
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
  this->____callingAssembly = value;
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
  this->___m_callingAssembly = value;
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
  this->___resourceGroveler = value;
}
inline void System::Resources::ResourceManager::setStaticF_MagicNumber(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MagicNumber", ::System::Resources::ResourceManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_MagicNumber() {
  return ::cordl_internals::getStaticField<int32_t, "MagicNumber", ::System::Resources::ResourceManager*>();
}
inline void System::Resources::ResourceManager::setStaticF_HeaderVersionNumber(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "HeaderVersionNumber", ::System::Resources::ResourceManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_HeaderVersionNumber() {
  return ::cordl_internals::getStaticField<int32_t, "HeaderVersionNumber", ::System::Resources::ResourceManager*>();
}
inline void System::Resources::ResourceManager::setStaticF__minResourceSet(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "_minResourceSet", ::System::Resources::ResourceManager*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Resources::ResourceManager::getStaticF__minResourceSet() {
  return ::cordl_internals::getStaticField<::System::Type*, "_minResourceSet", ::System::Resources::ResourceManager*>();
}
inline void System::Resources::ResourceManager::setStaticF_ResReaderTypeName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ResReaderTypeName", ::System::Resources::ResourceManager*>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_ResReaderTypeName() {
  return ::cordl_internals::getStaticField<::StringW, "ResReaderTypeName", ::System::Resources::ResourceManager*>();
}
inline void System::Resources::ResourceManager::setStaticF_ResSetTypeName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ResSetTypeName", ::System::Resources::ResourceManager*>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_ResSetTypeName() {
  return ::cordl_internals::getStaticField<::StringW, "ResSetTypeName", ::System::Resources::ResourceManager*>();
}
inline void System::Resources::ResourceManager::setStaticF_MscorlibName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "MscorlibName", ::System::Resources::ResourceManager*>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_MscorlibName() {
  return ::cordl_internals::getStaticField<::StringW, "MscorlibName", ::System::Resources::ResourceManager*>();
}
inline void System::Resources::ResourceManager::setStaticF_DEBUG(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DEBUG", ::System::Resources::ResourceManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_DEBUG() {
  return ::cordl_internals::getStaticField<int32_t, "DEBUG", ::System::Resources::ResourceManager*>();
}
inline void System::Resources::ResourceManager::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::ResourceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::ResourceManager::_ctor(::StringW baseName, ::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseName, assembly);
}
inline void System::Resources::ResourceManager::OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "OnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::OnSerializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "OnSerializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::CommonAssemblyInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "CommonAssemblyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager::get_BaseName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Resources::UltimateResourceFallbackLocation System::Resources::ResourceManager::get_FallbackLocation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "get_FallbackLocation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::UltimateResourceFallbackLocation>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager::GetResourceFileName(::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceManager*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, culture);
}
inline ::System::Resources::ResourceSet* System::Resources::ResourceManager::GetFirstResourceSet(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "GetFirstResourceSet", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*>(this, ___internal_method, culture);
}
inline ::System::Resources::ResourceSet* System::Resources::ResourceManager::InternalGetResourceSet(::System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceManager*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*>(this, ___internal_method, culture, createIfNotExists, tryParents);
}
inline ::System::Resources::ResourceSet* System::Resources::ResourceManager::InternalGetResourceSet(::System::Globalization::CultureInfo* requestedCulture, bool createIfNotExists, bool tryParents,
                                                                                                    ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "InternalGetResourceSet",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<bool>(),
                                                                                                     ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*>(this, ___internal_method, requestedCulture, createIfNotExists, tryParents, stackMark);
}
inline void System::Resources::ResourceManager::AddResourceSet(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, ::StringW cultureName,
                                                               ::by_ref<::System::Resources::ResourceSet*> rs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "AddResourceSet",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>(),
                                                                                        ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceSet*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, localResourceSets, cultureName, rs);
}
inline ::System::Version* System::Resources::ResourceManager::GetSatelliteContractVersion(::System::Reflection::Assembly* a) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "GetSatelliteContractVersion", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method, a);
}
inline bool System::Resources::ResourceManager::CompareNames(::StringW asmTypeName1, ::StringW typeName2, ::System::Reflection::AssemblyName* asmName2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(),
                                              { "CompareNames", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::AssemblyName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, asmTypeName1, typeName2, asmName2);
}
inline void System::Resources::ResourceManager::SetAppXConfiguration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceManager*>(), { "SetAppXConfiguration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceManager::GetString(::StringW name, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceManager*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, culture);
}
inline ::System::Resources::ResourceManager* System::Resources::ResourceManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ResourceManager*>());
}
inline ::System::Resources::ResourceManager* System::Resources::ResourceManager::New_ctor(::StringW baseName, ::System::Reflection::Assembly* assembly) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ResourceManager*>(baseName, assembly));
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceManager::ResourceManager() {}
