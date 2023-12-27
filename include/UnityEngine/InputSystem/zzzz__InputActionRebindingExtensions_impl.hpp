#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
// Ctor Parameters [CppParam { name: "instance", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "bindingIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter::__InputActionRebindingExtensions__Parameter(::System::Object* instance, ::System::Reflection::FieldInfo* field,
                                                                                                                               int32_t bindingIndex) noexcept {
  this->instance = instance;
  this->field = field;
  this->bindingIndex = bindingIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter::__InputActionRebindingExtensions__Parameter() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride.get_objectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::get_objectType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a43e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(),
                                                 "get_objectType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::*)(
    ::StringW, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a3e40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::*)(
    ::StringW, ::StringW, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a44388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride.Find
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> (*)(
    ::UnityEngine::InputSystem::InputActionMap*, ByRef<::UnityEngine::InputSystem::InputBinding>, ::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::Find)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2a3f400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), "Find", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride.Find
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> (*)(
    ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>, int32_t,
    ByRef<::UnityEngine::InputSystem::InputBinding>, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::Find)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2a443bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), "Find", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,
                                                                           ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride.PickMoreSpecificOne
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> (*)(
    ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>,
    ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::PickMoreSpecificOne)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2a445d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), "PickMoreSpecificOne",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>>::get() })));
    return ___internal_method;
  }
};
inline ::System::Type* UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::get_objectType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(),
                                               "get_objectType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
/// @param value: ::UnityEngine::InputSystem::Utilities::PrimitiveValue (default: {})
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::_ctor(::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask,
                                                                                                 ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterName, bindingMask, value);
}
/// @param value: ::UnityEngine::InputSystem::Utilities::PrimitiveValue (default: {})
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::_ctor(::StringW objectRegistrationName, ::StringW parameterName,
                                                                                                 ::UnityEngine::InputSystem::InputBinding bindingMask,
                                                                                                 ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectRegistrationName, parameterName, bindingMask, value);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>
UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::Find(::UnityEngine::InputSystem::InputActionMap* actionMap, ByRef<::UnityEngine::InputSystem::InputBinding> binding,
                                                                                    ::StringW parameterName, ::StringW objectRegistrationName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), "Find", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>, false>(
      nullptr, ___internal_method, actionMap, binding, parameterName, objectRegistrationName);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::Find(
    ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> overrides,
    int32_t overrideCount, ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), "Find", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,
                                                                         ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>, false>(
      nullptr, ___internal_method, overrides, overrideCount, binding, parameterName, objectRegistrationName);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>
UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::PickMoreSpecificOne(
    ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> first,
    ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> second) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(), "PickMoreSpecificOne",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>, false>(nullptr, ___internal_method, first, second);
}
// Ctor Parameters [CppParam { name: "objectRegistrationName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "parameter", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "bindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty:
// "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::__InputActionRebindingExtensions__ParameterOverride(
    ::StringW objectRegistrationName, ::StringW parameter, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) noexcept {
  this->objectRegistrationName = objectRegistrationName;
  this->parameter = parameter;
  this->bindingMask = bindingMask;
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride::__InputActionRebindingExtensions__ParameterOverride() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::*)(
    ::UnityEngine::InputSystem::InputActionState*, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, int32_t)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a3e66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a3e6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                                                 "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::
        System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a43cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable>::get(),
        "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::*)()>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a43d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>"
constexpr UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @param mapIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::_ctor(::UnityEngine::InputSystem::InputActionState* state,
                                                                                                   ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride parameter,
                                                                                                   int32_t mapIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, parameter, mapIndex);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                                               "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>* UnityEngine::InputSystem::
    __InputActionRebindingExtensions__ParameterEnumerable::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable>::get(),
      "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Parameter", ty:
