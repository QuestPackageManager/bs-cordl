#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/BeatmapEditorDestinationParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorDestinationParameters)
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class BeatmapEditorDestinationParameters;
}
// Write type traits
MARK_REF_T(::BeatSaber::Destinations::BeatmapEditorDestinationParameters*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::BeatmapEditorDestinationParameters*, "BeatSaber.Destinations", "BeatmapEditorDestinationParameters");
// Dependencies BeatmapCharacteristic, BeatmapDifficulty, System.Nullable`1<T>, System.Object, System.ValueTuple`2<T1, T2>
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.BeatmapEditorDestinationParameters
class CORDL_TYPE BeatmapEditorDestinationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field ignoreTempFolder, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreTempFolder, put = __cordl_internal_set_ignoreTempFolder)) bool ignoreTempFolder;

  /// @brief Field projectPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_projectPath, put = __cordl_internal_set_projectPath)) ::StringW projectPath;

  /// @brief Field startLevel, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_startLevel,
                      put = __cordl_internal_set_startLevel)) ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>
      startLevel;

  static inline ::BeatSaber::Destinations::BeatmapEditorDestinationParameters* New_ctor();

  static inline ::BeatSaber::Destinations::BeatmapEditorDestinationParameters*
  New_ctor(::StringW projectPath, bool ignoreTempFolder, ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel);

  constexpr bool const& __cordl_internal_get_ignoreTempFolder() const;

  constexpr bool& __cordl_internal_get_ignoreTempFolder();

  constexpr ::StringW const& __cordl_internal_get_projectPath() const;

  constexpr ::StringW& __cordl_internal_get_projectPath();

  constexpr ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> const& __cordl_internal_get_startLevel() const;

  constexpr ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>& __cordl_internal_get_startLevel();

  constexpr void __cordl_internal_set_ignoreTempFolder(bool value);

  constexpr void __cordl_internal_set_projectPath(::StringW value);

  constexpr void __cordl_internal_set_startLevel(::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> value);

  /// @brief Method .ctor, addr 0x32803c4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x32803e8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW projectPath, bool ignoreTempFolder,
                    ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorDestinationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorDestinationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorDestinationParameters(BeatmapEditorDestinationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorDestinationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorDestinationParameters(BeatmapEditorDestinationParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23065 };

  /// @brief Field projectPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___projectPath;

  /// @brief Field ignoreTempFolder, offset: 0x18, size: 0x1, def value: None
  bool ___ignoreTempFolder;

  /// @brief Field startLevel, offset: 0x1c, size: 0xc, def value: None
  ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> ___startLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::BeatmapEditorDestinationParameters, ___projectPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::BeatmapEditorDestinationParameters, ___ignoreTempFolder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::BeatmapEditorDestinationParameters, ___startLevel) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::BeatmapEditorDestinationParameters) == 0x28, "Size mismatch!");

} // namespace BeatSaber::Destinations
