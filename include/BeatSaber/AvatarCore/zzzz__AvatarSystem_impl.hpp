#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarSystem.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystem_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystem_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystem::*)(
    ::BeatSaber::AvatarCore::AvatarSystemIdentifier, bool, bool, int32_t, ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*)>(&::BeatSaber::AvatarCore::AvatarSystem::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x319cd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.get_typeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::AvatarSystemIdentifier (::BeatSaber::AvatarCore::AvatarSystem::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystem::get_typeIdentifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x319cd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                               "get_typeIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.get_selectableByUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::AvatarCore::AvatarSystem::*)()>(&::BeatSaber::AvatarCore::AvatarSystem::get_selectableByUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319cd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                               "get_selectableByUser", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.get_isFallbackSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::AvatarCore::AvatarSystem::*)()>(&::BeatSaber::AvatarCore::AvatarSystem::get_isFallbackSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319cd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                               "get_isFallbackSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.get_selectionSortOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::AvatarCore::AvatarSystem::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystem::get_selectionSortOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319cd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                               "get_selectionSortOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.get_supportedOptionalAvatarDataTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* (::BeatSaber::AvatarCore::AvatarSystem::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystem::get_supportedOptionalAvatarDataTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319cd74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), "get_supportedOptionalAvatarDataTypes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.get_avatarCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::AvatarSystem::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystem::get_avatarCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.InstantiateAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>* (
    ::BeatSaber::AvatarCore::AvatarSystem::*)(::BeatSaber::AvatarCore::AvatarDisplayContext, int32_t, ::Zenject::DiContainer*)>(&::BeatSaber::AvatarCore::AvatarSystem::InstantiateAvatar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.InstantiateAvatarEditorUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* (
    ::BeatSaber::AvatarCore::AvatarSystem::*)(::Zenject::DiContainer*)>(&::BeatSaber::AvatarCore::AvatarSystem::InstantiateAvatarEditorUI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.InstantiateAvatarSelectionView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>* (
    ::BeatSaber::AvatarCore::AvatarSystem::*)(::Zenject::DiContainer*)>(&::BeatSaber::AvatarCore::AvatarSystem::InstantiateAvatarSelectionView)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.GetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* (
    ::BeatSaber::AvatarCore::AvatarSystem::*)()>(&::BeatSaber::AvatarCore::AvatarSystem::GetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.GetMultiplayerAvatarOptionalDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* (::BeatSaber::AvatarCore::AvatarSystem::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystem::GetMultiplayerAvatarOptionalDataProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::AvatarSystem::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystem::CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.__GetRandomizedMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* (
    ::BeatSaber::AvatarCore::AvatarSystem::*)()>(&::BeatSaber::AvatarCore::AvatarSystem::__GetRandomizedMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystem.DeleteUserCreatedAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystem::*)()>(&::BeatSaber::AvatarCore::AvatarSystem::DeleteUserCreatedAvatar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 26));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__typeIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeIdentifier;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier const& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__typeIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeIdentifier;
}
constexpr void BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_set__typeIdentifier(::BeatSaber::AvatarCore::AvatarSystemIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeIdentifier = value;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__supportedOptionalAvatarDataTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedOptionalAvatarDataTypes;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* const& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__supportedOptionalAvatarDataTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedOptionalAvatarDataTypes;
}
constexpr void BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____supportedOptionalAvatarDataTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__isFallbackSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFallbackSystem;
}
constexpr bool const& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__isFallbackSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFallbackSystem;
}
constexpr void BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_set__isFallbackSystem(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFallbackSystem = value;
}
constexpr int32_t& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__selectionSortOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionSortOrder;
}
constexpr int32_t const& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__selectionSortOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionSortOrder;
}
constexpr void BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_set__selectionSortOrder(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionSortOrder = value;
}
constexpr bool& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__selectableByUser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectableByUser;
}
constexpr bool const& BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_get__selectableByUser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectableByUser;
}
constexpr void BeatSaber::AvatarCore::AvatarSystem::__cordl_internal_set__selectableByUser(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectableByUser = value;
}
inline void BeatSaber::AvatarCore::AvatarSystem::_ctor(::BeatSaber::AvatarCore::AvatarSystemIdentifier identifier, bool isFallbackSystem, bool selectableByUser, int32_t selectionSortOrder,
                                                       ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* supportedOptionalAvatarDataTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identifier, isFallbackSystem, selectableByUser, selectionSortOrder, supportedOptionalAvatarDataTypes);
}
inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier BeatSaber::AvatarCore::AvatarSystem::get_typeIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                             "get_typeIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::AvatarSystemIdentifier, false>(this, ___internal_method);
}
inline bool BeatSaber::AvatarCore::AvatarSystem::get_selectableByUser() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                             "get_selectableByUser", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::AvatarCore::AvatarSystem::get_isFallbackSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                             "get_isFallbackSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t BeatSaber::AvatarCore::AvatarSystem::get_selectionSortOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(),
                                                                             "get_selectionSortOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* BeatSaber::AvatarCore::AvatarSystem::get_supportedOptionalAvatarDataTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), "get_supportedOptionalAvatarDataTypes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::AvatarSystem::get_avatarCreated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>*
BeatSaber::AvatarCore::AvatarSystem::InstantiateAvatar(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext, int32_t levelOfDetail, ::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>*, false>(this, ___internal_method, avatarDisplayContext, levelOfDetail,
                                                                                                                                    container);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>*
BeatSaber::AvatarCore::AvatarSystem::InstantiateAvatarEditorUI(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>*, false>(this, ___internal_method, container);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>*
BeatSaber::AvatarCore::AvatarSystem::InstantiateAvatarSelectionView(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>*, false>(this, ___internal_method, container);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* BeatSaber::AvatarCore::AvatarSystem::GetMultiplayerAvatarsData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::AvatarCore::AvatarSystem::GetMultiplayerAvatarOptionalDataProvider() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::AvatarSystem::CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* BeatSaber::AvatarCore::AvatarSystem::__GetRandomizedMultiplayerAvatarsData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarSystem::DeleteUserCreatedAvatar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystem*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarSystem* BeatSaber::AvatarCore::AvatarSystem::New_ctor(::BeatSaber::AvatarCore::AvatarSystemIdentifier identifier, bool isFallbackSystem, bool selectableByUser,
                                                                                            int32_t selectionSortOrder,
                                                                                            ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* supportedOptionalAvatarDataTypes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::AvatarSystem*>(identifier, isFallbackSystem, selectableByUser, selectionSortOrder, supportedOptionalAvatarDataTypes));
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarSystem"
constexpr BeatSaber::AvatarCore::AvatarSystem::operator ::BeatSaber::AvatarCore::IAvatarSystem*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarSystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarSystem"
constexpr ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystem::i___BeatSaber__AvatarCore__IAvatarSystem() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarSystem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarSystemMetadata"
constexpr BeatSaber::AvatarCore::AvatarSystem::operator ::BeatSaber::AvatarCore::IAvatarSystemMetadata*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarSystemMetadata"
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* BeatSaber::AvatarCore::AvatarSystem::i___BeatSaber__AvatarCore__IAvatarSystemMetadata() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystem::AvatarSystem() {}
