#pragma once
// IWYU pragma private; include "HMUI/MouseBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__MouseBinder_def.hpp"
#include "HMUI/zzzz__MouseBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::MouseBinder_MouseEventType::MouseBinder_MouseEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::MouseBinder_MouseEventType::MouseBinder_MouseEventType() {}
constexpr ::HMUI::MouseBinder_MouseEventType HMUI::MouseBinder_MouseEventType::ButtonDown{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::MouseBinder_MouseEventType HMUI::MouseBinder_MouseEventType::ButtonUp{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::MouseBinder_MouseEventType HMUI::MouseBinder_MouseEventType::ButtonPress{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::MouseBinder_ButtonType::MouseBinder_ButtonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::MouseBinder_ButtonType::MouseBinder_ButtonType() {}
constexpr ::HMUI::MouseBinder_ButtonType HMUI::MouseBinder_ButtonType::Primary{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::MouseBinder_ButtonType HMUI::MouseBinder_ButtonType::Secondary{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::MouseBinder_ButtonType HMUI::MouseBinder_ButtonType::Middle{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::MouseBinder.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e6100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "get_enabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(bool)>(&::HMUI::MouseBinder::set_enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39e6108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "set_enabled", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x39e6114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x39e6130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddScrollBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::MouseBinder::*)(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*)>(&::HMUI::MouseBinder::AddScrollBindings)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x39e61f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddScrollBindings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddScrollBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(
    &::HMUI::MouseBinder::AddScrollBinding)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x39e6330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddScrollBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.RemoveScrollBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(
    &::HMUI::MouseBinder::RemoveScrollBinding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x39e63d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "RemoveScrollBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddButtonBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(
    ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>*)>(
    &::HMUI::MouseBinder::AddButtonBindings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x39e642c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddButtonBindings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddButtonBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::MouseBinder::*)(::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*)>(&::HMUI::MouseBinder::AddButtonBinding)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x39e65a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddButtonBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::MouseBinder_ButtonType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::MouseBinder_MouseEventType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.RemoveButtonBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::MouseBinder::*)(::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*)>(&::HMUI::MouseBinder::RemoveButtonBinding)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x39e6694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "RemoveButtonBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::MouseBinder_ButtonType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::MouseBinder_MouseEventType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.ClearBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::ClearBindings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x39e6744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "ClearBindings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::ManualUpdate)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x39e67e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "ManualUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::MouseBinder::__cordl_internal_get__enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled_k__BackingField;
}
constexpr bool const& HMUI::MouseBinder::__cordl_internal_get__enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled_k__BackingField;
}
constexpr void HMUI::MouseBinder::__cordl_internal_set__enabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabled_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*& HMUI::MouseBinder::__cordl_internal_get__scrollBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollBindings;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* const& HMUI::MouseBinder::__cordl_internal_get__scrollBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollBindings;
}
constexpr void HMUI::MouseBinder::__cordl_internal_set__scrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scrollBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>*&
HMUI::MouseBinder::__cordl_internal_get__buttonBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBindings;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>* const&
HMUI::MouseBinder::__cordl_internal_get__buttonBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBindings;
}
constexpr void HMUI::MouseBinder::__cordl_internal_set__buttonBindings(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HMUI::MouseBinder::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "get_enabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::MouseBinder::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "set_enabled", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::MouseBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::MouseBinder::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::MouseBinder::AddScrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddScrollBindings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
inline void HMUI::MouseBinder::AddScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddScrollBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void HMUI::MouseBinder::RemoveScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "RemoveScrollBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void HMUI::MouseBinder::AddButtonBindings(
    ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddButtonBindings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
inline void HMUI::MouseBinder::AddButtonBinding(::HMUI::MouseBinder_ButtonType buttonType, ::HMUI::MouseBinder_MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddButtonBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::MouseBinder_ButtonType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::MouseBinder_MouseEventType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonType, keyBindingType, action);
}
inline void HMUI::MouseBinder::RemoveButtonBinding(::HMUI::MouseBinder_ButtonType buttonType, ::HMUI::MouseBinder_MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "RemoveButtonBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::MouseBinder_ButtonType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::MouseBinder_MouseEventType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonType, keyBindingType, action);
}
inline void HMUI::MouseBinder::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "ClearBindings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::MouseBinder::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "ManualUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::MouseBinder* HMUI::MouseBinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::MouseBinder*>());
}
// Ctor Parameters []
constexpr ::HMUI::MouseBinder::MouseBinder() {}
