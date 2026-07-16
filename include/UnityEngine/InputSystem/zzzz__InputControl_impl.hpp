#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags::InputControl_ControlFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags::InputControl_ControlFlags() {}
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags UnityEngine::InputSystem::InputControl_ControlFlags::ConfigUpToDate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags UnityEngine::InputSystem::InputControl_ControlFlags::IsNoisy{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags UnityEngine::InputSystem::InputControl_ControlFlags::IsSynthetic{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags UnityEngine::InputSystem::InputControl_ControlFlags::IsButton{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags UnityEngine::InputSystem::InputControl_ControlFlags::DontReset{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags UnityEngine::InputSystem::InputControl_ControlFlags::SetupFinished{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags UnityEngine::InputSystem::InputControl_ControlFlags::UsesStateFromOtherControl{ static_cast<int32_t>(0x40) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65114b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_displayName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65114d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(&::UnityEngine::InputSystem::InputControl::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6511564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_shortDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_shortDisplayName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x651156c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_shortDisplayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_shortDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(&::UnityEngine::InputSystem::InputControl::set_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65115b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_shortDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_path)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65115b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_layout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_layout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65116e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_layout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_variants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_variants)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6511704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_variants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6511724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_device", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x651172c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_parent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (
    ::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_children)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6511734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_children", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_usages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_usages)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x651178c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_usages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_aliases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_aliases)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65117e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_aliases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_stateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateBlock (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_stateBlock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x651183c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_stateBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_noisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_noisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6511848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_noisy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_noisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_noisy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6511854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_noisy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_synthetic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_synthetic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6511938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_synthetic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_synthetic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_synthetic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6511944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_synthetic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::get_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6511964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_valueType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_magnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_magnitude)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6511a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_magnitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6511a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.DebuggerDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::DebuggerDisplay)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6511aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "DebuggerDisplay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6511a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "EvaluateMagnitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputControl::*)(void*)>(&::UnityEngine::InputSystem::InputControl::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6511ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ReadValueFromBufferAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputControl::*)(void*, int32_t)>(
    &::UnityEngine::InputSystem::InputControl::ReadValueFromBufferAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ReadValueFromStateAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputControl::*)(void*)>(&::UnityEngine::InputSystem::InputControl::ReadValueFromStateAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ReadValueFromStateIntoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(void*, void*, int32_t)>(
    &::UnityEngine::InputSystem::InputControl::ReadValueFromStateIntoBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.WriteValueFromBufferIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(void*, int32_t, void*)>(
    &::UnityEngine::InputSystem::InputControl::WriteValueFromBufferIntoState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6511cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.WriteValueFromObjectIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(::System::Object*, void*)>(
    &::UnityEngine::InputSystem::InputControl::WriteValueFromObjectIntoState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6511d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.CompareValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)(void*, void*)>(&::UnityEngine::InputSystem::InputControl::CompareValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.TryGetChildControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::TryGetChildControl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6511dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "TryGetChildControl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.GetChildControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::GetChildControl)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6511e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "GetChildControl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6511fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::FinishSetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x651203c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.RefreshConfigurationIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::RefreshConfigurationIfNeeded)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6511530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "RefreshConfigurationIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.RefreshConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::RefreshConfiguration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x651205c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_currentStatePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_currentStatePtr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6511cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_currentStatePtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_previousFrameStatePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_previousFrameStatePtr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6512198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_previousFrameStatePtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_defaultStatePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_defaultStatePtr)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65121ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_defaultStatePtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_noiseMaskPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_noiseMaskPtr)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65121f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_noiseMaskPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_stateOffsetRelativeToDeviceRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_stateOffsetRelativeToDeviceRoot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6512244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_stateOffsetRelativeToDeviceRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_optimizedControlDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_optimizedControlDataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65122b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_optimizedControlDataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.CalculateOptimizedControlDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::CalculateOptimizedControlDataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65122b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ApplyParameterChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::ApplyParameterChanges)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65122c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "ApplyParameterChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.SetOptimizedControlDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::SetOptimizedControlDataType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6512518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "SetOptimizedControlDataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.SetOptimizedControlDataTypeRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::SetOptimizedControlDataTypeRecursively)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x65125ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "SetOptimizedControlDataTypeRecursively", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.EnsureOptimizationTypeHasNotChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::EnsureOptimizationTypeHasNotChanged)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x6512780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "EnsureOptimizationTypeHasNotChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_isSetupFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_isSetupFinished)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6512b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_isSetupFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_isSetupFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_isSetupFinished)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6512b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_isSetupFinished", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_isButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_isButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6512b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_isButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_isButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_isButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6512b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_isButton", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_isConfigUpToDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_isConfigUpToDate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6512040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_isConfigUpToDate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_isConfigUpToDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_isConfigUpToDate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x651204c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_isConfigUpToDate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_dontReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_dontReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6512b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_dontReset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_dontReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_dontReset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6512b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_dontReset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_usesStateFromOtherControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_usesStateFromOtherControl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6512ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_usesStateFromOtherControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_usesStateFromOtherControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_usesStateFromOtherControl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6512bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_usesStateFromOtherControl", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_hasDefaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_hasDefaultState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6512bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_hasDefaultState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.CallFinishSetupRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::CallFinishSetupRecursive)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6512bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "CallFinishSetupRecursive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.MakeChildPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(&::UnityEngine::InputSystem::InputControl::MakeChildPath)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6511f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "MakeChildPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.BakeOffsetIntoStateBlockRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(uint32_t)>(&::UnityEngine::InputSystem::InputControl::BakeOffsetIntoStateBlockRecursive)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6512ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "BakeOffsetIntoStateBlockRecursive", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.GetDeviceIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::GetDeviceIndex)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6512060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "GetDeviceIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.IsValueConsideredPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)(float_t)>(&::UnityEngine::InputSystem::InputControl::IsValueConsideredPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6512d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "IsValueConsideredPressed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.AddProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(::System::Object*)>(&::UnityEngine::InputSystem::InputControl::AddProcessor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6512e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.MarkAsStale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::MarkAsStale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6512e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "MarkAsStale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.MarkAsStaleRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::MarkAsStaleRecursively)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6512380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "MarkAsStaleRecursively", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_StateBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateBlock;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_StateBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateBlock;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_StateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateBlock = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Path = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayName = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DisplayNameFromLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayNameFromLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DisplayNameFromLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayNameFromLayout;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_DisplayNameFromLayout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayNameFromLayout = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ShortDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortDisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ShortDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortDisplayName;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ShortDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShortDisplayName = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ShortDisplayNameFromLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortDisplayNameFromLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ShortDisplayNameFromLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortDisplayNameFromLayout;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ShortDisplayNameFromLayout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShortDisplayNameFromLayout = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layout;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Layout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Layout = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Variants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variants;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Variants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variants;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Variants = value;
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr ::UnityEngine::InputSystem::InputDevice* const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Device = value;
}
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr ::UnityEngine::InputSystem::InputControl* const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Parent(::UnityEngine::InputSystem::InputControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Parent = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UsageCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UsageCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageCount;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_UsageCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsageCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UsageStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UsageStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageStartIndex;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_UsageStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsageStartIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_AliasCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_AliasCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasCount;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_AliasCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AliasCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_AliasStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_AliasStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasStartIndex;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_AliasStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AliasStartIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ChildCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ChildCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildCount;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ChildCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ChildStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ChildStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildStartIndex;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ChildStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildStartIndex = value;
}
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ControlFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlFlags;
}
constexpr ::UnityEngine::InputSystem::InputControl_ControlFlags const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ControlFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlFlags;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ControlFlags(::UnityEngine::InputSystem::InputControl_ControlFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlFlags = value;
}
constexpr bool& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_CachedValueIsStale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedValueIsStale;
}
constexpr bool const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_CachedValueIsStale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedValueIsStale;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_CachedValueIsStale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedValueIsStale = value;
}
constexpr bool& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UnprocessedCachedValueIsStale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnprocessedCachedValueIsStale;
}
constexpr bool const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UnprocessedCachedValueIsStale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnprocessedCachedValueIsStale;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_UnprocessedCachedValueIsStale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnprocessedCachedValueIsStale = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DefaultState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultState;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DefaultState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultState;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_DefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultState = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_MinValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinValue;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_MinValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinValue;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_MinValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinValue = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_MaxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxValue;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_MaxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxValue;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_MaxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxValue = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_OptimizedControlDataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OptimizedControlDataType;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_OptimizedControlDataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OptimizedControlDataType;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_OptimizedControlDataType(::UnityEngine::InputSystem::Utilities::FourCC value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OptimizedControlDataType = value;
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_displayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_shortDisplayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_shortDisplayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_shortDisplayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_shortDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_layout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_layout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_variants() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_variants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputControl::get_device() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_device", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::get_parent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_parent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputControl::get_children() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_children", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::InputControl::get_usages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_usages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::InputControl::get_aliases() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_aliases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateBlock UnityEngine::InputSystem::InputControl::get_stateBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_stateBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControl::get_noisy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_noisy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_noisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_noisy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_synthetic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_synthetic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_synthetic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_synthetic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::get_Item(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method, path);
}
inline ::System::Type* UnityEngine::InputSystem::InputControl::get_valueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputControl::get_valueSizeInBytes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputControl::get_magnitude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_magnitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::DebuggerDisplay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "DebuggerDisplay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputControl::EvaluateMagnitude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "EvaluateMagnitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputControl::EvaluateMagnitude(void* statePtr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, statePtr);
}
inline ::System::Object* UnityEngine::InputSystem::InputControl::ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputControl::ReadValueFromStateAsObject(void* statePtr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::InputControl::ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statePtr, bufferPtr, bufferSize);
}
inline void UnityEngine::InputSystem::InputControl::WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferPtr, bufferSize, statePtr);
}
inline void UnityEngine::InputSystem::InputControl::WriteValueFromObjectIntoState(::System::Object* value, void* statePtr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
inline bool UnityEngine::InputSystem::InputControl::CompareValue(void* firstStatePtr, void* secondStatePtr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, firstStatePtr, secondStatePtr);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::TryGetChildControl(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "TryGetChildControl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method, path);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControl::TryGetChildControl(::StringW path) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "TryGetChildControl", { ::i2c::class_of<TControl>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<TControl>(this, ___internal_method, path);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::GetChildControl(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "GetChildControl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method, path);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControl::GetChildControl(::StringW path) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "GetChildControl", { ::i2c::class_of<TControl>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<TControl>(this, ___internal_method, path);
}
inline void UnityEngine::InputSystem::InputControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::RefreshConfigurationIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "RefreshConfigurationIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::RefreshConfiguration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void* UnityEngine::InputSystem::InputControl::get_currentStatePtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_currentStatePtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method);
}
inline void* UnityEngine::InputSystem::InputControl::get_previousFrameStatePtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_previousFrameStatePtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method);
}
inline void* UnityEngine::InputSystem::InputControl::get_defaultStatePtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_defaultStatePtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method);
}
inline void* UnityEngine::InputSystem::InputControl::get_noiseMaskPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_noiseMaskPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::InputControl::get_stateOffsetRelativeToDeviceRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_stateOffsetRelativeToDeviceRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::InputControl::get_optimizedControlDataType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_optimizedControlDataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::InputControl::CalculateOptimizedControlDataType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::ApplyParameterChanges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "ApplyParameterChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::SetOptimizedControlDataType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "SetOptimizedControlDataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::SetOptimizedControlDataTypeRecursively() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "SetOptimizedControlDataTypeRecursively", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::EnsureOptimizationTypeHasNotChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "EnsureOptimizationTypeHasNotChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControl::get_isSetupFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_isSetupFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_isSetupFinished(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_isSetupFinished", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_isButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_isButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_isButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_isButton", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_isConfigUpToDate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_isConfigUpToDate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_isConfigUpToDate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_isConfigUpToDate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_dontReset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_dontReset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_dontReset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_dontReset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_usesStateFromOtherControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_usesStateFromOtherControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_usesStateFromOtherControl(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "set_usesStateFromOtherControl", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_hasDefaultState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "get_hasDefaultState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::CallFinishSetupRecursive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "CallFinishSetupRecursive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::MakeChildPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "MakeChildPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, path);
}
inline void UnityEngine::InputSystem::InputControl::BakeOffsetIntoStateBlockRecursive(uint32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "BakeOffsetIntoStateBlockRecursive", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline int32_t UnityEngine::InputSystem::InputControl::GetDeviceIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "GetDeviceIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControl::IsValueConsideredPressed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "IsValueConsideredPressed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputControl::AddProcessor(::System::Object* first) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first);
}
inline void UnityEngine::InputSystem::InputControl::MarkAsStale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "MarkAsStale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::MarkAsStaleRecursively() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl*>(), { "MarkAsStaleRecursively", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControl::InputControl() {}
