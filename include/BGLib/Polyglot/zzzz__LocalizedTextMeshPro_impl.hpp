#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizedTextMeshPro.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextMeshPro_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshPro.SetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMeshPro::*)(::TMPro::TextMeshPro*, ::StringW)>(&::BGLib::Polyglot::LocalizedTextMeshPro::SetText)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331a188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), { ::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshPro.UpdateAlignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMeshPro::*)(::TMPro::TextMeshPro*, ::BGLib::Polyglot::LanguageDirection)>(
    &::BGLib::Polyglot::LocalizedTextMeshPro::UpdateAlignment)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x331a1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), { ::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshPro.IsOppositeDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TextAlignmentOptions, ::BGLib::Polyglot::LanguageDirection)>(&::BGLib::Polyglot::LocalizedTextMeshPro::IsOppositeDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x331a2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(),
                                                { "IsOppositeDirection", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>(), ::i2c::type_of<::BGLib::Polyglot::LanguageDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshPro.IsAlignmentRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TextAlignmentOptions)>(&::BGLib::Polyglot::LocalizedTextMeshPro::IsAlignmentRight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331a2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), { "IsAlignmentRight", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshPro.IsAlignmentLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TextAlignmentOptions)>(&::BGLib::Polyglot::LocalizedTextMeshPro::IsAlignmentLeft)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331a31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), { "IsAlignmentLeft", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMeshPro._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMeshPro::*)()>(&::BGLib::Polyglot::LocalizedTextMeshPro::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x331a344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGLib::Polyglot::LocalizedTextMeshPro::SetText(::TMPro::TextMeshPro* text, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, value);
}
inline void BGLib::Polyglot::LocalizedTextMeshPro::UpdateAlignment(::TMPro::TextMeshPro* text, ::BGLib::Polyglot::LanguageDirection direction) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, direction);
}
inline bool BGLib::Polyglot::LocalizedTextMeshPro::IsOppositeDirection(::TMPro::TextAlignmentOptions alignment, ::BGLib::Polyglot::LanguageDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(),
                                              { "IsOppositeDirection", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>(), ::i2c::type_of<::BGLib::Polyglot::LanguageDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, alignment, direction);
}
inline bool BGLib::Polyglot::LocalizedTextMeshPro::IsAlignmentRight(::TMPro::TextAlignmentOptions alignment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), { "IsAlignmentRight", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, alignment);
}
inline bool BGLib::Polyglot::LocalizedTextMeshPro::IsAlignmentLeft(::TMPro::TextAlignmentOptions alignment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), { "IsAlignmentLeft", {}, { ::i2c::type_of<::TMPro::TextAlignmentOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, alignment);
}
inline void BGLib::Polyglot::LocalizedTextMeshPro::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMeshPro*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizedTextMeshPro* BGLib::Polyglot::LocalizedTextMeshPro::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::LocalizedTextMeshPro*>());
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizedTextMeshPro::LocalizedTextMeshPro() {}
