#pragma once
// IWYU pragma private; include "UnityEngine/TextEditingUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__TextEditOp_def.hpp"
#include "UnityEngine/zzzz__TextSelectingUtilities_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_hasSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_hasSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4e650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_hasSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_revealCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(bool)>(&::UnityEngine::TextEditingUtilities::set_revealCursor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b4e6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_revealCursor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_stringCursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_stringCursorIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b4e72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_stringCursorIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_cursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_cursorIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b4e760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_cursorIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_cursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(int32_t)>(&::UnityEngine::TextEditingUtilities::set_cursorIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4e7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_cursorIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_cursorIndexNoValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_cursorIndexNoValidation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b4e834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_cursorIndexNoValidation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_cursorIndexNoValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(int32_t)>(&::UnityEngine::TextEditingUtilities::set_cursorIndexNoValidation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4e854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_cursorIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_selectIndexNoValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(int32_t)>(&::UnityEngine::TextEditingUtilities::set_selectIndexNoValidation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4e8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_selectIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_stringSelectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_stringSelectIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b4e924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_stringSelectIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_selectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_selectIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b4e958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_selectIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_selectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(int32_t)>(&::UnityEngine::TextEditingUtilities::set_selectIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4e9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_selectIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b4ea2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::StringW)>(&::UnityEngine::TextEditingUtilities::set_text)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b4ea34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.SetTextWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::StringW)>(&::UnityEngine::TextEditingUtilities::SetTextWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b4ea9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "SetTextWithoutNotify", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::UnityEngine::TextSelectingUtilities*, ::UnityEngine::TextCore::Text::TextHandle*, ::StringW)>(
    &::UnityEngine::TextEditingUtilities::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b4eaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextSelectingUtilities*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.UpdateImeState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::UpdateImeState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b4eabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "UpdateImeState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.ShouldUpdateImeWindowPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::ShouldUpdateImeWindowPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b4ec80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "ShouldUpdateImeWindowPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.SetImeWindowPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditingUtilities::SetImeWindowPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b4ec88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "SetImeWindowPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.GeneratePreviewString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextEditingUtilities::*)(bool)>(&::UnityEngine::TextEditingUtilities::GeneratePreviewString)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6b4ed38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "GeneratePreviewString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.EnableCursorPreviewState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::EnableCursorPreviewState)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b4ee84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "EnableCursorPreviewState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.RestoreCursorState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::RestoreCursorState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b4ee44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "RestoreCursorState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.HandleKeyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)(::UnityEngine::Event*)>(&::UnityEngine::TextEditingUtilities::HandleKeyEvent)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6b4ef28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "HandleKeyEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.PerformOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::UnityEngine::TextEditOp)>(&::UnityEngine::TextEditingUtilities::PerformOperation)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6b4f7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "PerformOperation", {}, { ::i2c::type_of<::UnityEngine::TextEditOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.MapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::TextEditOp)>(&::UnityEngine::TextEditingUtilities::MapKey)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b512d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "MapKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextEditOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.InitKeyActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::InitKeyActions)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x6b4f058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "InitKeyActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.DeleteLineBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::DeleteLineBack)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6b51088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteLineBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.DeleteWordBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::DeleteWordBack)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b50fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteWordBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.DeleteWordForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::DeleteWordForward)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b511f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteWordForward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Delete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::Delete)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6b50b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Delete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Backspace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::Backspace)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6b50c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Backspace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.DeleteSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::DeleteSelection)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6b5137c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.ReplaceSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::StringW)>(&::UnityEngine::TextEditingUtilities::ReplaceSelection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b4eb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "ReplaceSelection", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)(char16_t)>(&::UnityEngine::TextEditingUtilities::Insert)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6b518cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Insert", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.CanPaste
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::CanPaste)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b519ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "CanPaste", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Cut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::Cut)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b50ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Cut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Paste
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::Paste)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b50eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Paste", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.ReplaceNewlinesWithSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::TextEditingUtilities::ReplaceNewlinesWithSpaces)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b51aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "ReplaceNewlinesWithSpaces", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.OnBlur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::OnBlur)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b51b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "OnBlur", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.TouchScreenKeyboardShouldBeUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::TouchScreenKeyboardShouldBeUsed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b51bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "TouchScreenKeyboardShouldBeUsed", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextSelectingUtilities*& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_TextSelectingUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextSelectingUtility;
}
constexpr ::UnityEngine::TextSelectingUtilities* const& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_TextSelectingUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextSelectingUtility;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_m_TextSelectingUtility(::UnityEngine::TextSelectingUtilities* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextSelectingUtility = value;
}
constexpr ::UnityEngine::TextCore::Text::TextHandle*& UnityEngine::TextEditingUtilities::__cordl_internal_get_textHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textHandle;
}
constexpr ::UnityEngine::TextCore::Text::TextHandle* const& UnityEngine::TextEditingUtilities::__cordl_internal_get_textHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textHandle;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_textHandle(::UnityEngine::TextCore::Text::TextHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textHandle = value;
}
constexpr int32_t& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_CursorIndexSavedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorIndexSavedState;
}
constexpr int32_t const& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_CursorIndexSavedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorIndexSavedState;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_m_CursorIndexSavedState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorIndexSavedState = value;
}
constexpr bool& UnityEngine::TextEditingUtilities::__cordl_internal_get_isCompositionActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCompositionActive;
}
constexpr bool const& UnityEngine::TextEditingUtilities::__cordl_internal_get_isCompositionActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCompositionActive;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_isCompositionActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCompositionActive = value;
}
constexpr bool& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_UpdateImeWindowPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateImeWindowPosition;
}
constexpr bool const& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_UpdateImeWindowPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateImeWindowPosition;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_m_UpdateImeWindowPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateImeWindowPosition = value;
}
constexpr ::System::Action*& UnityEngine::TextEditingUtilities::__cordl_internal_get_OnTextChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnTextChanged;
}
constexpr ::System::Action* const& UnityEngine::TextEditingUtilities::__cordl_internal_get_OnTextChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnTextChanged;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_OnTextChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnTextChanged = value;
}
constexpr bool& UnityEngine::TextEditingUtilities::__cordl_internal_get_multiline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiline;
}
constexpr bool const& UnityEngine::TextEditingUtilities::__cordl_internal_get_multiline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiline;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_multiline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiline = value;
}
constexpr ::StringW& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::StringW const& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_m_Text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
constexpr char16_t& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_HighSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighSurrogate;
}
constexpr char16_t const& UnityEngine::TextEditingUtilities::__cordl_internal_get_m_HighSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighSurrogate;
}
constexpr void UnityEngine::TextEditingUtilities::__cordl_internal_set_m_HighSurrogate(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighSurrogate = value;
}
inline void UnityEngine::TextEditingUtilities::setStaticF_s_KeyEditOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>*, "s_KeyEditOps", ::UnityEngine::TextEditingUtilities*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* UnityEngine::TextEditingUtilities::getStaticF_s_KeyEditOps() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>*, "s_KeyEditOps", ::UnityEngine::TextEditingUtilities*>();
}
inline bool UnityEngine::TextEditingUtilities::get_hasSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_hasSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextEditingUtilities::set_revealCursor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_revealCursor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextEditingUtilities::get_stringCursorIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_stringCursorIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TextEditingUtilities::get_cursorIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_cursorIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextEditingUtilities::set_cursorIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_cursorIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextEditingUtilities::get_cursorIndexNoValidation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_cursorIndexNoValidation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextEditingUtilities::set_cursorIndexNoValidation(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_cursorIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextEditingUtilities::set_selectIndexNoValidation(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_selectIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextEditingUtilities::get_stringSelectIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_stringSelectIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TextEditingUtilities::get_selectIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_selectIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextEditingUtilities::set_selectIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_selectIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextEditingUtilities::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextEditingUtilities::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextEditingUtilities::SetTextWithoutNotify(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "SetTextWithoutNotify", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextEditingUtilities::_ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextSelectingUtilities*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectingUtilities, textHandle, text);
}
inline bool UnityEngine::TextEditingUtilities::UpdateImeState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "UpdateImeState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::ShouldUpdateImeWindowPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "ShouldUpdateImeWindowPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextEditingUtilities::SetImeWindowPosition(::UnityEngine::Vector2 worldPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "SetImeWindowPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPosition);
}
inline ::StringW UnityEngine::TextEditingUtilities::GeneratePreviewString(bool richText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "GeneratePreviewString", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, richText);
}
inline void UnityEngine::TextEditingUtilities::EnableCursorPreviewState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "EnableCursorPreviewState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditingUtilities::RestoreCursorState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "RestoreCursorState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::HandleKeyEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "HandleKeyEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline void UnityEngine::TextEditingUtilities::PerformOperation(::UnityEngine::TextEditOp operation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "PerformOperation", {}, { ::i2c::type_of<::UnityEngine::TextEditOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline void UnityEngine::TextEditingUtilities::MapKey(::StringW key, ::UnityEngine::TextEditOp action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "MapKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextEditOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, action);
}
inline void UnityEngine::TextEditingUtilities::InitKeyActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "InitKeyActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::DeleteLineBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteLineBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::DeleteWordBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteWordBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::DeleteWordForward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteWordForward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::Delete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Delete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::Backspace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Backspace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::DeleteSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextEditingUtilities::ReplaceSelection(::StringW replace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "ReplaceSelection", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, replace);
}
inline bool UnityEngine::TextEditingUtilities::Insert(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Insert", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool UnityEngine::TextEditingUtilities::CanPaste() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "CanPaste", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::Cut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Cut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::Paste() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Paste", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextEditingUtilities::ReplaceNewlinesWithSpaces(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "ReplaceNewlinesWithSpaces", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void UnityEngine::TextEditingUtilities::OnBlur() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "OnBlur", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::TouchScreenKeyboardShouldBeUsed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "TouchScreenKeyboardShouldBeUsed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::TextEditingUtilities* UnityEngine::TextEditingUtilities::New_ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities,
                                                                                        ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextEditingUtilities*>(selectingUtilities, textHandle, text));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditingUtilities::TextEditingUtilities() {}
