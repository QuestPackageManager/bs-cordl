#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SettingStrings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::BeatSaber::Settings::SettingStrings);
// Dependencies System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.SettingStrings
class CORDL_TYPE SettingStrings : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AppendProperty(::System::Text::StringBuilder* sb, ::StringW name, T value);

  /// @brief Method Decode, addr 0x31c2c10, size 0x4, virtual false, abstract: false, final false
  static inline bool Decode(::ByRef<::BeatSaber::Settings::Settings> settings, ::StringW text, ::ByRef<::StringW> log);

  /// @brief Method Encode, addr 0x31c1e1c, size 0x4, virtual false, abstract: false, final false
  static inline void Encode(::ByRef<::BeatSaber::Settings::Settings> settings, ::System::Text::StringBuilder* stream);

  /// @brief Method IsPureWhiteSpace, addr 0x31c4df0, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsPureWhiteSpace(::System::ReadOnlySpan_1<char16_t> property);

  /// @brief Method ReadBool, addr 0x31c47c4, size 0x1bc, virtual false, abstract: false, final false
  static inline bool ReadBool(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::ByRef<bool> value, ::ByRef<::StringW> err);

  /// @brief Method ReadEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ReadEnum(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::ByRef<T> value, ::ByRef<::StringW> err);

  /// @brief Method ReadFloat, addr 0x31c45e4, size 0x1e0, virtual false, abstract: false, final false
  static inline bool ReadFloat(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::ByRef<float_t> value, ::ByRef<::StringW> err);

  /// @brief Method ReadInt, addr 0x31c4980, size 0x1e0, virtual false, abstract: false, final false
  static inline bool ReadInt(::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> text, ::ByRef<int32_t> value, ::ByRef<::StringW> err);

  /// @brief Method ReadProperties, addr 0x31c2c14, size 0x2e0, virtual false, abstract: false, final false
  static inline bool ReadProperties(::ByRef<::BeatSaber::Settings::Settings> settings, ::StringW text, ::ByRef<::StringW> log);

  /// @brief Method ReadProperty, addr 0x31c2ef4, size 0x16b0, virtual false, abstract: false, final false
  static inline bool ReadProperty(::ByRef<::BeatSaber::Settings::Settings> settings, ::System::ReadOnlySpan_1<char16_t> name, ::System::ReadOnlySpan_1<char16_t> value, ::ByRef<::StringW> log);

  /// @brief Method ReadPropertyLine, addr 0x31c4be4, size 0x20c, virtual false, abstract: false, final false
  static inline bool ReadPropertyLine(::ByRef<::BeatSaber::Settings::Settings> settings, ::System::ReadOnlySpan_1<char16_t> property, ::ByRef<::StringW> log);

  /// @brief Method ReadString, addr 0x31c4b60, size 0x84, virtual false, abstract: false, final false
  static inline bool ReadString(::System::ReadOnlySpan_1<char16_t> _, ::System::ReadOnlySpan_1<char16_t> text, ::ByRef<::StringW> value, ::ByRef<::StringW> err);

  /// @brief Method WriteProperties, addr 0x31c1e20, size 0xdf0, virtual false, abstract: false, final false
  static inline void WriteProperties(::ByRef<::BeatSaber::Settings::Settings> settings, ::System::Text::StringBuilder* text);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21826 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::SettingStrings, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Settings
NEED_NO_BOX(::BeatSaber::Settings::SettingStrings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::SettingStrings*, "BeatSaber.Settings", "SettingStrings");
