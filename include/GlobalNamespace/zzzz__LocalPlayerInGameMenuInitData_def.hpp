#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalPlayerInGameMenuInitData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(LocalPlayerInGameMenuInitData)
namespace GlobalNamespace {
struct BeatmapKey;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalPlayerInGameMenuInitData);
// Type: ::LocalPlayerInGameMenuInitData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalPlayerInGameMenuInitData*
class CORDL_TYPE LocalPlayerInGameMenuInitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapKey, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field hasSong, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSong, put = __cordl_internal_set_hasSong)) bool hasSong;

  static inline ::GlobalNamespace::LocalPlayerInGameMenuInitData* New_ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr bool const& __cordl_internal_get_hasSong() const;

  constexpr bool& __cordl_internal_get_hasSong();

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_hasSong(bool value);

  /// @brief Method .ctor, addr 0x3b45ff8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalPlayerInGameMenuInitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData const&) = delete;

  /// @brief Field beatmapKey, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field hasSong, offset: 0x28, size: 0x1, def value: None
  bool ___hasSong;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4413 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalPlayerInGameMenuInitData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___beatmapKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___hasSong) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalPlayerInGameMenuInitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalPlayerInGameMenuInitData*, "", "LocalPlayerInGameMenuInitData");
