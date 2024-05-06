#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DebugSettings)
namespace BGLib::SaveDataCore {
class ISerializableSaveData;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class DebugSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::DebugSettings);
// Type: BeatSaber.GameSettings::DebugSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::DebugSettings*
class CORDL_TYPE DebugSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _enableFpsCounter, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__enableFpsCounter, put = __cordl_internal_set__enableFpsCounter)) bool _enableFpsCounter;

  /// @brief Field _enableFpsRecorder, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__enableFpsRecorder, put = __cordl_internal_set__enableFpsRecorder)) bool _enableFpsRecorder;

  /// @brief Field _enableMemoryTracker, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get__enableMemoryTracker, put = __cordl_internal_set__enableMemoryTracker)) bool _enableMemoryTracker;

  /// @brief Field <isDirty>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty_k__BackingField, put = __cordl_internal_set__isDirty_k__BackingField)) bool _isDirty_k__BackingField;

  __declspec(property(get = get_enableFpsCounter, put = set_enableFpsCounter)) bool enableFpsCounter;

  __declspec(property(get = get_enableFpsRecorder, put = set_enableFpsRecorder)) bool enableFpsRecorder;

  __declspec(property(get = get_enableMemoryTracker, put = set_enableMemoryTracker)) bool enableMemoryTracker;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  /// @brief Convert operator to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr operator ::BGLib::SaveDataCore::ISerializableSaveData*() noexcept;

  static inline ::BeatSaber::GameSettings::DebugSettings* New_ctor();

  constexpr bool const& __cordl_internal_get__enableFpsCounter() const;

  constexpr bool& __cordl_internal_get__enableFpsCounter();

  constexpr bool const& __cordl_internal_get__enableFpsRecorder() const;

  constexpr bool& __cordl_internal_get__enableFpsRecorder();

  constexpr bool const& __cordl_internal_get__enableMemoryTracker() const;

  constexpr bool& __cordl_internal_get__enableMemoryTracker();

  constexpr bool const& __cordl_internal_get__isDirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDirty_k__BackingField();

  constexpr void __cordl_internal_set__enableFpsCounter(bool value);

  constexpr void __cordl_internal_set__enableFpsRecorder(bool value);

  constexpr void __cordl_internal_set__enableMemoryTracker(bool value);

  constexpr void __cordl_internal_set__isDirty_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x10606ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableFpsCounter, addr 0x1060694, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableFpsCounter();

  /// @brief Method get_enableFpsRecorder, addr 0x106069c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableFpsRecorder();

  /// @brief Method get_enableMemoryTracker, addr 0x10606a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableMemoryTracker();

  /// @brief Method get_isDirty, addr 0x1060680, size 0x8, virtual true, abstract: false, final true
  inline bool get_isDirty();

  /// @brief Convert to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr ::BGLib::SaveDataCore::ISerializableSaveData* i___BGLib__SaveDataCore__ISerializableSaveData() noexcept;

  /// @brief Method set_enableFpsCounter, addr 0x106043c, size 0x14, virtual false, abstract: false, final false
  inline void set_enableFpsCounter(bool value);

  /// @brief Method set_enableFpsRecorder, addr 0x1060450, size 0x14, virtual false, abstract: false, final false
  inline void set_enableFpsRecorder(bool value);

  /// @brief Method set_enableMemoryTracker, addr 0x1060464, size 0x14, virtual false, abstract: false, final false
  inline void set_enableMemoryTracker(bool value);

  /// @brief Method set_isDirty, addr 0x1060688, size 0xc, virtual true, abstract: false, final true
  inline void set_isDirty(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugSettings(DebugSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugSettings(DebugSettings const&) = delete;

  /// @brief Field <isDirty>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isDirty_k__BackingField;

  /// @brief Field _enableFpsCounter, offset: 0x11, size: 0x1, def value: None
  bool ____enableFpsCounter;

  /// @brief Field _enableFpsRecorder, offset: 0x12, size: 0x1, def value: None
  bool ____enableFpsRecorder;

  /// @brief Field _enableMemoryTracker, offset: 0x13, size: 0x1, def value: None
  bool ____enableMemoryTracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::DebugSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::DebugSettings, ____isDirty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::DebugSettings, ____enableFpsCounter) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::DebugSettings, ____enableFpsRecorder) == 0x12, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::DebugSettings, ____enableMemoryTracker) == 0x13, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::DebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::DebugSettings*, "BeatSaber.GameSettings", "DebugSettings");
