#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AutoSetupData)
// Forward declare root types
namespace GlobalNamespace {
class AutoSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutoSetupData);
// Type: ::AutoSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AutoSetupData*
class CORDL_TYPE AutoSetupData : public ::System::Object {
public:
  // Declarations
  /// @brief Field autoStartWhenAllReady, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_autoStartWhenAllReady, put = __cordl_internal_set_autoStartWhenAllReady)) bool autoStartWhenAllReady;

  /// @brief Field forceAutoStartAfterSongSelection, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_forceAutoStartAfterSongSelection, put = __cordl_internal_set_forceAutoStartAfterSongSelection)) bool forceAutoStartAfterSongSelection;

  /// @brief Field randomSongIfNoneSuggested, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_randomSongIfNoneSuggested, put = __cordl_internal_set_randomSongIfNoneSuggested)) bool randomSongIfNoneSuggested;

  /// @brief Field selectBasedOnSuggestions, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_selectBasedOnSuggestions, put = __cordl_internal_set_selectBasedOnSuggestions)) bool selectBasedOnSuggestions;

  static inline ::GlobalNamespace::AutoSetupData* New_ctor();

  constexpr bool const& __cordl_internal_get_autoStartWhenAllReady() const;

  constexpr bool& __cordl_internal_get_autoStartWhenAllReady();

  constexpr bool const& __cordl_internal_get_forceAutoStartAfterSongSelection() const;

  constexpr bool& __cordl_internal_get_forceAutoStartAfterSongSelection();

  constexpr bool const& __cordl_internal_get_randomSongIfNoneSuggested() const;

  constexpr bool& __cordl_internal_get_randomSongIfNoneSuggested();

  constexpr bool const& __cordl_internal_get_selectBasedOnSuggestions() const;

  constexpr bool& __cordl_internal_get_selectBasedOnSuggestions();

  constexpr void __cordl_internal_set_autoStartWhenAllReady(bool value);

  constexpr void __cordl_internal_set_forceAutoStartAfterSongSelection(bool value);

  constexpr void __cordl_internal_set_randomSongIfNoneSuggested(bool value);

  constexpr void __cordl_internal_set_selectBasedOnSuggestions(bool value);

  /// @brief Method .ctor, addr 0x24086f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoSetupData(AutoSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoSetupData(AutoSetupData const&) = delete;

  /// @brief Field selectBasedOnSuggestions, offset: 0x10, size: 0x1, def value: None
  bool ___selectBasedOnSuggestions;

  /// @brief Field autoStartWhenAllReady, offset: 0x11, size: 0x1, def value: None
  bool ___autoStartWhenAllReady;

  /// @brief Field forceAutoStartAfterSongSelection, offset: 0x12, size: 0x1, def value: None
  bool ___forceAutoStartAfterSongSelection;

  /// @brief Field randomSongIfNoneSuggested, offset: 0x13, size: 0x1, def value: None
  bool ___randomSongIfNoneSuggested;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutoSetupData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupData, ___selectBasedOnSuggestions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupData, ___autoStartWhenAllReady) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupData, ___forceAutoStartAfterSongSelection) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupData, ___randomSongIfNoneSuggested) == 0x13, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutoSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoSetupData*, "", "AutoSetupData");