// "::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::__InputActionRebindingExtensions__ParameterEnumerable(
    ::UnityEngine::InputSystem::InputActionState* m_State, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride m_Parameter, int32_t m_MapIndex) noexcept {
  this->m_State = m_State;
  this->m_Parameter = m_Parameter;
  this->m_MapIndex = m_MapIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable::__InputActionRebindingExtensions__ParameterEnumerable() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)(
    ::UnityEngine::InputSystem::InputActionState*, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, int32_t)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x2a43a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.MoveToNextBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextBinding)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2a43f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                                 "MoveToNextBinding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.MoveToNextInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextInteraction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a44158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                                 "MoveToNextInteraction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.MoveToNextProcessor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextProcessor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a442b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                                 "MoveToNextProcessor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.FindParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::FindParameter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2a441c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(), "FindParameter",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a3e714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2a43ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                                 "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a3e700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                                 "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a44320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a44384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                                 "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>"
constexpr UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @param mapIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::_ctor(::UnityEngine::InputSystem::InputActionState* state,
                                                                                                   ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride parameter,
                                                                                                   int32_t mapIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, parameter, mapIndex);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextBinding() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                               "MoveToNextBinding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextInteraction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                               "MoveToNextInteraction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextProcessor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                               "MoveToNextProcessor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::FindParameter(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(), "FindParameter",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_MapIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingCurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingEndIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionCurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionEndIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProcessorCurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProcessorEndIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ObjectType",
