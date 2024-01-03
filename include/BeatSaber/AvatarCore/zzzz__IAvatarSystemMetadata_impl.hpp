#pragma once
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarSystemMetadata.get_typeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::AvatarSystemIdentifier (::BeatSaber::AvatarCore::IAvatarSystemMetadata::*)()>(
    &::BeatSaber::AvatarCore::IAvatarSystemMetadata::get_typeIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarSystemMetadata.get_avatarCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::IAvatarSystemMetadata::*)()>(
    &::BeatSaber::AvatarCore::IAvatarSystemMetadata::get_avatarCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(), 1));
    return ___internal_method;
  }
};
inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier BeatSaber::AvatarCore::IAvatarSystemMetadata::get_typeIdentifier() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::AvatarSystemIdentifier, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::IAvatarSystemMetadata::get_avatarCreated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
