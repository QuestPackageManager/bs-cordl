#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.ProcessAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::InputSystem::InputProcessor::*)(::System::Object*, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputProcessor::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputProcessor::*)(
    ::cordl_internals::Ptr<void>, int32_t, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputProcessor::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.GetValueTypeFromType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputProcessor::GetValueTypeFromType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2a6a5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(), "GetValueTypeFromType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputProcessor::*)()>(&::UnityEngine::InputSystem::InputProcessor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6a6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputProcessor::setStaticF_s_Processors(::UnityEngine::InputSystem::Utilities::TypeTable value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Processors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputProcessor::getStaticF_s_Processors() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Processors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get>();
}
inline ::System::Object* UnityEngine::InputSystem::InputProcessor::ProcessAsObject(::System::Object* value, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(), "ProcessAsObject", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, control);
}
inline void UnityEngine::InputSystem::InputProcessor::Process(::cordl_internals::Ptr<void> buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(), "Process", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, bufferSize, control);
}
inline ::System::Type* UnityEngine::InputSystem::InputProcessor::GetValueTypeFromType(::System::Type* processorType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(), "GetValueTypeFromType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, processorType);
}
inline ::UnityEngine::InputSystem::InputProcessor* UnityEngine::InputSystem::InputProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputProcessor*>());
}
inline void UnityEngine::InputSystem::InputProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputProcessor::InputProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
