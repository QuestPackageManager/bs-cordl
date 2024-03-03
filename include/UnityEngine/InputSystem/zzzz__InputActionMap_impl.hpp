#pragma once
#include "System/zzzz__Action_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags::__InputActionMap__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags::__InputActionMap__Flags() {}
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags UnityEngine::InputSystem::__InputActionMap__Flags::NeedToResolveBindings{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags UnityEngine::InputSystem::__InputActionMap__Flags::BindingResolutionNeedsFullReResolve{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags UnityEngine::InputSystem::__InputActionMap__Flags::ControlsForEachActionInitialized{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags UnityEngine::InputSystem::__InputActionMap__Flags::BindingsForEachActionInitialized{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__DeviceArray.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionMap__DeviceArray::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::__InputActionMap__DeviceArray::IndexOf)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b28778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__DeviceArray.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionMap__DeviceArray::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::__InputActionMap__DeviceArray::Remove)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b287d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__DeviceArray.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::UnityEngine::InputSystem::__InputActionMap__DeviceArray::*)()>(
    &::UnityEngine::InputSystem::__InputActionMap__DeviceArray::Get)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b22d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                                                                               "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__DeviceArray.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionMap__DeviceArray::*)(
    ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::__InputActionMap__DeviceArray::Set)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2b22e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::__InputActionMap__DeviceArray::IndexOf(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::__InputActionMap__DeviceArray::Remove(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::__InputActionMap__DeviceArray::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                                                                             "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>, false>(this, ___internal_method);
}
inline bool
UnityEngine::InputSystem::__InputActionMap__DeviceArray::Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, devices);
}
// Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray::__InputActionMap__DeviceArray(
    bool m_HaveValue, int32_t m_DeviceCount, ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> m_DeviceArray) noexcept {
  this->m_HaveValue = m_HaveValue;
  this->m_DeviceCount = m_DeviceCount;
  this->m_DeviceArray = m_DeviceArray;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray::__InputActionMap__DeviceArray() {}
// Ctor Parameters [CppParam { name: "bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson::__InputActionMap__BindingOverrideListJson(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>* bindings) noexcept {
  this->bindings = bindings;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson::__InputActionMap__BindingOverrideListJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson.FromBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson (*)(::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::FromBinding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b28848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>::get(), "FromBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson
UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::FromBinding(::UnityEngine::InputSystem::InputBinding binding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>::get(), "FromBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, false>(nullptr, ___internal_method, binding);
}
// Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "processors", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__InputActionMap__BindingOverrideJson(::StringW action, ::StringW id, ::StringW path, ::StringW interactions,
                                                                                                                   ::StringW processors) noexcept {
  this->action = action;
  this->id = id;
  this->path = path;
  this->interactions = interactions;
  this->processors = processors;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__InputActionMap__BindingOverrideJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__BindingJson.ToBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputBinding (::UnityEngine::InputSystem::__InputActionMap__BindingJson::*)()>(
    &::UnityEngine::InputSystem::__InputActionMap__BindingJson::ToBinding)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2b28868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingJson>::get(),
                                                                               "ToBinding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__BindingJson.FromBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__BindingJson (*)(ByRef<::UnityEngine::InputSystem::InputBinding>)>(
    &::UnityEngine::InputSystem::__InputActionMap__BindingJson::FromBinding)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b28980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingJson>::get(), "FromBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputBinding UnityEngine::InputSystem::__InputActionMap__BindingJson::ToBinding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingJson>::get(),
                                                                             "ToBinding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionMap__BindingJson UnityEngine::InputSystem::__InputActionMap__BindingJson::FromBinding(ByRef<::UnityEngine::InputSystem::InputBinding> binding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingJson>::get(), "FromBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__BindingJson, false>(nullptr, ___internal_method, binding);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "processors", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "action", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isComposite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPartOfComposite", ty: "bool",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingJson::__InputActionMap__BindingJson(::StringW name, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors,
                                                                                                   ::StringW groups, ::StringW action, bool isComposite, bool isPartOfComposite) noexcept {
  this->name = name;
  this->id = id;
  this->path = path;
  this->interactions = interactions;
  this->processors = processors;
  this->groups = groups;
  this->action = action;
  this->isComposite = isComposite;
  this->isPartOfComposite = isPartOfComposite;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingJson::__InputActionMap__BindingJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__ReadActionJson.ToAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (
    ::UnityEngine::InputSystem::__InputActionMap__ReadActionJson::*)(::StringW)>(&::UnityEngine::InputSystem::__InputActionMap__ReadActionJson::ToAction)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2b28a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>::get(), "ToAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @param actionName: ::StringW (default: nullptr)
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::__InputActionMap__ReadActionJson::ToAction(::StringW actionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>::get(), "ToAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method, actionName);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "expectedControlLayout", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "initialStateCheck", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindings", ty:
// "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__InputActionMap__ReadActionJson(
    ::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW expectedControlLayout, ::StringW processors, ::StringW interactions, bool passThrough,
    bool initialStateCheck, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings) noexcept {
  this->name = name;
  this->type = type;
  this->id = id;
  this->expectedControlType = expectedControlType;
  this->expectedControlLayout = expectedControlLayout;
  this->processors = processors;
  this->interactions = interactions;
  this->passThrough = passThrough;
  this->initialStateCheck = initialStateCheck;
  this->bindings = bindings;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__InputActionMap__ReadActionJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson.FromAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson (*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::__InputActionMap__WriteActionJson::FromAction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b28c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>::get(), "FromAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson UnityEngine::InputSystem::__InputActionMap__WriteActionJson::FromAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>::get(), "FromAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, false>(nullptr, ___internal_method, action);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "processors", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "initialStateCheck", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__InputActionMap__WriteActionJson(::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType,
                                                                                                           ::StringW processors, ::StringW interactions, bool initialStateCheck) noexcept {
  this->name = name;
  this->type = type;
  this->id = id;
  this->expectedControlType = expectedControlType;
  this->processors = processors;
  this->interactions = interactions;
  this->initialStateCheck = initialStateCheck;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__InputActionMap__WriteActionJson() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__InputActionMap__ReadMapJson(
    ::StringW name, ::StringW id, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> actions,
    ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings) noexcept {
  this->name = name;
  this->id = id;
  this->actions = actions;
  this->bindings = bindings;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__InputActionMap__ReadMapJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson.FromMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson (*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::__InputActionMap__WriteMapJson::FromMap)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2b28d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>::get(), "FromMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson UnityEngine::InputSystem::__InputActionMap__WriteMapJson::FromMap(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>::get(), "FromMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, false>(nullptr, ___internal_method, map);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__InputActionMap__WriteMapJson(
    ::StringW name, ::StringW id, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*> actions,
    ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings) noexcept {
  this->name = name;
  this->id = id;
  this->actions = actions;
  this->bindings = bindings;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__InputActionMap__WriteMapJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson.FromMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson (*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::__InputActionMap__WriteFileJson::FromMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b28684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson>::get(), "FromMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson.FromMaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*)>(&::UnityEngine::InputSystem::__InputActionMap__WriteFileJson::FromMaps)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2b233d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson>::get(), "FromMaps", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson UnityEngine::InputSystem::__InputActionMap__WriteFileJson::FromMap(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson>::get(), "FromMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, false>(nullptr, ___internal_method, map);
}
inline ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson
UnityEngine::InputSystem::__InputActionMap__WriteFileJson::FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* maps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson>::get(), "FromMaps", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, false>(nullptr, ___internal_method, maps);
}
// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson::__InputActionMap__WriteFileJson(
    ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> maps) noexcept {
  this->maps = maps;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson::__InputActionMap__WriteFileJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__ReadFileJson.ToMaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> (
    ::UnityEngine::InputSystem::__InputActionMap__ReadFileJson::*)()>(&::UnityEngine::InputSystem::__InputActionMap__ReadFileJson::ToMaps)> {
  constexpr static std::size_t size = 0xfb0;
  constexpr static std::size_t addrs = 0x2b24f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__ReadFileJson>::get(), "ToMaps",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> UnityEngine::InputSystem::__InputActionMap__ReadFileJson::ToMaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__ReadFileJson>::get(),
                                                                             "ToMaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "maps", ty:
// "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__InputActionMap__ReadFileJson(
    ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> actions,
    ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> maps) noexcept {
  this->actions = actions;
  this->maps = maps;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__InputActionMap__ReadFileJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b26350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_asset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b26358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_asset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::get_id)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b26360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_idDontGenerate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::get_idDontGenerate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b23e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "get_idDontGenerate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b22a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_actions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> (
    ::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_actions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b262a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "get_actions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (
    ::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b263f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "get_bindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.UnityEngine_InputSystem_IInputActionCollection2_get_bindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* (
    ::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::UnityEngine_InputSystem_IInputActionCollection2_get_bindings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b26458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                 "UnityEngine.InputSystem.IInputActionCollection2.get_bindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_controlSchemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (
    ::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_controlSchemes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b264bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "get_controlSchemes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b26540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "get_bindingMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(
    &::UnityEngine::InputSystem::InputActionMap::set_bindingMask)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2b26550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_bindingMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_devices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::UnityEngine::InputSystem::InputActionMap::*)()>(
        &::UnityEngine::InputSystem::InputActionMap::get_devices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2b21b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "get_devices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_devices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(
    ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::InputActionMap::set_devices)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b2668c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_devices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputActionMap::get_Item)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b266d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.add_actionTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(
    ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputActionMap::add_actionTriggered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b267b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "add_actionTriggered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.remove_actionTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(
    ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputActionMap::remove_actionTriggered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b26810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "remove_actionTriggered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b21a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputActionMap::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b26868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b26898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindActionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputActionMap::FindActionIndex)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2b268ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindActionIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.SetUpActionLookupTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::SetUpActionLookupTable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2b26ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "SetUpActionLookupTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ClearActionLookupTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::ClearActionLookupTable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b26bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "ClearActionLookupTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindActionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::System::Guid)>(
    &::UnityEngine::InputSystem::InputActionMap::FindActionIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b26c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindActionIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::InputActionMap::FindAction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2b23994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::System::Guid)>(
    &::UnityEngine::InputSystem::InputActionMap::FindAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b23f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.IsUsableWithDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputActionMap::IsUsableWithDevice)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2b24360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "IsUsableWithDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Enable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Enable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b245d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Enable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Disable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Disable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b24784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Disable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::Clone)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2b26cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Clone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b26ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "System.ICloneable.Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionMap::Contains)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b26edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ToString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2b26f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* (
    ::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b26fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b27070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_needToResolveBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::get_needToResolveBindings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b27074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "get_needToResolveBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_needToResolveBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionMap::set_needToResolveBindings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b27080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_needToResolveBindings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingResolutionNeedsFullReResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::get_bindingResolutionNeedsFullReResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b2709c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_bindingResolutionNeedsFullReResolve",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingResolutionNeedsFullReResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionMap::set_bindingResolutionNeedsFullReResolve)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b270a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_bindingResolutionNeedsFullReResolve",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_controlsForEachActionInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::get_controlsForEachActionInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b270c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_controlsForEachActionInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_controlsForEachActionInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionMap::set_controlsForEachActionInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b270d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_controlsForEachActionInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingsForEachActionInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::get_bindingsForEachActionInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b270ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_bindingsForEachActionInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingsForEachActionInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionMap::set_bindingsForEachActionInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b270f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_bindingsForEachActionInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetBindingsForSingleAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (
    ::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionMap::GetBindingsForSingleAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b208cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "GetBindingsForSingleAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetControlsForSingleAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (
    ::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionMap::GetControlsForSingleAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b209c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "GetControlsForSingleAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.SetUpPerActionControlAndBindingArrays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::SetUpPerActionControlAndBindingArrays)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x2b27114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "SetUpPerActionControlAndBindingArrays",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnWantToChangeSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::OnWantToChangeSetup)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2b2495c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "OnWantToChangeSetup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnSetupChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::OnSetupChanged)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2b24c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "OnSetupChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnBindingModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::OnBindingModified)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b2772c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "OnBindingModified", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ClearCachedActionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionMap::ClearCachedActionData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b27704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "ClearCachedActionData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GenerateId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::GenerateId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b263c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "GenerateId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.LazyResolveBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionMap::LazyResolveBindings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b207f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "LazyResolveBindings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ResolveBindingsIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::ResolveBindingsIfNecessary)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b20990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "ResolveBindingsIfNecessary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ResolveBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::ResolveBindings)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x2b27748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "ResolveBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(
    ::UnityEngine::InputSystem::InputBinding, ByRef<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::InputSystem::InputActionMap::FindBinding)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2b23b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindBinding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindBindingRelativeToMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputActionMap::FindBindingRelativeToMap)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b283f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindBindingRelativeToMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> (*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::FromJson)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b284a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FromJson", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*)>(
    &::UnityEngine::InputSystem::InputActionMap::ToJson)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b2855c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "ToJson", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ToJson)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2b28614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "ToJson",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b28710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(
    &::UnityEngine::InputSystem::InputActionMap::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b28714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                               "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr UnityEngine::InputSystem::InputActionMap::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* UnityEngine::InputSystem::InputActionMap::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::InputSystem::InputActionMap::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr ::UnityEngine::InputSystem::IInputActionCollection2* UnityEngine::InputSystem::InputActionMap::i___UnityEngine__InputSystem__IInputActionCollection2() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::InputActionMap::i___UnityEngine__InputSystem__IInputActionCollection() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr UnityEngine::InputSystem::InputActionMap::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*
UnityEngine::InputSystem::InputActionMap::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::InputActionMap::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputActionMap::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputActionMap::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionMap::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::StringW& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Asset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Asset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Actions;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> const&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Actions;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Actions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bindings;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> const&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bindings;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Bindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_BindingsForEachAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingsForEachAction;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> const&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_BindingsForEachAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingsForEachAction;
}
constexpr void
UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BindingsForEachAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ControlsForEachAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlsForEachAction;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ControlsForEachAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlsForEachAction;
}
constexpr void
UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ControlsForEachAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_EnabledActionsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnabledActionsCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_EnabledActionsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnabledActionsCount;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_EnabledActionsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnabledActionsCount = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_SingletonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SingletonAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_SingletonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SingletonAction;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_SingletonAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SingletonAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_MapIndexInState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MapIndexInState;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_MapIndexInState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MapIndexInState;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_MapIndexInState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MapIndexInState = value;
}
constexpr ::UnityEngine::InputSystem::InputActionState*& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_State(::UnityEngine::InputSystem::InputActionState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_State)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_BindingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_BindingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingMask;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingMask = value;
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Flags(::UnityEngine::InputSystem::__InputActionMap__Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ParameterOverridesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterOverridesCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ParameterOverridesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterOverridesCount;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ParameterOverridesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParameterOverridesCount = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ParameterOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterOverrides;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> const&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ParameterOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterOverrides;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ParameterOverrides(
    ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ParameterOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Devices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Devices;
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Devices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Devices;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Devices(::UnityEngine::InputSystem::__InputActionMap__DeviceArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Devices = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ActionCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ActionCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionCallbacks;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ActionCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionCallbacks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ActionIndexByNameOrId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionIndexByNameOrId;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const&
UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ActionIndexByNameOrId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionIndexByNameOrId;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionIndexByNameOrId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::InputActionMap::setStaticF_s_DeferBindingResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_DeferBindingResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::InputActionMap::getStaticF_s_DeferBindingResolution() {
  return ::cordl_internals::getStaticField<int32_t, "s_DeferBindingResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get>();
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::InputActionMap::get_asset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_asset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>, false>(this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputActionMap::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputActionMap::get_idDontGenerate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "get_idDontGenerate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_enabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> UnityEngine::InputSystem::InputActionMap::get_actions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_actions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionMap::get_bindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_bindings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*
UnityEngine::InputSystem::InputActionMap::UnityEngine_InputSystem_IInputActionCollection2_get_bindings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                               "UnityEngine.InputSystem.IInputActionCollection2.get_bindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionMap::get_controlSchemes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "get_controlSchemes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionMap::get_bindingMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "get_bindingMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_bindingMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::InputActionMap::get_devices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_devices",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_devices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::get_Item(::StringW actionNameOrId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method, actionNameOrId);
}
inline void UnityEngine::InputSystem::InputActionMap::add_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "add_actionTriggered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputActionMap::remove_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "remove_actionTriggered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputActionMap*>());
}
inline void UnityEngine::InputSystem::InputActionMap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputActionMap*>(name));
}
inline void UnityEngine::InputSystem::InputActionMap::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void UnityEngine::InputSystem::InputActionMap::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindActionIndex(::StringW nameOrId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindActionIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nameOrId);
}
inline void UnityEngine::InputSystem::InputActionMap::SetUpActionLookupTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "SetUpActionLookupTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::ClearActionLookupTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "ClearActionLookupTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindActionIndex(::System::Guid id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindActionIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
/// @param throwIfNotFound: bool (default: false)
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::FindAction(::StringW actionNameOrId, bool throwIfNotFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method, actionNameOrId, throwIfNotFound);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::FindAction(::System::Guid id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindAction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method, id);
}
inline bool UnityEngine::InputSystem::InputActionMap::IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "IsUsableWithDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputActionMap::Enable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Enable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::Disable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Disable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionMap::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "System.ICloneable.Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::Contains(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, action);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionMap::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionMap::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_needToResolveBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "get_needToResolveBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_needToResolveBindings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_needToResolveBindings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_bindingResolutionNeedsFullReResolve() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_bindingResolutionNeedsFullReResolve",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingResolutionNeedsFullReResolve(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_bindingResolutionNeedsFullReResolve",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_controlsForEachActionInitialized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_controlsForEachActionInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_controlsForEachActionInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_controlsForEachActionInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_bindingsForEachActionInitialized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "get_bindingsForEachActionInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingsForEachActionInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "set_bindingsForEachActionInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>
UnityEngine::InputSystem::InputActionMap::GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "GetBindingsForSingleAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, false>(this, ___internal_method, action);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>
UnityEngine::InputSystem::InputActionMap::GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "GetControlsForSingleAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>, false>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionMap::SetUpPerActionControlAndBindingArrays() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "SetUpPerActionControlAndBindingArrays",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnWantToChangeSetup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "OnWantToChangeSetup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnSetupChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "OnSetupChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnBindingModified() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "OnBindingModified", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param onlyControls: bool (default: false)
inline void UnityEngine::InputSystem::InputActionMap::ClearCachedActionData(bool onlyControls) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "ClearCachedActionData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onlyControls);
}
inline void UnityEngine::InputSystem::InputActionMap::GenerateId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "GenerateId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::LazyResolveBindings(bool fullResolve) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "LazyResolveBindings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fullResolve);
}
inline bool UnityEngine::InputSystem::InputActionMap::ResolveBindingsIfNecessary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "ResolveBindingsIfNecessary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::ResolveBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "ResolveBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction*> action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindBinding", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, mask, action);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding mask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FindBindingRelativeToMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, mask);
}
inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> UnityEngine::InputSystem::InputActionMap::FromJson(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "FromJson", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>, false>(nullptr, ___internal_method, json);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* maps) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "ToJson", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, maps);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToJson() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(), "ToJson",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                                                             "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionMap::InputActionMap() {}
