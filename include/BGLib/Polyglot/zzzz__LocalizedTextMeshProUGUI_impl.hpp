#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizedTextMeshProUGUI.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextMeshProUGUI_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshProUGUI.SetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMeshProUGUI::*)(::TMPro::TextMeshProUGUI*, ::StringW)>(
    &::BGLib::Polyglot::LocalizedTextMeshProUGUI::SetText)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331a390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), { ::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshProUGUI.UpdateAlignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMeshProUGUI::*)(::TMPro::TextMeshProUGUI*, ::BGLib::Polyglot::LanguageDirection)>(
    &::BGLib::Polyglot::LocalizedTextMeshProUGUI::UpdateAlignment)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x331a3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), { ::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshProUGUI.IsOppositeDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TextAlignmentOptions, ::BGLib::Polyglot::LanguageDirection)>(
    &::BGLib::Polyglot::LocalizedTextMeshProUGUI::IsOppositeDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x331a4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(),
                                                { "IsOppositeDirection", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>(), ::i2c::type_of<::BGLib::Polyglot::LanguageDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshProUGUI.IsAlignmentRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TextAlignmentOptions)>(&::BGLib::Polyglot::LocalizedTextMeshProUGUI::IsAlignmentRight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331a4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), { "IsAlignmentRight", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshProUGUI.IsAlignmentLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TextAlignmentOptions)>(&::BGLib::Polyglot::LocalizedTextMeshProUGUI::IsAlignmentLeft)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331a524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), { "IsAlignmentLeft", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshProUGUI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMeshProUGUI::*)()>(&::BGLib::Polyglot::LocalizedTextMeshProUGUI::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x331a54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGLib::Polyglot::LocalizedTextMeshProUGUI::SetText(::TMPro::TextMeshProUGUI* text, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, value);
}
inline void BGLib::Polyglot::LocalizedTextMeshProUGUI::UpdateAlignment(::TMPro::TextMeshProUGUI* text, ::BGLib::Polyglot::LanguageDirection direction) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, direction);
}
inline bool BGLib::Polyglot::LocalizedTextMeshProUGUI::IsOppositeDirection(::TMPro::TextAlignmentOptions alignment, ::BGLib::Polyglot::LanguageDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(),
                                              { "IsOppositeDirection", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>(), ::i2c::type_of<::BGLib::Polyglot::LanguageDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, alignment, direction);
}
inline bool BGLib::Polyglot::LocalizedTextMeshProUGUI::IsAlignmentRight(::TMPro::TextAlignmentOptions alignment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), { "IsAlignmentRight", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, alignment);
}
inline bool BGLib::Polyglot::LocalizedTextMeshProUGUI::IsAlignmentLeft(::TMPro::TextAlignmentOptions alignment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), { "IsAlignmentLeft", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, alignment);
}
inline void BGLib::Polyglot::LocalizedTextMeshProUGUI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizedTextMeshProUGUI* BGLib::Polyglot::LocalizedTextMeshProUGUI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::LocalizedTextMeshProUGUI*>());
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizedTextMeshProUGUI::LocalizedTextMeshProUGUI() {}
