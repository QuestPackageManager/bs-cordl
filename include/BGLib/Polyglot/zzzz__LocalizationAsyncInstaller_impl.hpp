#pragma once
// IWYU pragma private; include "BGLib\Polyglot\LocalizationAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsyncInstaller_def.hpp"
#include "BGLib/Polyglot/zzzz__Localization_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationAsyncInstaller___c::*)()>(&::BGLib::Polyglot::LocalizationAsyncInstaller___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x331d08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller___c._LocalizationContentToAsset_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LocalizationAsset* (::BGLib::Polyglot::LocalizationAsyncInstaller___c::*)(::UnityEngine::TextAsset*)>(
    &::BGLib::Polyglot::LocalizationAsyncInstaller___c::_LocalizationContentToAsset_b__6_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x331d090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller___c*>(),
                                                                                           { "<LocalizationContentToAsset>b__6_0", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::Polyglot::LocalizationAsyncInstaller___c::setStaticF___9(::BGLib::Polyglot::LocalizationAsyncInstaller___c* value) {
  ::cordl_internals::setStaticField<::BGLib::Polyglot::LocalizationAsyncInstaller___c*, "<>9", ::BGLib::Polyglot::LocalizationAsyncInstaller___c*>(
      std::forward<::BGLib::Polyglot::LocalizationAsyncInstaller___c*>(value));
}
inline ::BGLib::Polyglot::LocalizationAsyncInstaller___c* BGLib::Polyglot::LocalizationAsyncInstaller___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::Polyglot::LocalizationAsyncInstaller___c*, "<>9", ::BGLib::Polyglot::LocalizationAsyncInstaller___c*>();
}
inline void BGLib::Polyglot::LocalizationAsyncInstaller___c::setStaticF___9__6_0(::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>*, "<>9__6_0", ::BGLib::Polyglot::LocalizationAsyncInstaller___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* BGLib::Polyglot::LocalizationAsyncInstaller___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>*, "<>9__6_0",
                                           ::BGLib::Polyglot::LocalizationAsyncInstaller___c*>();
}
inline void BGLib::Polyglot::LocalizationAsyncInstaller___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationAsset* BGLib::Polyglot::LocalizationAsyncInstaller___c::_LocalizationContentToAsset_b__6_0(::UnityEngine::TextAsset* localizationTextAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller___c*>(),
                                                                                         { "<LocalizationContentToAsset>b__6_0", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationAsset*>(this, ___internal_method, localizationTextAsset);
}
inline ::BGLib::Polyglot::LocalizationAsyncInstaller___c* BGLib::Polyglot::LocalizationAsyncInstaller___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::LocalizationAsyncInstaller___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationAsyncInstaller___c::LocalizationAsyncInstaller___c() {}
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::Polyglot::LocalizationAsyncInstaller::*)()>(&::BGLib::Polyglot::LocalizationAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x331cc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), { ::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationAsyncInstaller::*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*,
                                                                                                               ::BGLib::AppFlow::Initialization::IInstallerRegistry*)>(
    &::BGLib::Polyglot::LocalizationAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x331ccd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), { ::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.LocalizationContentToAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>*)>(
        &::BGLib::Polyglot::LocalizationAsyncInstaller::LocalizationContentToAsset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x331ccf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(),
                                                { "LocalizationContentToAsset", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationAsyncInstaller::*)()>(&::BGLib::Polyglot::LocalizationAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x331ce14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), { ::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.LoadLocalizationAssetsSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* (*)()>(
    &::BGLib::Polyglot::LocalizationAsyncInstaller::LoadLocalizationAssetsSync)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x331cf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), { "LoadLocalizationAssetsSync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationAsyncInstaller::*)()>(&::BGLib::Polyglot::LocalizationAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x331cff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BGLib::Polyglot::Localization>& BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_get__mainPolyglotAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainPolyglotAsset;
}
constexpr ::UnityW<::BGLib::Polyglot::Localization> const& BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_get__mainPolyglotAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainPolyglotAsset;
}
constexpr void BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_set__mainPolyglotAsset(::UnityW<::BGLib::Polyglot::Localization> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainPolyglotAsset = value;
}
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*& BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_get__inputFiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFiles;
}
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* const& BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_get__inputFiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFiles;
}
constexpr void BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_set__inputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputFiles = value;
}
inline ::StringW BGLib::Polyglot::LocalizationAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>* assets,
                                                                                    ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assets, registry);
}
inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*
BGLib::Polyglot::LocalizationAsyncInstaller::LocalizationContentToAsset(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>* content) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(),
                                              { "LocalizationContentToAsset", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>(nullptr, ___internal_method, content);
}
inline void BGLib::Polyglot::LocalizationAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* BGLib::Polyglot::LocalizationAsyncInstaller::LoadLocalizationAssetsSync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), { "LoadLocalizationAssetsSync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>(nullptr, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationAsyncInstaller* BGLib::Polyglot::LocalizationAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::LocalizationAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationAsyncInstaller::LocalizationAsyncInstaller() {}
