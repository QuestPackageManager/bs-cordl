#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\BaseInputModule.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.get_sendPointerHoverToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::get_sendPointerHoverToParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1d680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "get_sendPointerHoverToParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.set_sendPointerHoverToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)(bool)>(&::UnityEngine::EventSystems::BaseInputModule::set_sendPointerHoverToParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1d688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "set_sendPointerHoverToParent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.get_input
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseInput> (::UnityEngine::EventSystems::BaseInputModule::*)()>(
    &::UnityEngine::EventSystems::BaseInputModule::get_input)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6e1d690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "get_input", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.get_inputOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseInput> (::UnityEngine::EventSystems::BaseInputModule::*)()>(
    &::UnityEngine::EventSystems::BaseInputModule::get_inputOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1d89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "get_inputOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.set_inputOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)(::UnityEngine::EventSystems::BaseInput*)>(
    &::UnityEngine::EventSystems::BaseInputModule::set_inputOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1d8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                                                                           { "set_inputOverride", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseInput*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.get_eventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::EventSystem> (::UnityEngine::EventSystems::BaseInputModule::*)()>(
    &::UnityEngine::EventSystems::BaseInputModule::get_eventSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1d8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "get_eventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1d8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e1d910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.FindFirstRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (*)(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::EventSystems::BaseInputModule::FindFirstRaycast)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e1d924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                                             { "FindFirstRaycast", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.DetermineMoveDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::MoveDirection (*)(float_t, float_t)>(&::UnityEngine::EventSystems::BaseInputModule::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e1da48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                                                                           { "DetermineMoveDirection", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.DetermineMoveDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::MoveDirection (*)(float_t, float_t, float_t)>(
    &::UnityEngine::EventSystems::BaseInputModule::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e1da9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                                             { "DetermineMoveDirection", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.FindCommonRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::BaseInputModule::FindCommonRoot)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e1daec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                                             { "FindCommonRoot", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.HandlePointerExitAndEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::BaseInputModule::HandlePointerExitAndEnter)> {
  constexpr static std::size_t size = 0xb04;
  constexpr static std::size_t addrs = 0x6e1dc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                         { "HandlePointerExitAndEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.GetAxisEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::AxisEventData* (::UnityEngine::EventSystems::BaseInputModule::*)(float_t, float_t, float_t)>(
    &::UnityEngine::EventSystems::BaseInputModule::GetAxisEventData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1e760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.GetBaseEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::BaseEventData* (::UnityEngine::EventSystems::BaseInputModule::*)()>(
    &::UnityEngine::EventSystems::BaseInputModule::GetBaseEventData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e1e860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInputModule::*)(int32_t)>(&::UnityEngine::EventSystems::BaseInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1e8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.ShouldActivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::ShouldActivateModule)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e1e8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.DeactivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::DeactivateModule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e1e918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.ActivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e1e91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.UpdateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::UpdateModule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e1e920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.IsModuleSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::IsModuleSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1e924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.ConvertUIToolkitPointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::BaseInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::BaseInputModule::ConvertUIToolkitPointerId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e1e92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule.ConvertPointerEventScrollDeltaToTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::BaseInputModule::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::EventSystems::BaseInputModule::ConvertPointerEventScrollDeltaToTicks)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e1e9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInputModule::*)()>(&::UnityEngine::EventSystems::BaseInputModule::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e1ea00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_RaycastResultCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResultCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* const& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_RaycastResultCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResultCache;
}
constexpr void UnityEngine::EventSystems::BaseInputModule::__cordl_internal_set_m_RaycastResultCache(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastResultCache = value;
}
constexpr bool& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_SendPointerHoverToParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SendPointerHoverToParent;
}
constexpr bool const& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_SendPointerHoverToParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SendPointerHoverToParent;
}
constexpr void UnityEngine::EventSystems::BaseInputModule::__cordl_internal_set_m_SendPointerHoverToParent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SendPointerHoverToParent = value;
}
constexpr ::UnityEngine::EventSystems::AxisEventData*& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_AxisEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AxisEventData;
}
constexpr ::UnityEngine::EventSystems::AxisEventData* const& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_AxisEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AxisEventData;
}
constexpr void UnityEngine::EventSystems::BaseInputModule::__cordl_internal_set_m_AxisEventData(::UnityEngine::EventSystems::AxisEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AxisEventData = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_EventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_EventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr void UnityEngine::EventSystems::BaseInputModule::__cordl_internal_set_m_EventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventSystem = value;
}
constexpr ::UnityEngine::EventSystems::BaseEventData*& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_BaseEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseEventData;
}
constexpr ::UnityEngine::EventSystems::BaseEventData* const& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_BaseEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseEventData;
}
constexpr void UnityEngine::EventSystems::BaseInputModule::__cordl_internal_set_m_BaseEventData(::UnityEngine::EventSystems::BaseEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BaseEventData = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInput>& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_InputOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputOverride;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInput> const& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_InputOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputOverride;
}
constexpr void UnityEngine::EventSystems::BaseInputModule::__cordl_internal_set_m_InputOverride(::UnityW<::UnityEngine::EventSystems::BaseInput> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputOverride = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInput>& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_DefaultInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultInput;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInput> const& UnityEngine::EventSystems::BaseInputModule::__cordl_internal_get_m_DefaultInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultInput;
}
constexpr void UnityEngine::EventSystems::BaseInputModule::__cordl_internal_set_m_DefaultInput(::UnityW<::UnityEngine::EventSystems::BaseInput> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultInput = value;
}
inline bool UnityEngine::EventSystems::BaseInputModule::get_sendPointerHoverToParent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "get_sendPointerHoverToParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInputModule::set_sendPointerHoverToParent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "set_sendPointerHoverToParent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::EventSystems::BaseInput> UnityEngine::EventSystems::BaseInputModule::get_input() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "get_input", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseInput>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::EventSystems::BaseInput> UnityEngine::EventSystems::BaseInputModule::get_inputOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "get_inputOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseInput>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInputModule::set_inputOverride(::UnityEngine::EventSystems::BaseInput* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "set_inputOverride", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseInput*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::EventSystems::EventSystem> UnityEngine::EventSystems::BaseInputModule::get_eventSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "get_eventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::EventSystem>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInputModule::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInputModule::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInputModule::Process() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::RaycastResult
UnityEngine::EventSystems::BaseInputModule::FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* candidates) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                                           { "FindFirstRaycast", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(nullptr, ___internal_method, candidates);
}
inline ::UnityEngine::EventSystems::MoveDirection UnityEngine::EventSystems::BaseInputModule::DetermineMoveDirection(float_t x, float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { "DetermineMoveDirection", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::MoveDirection>(nullptr, ___internal_method, x, y);
}
inline ::UnityEngine::EventSystems::MoveDirection UnityEngine::EventSystems::BaseInputModule::DetermineMoveDirection(float_t x, float_t y, float_t deadZone) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                                           { "DetermineMoveDirection", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::MoveDirection>(nullptr, ___internal_method, x, y, deadZone);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::BaseInputModule::FindCommonRoot(::UnityEngine::GameObject* g1, ::UnityEngine::GameObject* g2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                                           { "FindCommonRoot", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, g1, g2);
}
inline void UnityEngine::EventSystems::BaseInputModule::HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(),
                                       { "HandlePointerExitAndEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPointerData, newEnterTarget);
}
inline ::UnityEngine::EventSystems::AxisEventData* UnityEngine::EventSystems::BaseInputModule::GetAxisEventData(float_t x, float_t y, float_t moveDeadZone) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::AxisEventData*>(this, ___internal_method, x, y, moveDeadZone);
}
inline ::UnityEngine::EventSystems::BaseEventData* UnityEngine::EventSystems::BaseInputModule::GetBaseEventData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::BaseEventData*>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::BaseInputModule::IsPointerOverGameObject(int32_t pointerId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId);
}
inline bool UnityEngine::EventSystems::BaseInputModule::ShouldActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInputModule::DeactivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInputModule::ActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInputModule::UpdateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::BaseInputModule::IsModuleSupported() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::BaseInputModule::ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* sourcePointerData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sourcePointerData);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::BaseInputModule::ConvertPointerEventScrollDeltaToTicks(::UnityEngine::Vector2 scrollDelta) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, scrollDelta);
}
inline void UnityEngine::EventSystems::BaseInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInputModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::BaseInputModule* UnityEngine::EventSystems::BaseInputModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::BaseInputModule*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::BaseInputModule::BaseInputModule() {}
