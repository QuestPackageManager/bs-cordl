#pragma once
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceBuilder_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance::Dispose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b068c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance>::get(), "Dispose",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance::__InputDeviceBuilder__RefInstance() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Setup)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2b037e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "Setup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Finish)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b03b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                               "Finish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b03bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Reset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b03b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InstantiateLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString,
                                                                ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InstantiateLayout)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b03944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "InstantiateLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InstantiateLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString,
                                                                ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InstantiateLayout)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2b03c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "InstantiateLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddChildControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*, ByRef<bool>)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControls)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x2b041d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddChildControls", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddChildControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString,
                                                                ::UnityEngine::InputSystem::InputControl*, ByRef<bool>, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, int32_t,
                                                                ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControl)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x2b0536c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddChildControl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InsertChildControlOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertChildControlOverride)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2b051d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "InsertChildControlOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.ChildControlOverridePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ChildControlOverridePath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b05b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "ChildControlOverridePath", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddChildControlIfMissing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*, ByRef<bool>,
    ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControlIfMissing)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b05a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddChildControlIfMissing", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InsertChildControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString,
                                                                ::UnityEngine::InputSystem::InputControl*, ByRef<bool>, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertChildControl)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2b05e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "InsertChildControl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.ApplyUseStateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::InputControl*, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>, ::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ApplyUseStateFrom)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2b05038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "ApplyUseStateFrom", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.ShiftChildIndicesInHierarchyOneUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, int32_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ShiftChildIndicesInHierarchyOneUp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b061c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "ShiftChildIndicesInHierarchyOneUp", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.SetDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*, ::StringW, ::StringW, bool)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::SetDisplayName)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2b06220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "SetDisplayName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddParentDisplayNameRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::System::Text::StringBuilder*, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddParentDisplayNameRecursive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b06420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddParentDisplayNameRecursive", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddProcessors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>, ::StringW)>(
        &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddProcessors)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2b05c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddProcessors", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.SetFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::SetFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b05bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "SetFormat", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.FindOrLoadLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FindOrLoadLayout)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b03bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "FindOrLoadLayout",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.ComputeStateLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ComputeStateLayout)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x2b04864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "ComputeStateLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.FinalizeControlHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FinalizeControlHierarchy)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2b039b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                               "FinalizeControlHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.FinalizeControlHierarchyRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*, int32_t, ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>, bool, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FinalizeControlHierarchyRecursive)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x2b064d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "FinalizeControlHierarchyRecursive", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder> (*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::get_instance)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b06830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                               "get_instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Ref
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance (*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Ref)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b06874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                               "Ref", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceBuilder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::setStaticF_s_Instance(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, "s_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get>(
      std::forward<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(value));
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder UnityEngine::InputSystem::Layouts::InputDeviceBuilder::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::setStaticF_s_InstanceRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_InstanceRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::Layouts::InputDeviceBuilder::getStaticF_s_InstanceRef() {
  return ::cordl_internals::getStaticField<int32_t, "s_InstanceRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get>();
}
/// @param deviceDescription: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription (default: {})
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Setup(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                         ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "Setup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout, variants, deviceDescription);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Finish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                             "Finish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InstantiateLayout(::UnityEngine::InputSystem::Utilities::InternedString layout,
                                                                                                                          ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                                                                          ::UnityEngine::InputSystem::Utilities::InternedString name,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "InstantiateLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, layout, variants, name, parent);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InstantiateLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout,
                                                                                                                          ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                                                                          ::UnityEngine::InputSystem::Utilities::InternedString name,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "InstantiateLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, layout, variants, name, parent);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControls(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout,
                                                                                    ::UnityEngine::InputSystem::Utilities::InternedString variants, ::UnityEngine::InputSystem::InputControl* parent,
                                                                                    ByRef<bool> haveChildrenUsingStateFromOtherControls) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddChildControls", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout, variants, parent, haveChildrenUsingStateFromOtherControls);
}
/// @param nameOverride: ::StringW (default: nullptr)
inline ::UnityEngine::InputSystem::InputControl*
UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                       ::UnityEngine::InputSystem::InputControl* parent, ByRef<bool> haveChildrenUsingStateFromOtherControls,
                                                                       ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem controlItem, int32_t childIndex, ::StringW nameOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddChildControl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, layout, variants, parent, haveChildrenUsingStateFromOtherControls, controlItem,
                                                                                               childIndex, nameOverride);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertChildControlOverride(::UnityEngine::InputSystem::InputControl* parent,
                                                                                              ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "InsertChildControlOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, controlItem);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ChildControlOverridePath(::UnityEngine::InputSystem::InputControl* parent,
                                                                                                 ::UnityEngine::InputSystem::Utilities::InternedString controlName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "ChildControlOverridePath", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, parent, controlName);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControlIfMissing(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout,
                                                                                            ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent, ByRef<bool> haveChildrenUsingStateFromOtherControls,
                                                                                            ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddChildControlIfMissing", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout, variants, parent, haveChildrenUsingStateFromOtherControls, controlItem);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertChildControl(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variant, ::UnityEngine::InputSystem::InputControl* parent,
    ByRef<bool> haveChildrenUsingStateFromOtherControls, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "InsertChildControl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, layout, variant, parent, haveChildrenUsingStateFromOtherControls, controlItem);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ApplyUseStateFrom(::UnityEngine::InputSystem::InputControl* parent,
                                                                                     ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem,
                                                                                     ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "ApplyUseStateFrom", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parent, controlItem, layout);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ShiftChildIndicesInHierarchyOneUp(::UnityEngine::InputSystem::InputDevice* device, int32_t startIndex,
                                                                                                     ::UnityEngine::InputSystem::InputControl* exceptControl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "ShiftChildIndicesInHierarchyOneUp", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, startIndex, exceptControl);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::SetDisplayName(::UnityEngine::InputSystem::InputControl* control, ::StringW longDisplayNameFromLayout,
                                                                                  ::StringW shortDisplayNameFromLayout, bool shortName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "SetDisplayName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, longDisplayNameFromLayout, shortDisplayNameFromLayout, shortName);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddParentDisplayNameRecursive(::UnityEngine::InputSystem::InputControl* control, ::System::Text::StringBuilder* stringBuilder,
                                                                                                 bool shortName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddParentDisplayNameRecursive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, stringBuilder, shortName);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddProcessors(::UnityEngine::InputSystem::InputControl* control,
                                                                                 ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem, ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "AddProcessors", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, controlItem, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::SetFormat(::UnityEngine::InputSystem::InputControl* control,
                                                                             ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem controlItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "SetFormat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, controlItem);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FindOrLoadLayout(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "FindOrLoadLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(nullptr, ___internal_method, name);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ComputeStateLayout(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "ComputeStateLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FinalizeControlHierarchy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                             "FinalizeControlHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FinalizeControlHierarchyRecursive(
    ::UnityEngine::InputSystem::InputControl* control, int32_t controlIndex, ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> allControls,
    bool noisy, bool dontReset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(), "FinalizeControlHierarchyRecursive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, controlIndex, allControls, noisy, dontReset);
}
inline ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder> UnityEngine::InputSystem::Layouts::InputDeviceBuilder::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                             "get_instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Ref() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>::get(),
                                                                             "Ref", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_LayoutCacheRef", ty:
// "::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChildControlOverrides", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "m_StateOffsetToControlMap", ty: "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_StringBuilder", ty:
// "::System::Text::StringBuilder*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InputDeviceBuilder(
    ::UnityEngine::InputSystem::InputDevice* m_Device, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance m_LayoutCacheRef,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* m_ChildControlOverrides,
    ::System::Collections::Generic::List_1<uint32_t>* m_StateOffsetToControlMap, ::System::Text::StringBuilder* m_StringBuilder) noexcept {
  this->m_Device = m_Device;
  this->m_LayoutCacheRef = m_LayoutCacheRef;
  this->m_ChildControlOverrides = m_ChildControlOverrides;
  this->m_StateOffsetToControlMap = m_StateOffsetToControlMap;
  this->m_StringBuilder = m_StringBuilder;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InputDeviceBuilder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
