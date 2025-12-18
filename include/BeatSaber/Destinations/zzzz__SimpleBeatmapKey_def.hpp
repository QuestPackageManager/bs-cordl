#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/SimpleBeatmapKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SimpleBeatmapKey)
namespace BeatSaber::Destinations {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class SimpleBeatmapKey;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::SimpleBeatmapKey);
// Dependencies BeatSaber.Destinations.BeatmapCharacteristic, BeatmapDifficulty, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.SimpleBeatmapKey
class CORDL_TYPE SimpleBeatmapKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic)) ::BeatSaber::Destinations::BeatmapCharacteristic characteristic;

  /// @brief Field difficulty, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field levelId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId)) ::StringW levelId;

  static inline ::BeatSaber::Destinations::SimpleBeatmapKey* New_ctor(::BeatSaber::Destinations::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                      ::StringW levelId);

  /// @brief Method ToStruct, addr 0x31b15c8, size 0x68, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey ToStruct(::GlobalNamespace::BeatmapCharacteristicCollection* characteristicCollection);

  constexpr ::BeatSaber::Destinations::BeatmapCharacteristic const& __cordl_internal_get_characteristic() const;

  constexpr ::BeatSaber::Destinations::BeatmapCharacteristic& __cordl_internal_get_characteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_difficulty();

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr void __cordl_internal_set_characteristic(::BeatSaber::Destinations::BeatmapCharacteristic value);

  constexpr void __cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_levelId(::StringW value);

  /// @brief Method .ctor, addr 0x31b15bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Destinations::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleBeatmapKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleBeatmapKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleBeatmapKey(SimpleBeatmapKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleBeatmapKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleBeatmapKey(SimpleBeatmapKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22744 };

  /// @brief Field characteristic, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Destinations::BeatmapCharacteristic ___characteristic;

  /// @brief Field difficulty, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___difficulty;

  /// @brief Field levelId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::SimpleBeatmapKey, ___characteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::SimpleBeatmapKey, ___difficulty) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::SimpleBeatmapKey, ___levelId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::SimpleBeatmapKey, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::SimpleBeatmapKey);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::SimpleBeatmapKey*, "BeatSaber.Destinations", "SimpleBeatmapKey");
