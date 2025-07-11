#pragma once
// IWYU pragma private; include "UnityEngine/UI/Selectable.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_impl.hpp"
#include "UnityEngine/UI/zzzz__Navigation_impl.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__AnimationTriggers_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Selectable_Transition::Selectable_Transition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Selectable_Transition::Selectable_Transition() {}
constexpr ::UnityEngine::UI::Selectable_Transition UnityEngine::UI::Selectable_Transition::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Selectable_Transition UnityEngine::UI::Selectable_Transition::ColorTint{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::Selectable_Transition UnityEngine::UI::Selectable_Transition::SpriteSwap{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::Selectable_Transition UnityEngine::UI::Selectable_Transition::Animation{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Selectable_SelectionState::Selectable_SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Selectable_SelectionState::Selectable_SelectionState() {}
constexpr ::UnityEngine::UI::Selectable_SelectionState UnityEngine::UI::Selectable_SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Selectable_SelectionState UnityEngine::UI::Selectable_SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::Selectable_SelectionState UnityEngine::UI::Selectable_SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::Selectable_SelectionState UnityEngine::UI::Selectable_SelectionState::Selected{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UI::Selectable_SelectionState UnityEngine::UI::Selectable_SelectionState::Disabled{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_allSelectablesArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> (*)()>(
    &::UnityEngine::UI::Selectable::get_allSelectablesArray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4ac8cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_allSelectablesArray",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_allSelectableCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::UI::Selectable::get_allSelectableCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4ac8d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_allSelectableCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_allSelectables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>* (*)()>(
    &::UnityEngine::UI::Selectable::get_allSelectables)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4ac8da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_allSelectables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.AllSelectablesNoAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::UI::Selectable*, ::Array<::UnityEngine::UI::Selectable*>*>)>(
    &::UnityEngine::UI::Selectable::AllSelectablesNoAlloc)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4ac8e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "AllSelectablesNoAlloc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UI::Selectable*, ::Array<::UnityEngine::UI::Selectable*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_navigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Navigation (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::get_navigation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4ac8f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_navigation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_navigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::UI::Navigation)>(
    &::UnityEngine::UI::Selectable::set_navigation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4ac8f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_navigation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Navigation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_transition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable_Transition (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::get_transition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac9004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_transition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_transition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::UI::Selectable_Transition)>(
    &::UnityEngine::UI::Selectable::set_transition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4ac900c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_transition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable_Transition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ColorBlock (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::get_colors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4ac9080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_colors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::UI::ColorBlock)>(&::UnityEngine::UI::Selectable::set_colors)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4ac9090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_colors", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ColorBlock>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_spriteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::SpriteState (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::get_spriteState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4ac9128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_spriteState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_spriteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::UI::SpriteState)>(
    &::UnityEngine::UI::Selectable::set_spriteState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4ac9134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_spriteState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::SpriteState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_animationTriggers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::AnimationTriggers* (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::get_animationTriggers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac91b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_animationTriggers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_animationTriggers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::UI::AnimationTriggers*)>(
    &::UnityEngine::UI::Selectable::set_animationTriggers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4ac91b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_animationTriggers", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::AnimationTriggers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_targetGraphic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::get_targetGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac922c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_targetGraphic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_targetGraphic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::UI::Graphic*)>(
    &::UnityEngine::UI::Selectable::set_targetGraphic)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4ac9234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_targetGraphic", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_interactable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::get_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac92a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_interactable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_interactable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(bool)>(&::UnityEngine::UI::Selectable::set_interactable)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x4ac92b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_interactable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_isPointerInside
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::get_isPointerInside)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac9420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_isPointerInside",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_isPointerInside
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(bool)>(&::UnityEngine::UI::Selectable::set_isPointerInside)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4ac9428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_isPointerInside",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_isPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::get_isPointerDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac9434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_isPointerDown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_isPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(bool)>(&::UnityEngine::UI::Selectable::set_isPointerDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4ac943c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_isPointerDown",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_hasSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::get_hasSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac9448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_hasSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_hasSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(bool)>(&::UnityEngine::UI::Selectable::set_hasSelection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4ac9450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_hasSelection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4ac39f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_image
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Image> (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::get_image)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4ac945c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_image",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.set_image
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::UI::Image*)>(&::UnityEngine::UI::Selectable::set_image)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac94d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_image", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_animator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Animator> (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::get_animator)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4ac94e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_animator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::Awake)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4ac9528;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnCanvasGroupChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::OnCanvasGroupChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4ac95b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.ParentGroupAllowsInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::ParentGroupAllowsInteraction)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x4ac95e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                               "ParentGroupAllowsInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.IsInteractable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::IsInteractable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4ac9760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4ac9780;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::OnEnable)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x4ac3e28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4ac97d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnSetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::OnSetProperty)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4ac8fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "OnSetProperty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::OnDisable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4ac4100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(bool)>(&::UnityEngine::UI::Selectable::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4ac97fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "OnApplicationFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.get_currentSelectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable_SelectionState (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::get_currentSelectionState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4ac9784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                               "get_currentSelectionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.InstantClearState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::InstantClearState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4ac98a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.DoStateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(
    &::UnityEngine::UI::Selectable::DoStateTransition)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x4ac9c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.FindSelectable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Selectable::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UI::Selectable::FindSelectable)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x4ac9ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "FindSelectable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.GetPointOnRectEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UI::Selectable::GetPointOnRectEdge)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x4aca37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "GetPointOnRectEdge", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.Navigate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*)>(
    &::UnityEngine::UI::Selectable::Navigate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4aca4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "Navigate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.FindSelectableOnLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::FindSelectableOnLeft)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4ac4d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.FindSelectableOnRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::FindSelectableOnRight)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4ac4e88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.FindSelectableOnUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::FindSelectableOnUp)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4ac4f84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.FindSelectableOnDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Selectable::*)()>(
    &::UnityEngine::UI::Selectable::FindSelectableOnDown)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4ac5080;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::EventSystems::AxisEventData*)>(
    &::UnityEngine::UI::Selectable::OnMove)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4ac4cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.StartColorTween
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::Color, bool)>(
    &::UnityEngine::UI::Selectable::StartColorTween)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4ac9914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "StartColorTween", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.DoSpriteSwap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UI::Selectable::DoSpriteSwap)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4ac9a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "DoSpriteSwap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.TriggerAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::StringW)>(&::UnityEngine::UI::Selectable::TriggerAnimation)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x4ac9acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "TriggerAnimation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.IsHighlighted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::IsHighlighted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4aca5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "IsHighlighted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.IsPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::IsPressed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4ac9858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "IsPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.EvaluateAndTransitionToSelectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::EvaluateAndTransitionToSelectionState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4aca610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "EvaluateAndTransitionToSelectionState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Selectable::OnPointerDown)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4ac4838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnPointerUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Selectable::OnPointerUp)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4ac4a6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnPointerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Selectable::OnPointerEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4aca6a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnPointerExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Selectable::OnPointerExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aca6b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UI::Selectable::OnSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4aca6bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.OnDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UI::Selectable::OnDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aca6c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Selectable.Select
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Selectable::*)()>(&::UnityEngine::UI::Selectable::Select)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4aca6d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 38));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UI::Selectable::__cordl_internal_get_m_EnableCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableCalled;
}
constexpr bool const& UnityEngine::UI::Selectable::__cordl_internal_get_m_EnableCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableCalled;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_EnableCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableCalled = value;
}
constexpr ::UnityEngine::UI::Navigation& UnityEngine::UI::Selectable::__cordl_internal_get_m_Navigation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Navigation;
}
constexpr ::UnityEngine::UI::Navigation const& UnityEngine::UI::Selectable::__cordl_internal_get_m_Navigation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Navigation;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_Navigation(::UnityEngine::UI::Navigation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Navigation = value;
}
constexpr ::UnityEngine::UI::Selectable_Transition& UnityEngine::UI::Selectable::__cordl_internal_get_m_Transition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transition;
}
constexpr ::UnityEngine::UI::Selectable_Transition const& UnityEngine::UI::Selectable::__cordl_internal_get_m_Transition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transition;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_Transition(::UnityEngine::UI::Selectable_Transition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Transition = value;
}
constexpr ::UnityEngine::UI::ColorBlock& UnityEngine::UI::Selectable::__cordl_internal_get_m_Colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr ::UnityEngine::UI::ColorBlock const& UnityEngine::UI::Selectable::__cordl_internal_get_m_Colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_Colors(::UnityEngine::UI::ColorBlock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Colors = value;
}
constexpr ::UnityEngine::UI::SpriteState& UnityEngine::UI::Selectable::__cordl_internal_get_m_SpriteState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteState;
}
constexpr ::UnityEngine::UI::SpriteState const& UnityEngine::UI::Selectable::__cordl_internal_get_m_SpriteState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteState;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_SpriteState(::UnityEngine::UI::SpriteState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteState = value;
}
constexpr ::UnityEngine::UI::AnimationTriggers*& UnityEngine::UI::Selectable::__cordl_internal_get_m_AnimationTriggers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimationTriggers;
}
constexpr ::UnityEngine::UI::AnimationTriggers* const& UnityEngine::UI::Selectable::__cordl_internal_get_m_AnimationTriggers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimationTriggers;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_AnimationTriggers(::UnityEngine::UI::AnimationTriggers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnimationTriggers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UI::Selectable::__cordl_internal_get_m_Interactable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactable;
}
constexpr bool const& UnityEngine::UI::Selectable::__cordl_internal_get_m_Interactable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactable;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_Interactable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Interactable = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& UnityEngine::UI::Selectable::__cordl_internal_get_m_TargetGraphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetGraphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& UnityEngine::UI::Selectable::__cordl_internal_get_m_TargetGraphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetGraphic;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_TargetGraphic(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TargetGraphic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UI::Selectable::__cordl_internal_get_m_GroupsAllowInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupsAllowInteraction;
}
constexpr bool const& UnityEngine::UI::Selectable::__cordl_internal_get_m_GroupsAllowInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupsAllowInteraction;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_GroupsAllowInteraction(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GroupsAllowInteraction = value;
}
constexpr int32_t& UnityEngine::UI::Selectable::__cordl_internal_get_m_CurrentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentIndex;
}
constexpr int32_t const& UnityEngine::UI::Selectable::__cordl_internal_get_m_CurrentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentIndex;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_CurrentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentIndex = value;
}
constexpr bool& UnityEngine::UI::Selectable::__cordl_internal_get__isPointerInside_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPointerInside_k__BackingField;
}
constexpr bool const& UnityEngine::UI::Selectable::__cordl_internal_get__isPointerInside_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPointerInside_k__BackingField;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set__isPointerInside_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPointerInside_k__BackingField = value;
}
constexpr bool& UnityEngine::UI::Selectable::__cordl_internal_get__isPointerDown_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPointerDown_k__BackingField;
}
constexpr bool const& UnityEngine::UI::Selectable::__cordl_internal_get__isPointerDown_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPointerDown_k__BackingField;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set__isPointerDown_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPointerDown_k__BackingField = value;
}
constexpr bool& UnityEngine::UI::Selectable::__cordl_internal_get__hasSelection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSelection_k__BackingField;
}
constexpr bool const& UnityEngine::UI::Selectable::__cordl_internal_get__hasSelection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSelection_k__BackingField;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set__hasSelection_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSelection_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& UnityEngine::UI::Selectable::__cordl_internal_get_m_CanvasGroupCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasGroupCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& UnityEngine::UI::Selectable::__cordl_internal_get_m_CanvasGroupCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasGroupCache;
}
constexpr void UnityEngine::UI::Selectable::__cordl_internal_set_m_CanvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CanvasGroupCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UI::Selectable::setStaticF_s_Selectables(::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*>, "s_Selectables",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get>(
      std::forward<::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> UnityEngine::UI::Selectable::getStaticF_s_Selectables() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*>, "s_Selectables",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get>();
}
inline void UnityEngine::UI::Selectable::setStaticF_s_SelectableCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SelectableCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UI::Selectable::getStaticF_s_SelectableCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_SelectableCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get>();
}
inline ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> UnityEngine::UI::Selectable::get_allSelectablesArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_allSelectablesArray",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*>, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::UI::Selectable::get_allSelectableCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_allSelectableCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>* UnityEngine::UI::Selectable::get_allSelectables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_allSelectables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>*, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::UI::Selectable::AllSelectablesNoAlloc(::ArrayW<::UnityEngine::UI::Selectable*, ::Array<::UnityEngine::UI::Selectable*>*> selectables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "AllSelectablesNoAlloc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UI::Selectable*, ::Array<::UnityEngine::UI::Selectable*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, selectables);
}
inline ::UnityEngine::UI::Navigation UnityEngine::UI::Selectable::get_navigation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_navigation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Navigation, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_navigation(::UnityEngine::UI::Navigation value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_navigation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Navigation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Selectable_Transition UnityEngine::UI::Selectable::get_transition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_transition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable_Transition, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_transition(::UnityEngine::UI::Selectable_Transition value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_transition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable_Transition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ColorBlock UnityEngine::UI::Selectable::get_colors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_colors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ColorBlock, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_colors(::UnityEngine::UI::ColorBlock value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_colors", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ColorBlock>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::SpriteState UnityEngine::UI::Selectable::get_spriteState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_spriteState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::SpriteState, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_spriteState(::UnityEngine::UI::SpriteState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_spriteState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::SpriteState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::AnimationTriggers* UnityEngine::UI::Selectable::get_animationTriggers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_animationTriggers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::AnimationTriggers*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_animationTriggers(::UnityEngine::UI::AnimationTriggers* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_animationTriggers", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::AnimationTriggers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Graphic> UnityEngine::UI::Selectable::get_targetGraphic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_targetGraphic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_targetGraphic(::UnityEngine::UI::Graphic* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_targetGraphic", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Selectable::get_interactable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_interactable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_interactable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_interactable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Selectable::get_isPointerInside() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_isPointerInside",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_isPointerInside(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_isPointerInside",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Selectable::get_isPointerDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_isPointerDown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_isPointerDown(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_isPointerDown",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Selectable::get_hasSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_hasSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_hasSelection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_hasSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Selectable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Image> UnityEngine::UI::Selectable::get_image() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_image",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Image>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::set_image(::UnityEngine::UI::Image* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "set_image", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Animator> UnityEngine::UI::Selectable::get_animator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_animator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnCanvasGroupChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::Selectable::ParentGroupAllowsInteraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(),
                                                                             "ParentGroupAllowsInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::Selectable::IsInteractable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnDidApplyAnimationProperties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnSetProperty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "OnSetProperty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnApplicationFocus(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "OnApplicationFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasFocus);
}
inline ::UnityEngine::UI::Selectable_SelectionState UnityEngine::UI::Selectable::get_currentSelectionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "get_currentSelectionState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable_SelectionState, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::InstantClearState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, instant);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Selectable::FindSelectable(::UnityEngine::Vector3 dir) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "FindSelectable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method, dir);
}
inline ::UnityEngine::Vector3 UnityEngine::UI::Selectable::GetPointOnRectEdge(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 dir) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "GetPointOnRectEdge", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, rect, dir);
}
inline void UnityEngine::UI::Selectable::Navigate(::UnityEngine::EventSystems::AxisEventData* eventData, ::UnityEngine::UI::Selectable* sel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "Navigate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, sel);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Selectable::FindSelectableOnLeft() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Selectable::FindSelectableOnRight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Selectable::FindSelectableOnUp() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Selectable::FindSelectableOnDown() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnMove(::UnityEngine::EventSystems::AxisEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Selectable::StartColorTween(::UnityEngine::Color targetColor, bool instant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "StartColorTween", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetColor, instant);
}
inline void UnityEngine::UI::Selectable::DoSpriteSwap(::UnityEngine::Sprite* newSprite) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "DoSpriteSwap", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSprite);
}
inline void UnityEngine::UI::Selectable::TriggerAnimation(::StringW triggername) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "TriggerAnimation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, triggername);
}
inline bool UnityEngine::UI::Selectable::IsHighlighted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "IsHighlighted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::Selectable::IsPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "IsPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::EvaluateAndTransitionToSelectionState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), "EvaluateAndTransitionToSelectionState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Selectable::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Selectable::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Selectable::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Selectable::OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Selectable::OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Selectable::OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Selectable::Select() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Selectable*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Selectable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::Selectable*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
constexpr UnityEngine::UI::Selectable::operator ::UnityEngine::EventSystems::IMoveHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
constexpr ::UnityEngine::EventSystems::IMoveHandler* UnityEngine::UI::Selectable::i___UnityEngine__EventSystems__IMoveHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UI::Selectable::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::UI::Selectable::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr UnityEngine::UI::Selectable::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* UnityEngine::UI::Selectable::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr UnityEngine::UI::Selectable::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* UnityEngine::UI::Selectable::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr UnityEngine::UI::Selectable::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* UnityEngine::UI::Selectable::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr UnityEngine::UI::Selectable::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* UnityEngine::UI::Selectable::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr UnityEngine::UI::Selectable::operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* UnityEngine::UI::Selectable::i___UnityEngine__EventSystems__ISelectHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr UnityEngine::UI::Selectable::operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDeselectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr ::UnityEngine::EventSystems::IDeselectHandler* UnityEngine::UI::Selectable::i___UnityEngine__EventSystems__IDeselectHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDeselectHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Selectable::Selectable() {}
