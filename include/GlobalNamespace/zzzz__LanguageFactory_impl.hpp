#pragma once
// IWYU pragma private; include "GlobalNamespace/LanguageFactory.hpp"
#include "BGLib/Polyglot/zzzz__Language_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IFactory_1_impl.hpp"
#include "Zenject/zzzz__IFactory_impl.hpp"
#include "GlobalNamespace/zzzz__LanguageFactory_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LanguageFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LanguageFactory::*)(
    ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::IPlatformUserModel*)>(&::GlobalNamespace::LanguageFactory::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27146c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformUserModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageFactory.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (::GlobalNamespace::LanguageFactory::*)()>(&::GlobalNamespace::LanguageFactory::Create)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2714704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageFactory*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::LanguageFactory::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::LanguageFactory::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::LanguageFactory::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::LanguageFactory::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::LanguageFactory::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::LanguageFactory::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPlatformUserModel*& GlobalNamespace::LanguageFactory::__cordl_internal_get__platformUserModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserModel;
}
constexpr ::GlobalNamespace::IPlatformUserModel* const& GlobalNamespace::LanguageFactory::__cordl_internal_get__platformUserModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserModel;
}
constexpr void GlobalNamespace::LanguageFactory::__cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformUserModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LanguageFactory::_ctor(::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager,
                                                    ::GlobalNamespace::IPlatformUserModel* platformUserModel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformUserModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerDataModel, settingsManager, platformUserModel);
}
inline ::BGLib::Polyglot::Language GlobalNamespace::LanguageFactory::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageFactory*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LanguageFactory* GlobalNamespace::LanguageFactory::New_ctor(::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager,
                                                                                      ::GlobalNamespace::IPlatformUserModel* platformUserModel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LanguageFactory*>(playerDataModel, settingsManager, platformUserModel));
}
/// @brief Convert operator to "::Zenject::IFactory_1<::BGLib::Polyglot::Language>"
constexpr GlobalNamespace::LanguageFactory::operator ::Zenject::IFactory_1<::BGLib::Polyglot::Language>*() noexcept {
  return static_cast<::Zenject::IFactory_1<::BGLib::Polyglot::Language>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_1<::BGLib::Polyglot::Language>"
constexpr ::Zenject::IFactory_1<::BGLib::Polyglot::Language>* GlobalNamespace::LanguageFactory::i___Zenject__IFactory_1___BGLib__Polyglot__Language_() noexcept {
  return static_cast<::Zenject::IFactory_1<::BGLib::Polyglot::Language>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
constexpr GlobalNamespace::LanguageFactory::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
constexpr ::Zenject::IFactory* GlobalNamespace::LanguageFactory::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LanguageFactory::LanguageFactory() {}
