#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputInteraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteraction_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputInteraction::GetValueType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x64cd6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputInteraction*>(), { "GetValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputInteraction::GetDisplayName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64cd774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputInteraction*>(), { "GetDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputInteraction::GetDisplayName)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x64cd858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputInteraction*>(), { "GetDisplayName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputInteraction::setStaticF_s_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Interactions", ::UnityEngine::InputSystem::InputInteraction*>(
      std::forward<::UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputInteraction::getStaticF_s_Interactions() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Interactions", ::UnityEngine::InputSystem::InputInteraction*>();
}
inline ::System::Type* UnityEngine::InputSystem::InputInteraction::GetValueType(::System::Type* interactionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputInteraction*>(), { "GetValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, interactionType);
}
inline ::StringW UnityEngine::InputSystem::InputInteraction::GetDisplayName(::StringW interaction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputInteraction*>(), { "GetDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, interaction);
}
inline ::StringW UnityEngine::InputSystem::InputInteraction::GetDisplayName(::System::Type* interactionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputInteraction*>(), { "GetDisplayName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, interactionType);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputInteraction::InputInteraction() {}
