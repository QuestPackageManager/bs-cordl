#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\IAvatarSystemMetadata.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarSystemMetadata.get_typeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::AvatarSystemIdentifier (::BeatSaber::AvatarCore::IAvatarSystemMetadata::*)()>(
    &::BeatSaber::AvatarCore::IAvatarSystemMetadata::get_typeIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarSystemMetadata.get_avatarCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::IAvatarSystemMetadata::*)()>(
    &::BeatSaber::AvatarCore::IAvatarSystemMetadata::get_avatarCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(), 1 }));
    return ___internal_method;
  }
};
inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier BeatSaber::AvatarCore::IAvatarSystemMetadata::get_typeIdentifier() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::IAvatarSystemMetadata::get_avatarCreated() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
