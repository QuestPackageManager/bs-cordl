#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder::__VisualElementFocusRing__DefaultFocusOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder::__VisualElementFocusRing__DefaultFocusOrder() {}
constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder::ChildOrder{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder::PositionXY{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder::PositionYX{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::*)()>(
    &::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dbc370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__get_m_AutoIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoIndex;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__get_m_AutoIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoIndex;
}
constexpr void UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__set_m_AutoIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoIndex = value;
}
constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__get_m_Focusable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Focusable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__get_m_Focusable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Focusable;
}
constexpr void UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__set_m_Focusable(::UnityEngine::UIElements::Focusable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Focusable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__get_m_IsSlot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSlot;
}
constexpr bool const& UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__get_m_IsSlot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSlot;
}
constexpr void UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__set_m_IsSlot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsSlot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*&
UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__get_m_ScopeNavigationOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScopeNavigationOrder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*> const&
UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__get_m_ScopeNavigationOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScopeNavigationOrder;
}
constexpr void UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__set_m_ScopeNavigationOrder(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScopeNavigationOrder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>());
}
inline void UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord::__VisualElementFocusRing__FocusRingRecord() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder)>(&::UnityEngine::UIElements::VisualElementFocusRing::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2dbb6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.get_focusController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController* (::UnityEngine::UIElements::VisualElementFocusRing::*)()>(
    &::UnityEngine::UIElements::VisualElementFocusRing::get_focusController)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2dbb764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(),
                                                                               "get_focusController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.get_defaultFocusOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder (
    ::UnityEngine::UIElements::VisualElementFocusRing::*)()>(&::UnityEngine::UIElements::VisualElementFocusRing::get_defaultFocusOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dbb788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(),
                                                                               "get_defaultFocusOrder", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.set_defaultFocusOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder)>(&::UnityEngine::UIElements::VisualElementFocusRing::set_defaultFocusOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dbb790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "set_defaultFocusOrder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.FocusRingAutoIndexSort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*, ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::FocusRingAutoIndexSort)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x2dbb798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "FocusRingAutoIndexSort", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.FocusRingSort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*, ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::FocusRingSort)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2dbbbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "FocusRingSort", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.DoUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)()>(
    &::UnityEngine::UIElements::VisualElementFocusRing::DoUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2dbbcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(),
                                                                               "DoUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.BuildRingForScopeRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::UnityEngine::UIElements::VisualElement*, ByRef<int32_t>, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::BuildRingForScopeRecursive)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2dbbdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "BuildRingForScopeRecursive", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.SortAndFlattenScopeLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*)>(&::UnityEngine::UIElements::VisualElementFocusRing::SortAndFlattenScopeLists)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2dbc0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "SortAndFlattenScopeLists", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetFocusableInternalIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::GetFocusableInternalIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2dbc378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetFocusableInternalIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetFocusChangeDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::FocusChangeDirection* (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(
        &::UnityEngine::UIElements::VisualElementFocusRing::GetFocusChangeDirection)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2dbc420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetFocusChangeDirection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetKeyDownFocusChangeDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::GetKeyDownFocusChangeDirection)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2dbc69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetKeyDownFocusChangeDirection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetNextFocusable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(
        &::UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusable)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2dbc8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetNextFocusable", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetNextFocusableInTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusableInTree)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2dbcc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetNextFocusableInTree", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetPreviousFocusableInTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::GetPreviousFocusableInTree)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2dbcd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetPreviousFocusableInTree", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
constexpr UnityEngine::UIElements::VisualElementFocusRing::operator ::UnityEngine::UIElements::IFocusRing*() noexcept {
  return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::VisualElementFocusRing::__get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::VisualElementFocusRing::__get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr void UnityEngine::UIElements::VisualElementFocusRing::__set_root(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder& UnityEngine::UIElements::VisualElementFocusRing::__get__defaultFocusOrder_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultFocusOrder_k__BackingField;
}
constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder const& UnityEngine::UIElements::VisualElementFocusRing::__get__defaultFocusOrder_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultFocusOrder_k__BackingField;
}
constexpr void UnityEngine::UIElements::VisualElementFocusRing::__set__defaultFocusOrder_k__BackingField(::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultFocusOrder_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*& UnityEngine::UIElements::VisualElementFocusRing::__get_m_FocusRing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusRing;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*> const&
UnityEngine::UIElements::VisualElementFocusRing::__get_m_FocusRing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusRing;
}
constexpr void
UnityEngine::UIElements::VisualElementFocusRing::__set_m_FocusRing(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FocusRing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param dfo: ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::UIElements::VisualElementFocusRing* UnityEngine::UIElements::VisualElementFocusRing::New_ctor(::UnityEngine::UIElements::VisualElement* root,
                                                                                                                    ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder dfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::VisualElementFocusRing*>(root, dfo));
}
/// @param dfo: ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder (default: static_cast<int32_t>(0x0))
inline void UnityEngine::UIElements::VisualElementFocusRing::_ctor(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder dfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root, dfo);
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::VisualElementFocusRing::get_focusController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(),
                                                                             "get_focusController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder UnityEngine::UIElements::VisualElementFocusRing::get_defaultFocusOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(),
                                                                             "get_defaultFocusOrder", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementFocusRing::set_defaultFocusOrder(::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "set_defaultFocusOrder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::VisualElementFocusRing::FocusRingAutoIndexSort(::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* a,
                                                                                       ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "FocusRingAutoIndexSort", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::VisualElementFocusRing::FocusRingSort(::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* a,
                                                                              ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "FocusRingSort", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::VisualElementFocusRing::DoUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(),
                                                                             "DoUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::VisualElementFocusRing::BuildRingForScopeRecursive(::UnityEngine::UIElements::VisualElement* ve, ByRef<int32_t> scopeIndex,
                                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* scopeList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "BuildRingForScopeRecursive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, scopeIndex, scopeList);
}
inline void UnityEngine::UIElements::VisualElementFocusRing::SortAndFlattenScopeLists(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* rootScopeList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "SortAndFlattenScopeLists", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootScopeList);
}
inline int32_t UnityEngine::UIElements::VisualElementFocusRing::GetFocusableInternalIndex(::UnityEngine::UIElements::Focusable* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetFocusableInternalIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, f);
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::VisualElementFocusRing::GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                                                 ::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetFocusChangeDirection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*, false>(this, ___internal_method, currentFocusable, e);
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::VisualElementFocusRing::GetKeyDownFocusChangeDirection(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetKeyDownFocusChangeDirection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*, false>(nullptr, ___internal_method, e);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                               ::UnityEngine::UIElements::FocusChangeDirection* direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetNextFocusable", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(this, ___internal_method, currentFocusable, direction);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusableInTree(::UnityEngine::UIElements::VisualElement* currentFocusable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetNextFocusableInTree", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(nullptr, ___internal_method, currentFocusable);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::VisualElementFocusRing::GetPreviousFocusableInTree(::UnityEngine::UIElements::VisualElement* currentFocusable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing*>::get(), "GetPreviousFocusableInTree", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(nullptr, ___internal_method, currentFocusable);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementFocusRing::VisualElementFocusRing() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
