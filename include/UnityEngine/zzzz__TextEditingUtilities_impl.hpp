#pragma once
// IWYU pragma private; include "UnityEngine/TextEditingUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__TextEditOp_def.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
#include "UnityEngine/zzzz__TextSelectingUtilities_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities_KeyEvent::*)(::UnityEngine::KeyCode, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::TextEditingUtilities_KeyEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fb2ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent.get_key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::UnityEngine::TextEditingUtilities_KeyEvent::*)()>(&::UnityEngine::TextEditingUtilities_KeyEvent::get_key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fb2ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { "get_key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent.get_modifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventModifiers (::UnityEngine::TextEditingUtilities_KeyEvent::*)()>(
    &::UnityEngine::TextEditingUtilities_KeyEvent::get_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fb2ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { "get_modifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextEditingUtilities_KeyEvent::*)()>(&::UnityEngine::TextEditingUtilities_KeyEvent::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6fb2ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { ::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent.PrintMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities_KeyEvent::*)(::System::Text::StringBuilder*)>(
    &::UnityEngine::TextEditingUtilities_KeyEvent::PrintMembers)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6fb2bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { "PrintMembers", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditingUtilities_KeyEvent)>(
    &::UnityEngine::TextEditingUtilities_KeyEvent::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fb2cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), ::i2c::type_of<::UnityEngine::TextEditingUtilities_KeyEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities_KeyEvent::*)()>(&::UnityEngine::TextEditingUtilities_KeyEvent::GetHashCode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6fb2db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { ::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities_KeyEvent::*)(::System::Object*)>(&::UnityEngine::TextEditingUtilities_KeyEvent::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fb2e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { ::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities_KeyEvent.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities_KeyEvent::*)(::UnityEngine::TextEditingUtilities_KeyEvent)>(
    &::UnityEngine::TextEditingUtilities_KeyEvent::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fb2cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextEditingUtilities_KeyEvent>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextEditingUtilities_KeyEvent::_ctor(::UnityEngine::KeyCode key, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, modifiers);
}
inline ::UnityEngine::KeyCode UnityEngine::TextEditingUtilities_KeyEvent::get_key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { "get_key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(*this, ___internal_method);
}
inline ::UnityEngine::EventModifiers UnityEngine::TextEditingUtilities_KeyEvent::get_modifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { "get_modifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(*this, ___internal_method);
}
inline ::StringW UnityEngine::TextEditingUtilities_KeyEvent::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities_KeyEvent::PrintMembers(::System::Text::StringBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { "PrintMembers", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, builder);
}
inline bool UnityEngine::TextEditingUtilities_KeyEvent::op_Equality(::UnityEngine::TextEditingUtilities_KeyEvent left, ::UnityEngine::TextEditingUtilities_KeyEvent right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), ::i2c::type_of<::UnityEngine::TextEditingUtilities_KeyEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::TextEditingUtilities_KeyEvent::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities_KeyEvent::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::TextEditingUtilities_KeyEvent::Equals(::UnityEngine::TextEditingUtilities_KeyEvent other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities_KeyEvent>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextEditingUtilities_KeyEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>"
constexpr UnityEngine::TextEditingUtilities_KeyEvent::operator ::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>"
constexpr ::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>* UnityEngine::TextEditingUtilities_KeyEvent::i___System__IEquatable_1___UnityEngine__TextEditingUtilities_KeyEvent_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_key_k__BackingField", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_modifiers_k__BackingField", ty:
// "::UnityEngine::EventModifiers", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextEditingUtilities_KeyEvent::TextEditingUtilities_KeyEvent(::UnityEngine::KeyCode _key_k__BackingField, ::UnityEngine::EventModifiers _modifiers_k__BackingField) noexcept {
  this->_key_k__BackingField = _key_k__BackingField;
  this->_modifiers_k__BackingField = _modifiers_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditingUtilities_KeyEvent::TextEditingUtilities_KeyEvent() {}
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_hasSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_hasSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6faf748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_hasSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_revealCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(bool)>(&::UnityEngine::TextEditingUtilities::set_revealCursor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6faf784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_revealCursor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_stringCursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_stringCursorIndex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6faf7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_stringCursorIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_cursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_cursorIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6faf7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_cursorIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_cursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(int32_t)>(&::UnityEngine::TextEditingUtilities::set_cursorIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6faf814;

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
  constexpr static std::size_t addrs = 0x6faf850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_cursorIndexNoValidation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_cursorIndexNoValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(int32_t)>(&::UnityEngine::TextEditingUtilities::set_cursorIndexNoValidation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6faf868;

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
  constexpr static std::size_t addrs = 0x6faf8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "set_selectIndexNoValidation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_stringSelectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_stringSelectIndex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6faf8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_stringSelectIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.get_selectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::get_selectIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6faf918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_selectIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_selectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(int32_t)>(&::UnityEngine::TextEditingUtilities::set_selectIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6faf930;

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
  constexpr static std::size_t addrs = 0x6faf96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::StringW)>(&::UnityEngine::TextEditingUtilities::set_text)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6faf974;

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
  constexpr static std::size_t addrs = 0x6faf9dc;

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
  constexpr static std::size_t addrs = 0x6faf9e4;

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
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6faf9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "UpdateImeState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.ShouldUpdateImeWindowPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::ShouldUpdateImeWindowPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fafbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "ShouldUpdateImeWindowPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.SetImeWindowPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditingUtilities::SetImeWindowPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6fafbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "SetImeWindowPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.GeneratePreviewString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextEditingUtilities::*)(bool)>(&::UnityEngine::TextEditingUtilities::GeneratePreviewString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6fafcac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "GeneratePreviewString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.EnableCursorPreviewState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::EnableCursorPreviewState)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6fafe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "EnableCursorPreviewState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.RestoreCursorState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::RestoreCursorState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fafdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "RestoreCursorState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.HandleKeyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)(::UnityEngine::KeyCode, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::TextEditingUtilities::HandleKeyEvent)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6faff30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(),
                                                             { "HandleKeyEvent", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.TextEditOpFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::TextEditOp> (*)(::UnityEngine::KeyCode, ::UnityEngine::EventModifiers, bool)>(
    &::UnityEngine::TextEditingUtilities::TextEditOpFromEnum)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6fb0014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(),
                                                { "TextEditOpFromEnum", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::UnityEngine::EventModifiers>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.PerformOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::UnityEngine::TextEditOp)>(&::UnityEngine::TextEditingUtilities::PerformOperation)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6fb0244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "PerformOperation", {}, { ::i2c::type_of<::UnityEngine::TextEditOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.DeleteLineBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::DeleteLineBack)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6fb0e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteLineBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.DeleteWordBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::DeleteWordBack)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6fb0cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteWordBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.DeleteWordForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::DeleteWordForward)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6fb1020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteWordForward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Delete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::Delete)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6fb0620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Delete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Backspace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::Backspace)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6fb0840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Backspace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.DeleteSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::DeleteSelection)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6fb1128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "DeleteSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.ReplaceSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)(::StringW)>(&::UnityEngine::TextEditingUtilities::ReplaceSelection)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6fafaa4;

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
  constexpr static std::size_t addrs = 0x6fb1344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Insert", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.CanPaste
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::CanPaste)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6fb1464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "CanPaste", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Cut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::Cut)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6fb0bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Cut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.Paste
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::Paste)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6fb0c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "Paste", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.ReplaceNewlinesWithSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::TextEditingUtilities::ReplaceNewlinesWithSpaces)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6fb14cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "ReplaceNewlinesWithSpaces", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.OnBlur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::OnBlur)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6fb1568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "OnBlur", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.TouchScreenKeyboardCanBeUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::TouchScreenKeyboardCanBeUsed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6fb15c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "TouchScreenKeyboardCanBeUsed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditingUtilities.PhysicalKeyboardCanBeUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditingUtilities::*)()>(&::UnityEngine::TextEditingUtilities::PhysicalKeyboardCanBeUsed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6fb1664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "PhysicalKeyboardCanBeUsed", {}, {} })));
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
inline void UnityEngine::TextEditingUtilities::setStaticF_s_GlobalKeyMappings(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*, "s_GlobalKeyMappings",
                                    ::UnityEngine::TextEditingUtilities*>(
      std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*
UnityEngine::TextEditingUtilities::getStaticF_s_GlobalKeyMappings() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*,
                                           "s_GlobalKeyMappings", ::UnityEngine::TextEditingUtilities*>();
}
inline void UnityEngine::TextEditingUtilities::setStaticF_s_MacKeyMappings(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*, "s_MacKeyMappings",
                                    ::UnityEngine::TextEditingUtilities*>(
      std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*
UnityEngine::TextEditingUtilities::getStaticF_s_MacKeyMappings() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*, "s_MacKeyMappings",
                                           ::UnityEngine::TextEditingUtilities*>();
}
inline void UnityEngine::TextEditingUtilities::setStaticF_s_WindowsLinuxKeyMappings(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*,
                                    "s_WindowsLinuxKeyMappings", ::UnityEngine::TextEditingUtilities*>(
      std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*
UnityEngine::TextEditingUtilities::getStaticF_s_WindowsLinuxKeyMappings() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>*,
                                           "s_WindowsLinuxKeyMappings", ::UnityEngine::TextEditingUtilities*>();
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
inline bool UnityEngine::TextEditingUtilities::HandleKeyEvent(::UnityEngine::KeyCode key, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(),
                                                           { "HandleKeyEvent", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, modifiers);
}
inline ::System::Nullable_1<::UnityEngine::TextEditOp> UnityEngine::TextEditingUtilities::TextEditOpFromEnum(::UnityEngine::KeyCode key, ::UnityEngine::EventModifiers modifiers, bool IsMacOsFamily) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(),
                                              { "TextEditOpFromEnum", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::UnityEngine::EventModifiers>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::TextEditOp>>(nullptr, ___internal_method, key, modifiers, IsMacOsFamily);
}
inline void UnityEngine::TextEditingUtilities::PerformOperation(::UnityEngine::TextEditOp operation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "PerformOperation", {}, { ::i2c::type_of<::UnityEngine::TextEditOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
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
inline bool UnityEngine::TextEditingUtilities::TouchScreenKeyboardCanBeUsed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "TouchScreenKeyboardCanBeUsed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditingUtilities::PhysicalKeyboardCanBeUsed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextEditingUtilities*>(), { "PhysicalKeyboardCanBeUsed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::TextEditingUtilities* UnityEngine::TextEditingUtilities::New_ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities,
                                                                                        ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextEditingUtilities*>(selectingUtilities, textHandle, text));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditingUtilities::TextEditingUtilities() {}
