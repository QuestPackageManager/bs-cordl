#pragma once
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelRaycaster_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
constexpr float_t& UnityEngine::UIElements::__PanelRaycaster__FloatIntBits::__get_f() {
  return this->___f;
}
constexpr float_t const& UnityEngine::UIElements::__PanelRaycaster__FloatIntBits::__get_f() const {
  return this->___f;
}
constexpr void UnityEngine::UIElements::__PanelRaycaster__FloatIntBits::__set_f(float_t value) {
  this->___f = value;
}
constexpr int32_t& UnityEngine::UIElements::__PanelRaycaster__FloatIntBits::__get_i() {
  return this->___i;
}
constexpr int32_t const& UnityEngine::UIElements::__PanelRaycaster__FloatIntBits::__get_i() const {
  return this->___i;
}
constexpr void UnityEngine::UIElements::__PanelRaycaster__FloatIntBits::__set_i(int32_t value) {
  this->___i = value;
}
// Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__PanelRaycaster__FloatIntBits::__PanelRaycaster__FloatIntBits(float_t f, int32_t i) noexcept {
  this->f = f;
  this->i = i;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__PanelRaycaster__FloatIntBits::__PanelRaycaster__FloatIntBits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel* (::UnityEngine::UIElements::PanelRaycaster::*)()>(
    &::UnityEngine::UIElements::PanelRaycaster::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), "get_panel",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.set_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PanelRaycaster::set_panel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d94c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), "set_panel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.RegisterCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)()>(
    &::UnityEngine::UIElements::PanelRaycaster::RegisterCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d94d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                               "RegisterCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.UnregisterCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)()>(
    &::UnityEngine::UIElements::PanelRaycaster::UnregisterCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d94cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                               "UnregisterCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.OnPanelDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)()>(
    &::UnityEngine::UIElements::PanelRaycaster::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                               "OnPanelDestroyed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_selectableGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::UnityEngine::UIElements::PanelRaycaster::*)()>(
    &::UnityEngine::UIElements::PanelRaycaster::get_selectableGameObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d94e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                               "get_selectableGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_sortOrderPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::PanelRaycaster::*)()>(
    &::UnityEngine::UIElements::PanelRaycaster::get_sortOrderPriority)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d94e18;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_renderOrderPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::PanelRaycaster::*)()>(
    &::UnityEngine::UIElements::PanelRaycaster::get_renderOrderPriority)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d94e4c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::UIElements::PanelRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2d94e6c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (::UnityEngine::UIElements::PanelRaycaster::*)()>(
    &::UnityEngine::UIElements::PanelRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d95360;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.ConvertFloatBitsToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(float_t)>(&::UnityEngine::UIElements::PanelRaycaster::ConvertFloatBitsToInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), "ConvertFloatBitsToInt",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d95368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IRuntimePanelComponent"
constexpr UnityEngine::UIElements::PanelRaycaster::operator ::UnityEngine::UIElements::IRuntimePanelComponent*() noexcept {
  return static_cast<::UnityEngine::UIElements::IRuntimePanelComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IRuntimePanelComponent"
constexpr ::UnityEngine::UIElements::IRuntimePanelComponent* UnityEngine::UIElements::PanelRaycaster::i___UnityEngine__UIElements__IRuntimePanelComponent() noexcept {
  return static_cast<::UnityEngine::UIElements::IRuntimePanelComponent*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& UnityEngine::UIElements::PanelRaycaster::__get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& UnityEngine::UIElements::PanelRaycaster::__get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::UIElements::PanelRaycaster::__set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelRaycaster::get_panel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), "get_panel",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelRaycaster::set_panel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), "set_panel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::PanelRaycaster::RegisterCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                             "RegisterCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelRaycaster::UnregisterCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                             "UnregisterCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelRaycaster::OnPanelDestroyed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                             "OnPanelDestroyed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* UnityEngine::UIElements::PanelRaycaster::get_selectableGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(),
                                                                             "get_selectableGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::PanelRaycaster::get_sortOrderPriority() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::PanelRaycaster::get_renderOrderPriority() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline ::UnityEngine::Camera* UnityEngine::UIElements::PanelRaycaster::get_eventCamera() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::PanelRaycaster::ConvertFloatBitsToInt(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), "ConvertFloatBitsToInt",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, f);
}
inline ::UnityEngine::UIElements::PanelRaycaster* UnityEngine::UIElements::PanelRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::PanelRaycaster*>());
}
inline void UnityEngine::UIElements::PanelRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelRaycaster::PanelRaycaster() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
