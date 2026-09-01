#pragma once
// IWYU pragma private; include "UnityEngine\GUIContent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIContent.add_OnTextChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::System::Action*)>(&::UnityEngine::GUIContent::add_OnTextChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b43c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "add_OnTextChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.remove_OnTextChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::System::Action*)>(&::UnityEngine::GUIContent::remove_OnTextChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b43d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "remove_OnTextChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GUIContent::*)()>(&::UnityEngine::GUIContent::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b43dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::StringW)>(&::UnityEngine::GUIContent::set_text)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b43dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.get_textWithWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GUIContent::*)()>(&::UnityEngine::GUIContent::get_textWithWhitespace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b43e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "get_textWithWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.set_textWithWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::StringW)>(&::UnityEngine::GUIContent::set_textWithWhitespace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b43e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "set_textWithWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.SetTextWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::StringW)>(&::UnityEngine::GUIContent::SetTextWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b43f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "SetTextWithoutNotify", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.set_image
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::UnityEngine::Texture*)>(&::UnityEngine::GUIContent::set_image)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b43f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "set_image", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.get_tooltip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GUIContent::*)()>(&::UnityEngine::GUIContent::get_tooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b4267c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "get_tooltip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.set_tooltip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::StringW)>(&::UnityEngine::GUIContent::set_tooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b43f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "set_tooltip", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)()>(&::UnityEngine::GUIContent::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b43f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::StringW)>(&::UnityEngine::GUIContent::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b43f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::StringW, ::StringW)>(&::UnityEngine::GUIContent::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b43fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::StringW, ::UnityEngine::Texture*, ::StringW)>(&::UnityEngine::GUIContent::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b43f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIContent::*)(::UnityEngine::GUIContent*)>(&::UnityEngine::GUIContent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b43ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.Temp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIContent* (*)(::StringW)>(&::UnityEngine::GUIContent::Temp)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b41ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "Temp", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.ClearStaticCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIContent::ClearStaticCache)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b44040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "ClearStaticCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIContent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GUIContent::*)()>(&::UnityEngine::GUIContent::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b440dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ::i2c::class_of<::UnityEngine::GUIContent*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::GUIContent::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::StringW const& UnityEngine::GUIContent::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::GUIContent::__cordl_internal_set_m_Text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::GUIContent::__cordl_internal_get_m_Image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Image;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::GUIContent::__cordl_internal_get_m_Image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Image;
}
constexpr void UnityEngine::GUIContent::__cordl_internal_set_m_Image(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Image = value;
}
constexpr ::StringW& UnityEngine::GUIContent::__cordl_internal_get_m_Tooltip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tooltip;
}
constexpr ::StringW const& UnityEngine::GUIContent::__cordl_internal_get_m_Tooltip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tooltip;
}
constexpr void UnityEngine::GUIContent::__cordl_internal_set_m_Tooltip(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tooltip = value;
}
constexpr ::StringW& UnityEngine::GUIContent::__cordl_internal_get_m_TextWithWhitespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextWithWhitespace;
}
constexpr ::StringW const& UnityEngine::GUIContent::__cordl_internal_get_m_TextWithWhitespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextWithWhitespace;
}
constexpr void UnityEngine::GUIContent::__cordl_internal_set_m_TextWithWhitespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextWithWhitespace = value;
}
constexpr ::System::Action*& UnityEngine::GUIContent::__cordl_internal_get_OnTextChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnTextChanged;
}
constexpr ::System::Action* const& UnityEngine::GUIContent::__cordl_internal_get_OnTextChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnTextChanged;
}
constexpr void UnityEngine::GUIContent::__cordl_internal_set_OnTextChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnTextChanged = value;
}
inline void UnityEngine::GUIContent::setStaticF_s_Text(::UnityEngine::GUIContent* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIContent*, "s_Text", ::UnityEngine::GUIContent*>(std::forward<::UnityEngine::GUIContent*>(value));
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::getStaticF_s_Text() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIContent*, "s_Text", ::UnityEngine::GUIContent*>();
}
inline void UnityEngine::GUIContent::setStaticF_s_Image(::UnityEngine::GUIContent* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIContent*, "s_Image", ::UnityEngine::GUIContent*>(std::forward<::UnityEngine::GUIContent*>(value));
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::getStaticF_s_Image() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIContent*, "s_Image", ::UnityEngine::GUIContent*>();
}
inline void UnityEngine::GUIContent::setStaticF_s_TextImage(::UnityEngine::GUIContent* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIContent*, "s_TextImage", ::UnityEngine::GUIContent*>(std::forward<::UnityEngine::GUIContent*>(value));
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::getStaticF_s_TextImage() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIContent*, "s_TextImage", ::UnityEngine::GUIContent*>();
}
inline void UnityEngine::GUIContent::setStaticF_k_ZeroWidthSpace(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ZeroWidthSpace", ::UnityEngine::GUIContent*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::GUIContent::getStaticF_k_ZeroWidthSpace() {
  return ::cordl_internals::getStaticField<::StringW, "k_ZeroWidthSpace", ::UnityEngine::GUIContent*>();
}
inline void UnityEngine::GUIContent::setStaticF_none(::UnityEngine::GUIContent* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIContent*, "none", ::UnityEngine::GUIContent*>(std::forward<::UnityEngine::GUIContent*>(value));
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::getStaticF_none() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIContent*, "none", ::UnityEngine::GUIContent*>();
}
inline void UnityEngine::GUIContent::add_OnTextChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "add_OnTextChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::GUIContent::remove_OnTextChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "remove_OnTextChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::GUIContent::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::GUIContent::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::GUIContent::get_textWithWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "get_textWithWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::GUIContent::set_textWithWhitespace(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "set_textWithWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::GUIContent::SetTextWithoutNotify(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "SetTextWithoutNotify", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::GUIContent::set_image(::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "set_image", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::GUIContent::get_tooltip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "get_tooltip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::GUIContent::set_tooltip(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "set_tooltip", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::GUIContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIContent::_ctor(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void UnityEngine::GUIContent::_ctor(::StringW text, ::StringW tooltip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, tooltip);
}
inline void UnityEngine::GUIContent::_ctor(::StringW text, ::UnityEngine::Texture* image, ::StringW tooltip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, image, tooltip);
}
inline void UnityEngine::GUIContent::_ctor(::UnityEngine::GUIContent* src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::Temp(::StringW t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "Temp", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIContent*>(nullptr, ___internal_method, t);
}
inline void UnityEngine::GUIContent::ClearStaticCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIContent*>(), { "ClearStaticCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::GUIContent::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIContent*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIContent*>());
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::New_ctor(::StringW text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIContent*>(text));
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::New_ctor(::StringW text, ::StringW tooltip) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIContent*>(text, tooltip));
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::New_ctor(::StringW text, ::UnityEngine::Texture* image, ::StringW tooltip) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIContent*>(text, image, tooltip));
}
inline ::UnityEngine::GUIContent* UnityEngine::GUIContent::New_ctor(::UnityEngine::GUIContent* src) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIContent*>(src));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIContent::GUIContent() {}