// ty: "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_ParameterName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "m_MayBeInteraction", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MayBeProcessor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_MayBeComposite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentBindingIsComposite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_CurrentObject", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_CurrentParameter", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::__InputActionRebindingExtensions__ParameterEnumerator(
    ::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_MapIndex, int32_t m_BindingCurrentIndex, int32_t m_BindingEndIndex, int32_t m_InteractionCurrentIndex,
    int32_t m_InteractionEndIndex, int32_t m_ProcessorCurrentIndex, int32_t m_ProcessorEndIndex, ::UnityEngine::InputSystem::InputBinding m_BindingMask, ::System::Type* m_ObjectType,
    ::StringW m_ParameterName, bool m_MayBeInteraction, bool m_MayBeProcessor, bool m_MayBeComposite, bool m_CurrentBindingIsComposite, ::System::Object* m_CurrentObject,
    ::System::Reflection::FieldInfo* m_CurrentParameter) noexcept {
  this->m_State = m_State;
  this->m_MapIndex = m_MapIndex;
  this->m_BindingCurrentIndex = m_BindingCurrentIndex;
  this->m_BindingEndIndex = m_BindingEndIndex;
  this->m_InteractionCurrentIndex = m_InteractionCurrentIndex;
  this->m_InteractionEndIndex = m_InteractionEndIndex;
  this->m_ProcessorCurrentIndex = m_ProcessorCurrentIndex;
  this->m_ProcessorEndIndex = m_ProcessorEndIndex;
  this->m_BindingMask = m_BindingMask;
  this->m_ObjectType = m_ObjectType;
  this->m_ParameterName = m_ParameterName;
  this->m_MayBeInteraction = m_MayBeInteraction;
  this->m_MayBeProcessor = m_MayBeProcessor;
  this->m_MayBeComposite = m_MayBeComposite;
  this->m_CurrentBindingIsComposite = m_CurrentBindingIsComposite;
  this->m_CurrentObject = m_CurrentObject;
  this->m_CurrentParameter = m_CurrentParameter;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator::__InputActionRebindingExtensions__ParameterEnumerator() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::__InputActionRebindingExtensions__RebindingOperation__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::__InputActionRebindingExtensions__RebindingOperation__Flags() {}
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::Started{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::Completed{ static_cast<int32_t>(
    0x2) };
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::Canceled{ static_cast<int32_t>(
    0x4) };
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::OnEventHooked{
  static_cast<int32_t>(0x8)
};
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::OnAfterUpdateHooked{
  static_cast<int32_t>(0x10)
};
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::DontIgnoreNoisyControls{
  static_cast<int32_t>(0x40)
};
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags
    GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::DontGeneralizePathOfSelectedControl{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::AddNewBinding{
  static_cast<int32_t>(0x100)
};
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags::SuppressMatchingEvents{
  static_cast<int32_t>(0x200)
};
//  Writing Method size for method: ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::*)()>(
    &::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a44d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0*>::get(),
                                    ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0._WithTargetBinding_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::*)(
    ::UnityEngine::InputSystem::InputControlScheme)>(&::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::_WithTargetBinding_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a467d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0*>::get(), "<WithTargetBinding>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::__get_group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___group;
}
constexpr ::StringW const& GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::__get_group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___group;
}
constexpr void GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::__set_group(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___group)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0*
GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0*>());
}
inline void GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::_WithTargetBinding_b__0(::UnityEngine::InputSystem::InputControlScheme x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0*>::get(), "<WithTargetBinding>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a44858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_action", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_bindingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a44860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_bindingMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_candidates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_candidates)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a44870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_candidates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_scores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_scores)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a44884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_scores", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_magnitudes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_magnitudes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a448f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_magnitudes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_selectedControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_selectedControl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a4496c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_selectedControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_started
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_started)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a449dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_started", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_completed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_completed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a449e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_completed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_canceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_canceled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a449f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_canceled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a44a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_startTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a44a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_timeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.get_expectedControlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_expectedControlType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a434a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "get_expectedControlType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithAction)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2a4319c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithMatchingEventsBeingSuppressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(bool)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithMatchingEventsBeingSuppressed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a43464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithMatchingEventsBeingSuppressed",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithCancelingThrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithCancelingThrough)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a434b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                    "WithCancelingThrough", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithCancelingThrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithCancelingThrough)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a44ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithCancelingThrough",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithExpectedControlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a44a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithExpectedControlType",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithExpectedControlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2a44b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithExpectedControlType",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithTargetBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(int32_t)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithTargetBinding)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x2a434d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                    "WithTargetBinding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithBindingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithBindingMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a44e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithBindingMask",
                                    std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithBindingGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithBindingGroup)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a44eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                    "WithBindingGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithoutGeneralizingPathOfSelectedControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithoutGeneralizingPathOfSelectedControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a44f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "WithoutGeneralizingPathOfSelectedControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithRebindAddingNewBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithRebindAddingNewBinding)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a44f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithRebindAddingNewBinding",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithMagnitudeHavingToBeGreaterThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(float_t)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithMagnitudeHavingToBeGreaterThan)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a44f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithMagnitudeHavingToBeGreaterThan",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithoutIgnoringNoisyControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithoutIgnoringNoisyControls)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a45034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "WithoutIgnoringNoisyControls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithControlsHavingToMatchPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithControlsHavingToMatchPath)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a44d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithControlsHavingToMatchPath",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithControlsExcluding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithControlsExcluding)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a43338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                   "WithControlsExcluding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.WithTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(float_t)>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a45058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithTimeout",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a45060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnComplete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnCancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a45068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnCancel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnPotentialMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnPotentialMatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a45070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnPotentialMatch",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnGeneratePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnGeneratePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a45078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnGeneratePath", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnComputeScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::System::Func_3<::UnityEngine::InputSystem::InputControl*,
                                                                                                          ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnComputeScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a45080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnComputeScore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnApplyBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*,
                                                                                                            ::StringW>*)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnApplyBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a45088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnApplyBinding", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnMatchWaitForAnother
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(float_t)>(
        &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnMatchWaitForAnother)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a43330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                    "OnMatchWaitForAnother", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Start)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2a45090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Cancel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a453a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "Cancel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Complete)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a453ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "Complete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.AddCandidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(
    ::UnityEngine::InputSystem::InputControl*, float_t, float_t)>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::AddCandidate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2a45708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "AddCandidate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.RemoveCandidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(
    ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::RemoveCandidate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a459a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "RemoveCandidate",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a45ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a45c24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a45cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.HookOnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::HookOnEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2a452c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "HookOnEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.UnhookOnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::UnhookOnEvent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a45b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "UnhookOnEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnEvent)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x2a45d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.SortCandidatesByScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::SortCandidatesByScore)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2a45880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "SortCandidatesByScore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.HavePathMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::ArrayW<::StringW, ::Array<::StringW>*>, int32_t)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::HavePathMatch)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a4649c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "HavePathMatch", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.HookOnAfterUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::HookOnAfterUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a451f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "HookOnAfterUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.UnhookOnAfterUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::UnhookOnAfterUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a45bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "UnhookOnAfterUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnAfterUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnAfterUpdate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a46518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "OnAfterUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnComplete)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2a453fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "OnComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.OnCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnCancel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a453b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "OnCancel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.ResetAfterMatchCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::ResetAfterMatchCompleted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2a46710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "ResetAfterMatchCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.ThrowIfRebindInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::ThrowIfRebindInProgress)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a44a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 "ThrowIfRebindInProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation.GeneratePathForControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)(
    ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::GeneratePathForControl)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2a465c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "GeneratePathForControl",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a4310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ActionToRebind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ActionToRebind;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ActionToRebind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ActionToRebind;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_ActionToRebind(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionToRebind)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_BindingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BindingMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_BindingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BindingMask;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_BindingMask = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ControlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ControlType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ControlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ControlType;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_ControlType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ControlType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ExpectedLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ExpectedLayout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ExpectedLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ExpectedLayout;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_ExpectedLayout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ExpectedLayout = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_IncludePathCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IncludePathCount;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_IncludePathCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IncludePathCount;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_IncludePathCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_IncludePathCount = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_IncludePaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IncludePaths;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_IncludePaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IncludePaths;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_IncludePaths(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IncludePaths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ExcludePathCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ExcludePathCount;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ExcludePathCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ExcludePathCount;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_ExcludePathCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ExcludePathCount = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ExcludePaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ExcludePaths;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_ExcludePaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ExcludePaths;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_ExcludePaths(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExcludePaths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_TargetBindingIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TargetBindingIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_TargetBindingIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TargetBindingIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_TargetBindingIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_TargetBindingIndex = value;
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_BindingGroupForNewBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BindingGroupForNewBinding;
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_BindingGroupForNewBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BindingGroupForNewBinding;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_BindingGroupForNewBinding(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BindingGroupForNewBinding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_CancelBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CancelBinding;
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_CancelBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CancelBinding;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_CancelBinding(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CancelBinding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_MagnitudeThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MagnitudeThreshold;
}
constexpr float_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_MagnitudeThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MagnitudeThreshold;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_MagnitudeThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MagnitudeThreshold = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Scores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Scores;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Scores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Scores;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_Scores(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Scores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Magnitudes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Magnitudes;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Magnitudes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Magnitudes;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_Magnitudes(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Magnitudes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_LastMatchTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastMatchTime;
}
constexpr double_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_LastMatchTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastMatchTime;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_LastMatchTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LastMatchTime = value;
}
constexpr double_t& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_StartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StartTime;
}
constexpr double_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_StartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StartTime;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_StartTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_StartTime = value;
}
constexpr float_t& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Timeout;
}
constexpr float_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Timeout;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_Timeout(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Timeout = value;
}
constexpr float_t& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_WaitSecondsAfterMatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_WaitSecondsAfterMatch;
}
constexpr float_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_WaitSecondsAfterMatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_WaitSecondsAfterMatch;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_WaitSecondsAfterMatch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_WaitSecondsAfterMatch = value;
}
constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Candidates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Candidates;
}
constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Candidates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Candidates;
}
constexpr void
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_Candidates(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Candidates = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnComplete;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnComplete;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_OnComplete(
    ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnCancel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnCancel;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnCancel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnCancel;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_OnCancel(
    ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnCancel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnPotentialMatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnPotentialMatch;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnPotentialMatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnPotentialMatch;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_OnPotentialMatch(
    ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnPotentialMatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>*& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnGeneratePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnGeneratePath;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnGeneratePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnGeneratePath;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnGeneratePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>*&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnComputeScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnComputeScore;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnComputeScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnComputeScore;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_OnComputeScore(
    ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnComputeScore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>*&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnApplyBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnApplyBinding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnApplyBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnApplyBinding;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_OnApplyBinding(
    ::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnApplyBinding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnEventDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnEventDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnEventDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnEventDelegate;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_OnEventDelegate(
    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnEventDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnAfterUpdateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnAfterUpdateDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_OnAfterUpdateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnAfterUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_OnAfterUpdateDelegate(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnAfterUpdateDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_LayoutCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LayoutCache;
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_LayoutCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LayoutCache;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_LayoutCache(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LayoutCache = value;
}
constexpr ::System::Text::StringBuilder*& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_PathBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_PathBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_PathBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_PathBuilder;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_PathBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PathBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Flags;
}
constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const& UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_Flags(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Flags = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>*&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_StartingActuations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StartingActuations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>*> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__get_m_StartingActuations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StartingActuations;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__set_m_StartingActuations(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StartingActuations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_action() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_action", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_bindingMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_bindingMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_candidates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_candidates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_scores() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_scores", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_magnitudes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_magnitudes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_selectedControl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_selectedControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_started() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_started", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_completed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_completed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_canceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_canceled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_startTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_startTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_timeout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_timeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::get_expectedControlType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "get_expectedControlType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithAction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, action);
}
/// @param value: bool (default: true)
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithMatchingEventsBeingSuppressed(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithMatchingEventsBeingSuppressed",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithCancelingThrough(::StringW binding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                  "WithCancelingThrough", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, binding);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithCancelingThrough(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithCancelingThrough",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, control);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType(::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                 "WithExpectedControlType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, layoutName);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithExpectedControlType",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, type);
}
template <typename TControl>
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType() {
  static auto* ___internal_method_base = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                 "WithExpectedControlType", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithTargetBinding(int32_t bindingIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithTargetBinding",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, bindingIndex);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithBindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithBindingMask", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, bindingMask);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithBindingGroup(::StringW group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithBindingGroup",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, group);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithoutGeneralizingPathOfSelectedControl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "WithoutGeneralizingPathOfSelectedControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method);
}
/// @param group: ::StringW (default: nullptr)
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithRebindAddingNewBinding(::StringW group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithRebindAddingNewBinding",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, group);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithMagnitudeHavingToBeGreaterThan(float_t magnitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithMagnitudeHavingToBeGreaterThan",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, magnitude);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithoutIgnoringNoisyControls() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "WithoutIgnoringNoisyControls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithControlsHavingToMatchPath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "WithControlsHavingToMatchPath",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, path);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithControlsExcluding(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                  "WithControlsExcluding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, path);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::WithTimeout(float_t timeInSeconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "WithTimeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, timeInSeconds);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnComplete(
    ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnComplete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, callback);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnCancel(
    ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnCancel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, callback);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnPotentialMatch(
    ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnPotentialMatch", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, callback);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnGeneratePath", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, callback);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnComputeScore(
    ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnComputeScore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, callback);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnApplyBinding(
    ::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnApplyBinding", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, callback);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnMatchWaitForAnother(float_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                  "OnMatchWaitForAnother", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method, seconds);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Cancel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "Cancel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Complete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "Complete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param magnitude: float_t (default: -1.0)
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::AddCandidate(::UnityEngine::InputSystem::InputControl* control, float_t score, float_t magnitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "AddCandidate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, score, magnitude);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::RemoveCandidate(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "RemoveCandidate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Finalize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "Finalize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::HookOnEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "HookOnEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::UnhookOnEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "UnhookOnEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                    ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "OnEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr, device);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::SortCandidatesByScore() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "SortCandidatesByScore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::HavePathMatch(::UnityEngine::InputSystem::InputControl* control,
                                                                                                          ::ArrayW<::StringW, ::Array<::StringW>*> paths, int32_t pathCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "HavePathMatch", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, paths, pathCount);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::HookOnAfterUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "HookOnAfterUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::UnhookOnAfterUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "UnhookOnAfterUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnAfterUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "OnAfterUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "OnComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::OnCancel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "OnCancel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::ResetAfterMatchCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "ResetAfterMatchCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::ThrowIfRebindInProgress() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               "ThrowIfRebindInProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::GeneratePathForControl(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(), "GeneratePathForControl",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, control);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>());
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation::__InputActionRebindingExtensions__RebindingOperation() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper.Acquire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::Acquire)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a43a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*>::get(),
                                    "Acquire", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a467f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*>::get(),
                                    "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a43a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*>::get(),
                                    ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::Acquire() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*>::get(),
                                  "Acquire", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*>::get(),
                                  "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*
UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*>());
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper::__InputActionRebindingExtensions__DeferBindingResolutionWrapper() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::*)()>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4054c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0._GetBindingDisplayString_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::*)(::StringW)>(
    &::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::_GetBindingDisplayString_b__0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2a46864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0*>::get(), "<GetBindingDisplayString>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>&
UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__get_bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bindings;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> const&
UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__get_bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bindings;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__set_bindings(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___bindings = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__get_firstPartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstPartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__get_firstPartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstPartIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__set_firstPartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___firstPartIndex = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__get_partStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partStrings;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__get_partStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partStrings;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__set_partStrings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__get_partCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partCount;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__get_partCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partCount;
}
constexpr void UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__set_partCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___partCount = value;
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0* UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0*>());
}
inline void UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::_GetBindingDisplayString_b__0(::StringW fragment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0*>::get(), "<GetBindingDisplayString>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, fragment);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0::__InputActionRebindingExtensions____c__DisplayClass25_0() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetParameterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> (*)(
    ::UnityEngine::InputSystem::InputAction*, ::StringW, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a3e2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetParameterValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetParameterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> (*)(
    ::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2a3e4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetParameterValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetParameterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> (*)(
    ::UnityEngine::InputSystem::InputAction*, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2a3e7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetParameterValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap*, ::StringW, ::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::InputBinding)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2a3e9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset*, ::StringW, ::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::InputBinding)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2a3eef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::StringW, ::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::InputBinding)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2a3f08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::StringW, ::UnityEngine::InputSystem::Utilities::PrimitiveValue,
                                                                                           int32_t)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2a3f1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::InputActionState*, int32_t,
    ByRef<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>,
    ByRef<int32_t>, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2a3eb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,
                                                                                 ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2a3f5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2a3f6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputAction*, ::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a3f7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingForControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (*)(
    ::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingForControl)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2a3f89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingForControl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingIndexForControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndexForControl)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2a3fa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingIndexForControl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingDisplayString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions, ::StringW)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2a3fbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingDisplayString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingDisplayString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2a3fd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingDisplayString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingDisplayString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction*, int32_t, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a3ff34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingDisplayString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingDisplayString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction*, int32_t, ByRef<::StringW>, ByRef<::StringW>, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2a3ffac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingDisplayString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a40554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2a405d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, int32_t, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a40818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, int32_t, ::StringW)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a40a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a406e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap*, int32_t, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2a408d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, int32_t)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a40b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a40b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveBindingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a40c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveBindingOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveAllBindingOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::IInputActionCollection2*)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveAllBindingOverrides)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x2a40c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveAllBindingOverrides", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveAllBindingOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveAllBindingOverrides)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2a411d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveAllBindingOverrides", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverrides)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2a4130c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverrides", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveBindingOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverrides)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2a41694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveBindingOverrides", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverridesOnMatchingControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverridesOnMatchingControls)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2a41a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(),
                                                 "ApplyBindingOverridesOnMatchingControls", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverridesOnMatchingControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverridesOnMatchingControls)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2a41b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(),
                                                 "ApplyBindingOverridesOnMatchingControls", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.SaveBindingOverridesAsJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::IInputActionCollection2*)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::SaveBindingOverridesAsJson)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x2a41c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "SaveBindingOverridesAsJson", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.SaveBindingOverridesAsJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::SaveBindingOverridesAsJson)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x2a42318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "SaveBindingOverridesAsJson", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.AddBindingOverrideJsonTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::IInputActionCollection2*, ::UnityEngine::InputSystem::InputBinding,
                         ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*, ::UnityEngine::InputSystem::InputAction*)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::AddBindingOverrideJsonTo)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2a42134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "AddBindingOverrideJsonTo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.LoadBindingOverridesFromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::IInputActionCollection2*, ::StringW, bool)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJson)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2a4267c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "LoadBindingOverridesFromJson", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.LoadBindingOverridesFromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::StringW, bool)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJson)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2a42b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "LoadBindingOverridesFromJson", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.LoadBindingOverridesFromJsonInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::IInputActionCollection2*, ::StringW)>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJsonInternal)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2a42850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "LoadBindingOverridesFromJsonInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.PerformInteractiveRebinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* (*)(::UnityEngine::InputSystem::InputAction*, int32_t)>(
        &::UnityEngine::InputSystem::InputActionRebindingExtensions::PerformInteractiveRebinding)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2a42d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "PerformInteractiveRebinding", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.DeferBindingResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* (*)()>(
    &::UnityEngine::InputSystem::InputActionRebindingExtensions::DeferBindingResolution)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2a3d6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "DeferBindingResolution",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::setStaticF_s_DeferBindingResolutionWrapper(
    ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*, "s_DeferBindingResolutionWrapper",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get>(
      std::forward<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*>(value));
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*
UnityEngine::InputSystem::InputActionRebindingExtensions::getStaticF_s_DeferBindingResolutionWrapper() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*, "s_DeferBindingResolutionWrapper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get>();
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>
UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::StringW name, ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetParameterValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>, false>(nullptr, ___internal_method, action, name, bindingMask);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>
UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue(::UnityEngine::InputSystem::InputAction* action,
                                                                            ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride parameterOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetParameterValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>, false>(nullptr, ___internal_method, action, parameterOverride);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>
UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::StringW name, int32_t bindingIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetParameterValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>, false>(nullptr, ___internal_method, action, name, bindingIndex);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
template <typename TObject, typename TValue>
inline ::System::Nullable_1<TValue> UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue(::UnityEngine::InputSystem::InputAction* action,
                                                                                                                ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr,
                                                                                                                ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetParameterValue",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<TValue>, false>(nullptr, ___internal_method, action, expr, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
template <typename TObject, typename TValue>
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action,
                                                                                             ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                                                                             ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, expr, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
template <typename TObject, typename TValue>
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                             ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                                                                             ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, expr, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
template <typename TObject, typename TValue>
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset* asset,
                                                                                             ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                                                                             ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, expr, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
/// @param value: ::UnityEngine::InputSystem::Utilities::PrimitiveValue (default: {})
template <typename TObject, typename TValue>
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride
UnityEngine::InputSystem::InputActionRebindingExtensions::ExtractParameterOverride(::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr,
                                                                                   ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ExtractParameterOverride",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, false>(nullptr, ___internal_method, expr, bindingMask, value);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW name,
                                                                                             ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                                                                             ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, name, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name,
                                                                                             ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                                                                             ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, name, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW name,
                                                                                             ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                                                                             ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, name, value, bindingMask);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW name,
                                                                                             ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, int32_t bindingIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, name, value, bindingIndex);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(
    ::UnityEngine::InputSystem::InputActionState* state, int32_t mapIndex,
    ByRef<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>
        parameterOverrides,
    ByRef<int32_t> parameterOverridesCount, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride parameterOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyParameterOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,
                                                                               ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state, mapIndex, parameterOverrides, parameterOverridesCount, parameterOverride);
}
inline int32_t UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, action, bindingMask);
}
inline int32_t UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, actionMap, bindingMask);
}
/// @param group: ::StringW (default: nullptr)
/// @param path: ::StringW (default: nullptr)
inline int32_t UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex(::UnityEngine::InputSystem::InputAction* action, ::StringW group, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, action, group, path);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>
UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingForControl(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingForControl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(nullptr, ___internal_method, action, control);
}
inline int32_t UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndexForControl(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingIndexForControl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, action, control);
}
/// @param options: ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions (default: static_cast<int32_t>(0x0))
/// @param group: ::StringW (default: nullptr)
inline ::StringW UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action,
                                                                                                   ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options, ::StringW group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingDisplayString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action, options, group);
}
/// @param options: ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions (default: static_cast<int32_t>(0x0))
inline ::StringW UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action,
                                                                                                   ::UnityEngine::InputSystem::InputBinding bindingMask,
                                                                                                   ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingDisplayString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action, bindingMask, options);
}
/// @param options: ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions (default: static_cast<int32_t>(0x0))
inline ::StringW UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex,
                                                                                                   ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingDisplayString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action, bindingIndex, options);
}
/// @param options: ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions (default: static_cast<int32_t>(0x0))
inline ::StringW UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex,
                                                                                                   ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath,
                                                                                                   ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "GetBindingDisplayString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action, bindingIndex, deviceLayoutName, controlPath, options);
}
/// @param group: ::StringW (default: nullptr)
/// @param path: ::StringW (default: nullptr)
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW newPath, ::StringW group, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, newPath, group, path);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingOverride);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex,
                                                                                           ::UnityEngine::InputSystem::InputBinding bindingOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingIndex, bindingOverride);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingIndex, path);
}
inline int32_t UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                              ::UnityEngine::InputSystem::InputBinding bindingOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, actionMap, bindingOverride);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, int32_t bindingIndex,
                                                                                           ::UnityEngine::InputSystem::InputBinding bindingOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, bindingIndex, bindingOverride);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingIndex);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingMask);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                            ::UnityEngine::InputSystem::InputBinding bindingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveBindingOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, bindingMask);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveAllBindingOverrides(::UnityEngine::InputSystem::IInputActionCollection2* actions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveAllBindingOverrides", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actions);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveAllBindingOverrides(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveAllBindingOverrides", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverrides(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                            ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* overrides) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "ApplyBindingOverrides", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, overrides);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverrides(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                             ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* overrides) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "RemoveBindingOverrides", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, overrides);
}
inline int32_t UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputAction* action,
                                                                                                                 ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(),
                                               "ApplyBindingOverridesOnMatchingControls", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, action, control);
}
inline int32_t UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                                                 ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(),
                                               "ApplyBindingOverridesOnMatchingControls", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, actionMap, control);
}
inline ::StringW UnityEngine::InputSystem::InputActionRebindingExtensions::SaveBindingOverridesAsJson(::UnityEngine::InputSystem::IInputActionCollection2* actions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "SaveBindingOverridesAsJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, actions);
}
inline ::StringW UnityEngine::InputSystem::InputActionRebindingExtensions::SaveBindingOverridesAsJson(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "SaveBindingOverridesAsJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
/// @param action: ::UnityEngine::InputSystem::InputAction* (default: nullptr)
inline void
UnityEngine::InputSystem::InputActionRebindingExtensions::AddBindingOverrideJsonTo(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::UnityEngine::InputSystem::InputBinding binding,
                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>* list,
                                                                                   ::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "AddBindingOverrideJsonTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actions, binding, list, action);
}
/// @param removeExisting: bool (default: true)
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJson(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::StringW json, bool removeExisting) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "LoadBindingOverridesFromJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actions, json, removeExisting);
}
/// @param removeExisting: bool (default: true)
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJson(::UnityEngine::InputSystem::InputAction* action, ::StringW json, bool removeExisting) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "LoadBindingOverridesFromJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, json, removeExisting);
}
inline void UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJsonInternal(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::StringW json) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "LoadBindingOverridesFromJsonInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actions, json);
}
/// @param bindingIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
UnityEngine::InputSystem::InputActionRebindingExtensions::PerformInteractiveRebinding(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(), "PerformInteractiveRebinding", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, false>(nullptr, ___internal_method, action, bindingIndex);
}
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* UnityEngine::InputSystem::InputActionRebindingExtensions::DeferBindingResolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions*>::get(),
                                                                             "DeferBindingResolution", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionRebindingExtensions::InputActionRebindingExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
