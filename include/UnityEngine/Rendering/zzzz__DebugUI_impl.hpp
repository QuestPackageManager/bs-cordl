#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DebugUI.hpp"
#include "System/zzzz__Func_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GUIContent_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__ListChangedEventArgs_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObservableList_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DebugUI_Flags::DebugUI_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Flags::DebugUI_Flags() {}
constexpr ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugUI_Flags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugUI_Flags::EditorOnly{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugUI_Flags::RuntimeOnly{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugUI_Flags::EditorForceUpdate{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugUI_Flags::FrequentlyUsed{ static_cast<int32_t>(0x10) };
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Panel* (::UnityEngine::Rendering::DebugUI_Widget::*)()>(
    &::UnityEngine::Rendering::DebugUI_Widget::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.set_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)(::UnityEngine::Rendering::DebugUI_Panel*)>(
    &::UnityEngine::Rendering::DebugUI_Widget::set_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_IContainer* (::UnityEngine::Rendering::DebugUI_Widget::*)()>(
    &::UnityEngine::Rendering::DebugUI_Widget::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.set_parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)(::UnityEngine::Rendering::DebugUI_IContainer*)>(
    &::UnityEngine::Rendering::DebugUI_Widget::set_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Flags (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.set_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)(::UnityEngine::Rendering::DebugUI_Flags)>(
    &::UnityEngine::Rendering::DebugUI_Widget::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "set_flags", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)(::StringW)>(&::UnityEngine::Rendering::DebugUI_Widget::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_tooltip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::get_tooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_tooltip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.set_tooltip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)(::StringW)>(&::UnityEngine::Rendering::DebugUI_Widget::set_tooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "set_tooltip", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_queryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::get_queryPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_queryPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.set_queryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)(::StringW)>(&::UnityEngine::Rendering::DebugUI_Widget::set_queryPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "set_queryPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_isEditorOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::get_isEditorOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x676aafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_isEditorOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_isRuntimeOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::get_isRuntimeOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x676ab08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_isRuntimeOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_isInactiveInEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::get_isInactiveInEditor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x676ab14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_isInactiveInEditor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.get_isHidden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::get_isHidden)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x676a284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_isHidden", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.GenerateQueryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::GenerateQueryPath)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6769ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x676aba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget.set_nameAndTooltip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip)>(
    &::UnityEngine::Rendering::DebugUI_Widget::set_nameAndTooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x675f9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(),
                                                             { "set_nameAndTooltip", {}, { ::i2c::type_of<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Widget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Widget::*)()>(&::UnityEngine::Rendering::DebugUI_Widget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6769e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugUI_Panel*& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::UnityEngine::Rendering::DebugUI_Panel* const& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_set_m_Panel(::UnityEngine::Rendering::DebugUI_Panel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Panel = value;
}
constexpr ::UnityEngine::Rendering::DebugUI_IContainer*& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get_m_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr ::UnityEngine::Rendering::DebugUI_IContainer* const& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get_m_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr void UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_set_m_Parent(::UnityEngine::Rendering::DebugUI_IContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Parent = value;
}
constexpr ::UnityEngine::Rendering::DebugUI_Flags& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get__flags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags_k__BackingField;
}
constexpr ::UnityEngine::Rendering::DebugUI_Flags const& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get__flags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_set__flags_k__BackingField(::UnityEngine::Rendering::DebugUI_Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get__tooltip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tooltip_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get__tooltip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tooltip_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_set__tooltip_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tooltip_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get__queryPath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queryPath_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get__queryPath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queryPath_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_set__queryPath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____queryPath_k__BackingField = value;
}
constexpr ::System::Func_1<bool>*& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get_isHiddenCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHiddenCallback;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_get_isHiddenCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHiddenCallback;
}
constexpr void UnityEngine::Rendering::DebugUI_Widget::__cordl_internal_set_isHiddenCallback(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isHiddenCallback = value;
}
inline ::UnityEngine::Rendering::DebugUI_Panel* UnityEngine::Rendering::DebugUI_Widget::get_panel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Panel*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Widget::set_panel(::UnityEngine::Rendering::DebugUI_Panel* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DebugUI_IContainer* UnityEngine::Rendering::DebugUI_Widget::get_parent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_IContainer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Widget::set_parent(::UnityEngine::Rendering::DebugUI_IContainer* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugUI_Widget::get_flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Flags>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Widget::set_flags(::UnityEngine::Rendering::DebugUI_Flags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "set_flags", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::DebugUI_Widget::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Widget::set_displayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::DebugUI_Widget::get_tooltip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_tooltip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Widget::set_tooltip(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "set_tooltip", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::DebugUI_Widget::get_queryPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_queryPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Widget::set_queryPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "set_queryPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::DebugUI_Widget::get_isEditorOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_isEditorOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugUI_Widget::get_isRuntimeOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_isRuntimeOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugUI_Widget::get_isInactiveInEditor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_isInactiveInEditor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugUI_Widget::get_isHidden() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { "get_isHidden", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Widget::GenerateQueryPath() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::DebugUI_Widget::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Widget::set_nameAndTooltip(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(),
                                                                                         { "set_nameAndTooltip", {}, { ::i2c::type_of<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_Widget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Widget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::DebugUI_Widget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Widget*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Widget::DebugUI_Widget() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.get_hideDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Container::*)()>(&::UnityEngine::Rendering::DebugUI_Container::get_hideDisplayName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6769970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { "get_hideDisplayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.get_children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* (::UnityEngine::Rendering::DebugUI_Container::*)()>(
    &::UnityEngine::Rendering::DebugUI_Container::get_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67699dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { "get_children", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.set_children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Container::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugUI_Container::set_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67699e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(),
                                                             { "set_children", {}, { ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.get_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Panel* (::UnityEngine::Rendering::DebugUI_Container::*)()>(
    &::UnityEngine::Rendering::DebugUI_Container::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67699ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.set_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Container::*)(::UnityEngine::Rendering::DebugUI_Panel*)>(
    &::UnityEngine::Rendering::DebugUI_Container::set_panel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x67699f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Container::*)()>(&::UnityEngine::Rendering::DebugUI_Container::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6769ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Container::*)(::StringW)>(&::UnityEngine::Rendering::DebugUI_Container::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6769d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Container::*)(
    ::StringW, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(&::UnityEngine::Rendering::DebugUI_Container::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6769b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.GenerateQueryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Container::*)()>(&::UnityEngine::Rendering::DebugUI_Container::GenerateQueryPath)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6769e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.OnItemAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Container::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugUI_Container::OnItemAdded)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6769fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.OnItemRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Container::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugUI_Container::OnItemRemoved)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x676a0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Container.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_Container::*)()>(&::UnityEngine::Rendering::DebugUI_Container::GetHashCode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x676a15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*& UnityEngine::Rendering::DebugUI_Container::__cordl_internal_get__children_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* const&
UnityEngine::Rendering::DebugUI_Container::__cordl_internal_get__children_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Container::__cordl_internal_set__children_k__BackingField(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____children_k__BackingField = value;
}
inline bool UnityEngine::Rendering::DebugUI_Container::get_hideDisplayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { "get_hideDisplayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* UnityEngine::Rendering::DebugUI_Container::get_children() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { "get_children", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Container::set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(),
                                                           { "set_children", {}, { ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DebugUI_Panel* UnityEngine::Rendering::DebugUI_Container::get_panel() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Panel*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Container::set_panel(::UnityEngine::Rendering::DebugUI_Panel* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_Container::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Container::_ctor(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::Rendering::DebugUI_Container::_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, children);
}
inline void UnityEngine::Rendering::DebugUI_Container::GenerateQueryPath() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Container::OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                                                                   ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::DebugUI_Container::OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                                                                     ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline int32_t UnityEngine::Rendering::DebugUI_Container::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Container*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Container* UnityEngine::Rendering::DebugUI_Container::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Container*>());
}
inline ::UnityEngine::Rendering::DebugUI_Container* UnityEngine::Rendering::DebugUI_Container::New_ctor(::StringW id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Container*>(id));
}
inline ::UnityEngine::Rendering::DebugUI_Container*
UnityEngine::Rendering::DebugUI_Container::New_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Container*>(displayName, children));
}
/// @brief Convert operator to "::UnityEngine::Rendering::DebugUI_IContainer"
constexpr UnityEngine::Rendering::DebugUI_Container::operator ::UnityEngine::Rendering::DebugUI_IContainer*() noexcept {
  return static_cast<::UnityEngine::Rendering::DebugUI_IContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::DebugUI_IContainer"
constexpr ::UnityEngine::Rendering::DebugUI_IContainer* UnityEngine::Rendering::DebugUI_Container::i___UnityEngine__Rendering__DebugUI_IContainer() noexcept {
  return static_cast<::UnityEngine::Rendering::DebugUI_IContainer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Container::DebugUI_Container() {}
// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem::Foldout_DebugUI_ContextMenuItem(::StringW displayName, ::System::Action* action) noexcept {
  this->displayName = displayName;
  this->action = action;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem::Foldout_DebugUI_ContextMenuItem() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.get_isReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Foldout::*)()>(&::UnityEngine::Rendering::DebugUI_Foldout::get_isReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676a2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "get_isReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.get_columnLabels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Rendering::DebugUI_Foldout::*)()>(&::UnityEngine::Rendering::DebugUI_Foldout::get_columnLabels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676a2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "get_columnLabels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.set_columnLabels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Foldout::*)(::ArrayW<::StringW>)>(&::UnityEngine::Rendering::DebugUI_Foldout::set_columnLabels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6762a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "set_columnLabels", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.get_columnTooltips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Rendering::DebugUI_Foldout::*)()>(&::UnityEngine::Rendering::DebugUI_Foldout::get_columnTooltips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676a2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "get_columnTooltips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.set_columnTooltips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Foldout::*)(::ArrayW<::StringW>)>(&::UnityEngine::Rendering::DebugUI_Foldout::set_columnTooltips)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x676a2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "set_columnTooltips", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.get_rowContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* (::UnityEngine::Rendering::DebugUI_Foldout::*)()>(
    &::UnityEngine::Rendering::DebugUI_Foldout::get_rowContents)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x676a2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "get_rowContents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Foldout::*)()>(&::UnityEngine::Rendering::DebugUI_Foldout::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6762990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Foldout::*)(
    ::StringW, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::UnityEngine::Rendering::DebugUI_Foldout::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x676a574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>(),
                                                                 ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Foldout::*)()>(&::UnityEngine::Rendering::DebugUI_Foldout::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676a624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "GetValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.UnityEngine_Rendering_DebugUI_IValueField_GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugUI_Foldout::*)()>(
    &::UnityEngine::Rendering::DebugUI_Foldout::UnityEngine_Rendering_DebugUI_IValueField_GetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x676a62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "UnityEngine.Rendering.DebugUI.IValueField.GetValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Foldout::*)(::System::Object*)>(&::UnityEngine::Rendering::DebugUI_Foldout::SetValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x676a650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.ValidateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugUI_Foldout::*)(::System::Object*)>(
    &::UnityEngine::Rendering::DebugUI_Foldout::ValidateValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676a694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "ValidateValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Foldout.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Foldout::*)(bool)>(&::UnityEngine::Rendering::DebugUI_Foldout::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676a69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "SetValue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_opened() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opened;
}
constexpr bool const& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_opened() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opened;
}
constexpr void UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_set_opened(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opened = value;
}
constexpr bool& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_isHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHeader;
}
constexpr bool const& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_isHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHeader;
}
constexpr void UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_set_isHeader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isHeader = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem>*& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_contextMenuItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextMenuItems;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem>* const&
UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_contextMenuItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextMenuItems;
}
constexpr void
UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_set_contextMenuItems(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contextMenuItems = value;
}
constexpr bool& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_m_Dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dirty;
}
constexpr bool const& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_m_Dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dirty;
}
constexpr void UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_set_m_Dirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dirty = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_m_ColumnLabels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnLabels;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_m_ColumnLabels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnLabels;
}
constexpr void UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_set_m_ColumnLabels(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColumnLabels = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_m_ColumnTooltips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnTooltips;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_m_ColumnTooltips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnTooltips;
}
constexpr void UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_set_m_ColumnTooltips(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColumnTooltips = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_m_RowContents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RowContents;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_get_m_RowContents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RowContents;
}
constexpr void UnityEngine::Rendering::DebugUI_Foldout::__cordl_internal_set_m_RowContents(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RowContents = value;
}
inline bool UnityEngine::Rendering::DebugUI_Foldout::get_isReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "get_isReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::DebugUI_Foldout::get_columnLabels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "get_columnLabels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Foldout::set_columnLabels(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "set_columnLabels", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::DebugUI_Foldout::get_columnTooltips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "get_columnTooltips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Foldout::set_columnTooltips(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "set_columnTooltips", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* UnityEngine::Rendering::DebugUI_Foldout::get_rowContents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "get_rowContents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Foldout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Foldout::_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children,
                                                           ::ArrayW<::StringW> columnLabels, ::ArrayW<::StringW> columnTooltips) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>(),
                                                               ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, children, columnLabels, columnTooltips);
}
inline bool UnityEngine::Rendering::DebugUI_Foldout::GetValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "GetValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugUI_Foldout::UnityEngine_Rendering_DebugUI_IValueField_GetValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "UnityEngine.Rendering.DebugUI.IValueField.GetValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Foldout::SetValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::Rendering::DebugUI_Foldout::ValidateValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "ValidateValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_Foldout::SetValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Foldout*>(), { "SetValue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DebugUI_Foldout* UnityEngine::Rendering::DebugUI_Foldout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Foldout*>());
}
inline ::UnityEngine::Rendering::DebugUI_Foldout* UnityEngine::Rendering::DebugUI_Foldout::New_ctor(::StringW displayName,
                                                                                                    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children,
                                                                                                    ::ArrayW<::StringW> columnLabels, ::ArrayW<::StringW> columnTooltips) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Foldout*>(displayName, children, columnLabels, columnTooltips));
}
/// @brief Convert operator to "::UnityEngine::Rendering::DebugUI_IValueField"
constexpr UnityEngine::Rendering::DebugUI_Foldout::operator ::UnityEngine::Rendering::DebugUI_IValueField*() noexcept {
  return static_cast<::UnityEngine::Rendering::DebugUI_IValueField*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::DebugUI_IValueField"
constexpr ::UnityEngine::Rendering::DebugUI_IValueField* UnityEngine::Rendering::DebugUI_Foldout::i___UnityEngine__Rendering__DebugUI_IValueField() noexcept {
  return static_cast<::UnityEngine::Rendering::DebugUI_IValueField*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Foldout::DebugUI_Foldout() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_HBox::*)()>(&::UnityEngine::Rendering::DebugUI_HBox::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x676a6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HBox*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugUI_HBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HBox*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_HBox* UnityEngine::Rendering::DebugUI_HBox::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_HBox*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_HBox::DebugUI_HBox() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_VBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_VBox::*)()>(&::UnityEngine::Rendering::DebugUI_VBox::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x676a6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_VBox*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugUI_VBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_VBox*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_VBox* UnityEngine::Rendering::DebugUI_VBox::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_VBox*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_VBox::DebugUI_VBox() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Table_DebugUI_Row._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Table_DebugUI_Row::*)()>(&::UnityEngine::Rendering::Table_DebugUI_Row::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x675fa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Table_DebugUI_Row*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Table_DebugUI_Row::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Table_DebugUI_Row*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Table_DebugUI_Row* UnityEngine::Rendering::Table_DebugUI_Row::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Table_DebugUI_Row*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Table_DebugUI_Row::Table_DebugUI_Row() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Table._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Table::*)()>(&::UnityEngine::Rendering::DebugUI_Table::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x675eaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Table.SetColumnVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Table::*)(int32_t, bool)>(&::UnityEngine::Rendering::DebugUI_Table::SetColumnVisibility)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x675f994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { "SetColumnVisibility", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Table.GetColumnVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Table::*)(int32_t)>(&::UnityEngine::Rendering::DebugUI_Table::GetColumnVisibility)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x676a990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { "GetColumnVisibility", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Table.get_VisibleColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::UnityEngine::Rendering::DebugUI_Table::*)()>(&::UnityEngine::Rendering::DebugUI_Table::get_VisibleColumns)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x676a74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { "get_VisibleColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Table.OnItemAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Table::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*,
                                                                                                         ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugUI_Table::OnItemAdded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676a9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Table.OnItemRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Table::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*,
                                                                                                         ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugUI_Table::OnItemRemoved)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676a9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), 17 }));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::DebugUI_Table::__cordl_internal_get_isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
