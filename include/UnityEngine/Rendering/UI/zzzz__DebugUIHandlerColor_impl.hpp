#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UI\DebugUIHandlerColor.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerColor_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerContainer_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerIndirectFloatField_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__UIFoldout_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.SetWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerColor::SetWidget)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x6801504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(float_t, bool, bool, bool, bool)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerColor::SetValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6801c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(),
                                                { "SetValue", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.SetupSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerColor::SetupSettings)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6801a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(),
                                                             { "SetupSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.OnSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerColor::OnSelection)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6801cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.OnDeselection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::OnDeselection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6801dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.OnIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(bool)>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::OnIncrement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6801de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.OnDecrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(bool)>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::OnDecrement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6801e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.OnAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::OnAction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6801e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.UpdateColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::UpdateColor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6801b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "UpdateColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerColor::Next)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6801e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6801f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetWidget_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6801f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetWidget_b__9_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(float_t)>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6801f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetWidget_b__9_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6801f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetWidget_b__9_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(float_t)>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6802004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_3", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetWidget_b__9_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_4)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6802018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetWidget_b__9_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(float_t)>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_5)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6802080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_5", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetWidget_b__9_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_6)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6802094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetWidget_b__9_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)(float_t)>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_7)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68020fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_7", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetupSettings_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetupSettings_b__11_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6802110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetupSettings>b__11_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetupSettings_b__11_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetupSettings_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6802128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetupSettings>b__11_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerColor._SetupSettings_b__11_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerColor::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetupSettings_b__11_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6802140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetupSettings>b__11_2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameLabel = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout>& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_valueToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueToggle;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_valueToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueToggle;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_valueToggle(::UnityW<::UnityEngine::Rendering::UI::UIFoldout> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_colorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_colorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorImage;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_colorImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorImage = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_fieldR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldR;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_fieldR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldR;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_fieldR(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldR = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_fieldG() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldG;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_fieldG() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldG;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_fieldG(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldG = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_fieldB() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldB;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_fieldB() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldB;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_fieldB(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldB = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_fieldA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldA;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_fieldA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldA;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_fieldA(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldA = value;
}
constexpr ::UnityEngine::Rendering::DebugUI_ColorField*& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_m_Field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr ::UnityEngine::Rendering::DebugUI_ColorField* const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_m_Field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_ColorField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Field = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_m_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_get_m_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerColor::__cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Container = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::SetValue(float_t x, bool r, bool g, bool b, bool a) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(),
                                              { "SetValue", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, r, g, b, a);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(),
                                                           { "SetupSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerColor::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNext, previous);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::OnDeselection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::OnIncrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::OnDecrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::OnAction() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::UpdateColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "UpdateColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerColor::Next() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_1(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_3(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_3", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_5(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_5", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetWidget_b__9_7(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetWidget>b__9_7", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetupSettings_b__11_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetupSettings>b__11_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetupSettings_b__11_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetupSettings>b__11_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerColor::_SetupSettings_b__11_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>(), { "<SetupSettings>b__11_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerColor* UnityEngine::Rendering::UI::DebugUIHandlerColor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerColor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerColor::DebugUIHandlerColor() {}
