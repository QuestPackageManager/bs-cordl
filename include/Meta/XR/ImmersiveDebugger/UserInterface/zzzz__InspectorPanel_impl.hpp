#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/InspectorPanel.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__DebugPanel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__InspectorPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ScrollView_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Toggle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__CategoryButton_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__DebugInterface_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__HierarchyItemButton_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__InspectorPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Inspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__RuntimeSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a3a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0._GetCategoryButton_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::_GetCategoryButton_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a47ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0*>::get(),
                                                 "<GetCategoryButton>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::__cordl_internal_set___4__this(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::__cordl_internal_get_button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::__cordl_internal_get_button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::__cordl_internal_set_button(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::_GetCategoryButton_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0*>::get(),
                                               "<GetCategoryButton>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0* Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0::InspectorPanel___c__DisplayClass40_0() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a3e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0._GetHierarchyItemButton_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::_GetHierarchyItemButton_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a47c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0*>::get(),
                                                 "<GetHierarchyItemButton>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0._GetHierarchyItemButton_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::_GetHierarchyItemButton_b__1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58a47e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0*>::get(),
                                                 "<GetHierarchyItemButton>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::__cordl_internal_set___4__this(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::__cordl_internal_get_button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::__cordl_internal_get_button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::__cordl_internal_set_button(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::_GetHierarchyItemButton_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0*>::get(),
                                               "<GetHierarchyItemButton>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::_GetHierarchyItemButton_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0*>::get(),
                                               "<GetHierarchyItemButton>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0* Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0::InspectorPanel___c__DisplayClass42_0() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.get_Flex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::get_Flex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58a18ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "get_Flex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.get_ScrollView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::get_ScrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a18d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "get_ScrollView",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.get_CategoryFlex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::get_CategoryFlex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58a18d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "get_CategoryFlex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.get_HierarchyFlex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::get_HierarchyFlex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58a18fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "get_HierarchyFlex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.set_CategoryBackgroundStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::set_CategoryBackgroundStyle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58a1920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "set_CategoryBackgroundStyle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::Setup)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x58a19bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.RegisterControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(::StringW, ::UnityEngine::Texture2D*, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*, ::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::RegisterControl)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x58a2130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "RegisterControl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.SelectCategoryMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectCategoryMode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58a2354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectCategoryMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.SelectHierarchyMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectHierarchyMode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58a2424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectHierarchyMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58a24f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.RegisterInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::RegisterInspector)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x58a2578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "RegisterInspector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.UnregisterInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category, bool)>(
        &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::UnregisterInspector)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x58a3224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "UnregisterInspector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.RemoveInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::Manager::Category, ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::RemoveInspector)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x58a3658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "RemoveInspector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.GetInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::GetInspector)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58a3a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "GetInspector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.GetInspectorInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector> (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
        ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category, bool,
        ::ByRef<::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>)>(
        &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::GetInspectorInternal)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x58a2d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "GetInspectorInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
                ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.GetCategoryButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(::Meta::XR::ImmersiveDebugger::Manager::Category, bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::GetCategoryButton)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x58a2fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "GetCategoryButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.ComputeIdealPreviousItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::ComputeIdealPreviousItem)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x58a3bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(),
                                                 "ComputeIdealPreviousItem", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.GetHierarchyItemButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::GetHierarchyItemButton)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x58a2954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "GetHierarchyItemButton",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.TryRemoveHierarchyItemButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::TryRemoveHierarchyItemButton)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58a37b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(),
                                                 "TryRemoveHierarchyItemButton", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.SelectCategoryButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectCategoryButton)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58a3a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectCategoryButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.SelectCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::Manager::Category)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectCategory)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x58a3fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectCategory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.ToggleFoldItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::ToggleFoldItem)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58a43c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "ToggleFoldItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.FoldItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::FoldItem)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58a4464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "FoldItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.UnfoldItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::UnfoldItem)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58a4494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "UnfoldItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.SelectHierarchyItemButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectHierarchyItemButton)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x58a3e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectHierarchyItemButton",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.SelectItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectItem)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58a44c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.SetPanelPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)(
    ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption, bool)>(&::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SetPanelPosition)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x589f720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SetPanelPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::Update)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58a4520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x58a4614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__scrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__scrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__scrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoryScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoryScrollView;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoryScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoryScrollView;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__categoryScrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____categoryScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__hierarchyScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hierarchyScrollView;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__hierarchyScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hierarchyScrollView;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__hierarchyScrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hierarchyScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::Meta::XR::ImmersiveDebugger::Manager::Category,
    ::System::Collections::Generic::Dictionary_2<
        ::System::Type*, ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>*>*&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__registries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registries;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::Meta::XR::ImmersiveDebugger::Manager::Category,
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle,
                                                                                                               ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__registries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registries;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__registries(
    ::System::Collections::Generic::Dictionary_2<
        ::Meta::XR::ImmersiveDebugger::Manager::Category,
        ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle,
                                                                                                                   ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Manager::Category, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>>*&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categories;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Manager::Category, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>>* const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categories;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__categories(
    ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Manager::Category, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____categories)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>>*&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>>* const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__items(
    ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__selectedCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCategory;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__selectedCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCategory;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__selectedCategory(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedCategory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__selectedItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedItem;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__selectedItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedItem;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__selectedItem(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoryBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoryBackground;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoryBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoryBackground;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__categoryBackground(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____categoryBackground)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__currentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__currentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__currentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPosition = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__targetPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__targetPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPosition;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__targetPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetPosition = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__lerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lerpSpeed;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__lerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lerpSpeed;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__lerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lerpSpeed = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__lerpCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lerpCompleted;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__lerpCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lerpCompleted;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__lerpCompleted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lerpCompleted = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoryBackgroundImageStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoryBackgroundImageStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const&
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoryBackgroundImageStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoryBackgroundImageStyle;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__categoryBackgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____categoryBackgroundImageStyle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__debugInterface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugInterface;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__debugInterface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugInterface;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__debugInterface(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugInterface)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__buttonsAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsAnchor;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__buttonsAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsAnchor;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__buttonsAnchor(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonsAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__selectedModeTitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedModeTitle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__selectedModeTitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedModeTitle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__selectedModeTitle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedModeTitle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__hierarchyIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hierarchyIcon;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__hierarchyIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hierarchyIcon;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__hierarchyIcon(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hierarchyIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoriesIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoriesIcon;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoriesIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoriesIcon;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__categoriesIcon(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____categoriesIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoryDiv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoryDiv;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_get__categoryDiv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categoryDiv;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::__cordl_internal_set__categoryDiv(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____categoryDiv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::get_Flex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "get_Flex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>, false>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::get_ScrollView() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "get_ScrollView",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>, false>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::get_CategoryFlex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "get_CategoryFlex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>, false>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::get_HierarchyFlex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "get_HierarchyFlex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::set_CategoryBackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "set_CategoryBackgroundStyle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::RegisterControl(::StringW buttonName, ::UnityEngine::Texture2D* icon,
                                                                            ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* style, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "RegisterControl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>, false>(this, ___internal_method, buttonName, icon, style, callback);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectCategoryMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectCategoryMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectHierarchyMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectHierarchyMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::OnTransparencyChanged() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::RegisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                              ::Meta::XR::ImmersiveDebugger::Manager::Category category) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "RegisterInspector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*, false>(this, ___internal_method, instanceHandle, category);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::UnregisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                            ::Meta::XR::ImmersiveDebugger::Manager::Category category, bool allCategories) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "UnregisterInspector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceHandle, category, allCategories);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::RemoveInspector(::Meta::XR::ImmersiveDebugger::Manager::Category category,
                                                                                        ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector* inspector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "RemoveInspector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category, inspector);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::GetInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                         ::Meta::XR::ImmersiveDebugger::Manager::Category category) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "GetInspector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*, false>(this, ___internal_method, instanceHandle, category);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector> Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::GetInspectorInternal(
    ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category category, bool createRegistries,
    ::ByRef<::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*> registry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "GetInspectorInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
              ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>, false>(this, ___internal_method, instanceHandle, category, createRegistries, registry);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::GetCategoryButton(::Meta::XR::ImmersiveDebugger::Manager::Category category, bool create) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "GetCategoryButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>, false>(this, ___internal_method, category, create);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::ComputeIdealPreviousItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "ComputeIdealPreviousItem",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>, false>(this, ___internal_method, item);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::GetHierarchyItemButton(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item, bool create) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "GetHierarchyItemButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>, false>(this, ___internal_method, item, create);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::TryRemoveHierarchyItemButton(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "TryRemoveHierarchyItemButton",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectCategoryButton(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton* categoryButton) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectCategoryButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, categoryButton);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectCategory(::Meta::XR::ImmersiveDebugger::Manager::Category category) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectCategory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::Category>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::ToggleFoldItem(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* button) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "ToggleFoldItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::FoldItem(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* button) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "FoldItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::UnfoldItem(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* button) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "UnfoldItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectHierarchyItemButton(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* button) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectHierarchyItemButton",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SelectItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SelectItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::SetPanelPosition(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption distanceOption, bool skipAnimation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "SetPanelPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distanceOption, skipAnimation);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel* Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*>());
}
/// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel"
constexpr Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::operator ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel"
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*
Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::i___Meta__XR__ImmersiveDebugger__UserInterface__IDebugUIPanel() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel::InspectorPanel() {}