constexpr bool const& UnityEngine::Rendering::DebugUI_Table::__cordl_internal_get_isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
constexpr void UnityEngine::Rendering::DebugUI_Table::__cordl_internal_set_isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReadOnly = value;
}
constexpr ::ArrayW<bool>& UnityEngine::Rendering::DebugUI_Table::__cordl_internal_get_m_Header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr ::ArrayW<bool> const& UnityEngine::Rendering::DebugUI_Table::__cordl_internal_get_m_Header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr void UnityEngine::Rendering::DebugUI_Table::__cordl_internal_set_m_Header(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Header = value;
}
inline void UnityEngine::Rendering::DebugUI_Table::setStaticF_columnHeaderStyle(::UnityEngine::GUIStyle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIStyle*, "columnHeaderStyle", ::UnityEngine::Rendering::DebugUI_Table*>(std::forward<::UnityEngine::GUIStyle*>(value));
}
inline ::UnityEngine::GUIStyle* UnityEngine::Rendering::DebugUI_Table::getStaticF_columnHeaderStyle() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIStyle*, "columnHeaderStyle", ::UnityEngine::Rendering::DebugUI_Table*>();
}
inline void UnityEngine::Rendering::DebugUI_Table::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Table::SetColumnVisibility(int32_t index, bool visible) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { "SetColumnVisibility", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, visible);
}
inline bool UnityEngine::Rendering::DebugUI_Table::GetColumnVisibility(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { "GetColumnVisibility", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline ::ArrayW<bool> UnityEngine::Rendering::DebugUI_Table::get_VisibleColumns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), { "get_VisibleColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Table::OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                                                               ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::DebugUI_Table::OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                                                                 ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Table*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::UnityEngine::Rendering::DebugUI_Table* UnityEngine::Rendering::DebugUI_Table::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Table*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Table::DebugUI_Table() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "tooltip", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip::Widget_DebugUI_NameAndTooltip(::StringW name, ::StringW tooltip) noexcept {
  this->name = name;
  this->tooltip = tooltip;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip::Widget_DebugUI_NameAndTooltip() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IContainer.get_children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* (::UnityEngine::Rendering::DebugUI_IContainer::*)()>(
    &::UnityEngine::Rendering::DebugUI_IContainer::get_children)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IContainer.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_IContainer::*)()>(&::UnityEngine::Rendering::DebugUI_IContainer::get_displayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IContainer.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_IContainer::*)(::StringW)>(&::UnityEngine::Rendering::DebugUI_IContainer::set_displayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IContainer.get_queryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_IContainer::*)()>(&::UnityEngine::Rendering::DebugUI_IContainer::get_queryPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* UnityEngine::Rendering::DebugUI_IContainer::get_children() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::DebugUI_IContainer::get_displayName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_IContainer::set_displayName(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::DebugUI_IContainer::get_queryPath() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IContainer*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IValueField.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugUI_IValueField::*)()>(&::UnityEngine::Rendering::DebugUI_IValueField::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IValueField.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_IValueField::*)(::System::Object*)>(&::UnityEngine::Rendering::DebugUI_IValueField::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IValueField.ValidateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugUI_IValueField::*)(::System::Object*)>(
    &::UnityEngine::Rendering::DebugUI_IValueField::ValidateValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::Rendering::DebugUI_IValueField::GetValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_IValueField::SetValue(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::Rendering::DebugUI_IValueField::ValidateValue(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IValueField*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Button.get_action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::Rendering::DebugUI_Button::*)()>(&::UnityEngine::Rendering::DebugUI_Button::get_action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Button*>(), { "get_action", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Button.set_action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Button::*)(::System::Action*)>(&::UnityEngine::Rendering::DebugUI_Button::set_action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676ac18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Button*>(), { "set_action", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Button._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Button::*)()>(&::UnityEngine::Rendering::DebugUI_Button::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676ac20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Button*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& UnityEngine::Rendering::DebugUI_Button::__cordl_internal_get__action_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action_k__BackingField;
}
constexpr ::System::Action* const& UnityEngine::Rendering::DebugUI_Button::__cordl_internal_get__action_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Button::__cordl_internal_set__action_k__BackingField(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____action_k__BackingField = value;
}
inline ::System::Action* UnityEngine::Rendering::DebugUI_Button::get_action() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Button*>(), { "get_action", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Button::set_action(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Button*>(), { "set_action", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_Button::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Button*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Button* UnityEngine::Rendering::DebugUI_Button::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Button*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Button::DebugUI_Button() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Value.get_getter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::System::Object*>* (::UnityEngine::Rendering::DebugUI_Value::*)()>(&::UnityEngine::Rendering::DebugUI_Value::get_getter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676ac24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), { "get_getter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Value.set_getter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Value::*)(::System::Func_1<::System::Object*>*)>(&::UnityEngine::Rendering::DebugUI_Value::set_getter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676ac2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), { "set_getter", {}, { ::i2c::type_of<::System::Func_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Value._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Value::*)()>(&::UnityEngine::Rendering::DebugUI_Value::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x675dbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Value.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugUI_Value::*)()>(&::UnityEngine::Rendering::DebugUI_Value::GetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x676ac34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Value.FormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_Value::*)(::System::Object*)>(&::UnityEngine::Rendering::DebugUI_Value::FormatString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x676ac54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Object*>*& UnityEngine::Rendering::DebugUI_Value::__cordl_internal_get__getter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter_k__BackingField;
}
constexpr ::System::Func_1<::System::Object*>* const& UnityEngine::Rendering::DebugUI_Value::__cordl_internal_get__getter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Value::__cordl_internal_set__getter_k__BackingField(::System::Func_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getter_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_Value::__cordl_internal_get_refreshRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshRate;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_Value::__cordl_internal_get_refreshRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshRate;
}
constexpr void UnityEngine::Rendering::DebugUI_Value::__cordl_internal_set_refreshRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refreshRate = value;
}
constexpr ::StringW& UnityEngine::Rendering::DebugUI_Value::__cordl_internal_get_formatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatString;
}
constexpr ::StringW const& UnityEngine::Rendering::DebugUI_Value::__cordl_internal_get_formatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatString;
}
constexpr void UnityEngine::Rendering::DebugUI_Value::__cordl_internal_set_formatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___formatString = value;
}
inline ::System::Func_1<::System::Object*>* UnityEngine::Rendering::DebugUI_Value::get_getter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), { "get_getter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::System::Object*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Value::set_getter(::System::Func_1<::System::Object*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), { "set_getter", {}, { ::i2c::type_of<::System::Func_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_Value::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugUI_Value::GetValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::DebugUI_Value::FormatString(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Value*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DebugUI_Value* UnityEngine::Rendering::DebugUI_Value::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Value*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Value::DebugUI_Value() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ProgressBarValue.FormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_ProgressBarValue::*)(::System::Object*)>(
    &::UnityEngine::Rendering::DebugUI_ProgressBarValue::FormatString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x676acf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ProgressBarValue*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_ProgressBarValue*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ProgressBarValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_ProgressBarValue::*)()>(&::UnityEngine::Rendering::DebugUI_ProgressBarValue::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6762a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ProgressBarValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ProgressBarValue._FormatString_g__Remap01_2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::Rendering::DebugUI_ProgressBarValue::_FormatString_g__Remap01_2_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x676ade0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ProgressBarValue*>(),
                                                             { "<FormatString>g__Remap01|2_0", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::DebugUI_ProgressBarValue::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_ProgressBarValue::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::DebugUI_ProgressBarValue::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_ProgressBarValue::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_ProgressBarValue::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::DebugUI_ProgressBarValue::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline ::StringW UnityEngine::Rendering::DebugUI_ProgressBarValue::FormatString(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_ProgressBarValue*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_ProgressBarValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ProgressBarValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::DebugUI_ProgressBarValue::_FormatString_g__Remap01_2_0(float_t v, float_t x0, float_t y0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ProgressBarValue*>(),
                                                           { "<FormatString>g__Remap01|2_0", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v, x0, y0);
}
inline ::UnityEngine::Rendering::DebugUI_ProgressBarValue* UnityEngine::Rendering::DebugUI_ProgressBarValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_ProgressBarValue*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_ProgressBarValue::DebugUI_ProgressBarValue() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ValueTuple.get_numElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_ValueTuple::*)()>(&::UnityEngine::Rendering::DebugUI_ValueTuple::get_numElements)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676adf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ValueTuple*>(), { "get_numElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ValueTuple.get_refreshRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::DebugUI_ValueTuple::*)()>(&::UnityEngine::Rendering::DebugUI_ValueTuple::get_refreshRate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x676ae08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ValueTuple*>(), { "get_refreshRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ValueTuple._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_ValueTuple::*)()>(&::UnityEngine::Rendering::DebugUI_ValueTuple::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6762a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ValueTuple*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Value*>& UnityEngine::Rendering::DebugUI_ValueTuple::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Value*> const& UnityEngine::Rendering::DebugUI_ValueTuple::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void UnityEngine::Rendering::DebugUI_ValueTuple::__cordl_internal_set_values(::ArrayW<::UnityEngine::Rendering::DebugUI_Value*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___values = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_ValueTuple::__cordl_internal_get_pinnedElementIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pinnedElementIndex;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_ValueTuple::__cordl_internal_get_pinnedElementIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pinnedElementIndex;
}
constexpr void UnityEngine::Rendering::DebugUI_ValueTuple::__cordl_internal_set_pinnedElementIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pinnedElementIndex = value;
}
inline int32_t UnityEngine::Rendering::DebugUI_ValueTuple::get_numElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ValueTuple*>(), { "get_numElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::DebugUI_ValueTuple::get_refreshRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ValueTuple*>(), { "get_refreshRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_ValueTuple::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ValueTuple*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_ValueTuple* UnityEngine::Rendering::DebugUI_ValueTuple::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_ValueTuple*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_ValueTuple::DebugUI_ValueTuple() {}
template <typename T> constexpr ::System::Func_1<T>*& UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_get__getter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter_k__BackingField;
}
template <typename T> constexpr ::System::Func_1<T>* const& UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_get__getter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_set__getter_k__BackingField(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getter_k__BackingField = value;
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_get__setter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setter_k__BackingField;
}
template <typename T> constexpr ::System::Action_1<T>* const& UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_get__setter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setter_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_set__setter_k__BackingField(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setter_k__BackingField = value;
}
template <typename T> constexpr ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>*& UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_get_onValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onValueChanged;
}
template <typename T> constexpr ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>* const& UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_get_onValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onValueChanged;
}
template <typename T> constexpr void UnityEngine::Rendering::DebugUI_Field_1<T>::__cordl_internal_set_onValueChanged(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onValueChanged = value;
}
template <typename T> inline ::System::Func_1<T>* UnityEngine::Rendering::DebugUI_Field_1<T>::get_getter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), { "get_getter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<T>*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_Field_1<T>::set_getter(::System::Func_1<T>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), { "set_getter", {}, { ::i2c::type_of<::System::Func_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Action_1<T>* UnityEngine::Rendering::DebugUI_Field_1<T>::get_setter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), { "get_setter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_Field_1<T>::set_setter(::System::Action_1<T>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), { "set_setter", {}, { ::i2c::type_of<::System::Action_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* UnityEngine::Rendering::DebugUI_Field_1<T>::UnityEngine_Rendering_DebugUI_IValueField_ValidateValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(),
                                                                                         { "UnityEngine.Rendering.DebugUI.IValueField.ValidateValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::Rendering::DebugUI_Field_1<T>::ValidateValue(T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* UnityEngine::Rendering::DebugUI_Field_1<T>::UnityEngine_Rendering_DebugUI_IValueField_GetValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), { "UnityEngine.Rendering.DebugUI.IValueField.GetValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::DebugUI_Field_1<T>::GetValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), { "GetValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_Field_1<T>::SetValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_Field_1<T>::SetValue(T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_Field_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::DebugUI_Field_1<T>* UnityEngine::Rendering::DebugUI_Field_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Field_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::DebugUI_IValueField"
template <typename T> constexpr UnityEngine::Rendering::DebugUI_Field_1<T>::operator ::UnityEngine::Rendering::DebugUI_IValueField*() noexcept {
  return static_cast<::UnityEngine::Rendering::DebugUI_IValueField*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::DebugUI_IValueField"
template <typename T> constexpr ::UnityEngine::Rendering::DebugUI_IValueField* UnityEngine::Rendering::DebugUI_Field_1<T>::i___UnityEngine__Rendering__DebugUI_IValueField() noexcept {
  return static_cast<::UnityEngine::Rendering::DebugUI_IValueField*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DebugUI_Field_1<T>::DebugUI_Field_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_BoolField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_BoolField::*)()>(&::UnityEngine::Rendering::DebugUI_BoolField::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x676ae6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_BoolField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugUI_BoolField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_BoolField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_BoolField* UnityEngine::Rendering::DebugUI_BoolField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_BoolField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_BoolField::DebugUI_BoolField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryBoolField.get_historyGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Func_1<bool>*> (::UnityEngine::Rendering::DebugUI_HistoryBoolField::*)()>(
    &::UnityEngine::Rendering::DebugUI_HistoryBoolField::get_historyGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { "get_historyGetter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryBoolField.set_historyGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_HistoryBoolField::*)(::ArrayW<::System::Func_1<bool>*>)>(
    &::UnityEngine::Rendering::DebugUI_HistoryBoolField::set_historyGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676aeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(),
                                                                                           { "set_historyGetter", {}, { ::i2c::type_of<::ArrayW<::System::Func_1<bool>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryBoolField.get_historyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_HistoryBoolField::*)()>(&::UnityEngine::Rendering::DebugUI_HistoryBoolField::get_historyDepth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676aeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { "get_historyDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryBoolField.GetHistoryValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_HistoryBoolField::*)(int32_t)>(&::UnityEngine::Rendering::DebugUI_HistoryBoolField::GetHistoryValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x676aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { "GetHistoryValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryBoolField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_HistoryBoolField::*)()>(&::UnityEngine::Rendering::DebugUI_HistoryBoolField::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x676af10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Func_1<bool>*>& UnityEngine::Rendering::DebugUI_HistoryBoolField::__cordl_internal_get__historyGetter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyGetter_k__BackingField;
}
constexpr ::ArrayW<::System::Func_1<bool>*> const& UnityEngine::Rendering::DebugUI_HistoryBoolField::__cordl_internal_get__historyGetter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyGetter_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_HistoryBoolField::__cordl_internal_set__historyGetter_k__BackingField(::ArrayW<::System::Func_1<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____historyGetter_k__BackingField = value;
}
inline ::ArrayW<::System::Func_1<bool>*> UnityEngine::Rendering::DebugUI_HistoryBoolField::get_historyGetter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { "get_historyGetter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Func_1<bool>*>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_HistoryBoolField::set_historyGetter(::ArrayW<::System::Func_1<bool>*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { "set_historyGetter", {}, { ::i2c::type_of<::ArrayW<::System::Func_1<bool>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::DebugUI_HistoryBoolField::get_historyDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { "get_historyDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugUI_HistoryBoolField::GetHistoryValue(int32_t historyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { "GetHistoryValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, historyIndex);
}
inline void UnityEngine::Rendering::DebugUI_HistoryBoolField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_HistoryBoolField* UnityEngine::Rendering::DebugUI_HistoryBoolField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_HistoryBoolField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_HistoryBoolField::DebugUI_HistoryBoolField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IntField.ValidateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_IntField::*)(int32_t)>(&::UnityEngine::Rendering::DebugUI_IntField::ValidateValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x676af4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IntField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IntField*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_IntField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_IntField::*)()>(&::UnityEngine::Rendering::DebugUI_IntField::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x676afb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IntField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<int32_t>*& UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr ::System::Func_1<int32_t>* const& UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_set_min(::System::Func_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr ::System::Func_1<int32_t>*& UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr ::System::Func_1<int32_t>* const& UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_set_max(::System::Func_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_set_incStep(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_get_intStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intStepMult;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_get_intStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intStepMult;
}
constexpr void UnityEngine::Rendering::DebugUI_IntField::__cordl_internal_set_intStepMult(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intStepMult = value;
}
inline int32_t UnityEngine::Rendering::DebugUI_IntField::ValidateValue(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_IntField*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_IntField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_IntField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_IntField* UnityEngine::Rendering::DebugUI_IntField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_IntField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_IntField::DebugUI_IntField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_UIntField.ValidateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::DebugUI_UIntField::*)(uint32_t)>(&::UnityEngine::Rendering::DebugUI_UIntField::ValidateValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x676affc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_UIntField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_UIntField*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_UIntField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_UIntField::*)()>(&::UnityEngine::Rendering::DebugUI_UIntField::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x676b060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_UIntField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<uint32_t>*& UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr ::System::Func_1<uint32_t>* const& UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_set_min(::System::Func_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr ::System::Func_1<uint32_t>*& UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr ::System::Func_1<uint32_t>* const& UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_set_max(::System::Func_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
constexpr uint32_t& UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr uint32_t const& UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_set_incStep(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr uint32_t& UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_get_intStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intStepMult;
}
constexpr uint32_t const& UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_get_intStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intStepMult;
}
constexpr void UnityEngine::Rendering::DebugUI_UIntField::__cordl_internal_set_intStepMult(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intStepMult = value;
}
inline uint32_t UnityEngine::Rendering::DebugUI_UIntField::ValidateValue(uint32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_UIntField*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_UIntField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_UIntField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_UIntField* UnityEngine::Rendering::DebugUI_UIntField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_UIntField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_UIntField::DebugUI_UIntField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_FloatField.ValidateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::DebugUI_FloatField::*)(float_t)>(&::UnityEngine::Rendering::DebugUI_FloatField::ValidateValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x676b0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_FloatField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_FloatField*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_FloatField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_FloatField::*)()>(&::UnityEngine::Rendering::DebugUI_FloatField::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x676b10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_FloatField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<float_t>*& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr ::System::Func_1<float_t>* const& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_set_min(::System::Func_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr ::System::Func_1<float_t>*& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr ::System::Func_1<float_t>* const& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_set_max(::System::Func_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::DebugUI_FloatField::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline float_t UnityEngine::Rendering::DebugUI_FloatField::ValidateValue(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_FloatField*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_FloatField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_FloatField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_FloatField* UnityEngine::Rendering::DebugUI_FloatField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_FloatField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_FloatField::DebugUI_FloatField() {}
template <typename T> inline void UnityEngine::Rendering::EnumField_1_DebugUI___c<T>::setStaticF___9(::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*, "<>9", ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*>(
      std::forward<::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>* UnityEngine::Rendering::EnumField_1_DebugUI___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*, "<>9", ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*>();
}
template <typename T> inline void UnityEngine::Rendering::EnumField_1_DebugUI___c<T>::setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, bool>*, "<>9__6_0", ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, bool>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* UnityEngine::Rendering::EnumField_1_DebugUI___c<T>::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, bool>*, "<>9__6_0", ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*>();
}
template <typename T> inline void UnityEngine::Rendering::EnumField_1_DebugUI___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::EnumField_1_DebugUI___c<T>::_AutoFillFromType_b__6_0(::System::Reflection::FieldInfo* fieldInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*>(),
                                                                                         { "<AutoFillFromType>b__6_0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fieldInfo);
}
template <typename T> inline ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>* UnityEngine::Rendering::EnumField_1_DebugUI___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>::EnumField_1_DebugUI___c() {}
template <typename T> constexpr ::ArrayW<::UnityEngine::GUIContent*>& UnityEngine::Rendering::DebugUI_EnumField_1<T>::__cordl_internal_get_enumNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumNames;
}
template <typename T> constexpr ::ArrayW<::UnityEngine::GUIContent*> const& UnityEngine::Rendering::DebugUI_EnumField_1<T>::__cordl_internal_get_enumNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumNames;
}
template <typename T> constexpr void UnityEngine::Rendering::DebugUI_EnumField_1<T>::__cordl_internal_set_enumNames(::ArrayW<::UnityEngine::GUIContent*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumNames = value;
}
template <typename T> constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::DebugUI_EnumField_1<T>::__cordl_internal_get_m_EnumValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumValues;
}
template <typename T> constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::DebugUI_EnumField_1<T>::__cordl_internal_get_m_EnumValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumValues;
}
template <typename T> constexpr void UnityEngine::Rendering::DebugUI_EnumField_1<T>::__cordl_internal_set_m_EnumValues(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnumValues = value;
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_EnumField_1<T>::setStaticF_s_NicifyRegEx(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "s_NicifyRegEx", ::UnityEngine::Rendering::DebugUI_EnumField_1<T>*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
template <typename T> inline ::System::Text::RegularExpressions::Regex* UnityEngine::Rendering::DebugUI_EnumField_1<T>::getStaticF_s_NicifyRegEx() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "s_NicifyRegEx", ::UnityEngine::Rendering::DebugUI_EnumField_1<T>*>();
}
template <typename T> inline ::ArrayW<int32_t> UnityEngine::Rendering::DebugUI_EnumField_1<T>::get_enumValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField_1<T>*>(), { "get_enumValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_EnumField_1<T>::set_enumValues(::ArrayW<int32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField_1<T>*>(), { "set_enumValues", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_EnumField_1<T>::AutoFillFromType(::System::Type* enumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField_1<T>*>(), { "AutoFillFromType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumType);
}
template <typename T> inline void UnityEngine::Rendering::DebugUI_EnumField_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::DebugUI_EnumField_1<T>* UnityEngine::Rendering::DebugUI_EnumField_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_EnumField_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DebugUI_EnumField_1<T>::DebugUI_EnumField_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::EnumField_DebugUI___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EnumField_DebugUI___c::*)()>(&::UnityEngine::Rendering::EnumField_DebugUI___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676b670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EnumField_DebugUI___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EnumField_DebugUI___c._InitQuickSeparators_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::EnumField_DebugUI___c::*)(::UnityEngine::GUIContent*)>(
    &::UnityEngine::Rendering::EnumField_DebugUI___c::_InitQuickSeparators_b__17_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x676b674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EnumField_DebugUI___c*>(),
                                                                                           { "<InitQuickSeparators>b__17_0", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::EnumField_DebugUI___c::setStaticF___9(::UnityEngine::Rendering::EnumField_DebugUI___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::EnumField_DebugUI___c*, "<>9", ::UnityEngine::Rendering::EnumField_DebugUI___c*>(
      std::forward<::UnityEngine::Rendering::EnumField_DebugUI___c*>(value));
}
inline ::UnityEngine::Rendering::EnumField_DebugUI___c* UnityEngine::Rendering::EnumField_DebugUI___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::EnumField_DebugUI___c*, "<>9", ::UnityEngine::Rendering::EnumField_DebugUI___c*>();
}
inline void UnityEngine::Rendering::EnumField_DebugUI___c::setStaticF___9__17_0(::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::GUIContent*, ::StringW>*, "<>9__17_0", ::UnityEngine::Rendering::EnumField_DebugUI___c*>(
      std::forward<::System::Func_2<::UnityEngine::GUIContent*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* UnityEngine::Rendering::EnumField_DebugUI___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::GUIContent*, ::StringW>*, "<>9__17_0", ::UnityEngine::Rendering::EnumField_DebugUI___c*>();
}
inline void UnityEngine::Rendering::EnumField_DebugUI___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EnumField_DebugUI___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::EnumField_DebugUI___c::_InitQuickSeparators_b__17_0(::UnityEngine::GUIContent* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EnumField_DebugUI___c*>(), { "<InitQuickSeparators>b__17_0", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::EnumField_DebugUI___c* UnityEngine::Rendering::EnumField_DebugUI___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::EnumField_DebugUI___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::EnumField_DebugUI___c::EnumField_DebugUI___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.get_indexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Rendering::DebugUI_EnumField::*)()>(&::UnityEngine::Rendering::DebugUI_EnumField::get_indexes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x676b160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "get_indexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.get_getIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<int32_t>* (::UnityEngine::Rendering::DebugUI_EnumField::*)()>(&::UnityEngine::Rendering::DebugUI_EnumField::get_getIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "get_getIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.set_getIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_EnumField::*)(::System::Func_1<int32_t>*)>(&::UnityEngine::Rendering::DebugUI_EnumField::set_getIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "set_getIndex", {}, { ::i2c::type_of<::System::Func_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.get_setIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<int32_t>* (::UnityEngine::Rendering::DebugUI_EnumField::*)()>(&::UnityEngine::Rendering::DebugUI_EnumField::get_setIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "get_setIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.set_setIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_EnumField::*)(::System::Action_1<int32_t>*)>(
    &::UnityEngine::Rendering::DebugUI_EnumField::set_setIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "set_setIndex", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.get_currentIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_EnumField::*)()>(&::UnityEngine::Rendering::DebugUI_EnumField::get_currentIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x676b1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "get_currentIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.set_currentIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_EnumField::*)(int32_t)>(&::UnityEngine::Rendering::DebugUI_EnumField::set_currentIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x676b218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "set_currentIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.set_autoEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_EnumField::*)(::System::Type*)>(&::UnityEngine::Rendering::DebugUI_EnumField::set_autoEnum)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x676b238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "set_autoEnum", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.InitQuickSeparators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_EnumField::*)()>(&::UnityEngine::Rendering::DebugUI_EnumField::InitQuickSeparators)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x676b29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "InitQuickSeparators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_EnumField::*)(int32_t)>(&::UnityEngine::Rendering::DebugUI_EnumField::SetValue)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x676b4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_EnumField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_EnumField::*)()>(&::UnityEngine::Rendering::DebugUI_EnumField::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x675d828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_get_quickSeparators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickSeparators;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_get_quickSeparators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickSeparators;
}
constexpr void UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_set_quickSeparators(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quickSeparators = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_get_m_Indexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indexes;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_get_m_Indexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indexes;
}
constexpr void UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_set_m_Indexes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Indexes = value;
}
constexpr ::System::Func_1<int32_t>*& UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_get__getIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getIndex_k__BackingField;
}
constexpr ::System::Func_1<int32_t>* const& UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_get__getIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_set__getIndex_k__BackingField(::System::Func_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getIndex_k__BackingField = value;
}
constexpr ::System::Action_1<int32_t>*& UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_get__setIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setIndex_k__BackingField;
}
constexpr ::System::Action_1<int32_t>* const& UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_get__setIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_EnumField::__cordl_internal_set__setIndex_k__BackingField(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setIndex_k__BackingField = value;
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::DebugUI_EnumField::get_indexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "get_indexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::DebugUI_EnumField::get_getIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "get_getIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_EnumField::set_getIndex(::System::Func_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "set_getIndex", {}, { ::i2c::type_of<::System::Func_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<int32_t>* UnityEngine::Rendering::DebugUI_EnumField::get_setIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "get_setIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_EnumField::set_setIndex(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "set_setIndex", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::DebugUI_EnumField::get_currentIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "get_currentIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_EnumField::set_currentIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "set_currentIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_EnumField::set_autoEnum(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "set_autoEnum", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_EnumField::InitQuickSeparators() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { "InitQuickSeparators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_EnumField::SetValue(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_EnumField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_EnumField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_EnumField* UnityEngine::Rendering::DebugUI_EnumField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_EnumField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_EnumField::DebugUI_EnumField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ObjectPopupField.get_getObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* (
    ::UnityEngine::Rendering::DebugUI_ObjectPopupField::*)()>(&::UnityEngine::Rendering::DebugUI_ObjectPopupField::get_getObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectPopupField*>(), { "get_getObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ObjectPopupField.set_getObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_ObjectPopupField::*)(
    ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>*)>(&::UnityEngine::Rendering::DebugUI_ObjectPopupField::set_getObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectPopupField*>(),
                                                { "set_getObjects", {}, { ::i2c::type_of<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ObjectPopupField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_ObjectPopupField::*)()>(&::UnityEngine::Rendering::DebugUI_ObjectPopupField::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x675db08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectPopupField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>*&
UnityEngine::Rendering::DebugUI_ObjectPopupField::__cordl_internal_get__getObjects_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getObjects_k__BackingField;
}
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* const&
UnityEngine::Rendering::DebugUI_ObjectPopupField::__cordl_internal_get__getObjects_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getObjects_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_ObjectPopupField::__cordl_internal_set__getObjects_k__BackingField(
    ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getObjects_k__BackingField = value;
}
inline ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* UnityEngine::Rendering::DebugUI_ObjectPopupField::get_getObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectPopupField*>(), { "get_getObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_ObjectPopupField::set_getObjects(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectPopupField*>(),
                                              { "set_getObjects", {}, { ::i2c::type_of<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_ObjectPopupField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectPopupField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_ObjectPopupField* UnityEngine::Rendering::DebugUI_ObjectPopupField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_ObjectPopupField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_ObjectPopupField::DebugUI_ObjectPopupField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryEnumField.get_historyIndexGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Func_1<int32_t>*> (::UnityEngine::Rendering::DebugUI_HistoryEnumField::*)()>(
    &::UnityEngine::Rendering::DebugUI_HistoryEnumField::get_historyIndexGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(), { "get_historyIndexGetter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryEnumField.set_historyIndexGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_HistoryEnumField::*)(::ArrayW<::System::Func_1<int32_t>*>)>(
    &::UnityEngine::Rendering::DebugUI_HistoryEnumField::set_historyIndexGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(),
                                                                                           { "set_historyIndexGetter", {}, { ::i2c::type_of<::ArrayW<::System::Func_1<int32_t>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryEnumField.get_historyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_HistoryEnumField::*)()>(&::UnityEngine::Rendering::DebugUI_HistoryEnumField::get_historyDepth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676b720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(), { "get_historyDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryEnumField.GetHistoryValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_HistoryEnumField::*)(int32_t)>(
    &::UnityEngine::Rendering::DebugUI_HistoryEnumField::GetHistoryValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x676b738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(), { "GetHistoryValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_HistoryEnumField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_HistoryEnumField::*)()>(&::UnityEngine::Rendering::DebugUI_HistoryEnumField::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676b778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Func_1<int32_t>*>& UnityEngine::Rendering::DebugUI_HistoryEnumField::__cordl_internal_get__historyIndexGetter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyIndexGetter_k__BackingField;
}
constexpr ::ArrayW<::System::Func_1<int32_t>*> const& UnityEngine::Rendering::DebugUI_HistoryEnumField::__cordl_internal_get__historyIndexGetter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyIndexGetter_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_HistoryEnumField::__cordl_internal_set__historyIndexGetter_k__BackingField(::ArrayW<::System::Func_1<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____historyIndexGetter_k__BackingField = value;
}
inline ::ArrayW<::System::Func_1<int32_t>*> UnityEngine::Rendering::DebugUI_HistoryEnumField::get_historyIndexGetter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(), { "get_historyIndexGetter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Func_1<int32_t>*>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_HistoryEnumField::set_historyIndexGetter(::ArrayW<::System::Func_1<int32_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(),
                                                                                         { "set_historyIndexGetter", {}, { ::i2c::type_of<::ArrayW<::System::Func_1<int32_t>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::DebugUI_HistoryEnumField::get_historyDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(), { "get_historyDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::DebugUI_HistoryEnumField::GetHistoryValue(int32_t historyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(), { "GetHistoryValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, historyIndex);
}
inline void UnityEngine::Rendering::DebugUI_HistoryEnumField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_HistoryEnumField* UnityEngine::Rendering::DebugUI_HistoryEnumField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_HistoryEnumField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_HistoryEnumField::DebugUI_HistoryEnumField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_BitField.get_enumType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Rendering::DebugUI_BitField::*)()>(&::UnityEngine::Rendering::DebugUI_BitField::get_enumType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_BitField*>(), { "get_enumType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_BitField.set_enumType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_BitField::*)(::System::Type*)>(&::UnityEngine::Rendering::DebugUI_BitField::set_enumType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x676b784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_BitField*>(), { "set_enumType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_BitField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_BitField::*)()>(&::UnityEngine::Rendering::DebugUI_BitField::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x676b7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_BitField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Rendering::DebugUI_BitField::__cordl_internal_get_m_EnumType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumType;
}
constexpr ::System::Type* const& UnityEngine::Rendering::DebugUI_BitField::__cordl_internal_get_m_EnumType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumType;
}
constexpr void UnityEngine::Rendering::DebugUI_BitField::__cordl_internal_set_m_EnumType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnumType = value;
}
inline ::System::Type* UnityEngine::Rendering::DebugUI_BitField::get_enumType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_BitField*>(), { "get_enumType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_BitField::set_enumType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_BitField*>(), { "set_enumType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_BitField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_BitField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_BitField* UnityEngine::Rendering::DebugUI_BitField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_BitField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_BitField::DebugUI_BitField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_MaskField.Fill
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_MaskField::*)(::ArrayW<::StringW>)>(&::UnityEngine::Rendering::DebugUI_MaskField::Fill)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x676b850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MaskField*>(), { "Fill", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_MaskField.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_MaskField::*)(uint32_t)>(&::UnityEngine::Rendering::DebugUI_MaskField::SetValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x676bc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MaskField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_MaskField*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_MaskField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_MaskField::*)()>(&::UnityEngine::Rendering::DebugUI_MaskField::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x676bd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MaskField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugUI_MaskField::Fill(::ArrayW<::StringW> names) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MaskField*>(), { "Fill", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, names);
}
inline void UnityEngine::Rendering::DebugUI_MaskField::SetValue(uint32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_MaskField*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_MaskField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MaskField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_MaskField* UnityEngine::Rendering::DebugUI_MaskField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_MaskField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_MaskField::DebugUI_MaskField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ColorField.ValidateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::DebugUI_ColorField::*)(::UnityEngine::Color)>(
    &::UnityEngine::Rendering::DebugUI_ColorField::ValidateValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x676bdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ColorField*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_ColorField*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ColorField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_ColorField::*)()>(&::UnityEngine::Rendering::DebugUI_ColorField::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x676be30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ColorField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_hdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr bool const& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_hdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr void UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_set_hdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdr = value;
}
constexpr bool& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_showAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr bool const& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_showAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr void UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_set_showAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showAlpha = value;
}
constexpr bool& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_showPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showPicker;
}
constexpr bool const& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_showPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showPicker;
}
constexpr void UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_set_showPicker(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showPicker = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::DebugUI_ColorField::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline ::UnityEngine::Color UnityEngine::Rendering::DebugUI_ColorField::ValidateValue(::UnityEngine::Color value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_ColorField*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_ColorField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ColorField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_ColorField* UnityEngine::Rendering::DebugUI_ColorField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_ColorField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_ColorField::DebugUI_ColorField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Vector2Field._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Vector2Field::*)()>(&::UnityEngine::Rendering::DebugUI_Vector2Field::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x676be8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Vector2Field*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector2Field::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline void UnityEngine::Rendering::DebugUI_Vector2Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Vector2Field*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Vector2Field* UnityEngine::Rendering::DebugUI_Vector2Field::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Vector2Field*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Vector2Field::DebugUI_Vector2Field() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Vector3Field._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Vector3Field::*)()>(&::UnityEngine::Rendering::DebugUI_Vector3Field::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x676bee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Vector3Field*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector3Field::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline void UnityEngine::Rendering::DebugUI_Vector3Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Vector3Field*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Vector3Field* UnityEngine::Rendering::DebugUI_Vector3Field::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Vector3Field*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Vector3Field::DebugUI_Vector3Field() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Vector4Field._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Vector4Field::*)()>(&::UnityEngine::Rendering::DebugUI_Vector4Field::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x676bf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Vector4Field*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::DebugUI_Vector4Field::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline void UnityEngine::Rendering::DebugUI_Vector4Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Vector4Field*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Vector4Field* UnityEngine::Rendering::DebugUI_Vector4Field::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Vector4Field*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Vector4Field::DebugUI_Vector4Field() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ObjectField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_ObjectField::*)()>(&::UnityEngine::Rendering::DebugUI_ObjectField::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x675f9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Rendering::DebugUI_ObjectField::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& UnityEngine::Rendering::DebugUI_ObjectField::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::Rendering::DebugUI_ObjectField::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void UnityEngine::Rendering::DebugUI_ObjectField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_ObjectField* UnityEngine::Rendering::DebugUI_ObjectField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_ObjectField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_ObjectField::DebugUI_ObjectField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_ObjectListField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_ObjectListField::*)()>(&::UnityEngine::Rendering::DebugUI_ObjectListField::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x676bf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectListField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Rendering::DebugUI_ObjectListField::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& UnityEngine::Rendering::DebugUI_ObjectListField::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::Rendering::DebugUI_ObjectListField::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void UnityEngine::Rendering::DebugUI_ObjectListField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_ObjectListField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_ObjectListField* UnityEngine::Rendering::DebugUI_ObjectListField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_ObjectListField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_ObjectListField::DebugUI_ObjectListField() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style::MessageBox_DebugUI_Style(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style::MessageBox_DebugUI_Style() {}
constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style UnityEngine::Rendering::MessageBox_DebugUI_Style::Info{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style UnityEngine::Rendering::MessageBox_DebugUI_Style::Warning{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style UnityEngine::Rendering::MessageBox_DebugUI_Style::Error{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_MessageBox.get_message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_MessageBox::*)()>(&::UnityEngine::Rendering::DebugUI_MessageBox::get_message)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x676c008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MessageBox*>(), { "get_message", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_MessageBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_MessageBox::*)()>(&::UnityEngine::Rendering::DebugUI_MessageBox::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676c028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MessageBox*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style& UnityEngine::Rendering::DebugUI_MessageBox::__cordl_internal_get_style() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style const& UnityEngine::Rendering::DebugUI_MessageBox::__cordl_internal_get_style() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr void UnityEngine::Rendering::DebugUI_MessageBox::__cordl_internal_set_style(::UnityEngine::Rendering::MessageBox_DebugUI_Style value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___style = value;
}
constexpr ::System::Func_1<::StringW>*& UnityEngine::Rendering::DebugUI_MessageBox::__cordl_internal_get_messageCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageCallback;
}
constexpr ::System::Func_1<::StringW>* const& UnityEngine::Rendering::DebugUI_MessageBox::__cordl_internal_get_messageCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageCallback;
}
constexpr void UnityEngine::Rendering::DebugUI_MessageBox::__cordl_internal_set_messageCallback(::System::Func_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageCallback = value;
}
inline ::StringW UnityEngine::Rendering::DebugUI_MessageBox::get_message() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MessageBox*>(), { "get_message", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_MessageBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_MessageBox*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_MessageBox* UnityEngine::Rendering::DebugUI_MessageBox::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_MessageBox*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_MessageBox::DebugUI_MessageBox() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::*)()>(
    &::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676c188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c.__ctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::*)()>(
    &::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x676c18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>(), { "<.ctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::setStaticF___9(::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*, "<>9", ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>(
      std::forward<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>(value));
}
inline ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c* UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*, "<>9", ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>();
}
inline void UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::setStaticF___9__0_0(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__0_0", ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__0_0", ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>();
}
inline void UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::__ctor_b__0_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>(), { "<.ctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c* UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c::RuntimeDebugShadersMessageBox_DebugUI___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox::*)()>(
    &::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x676c02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox* UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox::DebugUI_RuntimeDebugShadersMessageBox() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Panel_DebugUI___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Panel_DebugUI___c::*)()>(&::UnityEngine::Rendering::Panel_DebugUI___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676c530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Panel_DebugUI___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Panel_DebugUI___c.__ctor_b__29_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Panel_DebugUI___c::*)(::UnityEngine::Rendering::DebugUI_Panel*)>(
    &::UnityEngine::Rendering::Panel_DebugUI___c::__ctor_b__29_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676c534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Panel_DebugUI___c*>(), { "<.ctor>b__29_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Panel_DebugUI___c::setStaticF___9(::UnityEngine::Rendering::Panel_DebugUI___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Panel_DebugUI___c*, "<>9", ::UnityEngine::Rendering::Panel_DebugUI___c*>(
      std::forward<::UnityEngine::Rendering::Panel_DebugUI___c*>(value));
}
inline ::UnityEngine::Rendering::Panel_DebugUI___c* UnityEngine::Rendering::Panel_DebugUI___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Panel_DebugUI___c*, "<>9", ::UnityEngine::Rendering::Panel_DebugUI___c*>();
}
inline void UnityEngine::Rendering::Panel_DebugUI___c::setStaticF___9__29_0(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*, "<>9__29_0", ::UnityEngine::Rendering::Panel_DebugUI___c*>(
      std::forward<::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* UnityEngine::Rendering::Panel_DebugUI___c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*, "<>9__29_0", ::UnityEngine::Rendering::Panel_DebugUI___c*>();
}
inline void UnityEngine::Rendering::Panel_DebugUI___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Panel_DebugUI___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Panel_DebugUI___c::__ctor_b__29_0(::UnityEngine::Rendering::DebugUI_Panel* _p0_) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Panel_DebugUI___c*>(), { "<.ctor>b__29_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::UnityEngine::Rendering::Panel_DebugUI___c* UnityEngine::Rendering::Panel_DebugUI___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Panel_DebugUI___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Panel_DebugUI___c::Panel_DebugUI___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Flags (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.set_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)(::UnityEngine::Rendering::DebugUI_Flags)>(
    &::UnityEngine::Rendering::DebugUI_Panel::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "set_flags", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)(::StringW)>(&::UnityEngine::Rendering::DebugUI_Panel::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_groupIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::get_groupIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_groupIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.set_groupIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)(int32_t)>(&::UnityEngine::Rendering::DebugUI_Panel::set_groupIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "set_groupIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_queryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::get_queryPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_queryPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_isEditorOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::get_isEditorOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x676c260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_isEditorOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_isRuntimeOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::get_isRuntimeOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x676c26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_isRuntimeOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_isInactiveInEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::get_isInactiveInEditor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x676c278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_isInactiveInEditor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_editorForceUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::get_editorForceUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x676c304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_editorForceUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.get_children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* (::UnityEngine::Rendering::DebugUI_Panel::*)()>(
    &::UnityEngine::Rendering::DebugUI_Panel::get_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_children", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.set_children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugUI_Panel::set_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(),
                                                             { "set_children", {}, { ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.add_onSetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*)>(
    &::UnityEngine::Rendering::DebugUI_Panel::add_onSetDirty)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67660a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(),
                                                             { "add_onSetDirty", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.remove_onSetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*)>(
    &::UnityEngine::Rendering::DebugUI_Panel::remove_onSetDirty)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6765d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(),
                                                             { "remove_onSetDirty", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6765eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.OnItemAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*,
                                                                                                         ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugUI_Panel::OnItemAdded)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x676c320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.OnItemRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*,
                                                                                                         ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugUI_Panel::OnItemRemoved)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x676c378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::SetDirty)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x676a024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "SetDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_Panel::*)()>(&::UnityEngine::Rendering::DebugUI_Panel::GetHashCode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x676c3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI_Panel.System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugUI_Panel::*)(::UnityEngine::Rendering::DebugUI_Panel*)>(
    &::UnityEngine::Rendering::DebugUI_Panel::System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x676c4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(),
                                                { "System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugUI_Flags& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get__flags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags_k__BackingField;
}
constexpr ::UnityEngine::Rendering::DebugUI_Flags const& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get__flags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_set__flags_k__BackingField(::UnityEngine::Rendering::DebugUI_Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get__groupIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get__groupIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_set__groupIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIndex_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get__children_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* const& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get__children_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_set__children_k__BackingField(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____children_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get_onSetDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSetDirty;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* const& UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_get_onSetDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSetDirty;
}
constexpr void UnityEngine::Rendering::DebugUI_Panel::__cordl_internal_set_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onSetDirty = value;
}
inline ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugUI_Panel::get_flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Flags>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Panel::set_flags(::UnityEngine::Rendering::DebugUI_Flags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "set_flags", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::DebugUI_Panel::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Panel::set_displayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::DebugUI_Panel::get_groupIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_groupIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Panel::set_groupIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "set_groupIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::DebugUI_Panel::get_queryPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_queryPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugUI_Panel::get_isEditorOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_isEditorOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugUI_Panel::get_isRuntimeOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_isRuntimeOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugUI_Panel::get_isInactiveInEditor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_isInactiveInEditor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugUI_Panel::get_editorForceUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_editorForceUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* UnityEngine::Rendering::DebugUI_Panel::get_children() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "get_children", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Panel::set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(),
                                                           { "set_children", {}, { ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_Panel::add_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "add_onSetDirty", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_Panel::remove_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(),
                                                           { "remove_onSetDirty", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugUI_Panel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugUI_Panel::OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                                                               ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::DebugUI_Panel::OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                                                                 ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::DebugUI_Panel::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::DebugUI_Panel::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::DebugUI_Panel::System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo(::UnityEngine::Rendering::DebugUI_Panel* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI_Panel*>(),
                                              { "System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::DebugUI_Panel* UnityEngine::Rendering::DebugUI_Panel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI_Panel*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::DebugUI_IContainer"
constexpr UnityEngine::Rendering::DebugUI_Panel::operator ::UnityEngine::Rendering::DebugUI_IContainer*() noexcept {
  return static_cast<::UnityEngine::Rendering::DebugUI_IContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::DebugUI_IContainer"
constexpr ::UnityEngine::Rendering::DebugUI_IContainer* UnityEngine::Rendering::DebugUI_Panel::i___UnityEngine__Rendering__DebugUI_IContainer() noexcept {
  return static_cast<::UnityEngine::Rendering::DebugUI_IContainer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>"
constexpr UnityEngine::Rendering::DebugUI_Panel::operator ::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>*() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>* UnityEngine::Rendering::DebugUI_Panel::i___System__IComparable_1___UnityEngine__Rendering__DebugUI_Panel__() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI_Panel::DebugUI_Panel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugUI::*)()>(&::UnityEngine::Rendering::DebugUI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676996c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugUI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugUI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI* UnityEngine::Rendering::DebugUI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugUI*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI::DebugUI() {}
