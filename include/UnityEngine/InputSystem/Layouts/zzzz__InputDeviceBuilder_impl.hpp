#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Layouts\InputDeviceBuilder.hpp"
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
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64f70bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance::InputDeviceBuilder_RefInstance() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Setup)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x65c8554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                { "Setup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Finish)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x65c8970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)()>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c8c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)()>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Reset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x65c8ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InstantiateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString,
                                                                ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InstantiateLayout)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65c86bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                { "InstantiateLayout",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InstantiateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString,
                                                                ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InstantiateLayout)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x65c8c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                { "InstantiateLayout",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddChildControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*, ::by_ref<bool>)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControls)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x65c92ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                { "AddChildControls",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddChildControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString,
                                                                ::UnityEngine::InputSystem::InputControl*, ::by_ref<bool>, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, int32_t,
                                                                ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControl)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x65ca424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                         { "AddChildControl",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                             ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<bool>>(),
                                             ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InsertChildControlOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*, ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertChildControlOverride)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x65ca268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                            { "InsertChildControlOverride",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.ChildControlOverridePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ChildControlOverridePath)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65cabe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
            { "ChildControlOverridePath", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddChildControlIfMissing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*, ::by_ref<bool>,
    ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControlIfMissing)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x65cab3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                { "AddChildControlIfMissing",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<bool>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InsertChildControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString,
                                                                ::UnityEngine::InputSystem::InputControl*, ::by_ref<bool>,
                                                                ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertChildControl)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x65caf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                { "InsertChildControl",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<bool>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.ApplyUseStateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>,
                                                                ::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ApplyUseStateFrom)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x65ca0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                           { "ApplyUseStateFrom",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.ShiftChildIndicesInHierarchyOneUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, int32_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ShiftChildIndicesInHierarchyOneUp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65cb274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                         { "ShiftChildIndicesInHierarchyOneUp",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.SetDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::InputControl*, ::StringW, ::StringW, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::SetDisplayName)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x65cb2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                         { "SetDisplayName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddParentDisplayNameRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::System::Text::StringBuilder*, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddParentDisplayNameRecursive)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65cb4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
            { "AddParentDisplayNameRecursive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddProcessors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>, ::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddProcessors)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x65cad30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                             { "AddProcessors",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.SetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::SetFormat)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65cac7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                         { "SetFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.FindOrLoadLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FindOrLoadLayout)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65c8c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "FindOrLoadLayout", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.ComputeStateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ComputeStateLayout)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x65c9894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                           { "ComputeStateLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.FinalizeControlHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FinalizeControlHierarchy)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x65c8730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "FinalizeControlHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.FinalizeControlHierarchyRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*, int32_t, ::ArrayW<::UnityEngine::InputSystem::InputControl*>, bool, bool, ::by_ref<int32_t>)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FinalizeControlHierarchyRecursive)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x65cb5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                           { "FinalizeControlHierarchyRecursive",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.InsertControlBitRangeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::by_ref<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>,
                                                                                                                         ::UnityEngine::InputSystem::InputControl*, ::by_ref<int32_t>, uint16_t)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertControlBitRangeNode)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x65cb988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                             { "InsertControlBitRangeNode",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.GetBestMidPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, uint16_t)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::GetBestMidPoint)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x65cbc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                { "GetBestMidPoint", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddControlToNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::InputControl*, ::by_ref<int32_t>, int32_t)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddControlToNode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x65cc220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                         { "AddControlToNode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.AddChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(
    ::by_ref<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildren)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65cc110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                           { "AddChildren",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.GetControlIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::GetControlIndex)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x65cc354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                           { "GetControlIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder> (*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65cc40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder.Ref
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance (*)()>(&::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Ref)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65cc454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "Ref", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::setStaticF_s_Instance(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, "s_Instance", ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(
      std::forward<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(value));
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder UnityEngine::InputSystem::Layouts::InputDeviceBuilder::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, "s_Instance", ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::setStaticF_s_InstanceRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_InstanceRef", ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::Layouts::InputDeviceBuilder::getStaticF_s_InstanceRef() {
  return ::cordl_internals::getStaticField<int32_t, "s_InstanceRef", ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Setup(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                         ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                              { "Setup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layout, variants, deviceDescription);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InstantiateLayout(::UnityEngine::InputSystem::Utilities::InternedString layout,
                                                                                                                          ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                                                                          ::UnityEngine::InputSystem::Utilities::InternedString name,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                              { "InstantiateLayout",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method, layout, variants, name, parent);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InstantiateLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout,
                                                                                                                          ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                                                                          ::UnityEngine::InputSystem::Utilities::InternedString name,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                              { "InstantiateLayout",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method, layout, variants, name, parent);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControls(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout,
                                                                                    ::UnityEngine::InputSystem::Utilities::InternedString variants, ::UnityEngine::InputSystem::InputControl* parent,
                                                                                    ::by_ref<bool> haveChildrenUsingStateFromOtherControls) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                              { "AddChildControls",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layout, variants, parent, haveChildrenUsingStateFromOtherControls);
}
inline ::UnityEngine::InputSystem::InputControl*
UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                       ::UnityEngine::InputSystem::InputControl* parent, ::by_ref<bool> haveChildrenUsingStateFromOtherControls,
                                                                       ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem controlItem, int32_t childIndex, ::StringW nameOverride) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                              { "AddChildControl",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<bool>>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method, layout, variants, parent, haveChildrenUsingStateFromOtherControls, controlItem,
                                                                                        childIndex, nameOverride);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertChildControlOverride(::UnityEngine::InputSystem::InputControl* parent,
                                                                                              ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                          { "InsertChildControlOverride",
                            {},
                            { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parent, controlItem);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ChildControlOverridePath(::UnityEngine::InputSystem::InputControl* parent,
                                                                                                 ::UnityEngine::InputSystem::Utilities::InternedString controlName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                       { "ChildControlOverridePath", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, parent, controlName);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildControlIfMissing(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout,
                                                                                            ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent, ::by_ref<bool> haveChildrenUsingStateFromOtherControls,
                                                                                            ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                           { "AddChildControlIfMissing",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layout, variants, parent, haveChildrenUsingStateFromOtherControls, controlItem);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertChildControl(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variant, ::UnityEngine::InputSystem::InputControl* parent,
    ::by_ref<bool> haveChildrenUsingStateFromOtherControls, ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                           { "InsertChildControl",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method, layout, variant, parent, haveChildrenUsingStateFromOtherControls, controlItem);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ApplyUseStateFrom(::UnityEngine::InputSystem::InputControl* parent,
                                                                                     ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem,
                                                                                     ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                       { "ApplyUseStateFrom",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(),
                                           ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parent, controlItem, layout);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ShiftChildIndicesInHierarchyOneUp(::UnityEngine::InputSystem::InputDevice* device, int32_t startIndex,
                                                                                                     ::UnityEngine::InputSystem::InputControl* exceptControl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                       { "ShiftChildIndicesInHierarchyOneUp",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, startIndex, exceptControl);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::SetDisplayName(::UnityEngine::InputSystem::InputControl* control, ::StringW longDisplayNameFromLayout,
                                                                                  ::StringW shortDisplayNameFromLayout, bool shortName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                       { "SetDisplayName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, control, longDisplayNameFromLayout, shortDisplayNameFromLayout, shortName);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddParentDisplayNameRecursive(::UnityEngine::InputSystem::InputControl* control, ::System::Text::StringBuilder* stringBuilder,
                                                                                                 bool shortName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
          { "AddParentDisplayNameRecursive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, stringBuilder, shortName);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddProcessors(::UnityEngine::InputSystem::InputControl* control,
                                                                                 ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem, ::StringW layoutName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                           { "AddProcessors",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, controlItem, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::SetFormat(::UnityEngine::InputSystem::InputControl* control,
                                                                             ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem controlItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                       { "SetFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, controlItem);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FindOrLoadLayout(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "FindOrLoadLayout", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(nullptr, ___internal_method, name);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::ComputeStateLayout(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                         { "ComputeStateLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FinalizeControlHierarchy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "FinalizeControlHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::FinalizeControlHierarchyRecursive(::UnityEngine::InputSystem::InputControl* control, int32_t controlIndex,
                                                                                                     ::ArrayW<::UnityEngine::InputSystem::InputControl*> allControls, bool noisy, bool dontReset,
                                                                                                     ::by_ref<int32_t> controlIndiciesNextFreeIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                         { "FinalizeControlHierarchyRecursive",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, control, controlIndex, allControls, noisy, dontReset, controlIndiciesNextFreeIndex);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InsertControlBitRangeNode(::by_ref<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode> parent,
                                                                                             ::UnityEngine::InputSystem::InputControl* control, ::by_ref<int32_t> controlIndiciesNextFreeIndex,
                                                                                             uint16_t startOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                           { "InsertControlBitRangeNode",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parent, control, controlIndiciesNextFreeIndex, startOffset);
}
inline uint16_t UnityEngine::InputSystem::Layouts::InputDeviceBuilder::GetBestMidPoint(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parent, uint16_t startOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                           { "GetBestMidPoint", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, parent, startOffset);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddControlToNode(::UnityEngine::InputSystem::InputControl* control, ::by_ref<int32_t> controlIndiciesNextFreeIndex,
                                                                                    int32_t nodeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                       { "AddControlToNode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, control, controlIndiciesNextFreeIndex, nodeIndex);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceBuilder::AddChildren(::by_ref<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode> parent,
                                                                               ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode left,
                                                                               ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                         { "AddChildren",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parent, left, right);
}
inline uint16_t UnityEngine::InputSystem::Layouts::InputDeviceBuilder::GetControlIndex(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(),
                                                                                         { "GetControlIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, control);
}
inline ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder> UnityEngine::InputSystem::Layouts::InputDeviceBuilder::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance UnityEngine::InputSystem::Layouts::InputDeviceBuilder::Ref() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder>(), { "Ref", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceBuilder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::InputDeviceBuilder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LayoutCacheRef", ty:
// "::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChildControlOverrides", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_StateOffsetToControlMap", ty: "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StringBuilder", ty:
// "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InputDeviceBuilder(
    ::UnityEngine::InputSystem::InputDevice* m_Device, ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance m_LayoutCacheRef,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* m_ChildControlOverrides,
    ::System::Collections::Generic::List_1<uint32_t>* m_StateOffsetToControlMap, ::System::Text::StringBuilder* m_StringBuilder) noexcept {
  this->m_Device = m_Device;
  this->m_LayoutCacheRef = m_LayoutCacheRef;
  this->m_ChildControlOverrides = m_ChildControlOverrides;
  this->m_StateOffsetToControlMap = m_StateOffsetToControlMap;
  this->m_StringBuilder = m_StringBuilder;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder::InputDeviceBuilder() {}
