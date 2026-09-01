#pragma once
// IWYU pragma private; include "BeatSaber\Settings\SettingStrings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingStrings)
namespace BeatSaber::Settings {
struct Settings;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace BeatSaber::Settings {
class SettingStrings;
}
// Write type traits
MARK_REF_T(::BeatSaber::Settings::SettingStrings*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Settings::SettingStrings*, "BeatSaber.Settings", "SettingStrings");
// Dependencies System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.SettingStrings
class CORDL_TYPE SettingStrings : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AppendProperty(::System::Text::StringBuilder* sb, ::StringW name, T value);

  /// @brief Method Decode, addr 0x32c82a4, size 0x4, virtual false, abstract: false, final false
  static inline bool Decode(::by_ref<::BeatSaber::Settings::Settings> settings, ::StringW text, ::by_ref<::StringW> log);

  /// @brief Method Encode, addr 0x32c7560, size 0x4, virtual false, abstract: false, final false
  static inline void Encode(::by_ref<::BeatSaber::Settings::Settings> settings, ::System::Text::StringBuilder* stream);

  /// @brief Method IsPureWhiteSpace, addr 0x32ca3e8, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsPureWhiteSpace(::System::ReadOnlySpan_1<char16_t> property);

  /// @brief Method ReadBool, addr 0x32c9dbc, size 0x1bc, virtual false, abstract: false, final false
  static inline bool ReadBool(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<bool> value, ::by_ref<::StringW> err);

  /// @brief Method ReadEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ReadEnum(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<T> value, ::by_ref<::StringW> err);

  /// @brief Method ReadFloat, addr 0x32c9bdc, size 0x1e0, virtual false, abstract: false, final false
  static inline bool ReadFloat(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<float_t> value, ::by_ref<::StringW> err);

  /// @brief Method ReadInt, addr 0x32c9f78, size 0x1e0, virtual false, abstract: false, final false
  static inline bool ReadInt(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<int32_t> value, ::by_ref<::StringW> err);

  /// @brief Method ReadProperties, addr 0x32c82a8, size 0x2e0, virtual false, abstract: false, final false
  static inline bool ReadProperties(::by_ref<::BeatSaber::Settings::Settings> settings, ::StringW text, ::by_ref<::StringW> log);

  /// @brief Method ReadProperty, addr 0x32c8588, size 0x1614, virtual false, abstract: false, final false
  static inline bool ReadProperty(::by_ref<::BeatSaber::Settings::Settings> settings, ::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> value, ::by_ref<::StringW> log);

  /// @brief Method ReadPropertyLine, addr 0x32ca1dc, size 0x20c, virtual false, abstract: false, final false
  static inline bool ReadPropertyLine(::by_ref<::BeatSaber::Settings::Settings> settings, ::System::ReadOnlySpan_1<char16_t> property, ::by_ref<::StringW> log);

  /// @brief Method ReadString, addr 0x32ca158, size 0x84, virtual false, abstract: false, final false
  static inline bool ReadString(::System::ReadOnlySpan_1<char16_t> _, ::System::ReadOnlySpan_1<char16_t> text, ::by_ref<::StringW> value, ::by_ref<::StringW> err);

  /// @brief Method WriteProperties, addr 0x32c7564, size 0xd40, virtual false, abstract: false, final false
  static inline void WriteProperties(::by_ref<::BeatSaber::Settings::Settings> settings, ::System::Text::StringBuilder* text);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingStrings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingStrings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingStrings(SettingStrings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingStrings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingStrings(SettingStrings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22105 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Settings::SettingStrings) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Settings
