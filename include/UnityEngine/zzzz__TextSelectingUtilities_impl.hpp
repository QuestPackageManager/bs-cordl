#pragma once
// IWYU pragma private; include "UnityEngine/TextSelectingUtilities.hpp"
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
constexpr ::UnityEngine::__TextSelectingUtilities__CharacterType::__TextSelectingUtilities__CharacterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__TextSelectingUtilities__CharacterType::__TextSelectingUtilities__CharacterType() {}
constexpr ::UnityEngine::__TextSelectingUtilities__CharacterType UnityEngine::__TextSelectingUtilities__CharacterType::LetterLike{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__TextSelectingUtilities__CharacterType UnityEngine::__TextSelectingUtilities__CharacterType::Symbol{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__TextSelectingUtilities__CharacterType UnityEngine::__TextSelectingUtilities__CharacterType::Symbol2{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::__TextSelectingUtilities__CharacterType UnityEngine::__TextSelectingUtilities__CharacterType::WhiteSpace{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::__TextSelectingUtilities__CharacterType UnityEngine::__TextSelectingUtilities__CharacterType::NewLine{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__TextSelectingUtilities__Direction::__TextSelectingUtilities__Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__TextSelectingUtilities__Direction::__TextSelectingUtilities__Direction() {}
constexpr ::UnityEngine::__TextSelectingUtilities__Direction UnityEngine::__TextSelectingUtilities__Direction::Forward{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__TextSelectingUtilities__Direction UnityEngine::__TextSelectingUtilities__Direction::Backward{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_hasSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_hasSelection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x487e950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "get_hasSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_revealCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_revealCursor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4881994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "get_revealCursor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.set_revealCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(bool)>(&::UnityEngine::TextSelectingUtilities::set_revealCursor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x487e9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "set_revealCursor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_m_CharacterCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_m_CharacterCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488199c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "get_m_CharacterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_characterCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_characterCount)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x48819c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "get_characterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_m_TextElementInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> (
    ::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_m_TextElementInfos)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4881a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "get_m_TextElementInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_cursorIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_cursorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x487ea1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "get_cursorIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.set_cursorIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::set_cursorIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x487ea68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "set_cursorIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SetCursorIndexWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::SetCursorIndexWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488155c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SetCursorIndexWithoutNotify",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_selectIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_selectIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x487eab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "get_selectIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.set_selectIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(&::UnityEngine::TextSelectingUtilities::set_selectIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x487eafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "set_selectIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SetSelectIndexWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::SetSelectIndexWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4881564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SetSelectIndexWithoutNotify",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.get_selectedText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::get_selectedText)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4881ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "get_selectedText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextSelectingUtilities::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4881be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.HandleKeyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::Event*)>(
    &::UnityEngine::TextSelectingUtilities::HandleKeyEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x4881c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "HandleKeyEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.PerformOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::TextSelectOp)>(
    &::UnityEngine::TextSelectingUtilities::PerformOperation)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x48821b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "PerformOperation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextSelectOp>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::TextSelectOp)>(&::UnityEngine::TextSelectingUtilities::MapKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4882f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MapKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextSelectOp>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.InitKeyActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::InitKeyActions)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x4881db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "InitKeyActions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ClearCursorPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::ClearCursorPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x488156c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "ClearCursorPos",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.OnFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(bool)>(&::UnityEngine::TextSelectingUtilities::OnFocus)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4882ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "OnFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectAll)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4882efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectNone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectNone)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x48817e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectNone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectLeft)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x48823a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectLeft",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectRight)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x48824a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectRight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectUp)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488259c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectDown)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4882608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectDown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectTextEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectTextEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x48829b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectTextEnd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectTextStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectTextStart)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488298c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectTextStart",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectToStartOfNextWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectToStartOfNextWord)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4882930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "SelectToStartOfNextWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectToEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(
    &::UnityEngine::TextSelectingUtilities::SelectToEndOfPreviousWord)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48828d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "SelectToEndOfPreviousWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectWordRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectWordRight)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4882674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectWordRight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectWordLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectWordLeft)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x48827a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectWordLeft",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectGraphicalLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(
    &::UnityEngine::TextSelectingUtilities::SelectGraphicalLineStart)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4882e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "SelectGraphicalLineStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4882ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "SelectGraphicalLineEnd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectParagraphForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectParagraphForward)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4882bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "SelectParagraphForward", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectParagraphBackward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectParagraphBackward)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x4882ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "SelectParagraphBackward", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectCurrentWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectCurrentWord)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4883210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "SelectCurrentWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectCurrentParagraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::SelectCurrentParagraph)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4883464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "SelectCurrentParagraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveRight)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x487fbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveRight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveLeft)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x487fad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveLeft",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveUp)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x487fcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveDown)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x487fe28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveDown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveLineStart)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x487ff68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveLineStart",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveLineEnd)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x488009c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveLineEnd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveGraphicalLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveGraphicalLineStart)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4880890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "MoveGraphicalLineStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveGraphicalLineEnd)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4880944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "MoveGraphicalLineEnd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveTextStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveTextStart)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4880560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveTextStart",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveTextEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveTextEnd)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48805bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveTextEnd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveParagraphForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveParagraphForward)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4880634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "MoveParagraphForward", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveParagraphBackward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveParagraphBackward)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4880740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "MoveParagraphBackward", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveWordRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveWordRight)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x48801e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveWordRight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveToStartOfNextWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveToStartOfNextWord)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x48802d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "MoveToStartOfNextWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveToEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveToEndOfPreviousWord)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x48803a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "MoveToEndOfPreviousWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveWordLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::MoveWordLeft)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4880468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveWordLeft",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MouseDragSelectsWholeWords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(bool)>(
    &::UnityEngine::TextSelectingUtilities::MouseDragSelectsWholeWords)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4883674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MouseDragSelectsWholeWords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ExpandSelectGraphicalLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(
    &::UnityEngine::TextSelectingUtilities::ExpandSelectGraphicalLineStart)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x48829f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "ExpandSelectGraphicalLineStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ExpandSelectGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(
    &::UnityEngine::TextSelectingUtilities::ExpandSelectGraphicalLineEnd)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4882ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "ExpandSelectGraphicalLineEnd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.DblClickSnap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::__TextEditor__DblClickSnapping)>(
    &::UnityEngine::TextSelectingUtilities::DblClickSnap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488370c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "DblClickSnap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__DblClickSnapping>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.MoveCursorToPosition_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::Vector2, bool)>(
    &::UnityEngine::TextSelectingUtilities::MoveCursorToPosition_Internal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4883714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                               "MoveCursorToPosition_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.SelectToPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::TextSelectingUtilities::SelectToPosition)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x48837b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectToPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindNextSeperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::FindNextSeperator)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4883554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindNextSeperator",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindPrevSeperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::FindPrevSeperator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48835d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindPrevSeperator",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindStartOfNextWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::FindStartOfNextWord)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x48811e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindStartOfNextWord",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::FindEndOfPreviousWord)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4881104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindEndOfPreviousWord",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.FindEndOfClassification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t, ::UnityEngine::__TextSelectingUtilities__Direction)>(
    &::UnityEngine::TextSelectingUtilities::FindEndOfClassification)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4883320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindEndOfClassification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextSelectingUtilities__Direction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ClampTextIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::ClampTextIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4883ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "ClampTextIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.EnsureValidCodePointIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::EnsureValidCodePointIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4881a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "EnsureValidCodePointIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.IsValidCodePointIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::IsValidCodePointIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4883bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "IsValidCodePointIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.IndexOfEndOfLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::IndexOfEndOfLine)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x48831d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "IndexOfEndOfLine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.PreviousCodePointIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::PreviousCodePointIndex)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4881484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "PreviousCodePointIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.NextCodePointIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::NextCodePointIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x48813a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "NextCodePointIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.GetGraphicalLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::GetGraphicalLineStart)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4883040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "GetGraphicalLineStart",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.GetGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::GetGraphicalLineEnd)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4883104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "GetGraphicalLineEnd",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextSelectingUtilities::*)()>(&::UnityEngine::TextSelectingUtilities::Copy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4881674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "Copy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextSelectingUtilities.ClassifyChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__TextSelectingUtilities__CharacterType (::UnityEngine::TextSelectingUtilities::*)(int32_t)>(
    &::UnityEngine::TextSelectingUtilities::ClassifyChar)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4883a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "ClassifyChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::__TextEditor__DblClickSnapping& UnityEngine::TextSelectingUtilities::__cordl_internal_get_dblClickSnap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dblClickSnap;
}
constexpr ::UnityEngine::__TextEditor__DblClickSnapping const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_dblClickSnap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dblClickSnap;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_dblClickSnap(::UnityEngine::__TextEditor__DblClickSnapping value) {
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
constexpr ::UnityEngine::TextCore::Text::TextHandle*& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_TextHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextHandle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextHandle*> const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_m_TextHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextHandle;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_m_TextHandle(::UnityEngine::TextCore::Text::TextHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnCursorIndexChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnCursorIndexChange;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_OnCursorIndexChange(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnCursorIndexChange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnSelectIndexChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnSelectIndexChange;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnSelectIndexChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnSelectIndexChange;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_OnSelectIndexChange(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnSelectIndexChange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnRevealCursorChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnRevealCursorChange;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::TextSelectingUtilities::__cordl_internal_get_OnRevealCursorChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnRevealCursorChange;
}
constexpr void UnityEngine::TextSelectingUtilities::__cordl_internal_set_OnRevealCursorChange(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnRevealCursorChange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::TextSelectingUtilities::setStaticF_s_KeySelectOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>*, "s_KeySelectOps",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* UnityEngine::TextSelectingUtilities::getStaticF_s_KeySelectOps() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>*, "s_KeySelectOps",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get>();
}
inline bool UnityEngine::TextSelectingUtilities::get_hasSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "get_hasSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::TextSelectingUtilities::get_revealCursor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "get_revealCursor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::set_revealCursor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "set_revealCursor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_m_CharacterCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "get_m_CharacterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_characterCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "get_characterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> UnityEngine::TextSelectingUtilities::get_m_TextElementInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "get_m_TextElementInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_cursorIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "get_cursorIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::set_cursorIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "set_cursorIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::TextSelectingUtilities::SetCursorIndexWithoutNotify(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SetCursorIndexWithoutNotify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::get_selectIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "get_selectIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::set_selectIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "set_selectIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::TextSelectingUtilities::SetSelectIndexWithoutNotify(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SetSelectIndexWithoutNotify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::StringW UnityEngine::TextSelectingUtilities::get_selectedText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "get_selectedText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::TextSelectingUtilities* UnityEngine::TextSelectingUtilities::New_ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextSelectingUtilities*>(textHandle));
}
inline void UnityEngine::TextSelectingUtilities::_ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textHandle);
}
inline bool UnityEngine::TextSelectingUtilities::HandleKeyEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "HandleKeyEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline bool UnityEngine::TextSelectingUtilities::PerformOperation(::UnityEngine::TextSelectOp operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "PerformOperation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextSelectOp>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, operation);
}
inline void UnityEngine::TextSelectingUtilities::MapKey(::StringW key, ::UnityEngine::TextSelectOp action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MapKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextSelectOp>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, action);
}
inline void UnityEngine::TextSelectingUtilities::InitKeyActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "InitKeyActions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::ClearCursorPos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "ClearCursorPos",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param selectAll: bool (default: true)
inline void UnityEngine::TextSelectingUtilities::OnFocus(bool selectAll) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "OnFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectAll);
}
inline void UnityEngine::TextSelectingUtilities::SelectAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectNone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectNone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectLeft",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectRight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectDown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectTextEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectTextEnd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectTextStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectTextStart",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectToStartOfNextWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "SelectToStartOfNextWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectToEndOfPreviousWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "SelectToEndOfPreviousWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectWordRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectWordRight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectWordLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectWordLeft",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "SelectGraphicalLineStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "SelectGraphicalLineEnd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectParagraphForward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "SelectParagraphForward", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectParagraphBackward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "SelectParagraphBackward", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectCurrentWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectCurrentWord",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::SelectCurrentParagraph() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "SelectCurrentParagraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveRight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveLeft",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveDown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveLineStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveLineStart",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveLineEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveLineEnd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "MoveGraphicalLineStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "MoveGraphicalLineEnd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveTextStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveTextStart",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveTextEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveTextEnd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveParagraphForward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "MoveParagraphForward", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveParagraphBackward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "MoveParagraphBackward", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveWordRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveWordRight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveToStartOfNextWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "MoveToStartOfNextWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveToEndOfPreviousWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "MoveToEndOfPreviousWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MoveWordLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveWordLeft",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::MouseDragSelectsWholeWords(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MouseDragSelectsWholeWords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void UnityEngine::TextSelectingUtilities::ExpandSelectGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "ExpandSelectGraphicalLineStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::ExpandSelectGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(),
                                                                             "ExpandSelectGraphicalLineEnd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextSelectingUtilities::DblClickSnap(::UnityEngine::__TextEditor__DblClickSnapping snapping) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "DblClickSnap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__DblClickSnapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, snapping);
}
inline void UnityEngine::TextSelectingUtilities::MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, bool shift) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "MoveCursorToPosition_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cursorPosition, shift);
}
inline void UnityEngine::TextSelectingUtilities::SelectToPosition(::UnityEngine::Vector2 cursorPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "SelectToPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cursorPosition);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindNextSeperator(int32_t startPos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindNextSeperator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPos);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindPrevSeperator(int32_t startPos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindPrevSeperator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPos);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindStartOfNextWord(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindStartOfNextWord",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindEndOfPreviousWord(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindEndOfPreviousWord",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextSelectingUtilities::FindEndOfClassification(int32_t p, ::UnityEngine::__TextSelectingUtilities__Direction dir) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "FindEndOfClassification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextSelectingUtilities__Direction>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p, dir);
}
inline int32_t UnityEngine::TextSelectingUtilities::ClampTextIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "ClampTextIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::EnsureValidCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "EnsureValidCodePointIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline bool UnityEngine::TextSelectingUtilities::IsValidCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "IsValidCodePointIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::IndexOfEndOfLine(int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "IndexOfEndOfLine",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startIndex);
}
inline int32_t UnityEngine::TextSelectingUtilities::PreviousCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "PreviousCodePointIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::NextCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "NextCodePointIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextSelectingUtilities::GetGraphicalLineStart(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "GetGraphicalLineStart",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextSelectingUtilities::GetGraphicalLineEnd(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "GetGraphicalLineEnd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline void UnityEngine::TextSelectingUtilities::Copy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "Copy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::__TextSelectingUtilities__CharacterType UnityEngine::TextSelectingUtilities::ClassifyChar(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextSelectingUtilities*>::get(), "ClassifyChar",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__TextSelectingUtilities__CharacterType, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextSelectingUtilities::TextSelectingUtilities() {}
