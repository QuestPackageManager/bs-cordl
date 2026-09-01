#pragma once
// IWYU pragma private; include "GlobalNamespace\DropdownDialogPromptViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__DropdownDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__DropdownDialogPromptViewController_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel.get_component
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::*)()>(
    &::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::get_component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a18584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>(), { "get_component", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel.get_label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TextMeshProUGUI> (::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::*)()>(
    &::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::get_label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1858c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>(), { "get_label", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::*)()>(
    &::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a18594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::__cordl_internal_get__component() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::__cordl_internal_get__component() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::__cordl_internal_set__component(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____component = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::__cordl_internal_get__label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::__cordl_internal_get__label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::__cordl_internal_set__label(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____label = value;
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::get_component() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>(), { "get_component", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline ::UnityW<::TMPro::TextMeshProUGUI> GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::get_label() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>(), { "get_label", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TextMeshProUGUI>>(this, ___internal_method);
}
inline void GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel* GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel::DropdownDialogPromptViewController_ButtonAndLabel() {}
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController___c::*)()>(&::GlobalNamespace::DropdownDialogPromptViewController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a185ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController___c._Init_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DropdownDialogPromptViewController___c::*)(::System::ValueTuple_2<::StringW, int32_t>)>(
    &::GlobalNamespace::DropdownDialogPromptViewController___c::_Init_b__12_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a185f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController___c*>(),
                                                                                           { "<Init>b__12_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, int32_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DropdownDialogPromptViewController___c::setStaticF___9(::GlobalNamespace::DropdownDialogPromptViewController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::DropdownDialogPromptViewController___c*, "<>9", ::GlobalNamespace::DropdownDialogPromptViewController___c*>(
      std::forward<::GlobalNamespace::DropdownDialogPromptViewController___c*>(value));
}
inline ::GlobalNamespace::DropdownDialogPromptViewController___c* GlobalNamespace::DropdownDialogPromptViewController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::DropdownDialogPromptViewController___c*, "<>9", ::GlobalNamespace::DropdownDialogPromptViewController___c*>();
}
inline void GlobalNamespace::DropdownDialogPromptViewController___c::setStaticF___9__12_0(::System::Func_2<::System::ValueTuple_2<::StringW, int32_t>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, int32_t>, ::StringW>*, "<>9__12_0", ::GlobalNamespace::DropdownDialogPromptViewController___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::StringW, int32_t>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::StringW, int32_t>, ::StringW>* GlobalNamespace::DropdownDialogPromptViewController___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, int32_t>, ::StringW>*, "<>9__12_0", ::GlobalNamespace::DropdownDialogPromptViewController___c*>();
}
inline void GlobalNamespace::DropdownDialogPromptViewController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DropdownDialogPromptViewController___c::_Init_b__12_0(::System::ValueTuple_2<::StringW, int32_t> e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController___c*>(),
                                                                                         { "<Init>b__12_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, e);
}
inline ::GlobalNamespace::DropdownDialogPromptViewController___c* GlobalNamespace::DropdownDialogPromptViewController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DropdownDialogPromptViewController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DropdownDialogPromptViewController___c::DropdownDialogPromptViewController___c() {}
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a18450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0._DidActivate_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::_DidActivate_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a185f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0*>(), { "<DidActivate>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::__cordl_internal_get_buttonNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonNum;
}
constexpr int32_t const& GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::__cordl_internal_get_buttonNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonNum;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::__cordl_internal_set_buttonNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonNum = value;
}
constexpr ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController>& GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> const& GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::_DidActivate_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0*>(), { "<DidActivate>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0* GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0::DropdownDialogPromptViewController___c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController.get_selectedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DropdownDialogPromptViewController::*)()>(
    &::GlobalNamespace::DropdownDialogPromptViewController::get_selectedValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a17ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), { "get_selectedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController.add__didFinishAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController::*)(::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*)>(
    &::GlobalNamespace::DropdownDialogPromptViewController::add__didFinishAction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a17edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(),
                                                             { "add__didFinishAction", {}, { ::i2c::type_of<::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController.remove__didFinishAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController::*)(::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*)>(
    &::GlobalNamespace::DropdownDialogPromptViewController::remove__didFinishAction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a17f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(),
                                                             { "remove__didFinishAction", {}, { ::i2c::type_of<::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController::*)(
    ::StringW, ::StringW, ::StringW, ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>, ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*, ::ArrayW<::StringW>)>(
    &::GlobalNamespace::DropdownDialogPromptViewController::Init)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5a1805c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(),
                            { "Init",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>(),
                                ::i2c::type_of<::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::DropdownDialogPromptViewController::DidActivate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5a182d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController::*)(bool, bool)>(
    &::GlobalNamespace::DropdownDialogPromptViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a18454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController.OnButtonClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController::*)(int32_t)>(
    &::GlobalNamespace::DropdownDialogPromptViewController::OnButtonClick)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a18460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), { "OnButtonClick", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DropdownDialogPromptViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropdownDialogPromptViewController::*)()>(&::GlobalNamespace::DropdownDialogPromptViewController::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a184e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__titleText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__titleText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleText;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_set__titleText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____titleText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__messageText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__messageText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageText;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_set__messageText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____messageText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__dropdownLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdownLabel;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__dropdownLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdownLabel;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_set__dropdownLabel(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dropdownLabel = value;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__dropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__dropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdown;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_set__dropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dropdown = value;
}
constexpr ::ArrayW<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__buttons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttons;
}
constexpr ::ArrayW<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*> const& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__buttons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttons;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_set__buttons(::ArrayW<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttons = value;
}
constexpr ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__didFinishAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishAction;
}
constexpr ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* const& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__didFinishAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishAction;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_set__didFinishAction(::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didFinishAction = value;
}
constexpr ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__dropdownValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdownValues;
}
constexpr ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>> const& GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_get__dropdownValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdownValues;
}
constexpr void GlobalNamespace::DropdownDialogPromptViewController::__cordl_internal_set__dropdownValues(::ArrayW<::System::ValueTuple_2<::StringW, int32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dropdownValues = value;
}
inline int32_t GlobalNamespace::DropdownDialogPromptViewController::get_selectedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), { "get_selectedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::DropdownDialogPromptViewController::add__didFinishAction(::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(),
                                                           { "add__didFinishAction", {}, { ::i2c::type_of<::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DropdownDialogPromptViewController::remove__didFinishAction(::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(),
                                                           { "remove__didFinishAction", {}, { ::i2c::type_of<::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DropdownDialogPromptViewController::Init(::StringW title, ::StringW message, ::StringW dropdownLabel, ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>> dropdownValues,
                                                                      ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* didFinishAction, ::ArrayW<::StringW> buttonTexts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>(),
                              ::i2c::type_of<::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, message, dropdownLabel, dropdownValues, didFinishAction, buttonTexts);
}
inline void GlobalNamespace::DropdownDialogPromptViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::DropdownDialogPromptViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::DropdownDialogPromptViewController::OnButtonClick(int32_t buttonNum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), { "OnButtonClick", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonNum);
}
inline void GlobalNamespace::DropdownDialogPromptViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DropdownDialogPromptViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DropdownDialogPromptViewController* GlobalNamespace::DropdownDialogPromptViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DropdownDialogPromptViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DropdownDialogPromptViewController::DropdownDialogPromptViewController() {}
