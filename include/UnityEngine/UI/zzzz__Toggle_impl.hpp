#pragma once
// IWYU pragma private; include "UnityEngine/UI/Toggle.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Toggle_ToggleTransition::Toggle_ToggleTransition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Toggle_ToggleTransition::Toggle_ToggleTransition() {}
constexpr ::UnityEngine::UI::Toggle_ToggleTransition UnityEngine::UI::Toggle_ToggleTransition::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Toggle_ToggleTransition UnityEngine::UI::Toggle_ToggleTransition::Fade{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UI::Toggle_ToggleEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle_ToggleEvent::*)()>(&::UnityEngine::UI::Toggle_ToggleEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c4432c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle_ToggleEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::Toggle_ToggleEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle_ToggleEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Toggle_ToggleEvent* UnityEngine::UI::Toggle_ToggleEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::Toggle_ToggleEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Toggle_ToggleEvent::Toggle_ToggleEvent() {}
//  Writing Method size for method: ::UnityEngine::UI::Toggle.get_group
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::ToggleGroup> (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::get_group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c44070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "get_group",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.set_group
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::UI::ToggleGroup*)>(&::UnityEngine::UI::Toggle::set_group)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c44078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "set_group", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ToggleGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c442a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.Rebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::Toggle::Rebuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c44378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.LayoutComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c4437c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c44380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::OnDestroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c44384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c447e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c4480c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6c4482c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.SetToggleGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::UI::ToggleGroup*, bool)>(
    &::UnityEngine::UI::Toggle::SetToggleGroup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6c44098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "SetToggleGroup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ToggleGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.get_isOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::get_isOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c44d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "get_isOn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.set_isOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(bool)>(&::UnityEngine::UI::Toggle::set_isOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c44da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "set_isOn", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.SetIsOnWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(bool)>(&::UnityEngine::UI::Toggle::SetIsOnWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c44dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "SetIsOnWithoutNotify",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(bool, bool)>(&::UnityEngine::UI::Toggle::Set)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6c44958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.PlayEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(bool)>(&::UnityEngine::UI::Toggle::PlayEffect)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c441d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "PlayEffect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c44f00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.InternalToggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::InternalToggle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c44f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "InternalToggle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnPointerClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Toggle::OnPointerClick)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c44f5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UI::Toggle::OnSubmit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c44f78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::UI::Toggle::*)()>(
    &::UnityEngine::UI::Toggle::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c44f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "UnityEngine.UI.ICanvasElement.get_transform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Toggle_ToggleTransition& UnityEngine::UI::Toggle::__cordl_internal_get_toggleTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleTransition;
}
constexpr ::UnityEngine::UI::Toggle_ToggleTransition const& UnityEngine::UI::Toggle::__cordl_internal_get_toggleTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleTransition;
}
constexpr void UnityEngine::UI::Toggle::__cordl_internal_set_toggleTransition(::UnityEngine::UI::Toggle_ToggleTransition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toggleTransition = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& UnityEngine::UI::Toggle::__cordl_internal_get_graphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& UnityEngine::UI::Toggle::__cordl_internal_get_graphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphic;
}
constexpr void UnityEngine::UI::Toggle::__cordl_internal_set_graphic(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& UnityEngine::UI::Toggle::__cordl_internal_get_m_Group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Group;
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& UnityEngine::UI::Toggle::__cordl_internal_get_m_Group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Group;
}
constexpr void UnityEngine::UI::Toggle::__cordl_internal_set_m_Group(::UnityW<::UnityEngine::UI::ToggleGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Group)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle_ToggleEvent*& UnityEngine::UI::Toggle::__cordl_internal_get_onValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onValueChanged;
}
constexpr ::UnityEngine::UI::Toggle_ToggleEvent* const& UnityEngine::UI::Toggle::__cordl_internal_get_onValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onValueChanged;
}
constexpr void UnityEngine::UI::Toggle::__cordl_internal_set_onValueChanged(::UnityEngine::UI::Toggle_ToggleEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UI::Toggle::__cordl_internal_get_m_IsOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOn;
}
constexpr bool const& UnityEngine::UI::Toggle::__cordl_internal_get_m_IsOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOn;
}
constexpr void UnityEngine::UI::Toggle::__cordl_internal_set_m_IsOn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsOn = value;
}
inline ::UnityW<::UnityEngine::UI::ToggleGroup> UnityEngine::UI::Toggle::get_group() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "get_group",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::ToggleGroup>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::set_group(::UnityEngine::UI::ToggleGroup* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "set_group", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ToggleGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Toggle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::Rebuild(::UnityEngine::UI::CanvasUpdate executing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executing);
}
inline void UnityEngine::UI::Toggle::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::OnDidApplyAnimationProperties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::SetToggleGroup(::UnityEngine::UI::ToggleGroup* newGroup, bool setMemberValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "SetToggleGroup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ToggleGroup*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newGroup, setMemberValue);
}
inline bool UnityEngine::UI::Toggle::get_isOn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "get_isOn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::set_isOn(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "set_isOn", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Toggle::SetIsOnWithoutNotify(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "SetIsOnWithoutNotify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Toggle::Set(bool value, bool sendCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, sendCallback);
}
inline void UnityEngine::UI::Toggle::PlayEffect(bool instant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "PlayEffect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instant);
}
inline void UnityEngine::UI::Toggle::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::InternalToggle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "InternalToggle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Toggle::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Toggle::OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::UI::Toggle::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle*>::get(), "UnityEngine.UI.ICanvasElement.get_transform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Toggle* UnityEngine::UI::Toggle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::Toggle*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr UnityEngine::UI::Toggle::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* UnityEngine::UI::Toggle::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UI::Toggle::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::UI::Toggle::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr UnityEngine::UI::Toggle::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* UnityEngine::UI::Toggle::i___UnityEngine__EventSystems__ISubmitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr UnityEngine::UI::Toggle::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* UnityEngine::UI::Toggle::i___UnityEngine__UI__ICanvasElement() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Toggle::Toggle() {}
