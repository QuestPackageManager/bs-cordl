#pragma once
// IWYU pragma private; include "BeatSaber\Settings\SettingStrings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Settings/zzzz__SettingStrings_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::BeatSaber::Settings::Settings>, ::System::Text::StringBuilder*)>(&::BeatSaber::Settings::SettingStrings::Encode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32c7560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                             { "Encode", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::BeatSaber::Settings::Settings>, ::StringW, ::by_ref<::StringW>)>(&::BeatSaber::Settings::SettingStrings::Decode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32c82a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                         { "Decode", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.WriteProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::BeatSaber::Settings::Settings>, ::System::Text::StringBuilder*)>(&::BeatSaber::Settings::SettingStrings::WriteProperties)> {
  constexpr static std::size_t size = 0xd40;
  constexpr static std::size_t addrs = 0x32c7564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                { "WriteProperties", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.ReadProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::BeatSaber::Settings::Settings>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                ::by_ref<::StringW>)>(&::BeatSaber::Settings::SettingStrings::ReadProperty)> {
  constexpr static std::size_t size = 0x1614;
  constexpr static std::size_t addrs = 0x32c8588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                             { "ReadProperty",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                 ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.ReadProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::BeatSaber::Settings::Settings>, ::StringW, ::by_ref<::StringW>)>(&::BeatSaber::Settings::SettingStrings::ReadProperties)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x32c82a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                            { "ReadProperties", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.ReadPropertyLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::BeatSaber::Settings::Settings>, ::System::ReadOnlySpan_1<char16_t>, ::by_ref<::StringW>)>(
    &::BeatSaber::Settings::SettingStrings::ReadPropertyLine)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x32ca1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
            { "ReadPropertyLine", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.IsPureWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::BeatSaber::Settings::SettingStrings::IsPureWhiteSpace)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32ca3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(), { "IsPureWhiteSpace", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::BeatSaber::Settings::SettingStrings::ReadString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32ca158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(), { "ReadString",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                           ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.ReadFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::by_ref<float_t>, ::by_ref<::StringW>)>(
    &::BeatSaber::Settings::SettingStrings::ReadFloat)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x32c9bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(), { "ReadFloat",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                           ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.ReadInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>, ::by_ref<::StringW>)>(
    &::BeatSaber::Settings::SettingStrings::ReadInt)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x32c9f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(), { "ReadInt",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                           ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingStrings.ReadBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::by_ref<bool>, ::by_ref<::StringW>)>(
    &::BeatSaber::Settings::SettingStrings::ReadBool)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x32c9dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(), { "ReadBool",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                           ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Settings::SettingStrings::Encode(::by_ref<::BeatSaber::Settings::Settings> settings, ::System::Text::StringBuilder* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                           { "Encode", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, stream);
}
inline bool BeatSaber::Settings::SettingStrings::Decode(::by_ref<::BeatSaber::Settings::Settings> settings, ::StringW text, ::by_ref<::StringW> log) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                              { "Decode", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings, text, log);
}
inline void BeatSaber::Settings::SettingStrings::WriteProperties(::by_ref<::BeatSaber::Settings::Settings> settings, ::System::Text::StringBuilder* text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                              { "WriteProperties", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, text);
}
inline bool BeatSaber::Settings::SettingStrings::ReadProperty(::by_ref<::BeatSaber::Settings::Settings> settings, ::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> value,
                                                              ::by_ref<::StringW> log) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                           { "ReadProperty",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings, name, value, log);
}
template <typename T> inline void BeatSaber::Settings::SettingStrings::AppendProperty(::System::Text::StringBuilder* sb, ::StringW name, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                              { "AppendProperty", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, name, value);
}
inline bool BeatSaber::Settings::SettingStrings::ReadProperties(::by_ref<::BeatSaber::Settings::Settings> settings, ::StringW text, ::by_ref<::StringW> log) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                       { "ReadProperties", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings, text, log);
}
inline bool BeatSaber::Settings::SettingStrings::ReadPropertyLine(::by_ref<::BeatSaber::Settings::Settings> settings, ::System::ReadOnlySpan_1<char16_t> property, ::by_ref<::StringW> log) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
          { "ReadPropertyLine", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings, property, log);
}
inline bool BeatSaber::Settings::SettingStrings::IsPureWhiteSpace(::System::ReadOnlySpan_1<char16_t> property) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(), { "IsPureWhiteSpace", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, property);
}
inline bool BeatSaber::Settings::SettingStrings::ReadString(::System::ReadOnlySpan_1<char16_t> _, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<::StringW> value, ::by_ref<::StringW> err) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                                                         { "ReadString",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _, text, value, err);
}
template <typename T>
inline bool BeatSaber::Settings::SettingStrings::ReadEnum(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<T> value, ::by_ref<::StringW> err) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(), { "ReadEnum",
                                                                                       { ::i2c::class_of<T>() },
                                                                                       { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                         ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, text, value, err);
}
inline bool BeatSaber::Settings::SettingStrings::ReadFloat(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<float_t> value, ::by_ref<::StringW> err) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                                                         { "ReadFloat",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, text, value, err);
}
inline bool BeatSaber::Settings::SettingStrings::ReadInt(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<int32_t> value, ::by_ref<::StringW> err) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                                                         { "ReadInt",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, text, value, err);
}
inline bool BeatSaber::Settings::SettingStrings::ReadBool(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<bool> value, ::by_ref<::StringW> err) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingStrings*>(),
                                                                                         { "ReadBool",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, text, value, err);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::SettingStrings::SettingStrings() {}
