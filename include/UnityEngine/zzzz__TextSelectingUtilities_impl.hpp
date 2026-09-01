#pragma once
// IWYU pragma private; include "UnityEngine\TextSelectingUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextEditor_impl.hpp"
#include "UnityEngine/zzzz__TextSelectingUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__TextSelectOp_def.hpp"
#include "UnityEngine/zzzz__TextSelectingUtilities_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextSelectingUtilities_CharacterType::TextSelectingUtilities_CharacterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextSelectingUtilities_CharacterType::TextSelectingUtilities_CharacterType() {}
constexpr ::UnityEngine::TextSelectingUtilities_CharacterType UnityEngine::TextSelectingUtilities_CharacterType::LetterLike{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextSelectingUtilities_CharacterType UnityEngine::TextSelectingUtilities_CharacterType::Symbol{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextSelectingUtilities_CharacterType UnityEngine::TextSelectingUtilities_CharacterType::Symbol2{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextSelectingUtilities_CharacterType UnityEngine::TextSelectingUtilities_CharacterType::WhiteSpace{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::TextSelectingUtilities_CharacterType UnityEngine::TextSelectingUtilities_CharacterType::NewLine{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextSelectingUtilities_Direction::TextSelectingUtilities_Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextSelectingUtilities_Direction::TextSelectingUtilities_Direction() {}
constexpr ::UnityEngine::TextSelectingUtilities_Direction UnityEngine::TextSelectingUtilities_Direction::Forward{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextSelectingUtilities_Direction UnityEngine::TextSelectingUtilities_Direction::Backward{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_hasSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_hasSelection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b51c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_hasSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_revealCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_revealCursor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b55e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_revealCursor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.set_revealCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(bool)>(&::UnityEngine::TextSelectingUtilities::set_revealCursor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b51c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_revealCursor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_m_CharacterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_m_CharacterCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b55e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_m_CharacterCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_characterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_characterCount)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b55e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_characterCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_m_TextElementInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> (::UnityEngine::TextSelectingUtilities::*)()>(
    &::UnityEngine::TextSelectingUtilities::get_m_TextElementInfos)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b55f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_m_TextElementInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_cursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_cursorIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b51cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_cursorIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.set_cursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::set_cursorIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b51d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_cursorIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_cursorIndexNoValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_cursorIndexNoValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b51dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_cursorIndexNoValidation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.set_cursorIndexNoValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::set_cursorIndexNoValidation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b51e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_cursorIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SetCursorIndexWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::SetCursorIndexWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b55fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SetCursorIndexWithoutNotify", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_selectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_selectIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b51ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_selectIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.set_selectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::set_selectIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b51f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_selectIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.set_selectIndexNoValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::set_selectIndexNoValidation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b51e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_selectIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SetSelectIndexWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::SetSelectIndexWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b55fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SetSelectIndexWithoutNotify", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_selectedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_selectedText)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b55fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_selectedText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::TextCore::Text::TextHandle*)>(&::UnityEngine::TextSelectingUtilities::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b559d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.HandleKeyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::Event*)>(&::UnityEngine::TextSelectingUtilities::HandleKeyEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b560bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "HandleKeyEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.PerformOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::TextSelectOp)>(&::UnityEngine::TextSelectingUtilities::PerformOperation)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6b566ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "PerformOperation", {}, { ::i2c::type_of<::UnityEngine::TextSelectOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::TextSelectOp)>(&::UnityEngine::TextSelectingUtilities::MapKey)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b57558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MapKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextSelectOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.InitKeyActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::InitKeyActions)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x6b561e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "InitKeyActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ClearCursorPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::ClearCursorPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b54e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ClearCursorPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.OnFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(bool)>(&::UnityEngine::TextSelectingUtilities::OnFocus)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b57600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "OnFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectAll)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b574ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectNone)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b55134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectNone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectLeft)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b568f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectRight)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b569d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b56ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b56b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectTextEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectTextEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b56f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectTextEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectTextStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectTextStart)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b56f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectTextStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectToStartOfNextWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectToStartOfNextWord)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b56ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectToStartOfNextWord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectToEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectToEndOfPreviousWord)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b56e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectToEndOfPreviousWord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectWordRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectWordRight)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6b56b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectWordRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectWordLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectWordLeft)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6b56cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectWordLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectGraphicalLineStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectGraphicalLineStart)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b5743c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectGraphicalLineStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b57494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectGraphicalLineEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectParagraphForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectParagraphForward)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6b57120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectParagraphForward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectParagraphBackward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectParagraphBackward)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b57290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectParagraphBackward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectCurrentWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectCurrentWord)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6b57908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectCurrentWord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectCurrentParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectCurrentParagraph)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6b57c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectCurrentParagraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveRight)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6b531dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveLeft)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6b530f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveUp)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b532d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveDown)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6b533e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveLineStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveLineStart)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6b5350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveLineStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveLineEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveLineEnd)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b53638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveLineEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveGraphicalLineStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveGraphicalLineStart)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b53f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveGraphicalLineStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveGraphicalLineEnd)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b5400c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveGraphicalLineEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveTextStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveTextStart)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b53b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveTextStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveTextEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveTextEnd)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b53b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveTextEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveParagraphForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveParagraphForward)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6b53be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveParagraphForward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveParagraphBackward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveParagraphBackward)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6b53d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveParagraphBackward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveWordRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveWordRight)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6b53784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveWordRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveToStartOfNextWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveToStartOfNextWord)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b53890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveToStartOfNextWord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveToEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveToEndOfPreviousWord)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b5394c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveToEndOfPreviousWord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveWordLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveWordLeft)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6b53a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveWordLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MouseDragSelectsWholeWords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(bool)>(&::UnityEngine::TextSelectingUtilities::MouseDragSelectsWholeWords)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b57efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MouseDragSelectsWholeWords", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ExpandSelectGraphicalLineStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::ExpandSelectGraphicalLineStart)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b56f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ExpandSelectGraphicalLineStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ExpandSelectGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::ExpandSelectGraphicalLineEnd)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b57044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ExpandSelectGraphicalLineEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.DblClickSnap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::TextEditor_DblClickSnapping)>(
    &::UnityEngine::TextSelectingUtilities::DblClickSnap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b57f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "DblClickSnap", {}, { ::i2c::type_of<::UnityEngine::TextEditor_DblClickSnapping>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveCursorToPosition_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::Vector2, bool)>(
    &::UnityEngine::TextSelectingUtilities::MoveCursorToPosition_Internal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b57f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveCursorToPosition_Internal", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectToPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextSelectingUtilities::SelectToPosition)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x6b5801c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectToPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindNextSeperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::FindNextSeperator)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b57ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "FindNextSeperator", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindPrevSeperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::FindPrevSeperator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b57e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "FindPrevSeperator", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindStartOfNextWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::FindStartOfNextWord)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6b54be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "FindStartOfNextWord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::FindEndOfPreviousWord)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6b54ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "FindEndOfPreviousWord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindEndOfClassification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t, ::UnityEngine::TextSelectingUtilities_Direction)>(
    &::UnityEngine::TextSelectingUtilities::FindEndOfClassification)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b57afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(),
                                                             { "FindEndOfClassification", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextSelectingUtilities_Direction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ClampTextIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::ClampTextIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b55f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ClampTextIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.IndexOfEndOfLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::IndexOfEndOfLine)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b578c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "IndexOfEndOfLine", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.PreviousCodePointIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::PreviousCodePointIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b54de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "PreviousCodePointIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.NextCodePointIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::NextCodePointIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b57648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "NextCodePointIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.GetGraphicalLineStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::GetGraphicalLineStart)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b576ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "GetGraphicalLineStart", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.GetGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::GetGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6b577b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "GetGraphicalLineEnd", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::Copy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b54fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ClassifyChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextSelectingUtilities_CharacterType (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::ClassifyChar)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b58584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ClassifyChar", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextEditor_DblClickSnapping& UnityEngine::TextSelectingUtilities::__cordl_internal_get_dblClickSnap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dblClickSnap;
}
constexpr ::UnityEngine::TextEditor_DblClickSnapping const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_dblClickSnap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dblClickSnap;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_dblClickSnap(::UnityEngine::TextEditor_DblClickSnapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dblClickSnap = value;
}
constexpr int32_t& UnityEngine::TextSelectingUtilities::__cordl_internal_get_iAltCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iAltCursorPos;
}
constexpr int32_t const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_iAltCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iAltCursorPos;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_iAltCursorPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iAltCursorPos = value;
}
constexpr bool& UnityEngine::TextSelectingUtilities::__cordl_internal_get_hasHorizontalCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHorizontalCursorPos;
}
constexpr bool const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_hasHorizontalCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHorizontalCursorPos;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_hasHorizontalCursorPos(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasHorizontalCursorPos = value;
}
constexpr bool& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_bJustSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bJustSelected;
}
constexpr bool const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_bJustSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bJustSelected;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_m_bJustSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_bJustSelected = value;
}
constexpr bool& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_MouseDragSelectsWholeWords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseDragSelectsWholeWords;
}
constexpr bool const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_MouseDragSelectsWholeWords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseDragSelectsWholeWords;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_m_MouseDragSelectsWholeWords(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseDragSelectsWholeWords = value;
}
constexpr int32_t& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_DblClickInitPosStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DblClickInitPosStart;
}
constexpr int32_t const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_DblClickInitPosStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DblClickInitPosStart;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_m_DblClickInitPosStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DblClickInitPosStart = value;
}
constexpr int32_t& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_DblClickInitPosEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DblClickInitPosEnd;
}
constexpr int32_t const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_DblClickInitPosEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DblClickInitPosEnd;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_m_DblClickInitPosEnd(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DblClickInitPosEnd = value;
}
constexpr ::UnityEngine::TextCore::Text::TextHandle*& UnityEngine::TextSelectingUtilities::__cordl_internal_get_textHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textHandle;
}
constexpr ::UnityEngine::TextCore::Text::TextHandle* const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_textHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textHandle;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_textHandle(::UnityEngine::TextCore::Text::TextHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textHandle = value;
}
constexpr bool& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_RevealCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RevealCursor;
}
constexpr bool const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_RevealCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RevealCursor;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_m_RevealCursor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RevealCursor = value;
}
constexpr int32_t& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_CursorIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorIndex;
}
constexpr int32_t const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_CursorIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorIndex;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_m_CursorIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorIndex = value;
}
constexpr int32_t& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_SelectIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectIndex;
}
constexpr int32_t const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_SelectIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectIndex;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_m_SelectIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectIndex = value;
}
constexpr ::System::Action*& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnCursorIndexChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnCursorIndexChange;
}
constexpr ::System::Action* const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnCursorIndexChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnCursorIndexChange;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_OnCursorIndexChange(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnCursorIndexChange = value;
}
constexpr ::System::Action*& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnSelectIndexChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnSelectIndexChange;
}
constexpr ::System::Action* const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnSelectIndexChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnSelectIndexChange;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_OnSelectIndexChange(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnSelectIndexChange = value;
}
constexpr ::System::Action*& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnRevealCursorChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnRevealCursorChange;
}
constexpr ::System::Action* const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnRevealCursorChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnRevealCursorChange;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_OnRevealCursorChange(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnRevealCursorChange = value;
}
inline void UnityEngine::TextSelectingUtilities::setStaticF_s_KeySelectOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>*, "s_KeySelectOps", ::UnityEngine::TextSelectingUtilities*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* UnityEngine::TextSelectingUtilities::getStaticF_s_KeySelectOps() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>*, "s_KeySelectOps",
                                           ::UnityEngine::TextSelectingUtilities*>();
}
inline bool UnityEngine::TextSelectingUtilities::get_hasSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_hasSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextSelectingUtilities::get_revealCursor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_revealCursor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::set_revealCursor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_revealCursor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_m_CharacterCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_m_CharacterCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_characterCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_characterCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> UnityEngine::TextSelectingUtilities::get_m_TextElementInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_m_TextElementInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo>>(this, ___internal_method);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_cursorIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_cursorIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::set_cursorIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_cursorIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_cursorIndexNoValidation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_cursorIndexNoValidation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::set_cursorIndexNoValidation(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_cursorIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextSelectingUtilities::SetCursorIndexWithoutNotify(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SetCursorIndexWithoutNotify", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_selectIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_selectIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::set_selectIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_selectIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextSelectingUtilities::set_selectIndexNoValidation(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "set_selectIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextSelectingUtilities::SetSelectIndexWithoutNotify(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SetSelectIndexWithoutNotify", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::StringW UnityEngine::TextSelectingUtilities::get_selectedText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "get_selectedText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::_ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle);
}
inline bool UnityEngine::TextSelectingUtilities::HandleKeyEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "HandleKeyEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline bool UnityEngine::TextSelectingUtilities::PerformOperation(::UnityEngine::TextSelectOp operation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "PerformOperation", {}, { ::i2c::type_of<::UnityEngine::TextSelectOp>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, operation);
}
inline void UnityEngine::TextSelectingUtilities::MapKey(::StringW key, ::UnityEngine::TextSelectOp action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MapKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextSelectOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, action);
}
inline void UnityEngine::TextSelectingUtilities::InitKeyActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "InitKeyActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::ClearCursorPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ClearCursorPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::OnFocus(bool selectAll) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "OnFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectAll);
}
inline void UnityEngine::TextSelectingUtilities::SelectAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectNone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectNone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectTextEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectTextEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectTextStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectTextStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectToStartOfNextWord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectToStartOfNextWord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectToEndOfPreviousWord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectToEndOfPreviousWord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectWordRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectWordRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectWordLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectWordLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectGraphicalLineStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectGraphicalLineEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectParagraphForward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectParagraphForward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectParagraphBackward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectParagraphBackward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectCurrentWord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectCurrentWord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectCurrentParagraph() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectCurrentParagraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveLineStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveLineStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveLineEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveLineEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveGraphicalLineStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveGraphicalLineEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveTextStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveTextStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveTextEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveTextEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveParagraphForward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveParagraphForward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveParagraphBackward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveParagraphBackward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveWordRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveWordRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveToStartOfNextWord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveToStartOfNextWord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveToEndOfPreviousWord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveToEndOfPreviousWord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveWordLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveWordLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MouseDragSelectsWholeWords(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MouseDragSelectsWholeWords", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void UnityEngine::TextSelectingUtilities::ExpandSelectGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ExpandSelectGraphicalLineStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::ExpandSelectGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ExpandSelectGraphicalLineEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::DblClickSnap(::UnityEngine::TextEditor_DblClickSnapping snapping) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "DblClickSnap", {}, { ::i2c::type_of<::UnityEngine::TextEditor_DblClickSnapping>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapping);
}
inline void UnityEngine::TextSelectingUtilities::MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, bool shift) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "MoveCursorToPosition_Internal", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorPosition, shift);
}
inline void UnityEngine::TextSelectingUtilities::SelectToPosition(::UnityEngine::Vector2 cursorPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "SelectToPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorPosition);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindNextSeperator(int32_t startPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "FindNextSeperator", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, startPos);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindPrevSeperator(int32_t startPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "FindPrevSeperator", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, startPos);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindStartOfNextWord(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "FindStartOfNextWord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindEndOfPreviousWord(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "FindEndOfPreviousWord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindEndOfClassification(int32_t p, ::UnityEngine::TextSelectingUtilities_Direction dir) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(),
                                                           { "FindEndOfClassification", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextSelectingUtilities_Direction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p, dir);
}
inline int32_t UnityEngine::TextSelectingUtilities::ClampTextIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ClampTextIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::IndexOfEndOfLine(int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "IndexOfEndOfLine", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, startIndex);
}
inline int32_t UnityEngine::TextSelectingUtilities::PreviousCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "PreviousCodePointIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::NextCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "NextCodePointIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::GetGraphicalLineStart(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "GetGraphicalLineStart", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextSelectingUtilities::GetGraphicalLineEnd(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "GetGraphicalLineEnd", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline void UnityEngine::TextSelectingUtilities::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextSelectingUtilities_CharacterType UnityEngine::TextSelectingUtilities::ClassifyChar(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextSelectingUtilities*>(), { "ClassifyChar", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextSelectingUtilities_CharacterType>(this, ___internal_method, index);
}
inline ::UnityEngine::TextSelectingUtilities* UnityEngine::TextSelectingUtilities::New_ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextSelectingUtilities*>(textHandle));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextSelectingUtilities::TextSelectingUtilities() {}
