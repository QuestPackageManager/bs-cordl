#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FieldMouseDragger_1.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldMouseDragger_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FieldMouseDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template<typename T>
constexpr ::UnityEngine::UIElements::IValueField_1<T>*& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DrivenField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrivenField;
}
template<typename T>
constexpr ::UnityEngine::UIElements::IValueField_1<T>* const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DrivenField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrivenField;
}
template<typename T>
constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set_m_DrivenField(::UnityEngine::UIElements::IValueField_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_DrivenField, value);
}
template<typename T>
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DragElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragElement;
}
template<typename T>
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DragElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragElement;
}
template<typename T>
constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set_m_DragElement(::UnityEngine::UIElements::VisualElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_DragElement, value);
}
template<typename T>
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DragHotZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragHotZone;
}
template<typename T>
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DragHotZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragHotZone;
}
template<typename T>
constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set_m_DragHotZone(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DragHotZone = value;
}
template<typename T>
constexpr bool& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get__dragging_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragging_k__BackingField;
}
template<typename T>
constexpr bool const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get__dragging_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragging_k__BackingField;
}
template<typename T>
constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set__dragging_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dragging_k__BackingField = value;
}
template<typename T>
constexpr T& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get__startValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startValue_k__BackingField;
}
template<typename T>
constexpr T const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get__startValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startValue_k__BackingField;
}
template<typename T>
constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set__startValue_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____startValue_k__BackingField, value);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::_ctor(::UnityEngine::UIElements::IValueField_1<T>*  drivenField)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IValueField_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, drivenField);
}
template<typename T>
inline bool UnityEngine::UIElements::FieldMouseDragger_1<T>::get_dragging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "get_dragging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::set_dragging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "set_dragging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline T UnityEngine::UIElements::FieldMouseDragger_1<T>::get_startValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "get_startValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::set_startValue(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "set_startValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::SetDragZone(::UnityEngine::UIElements::VisualElement*  dragElement, ::UnityEngine::Rect  hotZone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "SetDragZone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dragElement, hotZone);
}
template<typename T>
inline bool UnityEngine::UIElements::FieldMouseDragger_1<T>::CanStartDrag(int32_t  button, ::UnityEngine::Vector2  localPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "CanStartDrag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button, localPosition);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::UpdateValueOnPointerDown(::UnityEngine::UIElements::PointerDownEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "UpdateValueOnPointerDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::ProcessDownEvent(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "ProcessDownEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::UpdateValueOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "UpdateValueOnPointerMove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::ProcessMoveEvent(bool  shiftKey, bool  altKey, ::UnityEngine::Vector2  deltaPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "ProcessMoveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shiftKey, altKey, deltaPosition);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::UpdateValueOnPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "UpdateValueOnPointerUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::ProcessUpEvent(::UnityEngine::UIElements::EventBase*  evt, int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "ProcessUpEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, pointerId);
}
template<typename T>
inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::UpdateValueOnKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>::get(),
                        "UpdateValueOnKeyDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template<typename T>
inline ::UnityEngine::UIElements::FieldMouseDragger_1<T>* UnityEngine::UIElements::FieldMouseDragger_1<T>::New_ctor(::UnityEngine::UIElements::IValueField_1<T>*  drivenField)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(drivenField));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::FieldMouseDragger_1<T>::FieldMouseDragger_1()   {
}
