#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\PanelInputModule.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__PanelInputModule_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Interface_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__PanelInputModule_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__PanelRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::*)(
    ::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(&::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::Compare)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a56ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>(),
                                                { "Compare", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>(), ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a56cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::Compare(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>(),
                                              { "Compare", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>(), ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lhs, rhs);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer* Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>"
constexpr Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*
Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__EventSystems__RaycastResult_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::PanelInputModule_RaycastComparer() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.RegisterRaycaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::RegisterRaycaster)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a55b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                             { "RegisterRaycaster", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.UnregisterRaycaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::UnregisterRaycaster)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a55c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                             { "UnregisterRaycaster", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.SetDebugInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::SetDebugInterface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a55d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                             { "SetDebugInterface", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a55d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.ShouldActivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ShouldActivateModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a55dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.IsModuleSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::IsModuleSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a55dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a55de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::by_ref<::UnityEngine::EventSystems::RaycastResult>)>(&::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Raycast)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5a55e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                            { "Raycast", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.GetMouseStateFromRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerInputModule_MouseState* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)(::GlobalNamespace::OVRInput_Controller, ::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::GetMouseStateFromRaycast)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x5a56138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                { "GetMouseStateFromRaycast", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Process)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a56750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.ComputeControllerState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData_FramePressState (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ComputeControllerState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a56680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                                                           { "ComputeControllerState", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.ChooseBestController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Controller (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ChooseBestController)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5a56828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                                                           { "ChooseBestController", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.UpdateRayTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)(::UnityEngine::Transform*, ::GlobalNamespace::OVRInput_Controller)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::UpdateRayTransform)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a56950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                             { "UpdateRayTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a56b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface>& Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_get__debugInterface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugInterface;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> const& Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_get__debugInterface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugInterface;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_set__debugInterface(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debugInterface = value;
}
constexpr ::GlobalNamespace::OVRInput_Controller& Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_get__controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_get__controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controller = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::setStaticF_Processing(bool value) {
  ::cordl_internals::setStaticField<bool, "Processing", ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(std::forward<bool>(value));
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::getStaticF_Processing() {
  return ::cordl_internals::getStaticField<bool, "Processing", ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::setStaticF__handState(::GlobalNamespace::OVRPlugin_HandState value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_HandState, "_handState", ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(
      std::forward<::GlobalNamespace::OVRPlugin_HandState>(value));
}
inline ::GlobalNamespace::OVRPlugin_HandState Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::getStaticF__handState() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_HandState, "_handState", ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::setStaticF__raycasters(
    ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>*, "_raycasters",
                                    ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>*
Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::getStaticF__raycasters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>*, "_raycasters",
                                           ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::setStaticF__comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*, "_comparer",
                                    ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(
      std::forward<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>* Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::getStaticF__comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*, "_comparer",
                                           ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::RegisterRaycaster(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster* raycaster) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                           { "RegisterRaycaster", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, raycaster);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::UnregisterRaycaster(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster* raycaster) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                           { "UnregisterRaycaster", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, raycaster);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::SetDebugInterface(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface* debugInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                           { "SetDebugInterface", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugInterface);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ShouldActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::IsModuleSupported() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Raycast(::UnityEngine::EventSystems::PointerEventData* data, ::by_ref<::UnityEngine::EventSystems::RaycastResult> raycast) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                          { "Raycast", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, raycast);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseState*
Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::GetMouseStateFromRaycast(::GlobalNamespace::OVRInput_Controller controller, ::UnityEngine::Transform* rayOrigin) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                              { "GetMouseStateFromRaycast", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(this, ___internal_method, controller, rayOrigin);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Process() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerEventData_FramePressState
Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ComputeControllerState(::GlobalNamespace::OVRInput_Controller controller) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                                                         { "ComputeControllerState", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData_FramePressState>(nullptr, ___internal_method, controller);
}
inline ::GlobalNamespace::OVRInput_Controller Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ChooseBestController(::GlobalNamespace::OVRInput_Controller previousController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                                                         { "ChooseBestController", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller>(nullptr, ___internal_method, previousController);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::UpdateRayTransform(::UnityEngine::Transform* rayTransform, ::GlobalNamespace::OVRInput_Controller controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(),
                                                           { "UpdateRayTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTransform, controller);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule* Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::PanelInputModule() {}
