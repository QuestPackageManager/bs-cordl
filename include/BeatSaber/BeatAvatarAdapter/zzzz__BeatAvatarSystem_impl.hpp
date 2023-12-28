#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystem_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarSystem_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarSystemSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)(
    ::Zenject::DiContainer*, ::BeatSaber::BeatAvatarSDK::AvatarDataModel*, ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe146ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.get_avatarCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::get_avatarCreated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe14794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.InstantiateAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::Avatar*>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)(::BeatSaber::AvatarCore::AvatarDisplayContext, int32_t, ::Zenject::DiContainer*)>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatar)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe14814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.InstantiateAvatarEditorUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)(::Zenject::DiContainer*)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatarEditorUI)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe148c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.InstantiateAvatarSelectionView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarSelectionView*>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)(::Zenject::DiContainer*)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatarSelectionView)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe14924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.GetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::GetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe14988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.GetMultiplayerAvatarOptionalDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::GetMultiplayerAvatarOptionalDataProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe14a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xe14a1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.__GetRandomizedMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__GetRandomizedMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xe14a50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.DeleteUserCreatedAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::DeleteUserCreatedAvatar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe14ae0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 26));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__get__avatarDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> const& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__get__avatarDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*> const& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__set__settings(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::setStaticF_kAvatarSystemTypeIdentifier(::BeatSaber::AvatarCore::AvatarSystemIdentifier value) {
  ::cordl_internals::setStaticField<::BeatSaber::AvatarCore::AvatarSystemIdentifier, "kAvatarSystemTypeIdentifier",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get>(
      std::forward<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(value));
}
inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::getStaticF_kAvatarSystemTypeIdentifier() {
  return ::cordl_internals::getStaticField<::BeatSaber::AvatarCore::AvatarSystemIdentifier, "kAvatarSystemTypeIdentifier",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get>();
}
inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::New_ctor(::Zenject::DiContainer* container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* model,
                                                                                                                  ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>(container, model, settings));
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::_ctor(::Zenject::DiContainer* container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* model,
                                                                  ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, model, settings);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::get_avatarCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                                             "get_avatarCreated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
/// @param container: ::Zenject::DiContainer* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::Avatar*>*
BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatar(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext, int32_t levelOfDetail, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), "InstantiateAvatar", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarDisplayContext>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::Avatar*>*, false>(this, ___internal_method, avatarDisplayContext, levelOfDetail, container);
}
/// @param container: ::Zenject::DiContainer* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*
BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatarEditorUI(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), "InstantiateAvatarEditorUI",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*, false>(this, ___internal_method, container);
}
/// @param container: ::Zenject::DiContainer* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarSelectionView*>*
BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatarSelectionView(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), "InstantiateAvatarSelectionView",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarSelectionView*>*, false>(this, ___internal_method, container);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::GetMultiplayerAvatarsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                                             "GetMultiplayerAvatarsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::GetMultiplayerAvatarOptionalDataProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                                             "GetMultiplayerAvatarOptionalDataProvider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, false>(this, ___internal_method);
}
inline bool BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                                             "CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__GetRandomizedMultiplayerAvatarsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                                             "__GetRandomizedMultiplayerAvatarsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::DeleteUserCreatedAvatar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                                             "DeleteUserCreatedAvatar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::BeatAvatarSystem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
