#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteraction_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputInteraction::GetValueType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2a354c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction*>::get(), "GetValueType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputInteraction::GetDisplayName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2a355bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction*>::get(), "GetDisplayName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputInteraction::GetDisplayName)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2a356c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction*>::get(), "GetDisplayName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputInteraction::setStaticF_s_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Interactions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction*>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputInteraction::getStaticF_s_Interactions() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Interactions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction*>::get>();
}
inline ::System::Type* UnityEngine::InputSystem::InputInteraction::GetValueType(::System::Type* interactionType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction*>::get(), "GetValueType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, interactionType);
}
inline ::StringW UnityEngine::InputSystem::InputInteraction::GetDisplayName(::StringW interaction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction*>::get(), "GetDisplayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, interaction);
}
inline ::StringW UnityEngine::InputSystem::InputInteraction::GetDisplayName(::System::Type* interactionType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction*>::get(), "GetDisplayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, interactionType);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputInteraction::InputInteraction() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
