#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__MouseBinder_def.hpp"
#include "HMUI/zzzz__MouseBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__MouseBinder__MouseEventType::__MouseBinder__MouseEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__MouseBinder__MouseEventType::__MouseBinder__MouseEventType() {}
constexpr ::HMUI::__MouseBinder__MouseEventType HMUI::__MouseBinder__MouseEventType::ButtonDown{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__MouseBinder__MouseEventType HMUI::__MouseBinder__MouseEventType::ButtonUp{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__MouseBinder__MouseEventType HMUI::__MouseBinder__MouseEventType::ButtonPress{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__MouseBinder__ButtonType::__MouseBinder__ButtonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__MouseBinder__ButtonType::__MouseBinder__ButtonType() {}
constexpr ::HMUI::__MouseBinder__ButtonType HMUI::__MouseBinder__ButtonType::Primary{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__MouseBinder__ButtonType HMUI::__MouseBinder__ButtonType::Secondary{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__MouseBinder__ButtonType HMUI::__MouseBinder__ButtonType::Middle{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::MouseBinder.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2119bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "get_enabled",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(bool)>(&::HMUI::MouseBinder::set_enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2119bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "set_enabled", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2119bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2119be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddScrollBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::MouseBinder::*)(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*)>(&::HMUI::MouseBinder::AddScrollBindings)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2119ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddScrollBindings", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddScrollBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(
    &::HMUI::MouseBinder::AddScrollBinding)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2119de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddScrollBinding", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.RemoveScrollBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(
    &::HMUI::MouseBinder::RemoveScrollBinding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2119e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "RemoveScrollBinding", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddButtonBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(
    ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>*>*)>(
    &::HMUI::MouseBinder::AddButtonBindings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2119ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddButtonBindings", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddButtonBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::MouseBinder::*)(::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*)>(&::HMUI::MouseBinder::AddButtonBinding)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x211a054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddButtonBinding", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__ButtonType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__MouseEventType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.RemoveButtonBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType,
                                                                                                                ::UnityEngine::Events::UnityAction*)>(&::HMUI::MouseBinder::RemoveButtonBinding)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211a14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "RemoveButtonBinding", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__ButtonType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__MouseEventType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.ClearBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::ClearBindings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x211a1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "ClearBindings",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::ManualUpdate)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x211a2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "ManualUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& HMUI::MouseBinder::__get__enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enabled_k__BackingField;
}
constexpr bool const& HMUI::MouseBinder::__get__enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enabled_k__BackingField;
}
constexpr void HMUI::MouseBinder::__set__enabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____enabled_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*& HMUI::MouseBinder::__get__scrollBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scrollBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*> const& HMUI::MouseBinder::__get__scrollBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scrollBindings;
}
constexpr void HMUI::MouseBinder::__set__scrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scrollBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>>*&
HMUI::MouseBinder::__get__buttonBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonBindings;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>>*> const&
HMUI::MouseBinder::__get__buttonBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonBindings;
}
constexpr void HMUI::MouseBinder::__set__buttonBindings(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HMUI::MouseBinder::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "get_enabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::MouseBinder::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "set_enabled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::MouseBinder* HMUI::MouseBinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::MouseBinder*>());
}
inline void HMUI::MouseBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::MouseBinder::Init() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::MouseBinder::AddScrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddScrollBindings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
inline void HMUI::MouseBinder::AddScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddScrollBinding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void HMUI::MouseBinder::RemoveScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "RemoveScrollBinding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void HMUI::MouseBinder::AddButtonBindings(
    ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddButtonBindings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
inline void HMUI::MouseBinder::AddButtonBinding(::HMUI::__MouseBinder__ButtonType buttonType, ::HMUI::__MouseBinder__MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "AddButtonBinding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__ButtonType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__MouseEventType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonType, keyBindingType, action);
}
inline void HMUI::MouseBinder::RemoveButtonBinding(::HMUI::__MouseBinder__ButtonType buttonType, ::HMUI::__MouseBinder__MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "RemoveButtonBinding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__ButtonType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__MouseEventType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonType, keyBindingType, action);
}
inline void HMUI::MouseBinder::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "ClearBindings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::MouseBinder::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(), "ManualUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::MouseBinder::MouseBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
