#pragma once
// IWYU pragma private; include "VRUIControls/VRInputModule.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "VRUIControls/zzzz__VRInputModule_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__IVRInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
#include "VRUIControls/zzzz__MouseState_def.hpp"
#include "VRUIControls/zzzz__VRPointer_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRInputModule.get_useMouseForPressInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::get_useMouseForPressInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5970740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "get_useMouseForPressInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.set_useMouseForPressInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(bool)>(&::VRUIControls::VRInputModule::set_useMouseForPressInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5970748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "set_useMouseForPressInput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.add_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::VRUIControls::VRInputModule::add_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5970750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                                             { "add_onProcessMousePressEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.remove_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::VRUIControls::VRInputModule::remove_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5970810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                                             { "remove_onProcessMousePressEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.add_pointerDidClickEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::VRUIControls::VRInputModule::add_pointerDidClickEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59708d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                                             { "add_pointerDidClickEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.remove_pointerDidClickEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::VRUIControls::VRInputModule::remove_pointerDidClickEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5970990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                                             { "remove_pointerDidClickEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5970a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetPointerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRInputModule::*)(int32_t, ::by_ref<::UnityEngine::EventSystems::PointerEventData*>, bool)>(
    &::VRUIControls::VRInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5970c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                         { "GetPointerData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::EventSystems::PointerEventData*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetMousePointerEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VRUIControls::MouseState* (::VRUIControls::VRInputModule::*)(int32_t)>(&::VRUIControls::VRInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5970d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetLastPointerEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::VRUIControls::VRInputModule::*)(int32_t)>(
    &::VRUIControls::VRInputModule::GetLastPointerEventData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x597104c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "GetLastPointerEventData", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ShouldStartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRInputModule::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, bool)>(
    &::VRUIControls::VRInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5971068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                            { "ShouldStartDrag", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::VRUIControls::VRInputModule::ProcessMove)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5971098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::VRUIControls::VRInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5971b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRInputModule::*)(int32_t)>(&::VRUIControls::VRInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5971e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ClearSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5970a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "ClearSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::ToString)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5971f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.DeselectIfSelectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::VRUIControls::VRInputModule::DeselectIfSelectionChanged)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x59721b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                         { "DeselectIfSelectionChanged", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::Process)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x59722b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.SendUpdateEventToSelectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5972ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "SendUpdateEventToSelectedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessMousePress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::VRUIControls::MouseButtonEventData*)>(&::VRUIControls::VRInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x59724e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "ProcessMousePress", {}, { ::i2c::type_of<::VRUIControls::MouseButtonEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.HandlePointerExitAndEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(
    &::VRUIControls::VRInputModule::HandlePointerExitAndEnter)> {
  constexpr static std::size_t size = 0x998;
  constexpr static std::size_t addrs = 0x59711f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                         { "HandlePointerExitAndEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.RaycastComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(
    &::VRUIControls::VRInputModule::RaycastComparer)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5972e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                         { "RaycastComparer", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>(), ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5973254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VRUIControls::VRPointer>& VRUIControls::VRInputModule::__cordl_internal_get__vrPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPointer;
}
constexpr ::UnityW<::VRUIControls::VRPointer> const& VRUIControls::VRInputModule::__cordl_internal_get__vrPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPointer;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__vrPointer(::UnityW<::VRUIControls::VRPointer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPointer = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& VRUIControls::VRInputModule::__cordl_internal_get__rumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& VRUIControls::VRInputModule::__cordl_internal_get__rumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__rumblePreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rumblePreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& VRUIControls::VRInputModule::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& VRUIControls::VRInputModule::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackManager = value;
}
constexpr bool& VRUIControls::VRInputModule::__cordl_internal_get__useMouseForPressInput_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMouseForPressInput_k__BackingField;
}
constexpr bool const& VRUIControls::VRInputModule::__cordl_internal_get__useMouseForPressInput_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMouseForPressInput_k__BackingField;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__useMouseForPressInput_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useMouseForPressInput_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& VRUIControls::VRInputModule::__cordl_internal_get_onProcessMousePressEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onProcessMousePressEvent;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* const& VRUIControls::VRInputModule::__cordl_internal_get_onProcessMousePressEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onProcessMousePressEvent;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onProcessMousePressEvent = value;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& VRUIControls::VRInputModule::__cordl_internal_get_pointerDidClickEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidClickEvent;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& VRUIControls::VRInputModule::__cordl_internal_get_pointerDidClickEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidClickEvent;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointerDidClickEvent = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& VRUIControls::VRInputModule::__cordl_internal_get__pointerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* const& VRUIControls::VRInputModule::__cordl_internal_get__pointerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerData;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__pointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*& VRUIControls::VRInputModule::__cordl_internal_get__componentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* const& VRUIControls::VRInputModule::__cordl_internal_get__componentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentList;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__componentList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____componentList = value;
}
constexpr ::VRUIControls::MouseState*& VRUIControls::VRInputModule::__cordl_internal_get__mouseState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseState;
}
constexpr ::VRUIControls::MouseState* const& VRUIControls::VRInputModule::__cordl_internal_get__mouseState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseState;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__mouseState(::VRUIControls::MouseState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mouseState = value;
}
inline void VRUIControls::VRInputModule::setStaticF__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "_raycastComparer", ::VRUIControls::VRInputModule*>(
      std::forward<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* VRUIControls::VRInputModule::getStaticF__raycastComparer() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "_raycastComparer", ::VRUIControls::VRInputModule*>();
}
inline bool VRUIControls::VRInputModule::get_useMouseForPressInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "get_useMouseForPressInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::set_useMouseForPressInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "set_useMouseForPressInput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::add_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "add_onProcessMousePressEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::remove_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                                           { "remove_onProcessMousePressEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::add_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                                           { "add_pointerDidClickEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::remove_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                                           { "remove_pointerDidClickEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool VRUIControls::VRInputModule::GetPointerData(int32_t id, ::by_ref<::UnityEngine::EventSystems::PointerEventData*> data, bool create) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                       { "GetPointerData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::EventSystems::PointerEventData*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, data, create);
}
inline ::VRUIControls::MouseState* VRUIControls::VRInputModule::GetMousePointerEventData(int32_t id) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::VRUIControls::MouseState*>(this, ___internal_method, id);
}
inline ::UnityEngine::EventSystems::PointerEventData* VRUIControls::VRInputModule::GetLastPointerEventData(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "GetLastPointerEventData", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, id);
}
inline bool VRUIControls::VRInputModule::ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                          { "ShouldStartDrag", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pressPos, currentPos, threshold, useDragThreshold);
}
inline void VRUIControls::VRInputModule::ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline void VRUIControls::VRInputModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline bool VRUIControls::VRInputModule::IsPointerOverGameObject(int32_t pointerId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId);
}
inline void VRUIControls::VRInputModule::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "ClearSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW VRUIControls::VRInputModule::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                              { "DeselectIfSelectionChanged", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentOverGo, pointerEvent);
}
inline void VRUIControls::VRInputModule::Process() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRInputModule*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool VRUIControls::VRInputModule::SendUpdateEventToSelectedObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "SendUpdateEventToSelectedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::ProcessMousePress(::VRUIControls::MouseButtonEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { "ProcessMousePress", {}, { ::i2c::type_of<::VRUIControls::MouseButtonEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void VRUIControls::VRInputModule::HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                       { "HandlePointerExitAndEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPointerData, newEnterTarget);
}
inline int32_t VRUIControls::VRInputModule::RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(),
                                       { "RaycastComparer", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>(), ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lhs, rhs);
}
inline void VRUIControls::VRInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRInputModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VRUIControls::VRInputModule* VRUIControls::VRInputModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::VRInputModule*>());
}
/// @brief Convert operator to "::GlobalNamespace::IVRInputModule"
constexpr VRUIControls::VRInputModule::operator ::GlobalNamespace::IVRInputModule*() noexcept {
  return static_cast<::GlobalNamespace::IVRInputModule*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVRInputModule"
constexpr ::GlobalNamespace::IVRInputModule* VRUIControls::VRInputModule::i___GlobalNamespace__IVRInputModule() noexcept {
  return static_cast<::GlobalNamespace::IVRInputModule*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VRUIControls::VRInputModule::VRInputModule() {}
