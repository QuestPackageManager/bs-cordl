#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsyncInstaller_def.hpp"
#include "BGLib/Polyglot/zzzz__Localization_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::__LocalizationAsyncInstaller____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::__LocalizationAsyncInstaller____c::*)()>(
    &::BGLib::Polyglot::__LocalizationAsyncInstaller____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::__LocalizationAsyncInstaller____c._LocalizationContentToAsset_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::LocalizationAsset* (
    ::BGLib::Polyglot::__LocalizationAsyncInstaller____c::*)(::UnityEngine::TextAsset*)>(&::BGLib::Polyglot::__LocalizationAsyncInstaller____c::_LocalizationContentToAsset_b__6_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1084f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>::get(), "<LocalizationContentToAsset>b__6_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::Polyglot::__LocalizationAsyncInstaller____c::setStaticF___9(::BGLib::Polyglot::__LocalizationAsyncInstaller____c* value) {
  ::cordl_internals::setStaticField<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>::get>(
      std::forward<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>(value));
}
inline ::BGLib::Polyglot::__LocalizationAsyncInstaller____c* BGLib::Polyglot::__LocalizationAsyncInstaller____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>::get>();
}
inline void BGLib::Polyglot::__LocalizationAsyncInstaller____c::setStaticF___9__6_0(::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>::get>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* BGLib::Polyglot::__LocalizationAsyncInstaller____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>::get>();
}
inline ::BGLib::Polyglot::__LocalizationAsyncInstaller____c* BGLib::Polyglot::__LocalizationAsyncInstaller____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>());
}
inline void BGLib::Polyglot::__LocalizationAsyncInstaller____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationAsset* BGLib::Polyglot::__LocalizationAsyncInstaller____c::_LocalizationContentToAsset_b__6_0(::UnityEngine::TextAsset* localizationTextAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::__LocalizationAsyncInstaller____c*>::get(), "<LocalizationContentToAsset>b__6_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationAsset*, false>(this, ___internal_method, localizationTextAsset);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::__LocalizationAsyncInstaller____c::__LocalizationAsyncInstaller____c() {}
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::Polyglot::LocalizationAsyncInstaller::*)()>(
    &::BGLib::Polyglot::LocalizationAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1084ba8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*)>(
    &::BGLib::Polyglot::LocalizationAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1084be8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.LocalizationContentToAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>*)>(
        &::BGLib::Polyglot::LocalizationAsyncInstaller::LocalizationContentToAsset)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1084c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), "LocalizationContentToAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationAsyncInstaller::*)()>(
    &::BGLib::Polyglot::LocalizationAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1084d18;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller.LoadLocalizationAssetsSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* (*)()>(
    &::BGLib::Polyglot::LocalizationAsyncInstaller::LoadLocalizationAssetsSync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1084e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(),
                                                                               "LoadLocalizationAssetsSync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationAsyncInstaller::*)()>(&::BGLib::Polyglot::LocalizationAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1084ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainPolyglotAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*& BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_get__inputFiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFiles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*> const&
BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_get__inputFiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFiles;
}
constexpr void BGLib::Polyglot::LocalizationAsyncInstaller::__cordl_internal_set__inputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputFiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW BGLib::Polyglot::LocalizationAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>* assets,
                                                                                    ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assets, registry);
}
inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*
BGLib::Polyglot::LocalizationAsyncInstaller::LocalizationContentToAsset(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>* content) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), "LocalizationContentToAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*, false>(nullptr, ___internal_method, content);
}
inline void BGLib::Polyglot::LocalizationAsyncInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* BGLib::Polyglot::LocalizationAsyncInstaller::LoadLocalizationAssetsSync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(),
                                                                             "LoadLocalizationAssetsSync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*, false>(nullptr, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationAsyncInstaller* BGLib::Polyglot::LocalizationAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::LocalizationAsyncInstaller*>());
}
inline void BGLib::Polyglot::LocalizationAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsyncInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationAsyncInstaller::LocalizationAsyncInstaller() {}
